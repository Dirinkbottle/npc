#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "include/minirv.h"
#include "difftest.h"

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

#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
struct ItraceEntry {
  uint32_t pc;
  uint32_t inst;
};

ItraceEntry itrace_ring[TRACE_RING_SIZE] = {};
uint64_t itrace_tail = 0;
uint64_t itrace_pending = 0;

void format_disassembly(uint32_t pc, uint32_t inst, char *text,
                        std::size_t size) {
  uint8_t code[] = {
      static_cast<uint8_t>(inst), static_cast<uint8_t>(inst >> 8),
      static_cast<uint8_t>(inst >> 16), static_cast<uint8_t>(inst >> 24),
  };
  disassemble(text, static_cast<int>(size), pc, code, sizeof(code));
}

void print_itrace(const ItraceEntry &entry) {
  char text[128] = {};
  format_disassembly(entry.pc, entry.inst, text, sizeof(text));
  printf(FMT_CYAN "ITRACE" FMT_NONE " 0x%08x: %08x\t%s\n", entry.pc,
         entry.inst, text);
}

void print_current_itrace(uint32_t pc, uint32_t inst) {
  char text[128] = {};
  format_disassembly(pc, inst, text, sizeof(text));
  printf(FMT_BOLD FMT_RED "-----> NEXT_INST" FMT_NONE
         " ITRACE 0x%08x: %08x\t%s\n",
         pc, inst, text);
}

void print_itrace_prefetch(uint32_t pc, uint32_t inst) {
  char text[128] = {};
  format_disassembly(pc, inst, text, sizeof(text));
  printf(FMT_DIM "ITRACE 0x%08x: %08x\t%s" FMT_NONE "\n", pc, inst, text);
}
#endif

#ifdef CONFIG_MTRACE
struct MtraceEntry {
  uint32_t pc;
  uint32_t addr;
  uint32_t len;
  uint32_t data;
  bool is_write;
};

MtraceEntry mtrace_ring[TRACE_RING_SIZE] = {};
uint64_t mtrace_tail = 0;
uint64_t mtrace_pending = 0;

void print_mtrace(const MtraceEntry &entry) {
  const char *dir_color = entry.is_write ? FMT_RED : FMT_GREEN;
  const char *dir_text = entry.is_write ? "write" : "read ";
  printf(FMT_GREEN "MTRACE" FMT_NONE " pc=0x%08x %s%s" FMT_NONE
                   " 0x%08x len=%u data=0x%08x\n",
         entry.pc, dir_color, dir_text, entry.addr, entry.len, entry.data);
}
#endif

#ifdef CONFIG_DTRACE
struct DtraceEntry {
  uint32_t pc;
  const char *device;
  uint32_t addr;
  uint32_t len;
  uint32_t data;
  bool is_write;
};

DtraceEntry dtrace_ring[TRACE_RING_SIZE] = {};
uint64_t dtrace_tail = 0;
uint64_t dtrace_pending = 0;

void print_dtrace(const DtraceEntry &entry) {
  const char *dir_color = entry.is_write ? FMT_RED : FMT_GREEN;
  const char *dir_text = entry.is_write ? "write" : "read ";
  printf(FMT_MAGENTA "DTRACE" FMT_NONE " pc=0x%08x " FMT_CYAN "%s" FMT_NONE
                     " %s%s" FMT_NONE " 0x%08x len=%u data=0x%08x\n",
         entry.pc, entry.device, dir_color, dir_text, entry.addr, entry.len,
         entry.data);
}
#endif

#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE) || defined(CONFIG_MTRACE) || \
    defined(CONFIG_DTRACE)
uint64_t ring_start(uint64_t tail) {
  return tail > TRACE_RING_SIZE ? tail - TRACE_RING_SIZE : 0;
}
#endif

void uart_handler(uint32_t offset, uint32_t len, bool is_write) {
  if (!is_write || offset != 0 || len != 1) {
    printf(FMT_RED "unsupported UART access: offset=%u len=%u write=%d" FMT_NONE
                   "\n",
           offset, len, is_write);
    sim_abort();
    return;
  }
  putch(static_cast<char>(uart_space[0]));
}

uint32_t mmio_read(MemoryRegion *map, uint32_t addr, uint32_t len,
                   bool skip_difftest_one) {
  if (skip_difftest_one) {
    skip_one_difftest_exec = true;
  }

  const uint32_t offset = addr - map->start;
  if (map->memory_handler != nullptr) {
    map->memory_handler(offset, len, false);
  }
  const uint32_t data = load_le(map->space + offset, len);
  dtrace_record(map, addr, len, false, data);
  return data;
}

void mmio_write(MemoryRegion *map, uint32_t addr, uint32_t len,
                uint32_t data, bool skip_difftest_one) {
  
  if (skip_difftest_one) {
    skip_one_difftest_exec = true;
  }

  const uint32_t offset = addr - map->start;
  store_le(map->space + offset, len, data);
  if (map->memory_handler != nullptr) {
    map->memory_handler(offset, len, true);
  }
  dtrace_record(map, addr, len, true, data);
}

}  // namespace

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

bool debug_pmem_read(uint32_t addr, uint32_t len, uint32_t *data) {
  if (data == nullptr || (len != 1 && len != 2 && len != 4) ||
      !range_inside(addr, len, PMEM_BASE, pmem_high())) {
    return false;
  }
  *data = load_le(ram + addr - PMEM_BASE, len);
  return true;
}

void add_mmio_map(const char *name, uint32_t start, uint32_t size,
                  uint8_t *space, memory_handler_t memory_handler) {
  assert(name != nullptr);
  assert(size > 0);
  assert(space != nullptr);
  assert(nr_mmio_maps < MAX_MMIO_MAPS);

  const uint64_t end = static_cast<uint64_t>(start) + size - 1;
  assert(end <= UINT32_MAX);
  const uint32_t high = static_cast<uint32_t>(end);
  assert(high < PMEM_BASE || start > pmem_high());

  for (std::size_t i = 0; i < nr_mmio_maps; i++) {
    const MemoryRegion &map = mmio_maps[i];
    assert(high < map.start || start > map.end);
  }

  mmio_maps[nr_mmio_maps++] = {
      name, start, high, space, MemoryType::Device, memory_handler,
  };
}

MemoryRegion *find_mmio(uint32_t addr, uint32_t len) {
  for (std::size_t i = 0; i < nr_mmio_maps; i++) {
    if (range_inside(addr, len, mmio_maps[i].start, mmio_maps[i].end)) {
      return &mmio_maps[i];
    }
  }
  return nullptr;
}

void init_devices() {
  nr_mmio_maps = 0;
  memset(uart_space, 0, sizeof(uart_space));
  add_mmio_map("uart", UART_MMIO_BASE, UART_MMIO_SIZE, uart_space,
               uart_handler);
}

void putch(char ch) {
  putchar(static_cast<unsigned char>(ch));
  fflush(stdout);
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

void init_trace() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_tail = itrace_pending = 0;
#endif
#ifdef CONFIG_MTRACE
  mtrace_tail = mtrace_pending = 0;
#endif
#ifdef CONFIG_DTRACE
  dtrace_tail = dtrace_pending = 0;
#endif
}

void trace_begin_step() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_pending = itrace_tail;
#endif
#ifdef CONFIG_MTRACE
  mtrace_pending = mtrace_tail;
#endif
#ifdef CONFIG_DTRACE
  dtrace_pending = dtrace_tail;
#endif
}

void itrace_record(uint32_t pc, uint32_t inst) {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_ring[itrace_tail % TRACE_RING_SIZE] = {pc, inst};
  itrace_tail++;
#else
  (void)pc;
  (void)inst;
#endif
}

void mtrace_record(uint32_t addr, uint32_t len, bool is_write, uint32_t data) {
#ifdef CONFIG_MTRACE
  mtrace_ring[mtrace_tail % TRACE_RING_SIZE] = {last_pc, addr, len, data,
                                                is_write};
  mtrace_tail++;
#else
  (void)addr;
  (void)len;
  (void)is_write;
  (void)data;
#endif
}

void dtrace_record(const MemoryRegion *map, uint32_t addr, uint32_t len,
                   bool is_write, uint32_t data) {
#ifdef CONFIG_DTRACE
  dtrace_ring[dtrace_tail % TRACE_RING_SIZE] = {last_pc, map->name, addr,
                                                len, data, is_write};
  dtrace_tail++;
#else
  (void)map;
  (void)addr;
  (void)len;
  (void)is_write;
  (void)data;
#endif
}

void trace_print_pending() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  const uint64_t start = itrace_pending > ring_start(itrace_tail)
                             ? itrace_pending
                             : ring_start(itrace_tail);
  for (uint64_t i = start; i < itrace_tail; i++) {
    print_itrace(itrace_ring[i % TRACE_RING_SIZE]);
  }
  itrace_pending = itrace_tail;
#endif
#ifdef CONFIG_MTRACE
  const uint64_t mstart = mtrace_pending > ring_start(mtrace_tail)
                              ? mtrace_pending
                              : ring_start(mtrace_tail);
  for (uint64_t i = mstart; i < mtrace_tail; i++) {
    print_mtrace(mtrace_ring[i % TRACE_RING_SIZE]);
  }
  mtrace_pending = mtrace_tail;
#endif
#ifdef CONFIG_DTRACE
  const uint64_t dstart = dtrace_pending > ring_start(dtrace_tail)
                              ? dtrace_pending
                              : ring_start(dtrace_tail);
  for (uint64_t i = dstart; i < dtrace_tail; i++) {
    print_dtrace(dtrace_ring[i % TRACE_RING_SIZE]);
  }
  dtrace_pending = dtrace_tail;
#endif
}

void trace_dump() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_dump();
#endif
#ifdef CONFIG_MTRACE
  mtrace_dump();
#endif
#ifdef CONFIG_DTRACE
  dtrace_dump();
#endif
#ifdef CONFIG_FTRACE
    ftrace_backtrace();
#endif
}

void itrace_dump() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  puts(FMT_BOLD FMT_CYAN "---- ITRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(itrace_tail); i < itrace_tail; i++) {
    print_itrace(itrace_ring[i % TRACE_RING_SIZE]);
  }

  const uint32_t current_pc = cpu_current_pc();
  uint32_t inst = 0;
  if (!peek_instruction(current_pc, &inst)) {
    printf(FMT_RED "-----> ITRACE 0x%08x: <outside PMEM>" FMT_NONE "\n",
           current_pc);
    return;
  }
  print_current_itrace(current_pc, inst);

  // This is a linear preview only.  It is not a prediction across branches
  // or jumps, and is kept separate from the architectural trace ring.
  for (uint32_t offset = 1; offset <= ITRACE_PREFETCH_SIZE; offset++) {
    const uint32_t prefetch_pc = current_pc + offset * 4;
    if (!peek_instruction(prefetch_pc, &inst)) {
      break;
    }
    print_itrace_prefetch(prefetch_pc, inst);
  }
#endif
}

void mtrace_dump() {
#ifdef CONFIG_MTRACE
  puts(FMT_BOLD FMT_GREEN "---- MTRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(mtrace_tail); i < mtrace_tail; i++) {
    print_mtrace(mtrace_ring[i % TRACE_RING_SIZE]);
  }
#endif
}

void dtrace_dump() {
#ifdef CONFIG_DTRACE
  puts(FMT_BOLD FMT_MAGENTA "---- DTRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(dtrace_tail); i < dtrace_tail; i++) {
    print_dtrace(dtrace_ring[i % TRACE_RING_SIZE]);
  }
#endif
}
