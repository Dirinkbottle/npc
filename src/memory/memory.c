
extern "C" const uint8_t _binary_img_bin_start[];
extern "C" const uint8_t _binary_img_bin_end[];

namespace {

uint8_t *ram = nullptr;
MemoryRegion mmio_maps[MAX_MMIO_MAPS] = {};
std::size_t nr_mmio_maps = 0;
uint8_t uart_space[UART_MMIO_SIZE] = {};
std::size_t image_size = 0;

constexpr std::size_t TRACE_RING_SIZE = 16;
constexpr std::size_t ITRACE_PREFETCH_SIZE = 3;

bool range_inside(uint32_t addr, uint32_t len, uint32_t low, uint32_t high) {
  assert(len > 0);
  const uint64_t access_end = static_cast<uint64_t>(addr) + len - 1;
  return addr >= low && access_end <= high;
}

uint32_t pmem_high() {
  return PMEM_BASE + static_cast<uint32_t>(PMEM_SIZE) - 1;
}

uint32_t mask_to_width(uint8_t byte_mask) {
  switch (byte_mask) {
    case 0b1: return 1;
    case 0b11: return 2;
    case 0b1111: return 4;
    default:
      printf(FMT_RED "invalid memory mask 0x%02x" FMT_NONE "\n", byte_mask);
      sim_abort();
      return 0;
  }
}

uint32_t aligned_addr(uint32_t addr, uint32_t width) {
  return addr & ~(width - 1);
}

uint32_t load_le(const uint8_t *space, uint32_t len) {
  uint32_t data = 0;
  for (uint32_t i = 0; i < len; i++) {
    data |= static_cast<uint32_t>(space[i]) << (i * 8);
  }
  return data;
}

// This is deliberately not prom_read(): an MDB display must neither change
// last_pc nor look like an architectural instruction fetch to the tracer.
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
bool peek_instruction(uint32_t pc, uint32_t *inst) {
  if (ram == nullptr || !range_inside(pc, 4, PMEM_BASE, pmem_high())) {
    return false;
  }
  *inst = load_le(ram + pc - PMEM_BASE, 4);
  return true;
}
#endif

void store_le(uint8_t *space, uint32_t len, uint32_t data) {
  for (uint32_t i = 0; i < len; i++) {
    space[i] = static_cast<uint8_t>(data >> (i * 8));
  }
}

bool init_memory(const char *image_file) {
  ram = static_cast<uint8_t *>(malloc(PMEM_SIZE));
  if (ram == nullptr) {
    fprintf(stderr, FMT_RED "failed to allocate %zu bytes of PMEM" FMT_NONE
                        "\n",
            PMEM_SIZE);
    return false;
  }
  memset(ram, 0, PMEM_SIZE);

  if (image_file == nullptr) {
    return true;
  }

  FILE *image = fopen(image_file, "rb");
  if (image == nullptr) {
    fprintf(stderr, FMT_RED "cannot open image '%s'" FMT_NONE "\n", image_file);
    return false;
  }

  image_size = 0;
  while (image_size < PMEM_SIZE) {
    const std::size_t remaining = PMEM_SIZE - image_size;
    const std::size_t nread = fread(ram + image_size, 1, remaining, image);
    image_size += nread;
    if (nread < remaining) {
      if (ferror(image)) {
        fprintf(stderr, FMT_RED "failed while reading image '%s'" FMT_NONE
                            "\n",
                image_file);
        fclose(image);
        return false;
      }
      break;
    }
  }
  if (image_size == PMEM_SIZE && fgetc(image) != EOF) {
    fprintf(stderr, FMT_RED "image '%s' exceeds PMEM (%zu bytes)" FMT_NONE "\n",
            image_file, PMEM_SIZE);
    fclose(image);
    return false;
  }
  fclose(image);

  const uint32_t first_inst = image_size >= 4 ? load_le(ram, 4) : 0;
  printf(FMT_CYAN "[image]" FMT_NONE " %zu bytes <- %s, entry=0x%08x "
                 "first-inst=0x%08x\n",
         image_size, image_file, PMEM_BASE, first_inst);
  return true;
}

bool init_internal_img() {
  if (!init_memory(nullptr)) {
    return false;
  }

  const std::size_t size = _binary_img_bin_end - _binary_img_bin_start;
  if (size > PMEM_SIZE) {
    fprintf(stderr, FMT_RED "internal img (%zu bytes) exceeds PMEM (%zu bytes)"
                        FMT_NONE "\n",
            size, PMEM_SIZE);
    return false;
  }
  memcpy(ram, _binary_img_bin_start, size);
  image_size = size;

  printf(FMT_CYAN "[image]" FMT_NONE " %zu bytes <- built-in img, "
         FMT_GREEN "copied to [0x%08x, 0x%08x]" FMT_NONE "\n",
         image_size, PMEM_BASE,
         PMEM_BASE + static_cast<uint32_t>(image_size) - 1);
  return true;
}

void destroy_memory() {
  free(ram);
  ram = nullptr;
}

uint8_t *pmem_space() {
  return ram;
}

std::size_t pmem_image_size() {
  return image_size;
}

extern "C" void pmem_write(uint32_t waddr, uint32_t wdata, char byte_mask,
                           bool skip_difftest_one) {
  const uint32_t width = mask_to_width(static_cast<uint8_t>(byte_mask));
  if (width == 0) {
    return;
  }
  const uint32_t addr = aligned_addr(waddr, width);

  if (range_inside(addr, width, PMEM_BASE, pmem_high())) {
    store_le(ram + addr - PMEM_BASE, width, wdata);
    mtrace_record(addr, width, true, wdata);
    return;
  }
  if (MemoryRegion *map = find_mmio(addr, width); map != nullptr) {
    mmio_write(map, addr, width, wdata, skip_difftest_one);
    return;
  }

  printf(FMT_RED "invalid memory write at 0x%08x" FMT_NONE
         " (width=%u, data=0x%08x): address is outside PMEM [0x%08x, 0x%08x] and no MMIO device matches"
         " (pc=0x%08x)\n",
         waddr, width, wdata, PMEM_BASE, pmem_high(), last_pc);
  sim_abort();
}

extern "C" uint32_t prom_read(uint32_t rom_addr) {
  if (!range_inside(rom_addr, 4, PMEM_BASE, pmem_high())) {
    printf(FMT_RED "instruction fetch outside PMEM at pc=0x%08x" FMT_NONE "\n",
           rom_addr);
    sim_abort();
    return 0;
  }
  last_pc = rom_addr;
  return load_le(ram + rom_addr - PMEM_BASE, 4);
}

extern "C" uint32_t pmem_read(uint32_t raddr, unsigned char byte_mask,
                              bool skip_difftest_one) {
  const uint32_t width = mask_to_width(byte_mask);
  if (width == 0) {
    return 0;
  }
  const uint32_t addr = aligned_addr(raddr, width);

  if (range_inside(addr, width, PMEM_BASE, pmem_high())) {
    const uint32_t data = load_le(ram + addr - PMEM_BASE, width);
    mtrace_record(addr, width, false, data);
    return data;
  }
  if (MemoryRegion *map = find_mmio(addr, width); map != nullptr) {
    return mmio_read(map, addr, width, skip_difftest_one);
  }

  printf(FMT_RED "invalid memory read at 0x%08x" FMT_NONE
         " (width=%u): address is outside PMEM [0x%08x, 0x%08x] and no MMIO device matches"
         " (pc=0x%08x)\n",
         raddr, width, PMEM_BASE, pmem_high(), last_pc);
  sim_abort();
  return 0;
}

