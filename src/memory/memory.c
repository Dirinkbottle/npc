#include "memory.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "color.h"
#include "cpu.h"
#include "difftest.h"
#include "trace.h"

extern const uint8_t _binary_img_bin_start[];
extern const uint8_t _binary_img_bin_end[];

typedef struct MemoryRegion {
  const char *name;
  uint32_t start;
  uint32_t end; /* inclusive */
  uint8_t *space;
  memory_handler_t handler;
} MemoryRegion;

static uint8_t *ram = NULL;
static MemoryRegion mmio_maps[MAX_MMIO_MAPS];
static size_t nr_mmio_maps = 0;
static size_t image_size = 0;
static uint32_t last_pc = PMEM_BASE;

static bool range_inside(uint32_t addr, uint32_t len,
                         uint32_t low, uint32_t high) {
  assert(len > 0);
  const uint64_t access_end = (uint64_t)addr + len - 1u;
  return addr >= low && access_end <= high;
}

static uint32_t pmem_high(void) {
  return PMEM_BASE + (uint32_t)PMEM_SIZE - 1u;
}

static uint32_t mask_to_width(uint8_t byte_mask) {
  switch (byte_mask) {
    case 0x01u: return 1u;
    case 0x03u: return 2u;
    case 0x0fu: return 4u;
    default:
      printf(FMT_RED "invalid memory mask 0x%02x" FMT_NONE "\n", byte_mask);
      sim_abort();
      return 0u;
  }
}

static uint32_t aligned_addr(uint32_t addr, uint32_t width) {
  return addr & ~(width - 1u);
}

static uint32_t load_le(const uint8_t *space, uint32_t len) {
  uint32_t data = 0;
  for (uint32_t i = 0; i < len; i++) {
    data |= (uint32_t)space[i] << (i * 8u);
  }
  return data;
}

static void store_le(uint8_t *space, uint32_t len, uint32_t data) {
  for (uint32_t i = 0; i < len; i++) {
    space[i] = (uint8_t)(data >> (i * 8u));
  }
}

static MemoryRegion *find_mmio(uint32_t addr, uint32_t len) {
  for (size_t i = 0; i < nr_mmio_maps; i++) {
    if (range_inside(addr, len, mmio_maps[i].start, mmio_maps[i].end)) {
      return &mmio_maps[i];
    }
  }
  return NULL;
}

static uint32_t mmio_read(MemoryRegion *map, uint32_t addr, uint32_t len,
                          bool skip_difftest_one) {
#ifdef CONFIG_DIFFTEST
  if (skip_difftest_one) {
    difftest_skip_ref();
  }
#else
  (void)skip_difftest_one;
#endif

  const uint32_t offset = addr - map->start;
  if (map->handler != NULL) {
    map->handler(offset, len, false);
  }
  const uint32_t data = load_le(map->space + offset, len);
  dtrace_record(map->name, addr, len, false, data);
  return data;
}

static void mmio_write(MemoryRegion *map, uint32_t addr, uint32_t len,
                       uint32_t data, bool skip_difftest_one) {
#ifdef CONFIG_DIFFTEST
  if (skip_difftest_one) {
    difftest_skip_ref();
  }
#else
  (void)skip_difftest_one;
#endif

  const uint32_t offset = addr - map->start;
  store_le(map->space + offset, len, data);
  if (map->handler != NULL) {
    map->handler(offset, len, true);
  }
  dtrace_record(map->name, addr, len, true, data);
}

bool init_memory(const char *image_file) {
  destroy_memory();

  ram = malloc(PMEM_SIZE);
  if (ram == NULL) {
    fprintf(stderr, FMT_RED "failed to allocate %zu bytes of PMEM" FMT_NONE "\n",
            PMEM_SIZE);
    return false;
  }
  memset(ram, 0, PMEM_SIZE);
  image_size = 0;
  last_pc = PMEM_BASE;

  if (image_file == NULL) {
    return true;
  }

  FILE *image = fopen(image_file, "rb");
  if (image == NULL) {
    fprintf(stderr, FMT_RED "cannot open image '%s'" FMT_NONE "\n", image_file);
    destroy_memory();
    return false;
  }

  while (image_size < PMEM_SIZE) {
    const size_t remaining = PMEM_SIZE - image_size;
    const size_t nread = fread(ram + image_size, 1, remaining, image);
    image_size += nread;
    if (nread < remaining) {
      if (ferror(image)) {
        fprintf(stderr, FMT_RED "failed while reading image '%s'" FMT_NONE "\n",
                image_file);
        fclose(image);
        destroy_memory();
        return false;
      }
      break;
    }
  }

  if (image_size == PMEM_SIZE && fgetc(image) != EOF) {
    fprintf(stderr, FMT_RED "image '%s' exceeds PMEM (%zu bytes)" FMT_NONE "\n",
            image_file, PMEM_SIZE);
    fclose(image);
    destroy_memory();
    return false;
  }
  fclose(image);

  const uint32_t first_inst = image_size >= 4u ? load_le(ram, 4u) : 0u;
  printf(FMT_CYAN "[image]" FMT_NONE " %zu bytes <- %s, entry=0x%08x first-inst=0x%08x\n",
         image_size, image_file, PMEM_BASE, first_inst);
  return true;
}

bool init_internal_img(void) {
  if (!init_memory(NULL)) {
    return false;
  }

  const size_t size = (size_t)(_binary_img_bin_end - _binary_img_bin_start);
  if (size > PMEM_SIZE) {
    fprintf(stderr,
            FMT_RED "internal img (%zu bytes) exceeds PMEM (%zu bytes)" FMT_NONE "\n",
            size, PMEM_SIZE);
    destroy_memory();
    return false;
  }

  memcpy(ram, _binary_img_bin_start, size);
  image_size = size;

  printf(FMT_CYAN "[image]" FMT_NONE " %zu bytes <- built-in img, "
                  FMT_GREEN "copied to [0x%08x, 0x%08x]" FMT_NONE "\n",
         image_size, PMEM_BASE,
         image_size == 0u ? PMEM_BASE : PMEM_BASE + (uint32_t)image_size - 1u);
  return true;
}

void destroy_memory(void) {
  free(ram);
  ram = NULL;
  image_size = 0;
}

uint8_t *pmem_space(void) {
  return ram;
}

size_t pmem_image_size(void) {
  return image_size;
}

uint32_t memory_last_pc(void) {
  return last_pc;
}

bool debug_pmem_read(uint32_t addr, uint32_t len, uint32_t *data) {
  if (data == NULL || ram == NULL || (len != 1u && len != 2u && len != 4u) ||
      !range_inside(addr, len, PMEM_BASE, pmem_high())) {
    return false;
  }
  *data = load_le(ram + addr - PMEM_BASE, len);
  return true;
}

void add_mmio_map(const char *name, uint32_t start, uint32_t size,
                  uint8_t *space, memory_handler_t handler) {
  assert(name != NULL);
  assert(size > 0u);
  assert(space != NULL);
  assert(nr_mmio_maps < MAX_MMIO_MAPS);

  const uint64_t end = (uint64_t)start + size - 1u;
  assert(end <= UINT32_MAX);
  const uint32_t high = (uint32_t)end;
  assert(high < PMEM_BASE || start > pmem_high());

  for (size_t i = 0; i < nr_mmio_maps; i++) {
    assert(high < mmio_maps[i].start || start > mmio_maps[i].end);
  }

  mmio_maps[nr_mmio_maps++] = (MemoryRegion){
      .name = name,
      .start = start,
      .end = high,
      .space = space,
      .handler = handler,
  };
}

void pmem_write(uint32_t waddr, uint32_t wdata, char byte_mask,
                bool skip_difftest_one) {
  const uint32_t width = mask_to_width((uint8_t)byte_mask);
  if (width == 0u) {
    return;
  }
  const uint32_t addr = aligned_addr(waddr, width);

  if (ram != NULL && range_inside(addr, width, PMEM_BASE, pmem_high())) {
    store_le(ram + addr - PMEM_BASE, width, wdata);
    mtrace_record(addr, width, true, wdata);
    return;
  }

  MemoryRegion *map = find_mmio(addr, width);
  if (map != NULL) {
    mmio_write(map, addr, width, wdata, skip_difftest_one);
    return;
  }

  printf(FMT_RED "invalid memory write at 0x%08x" FMT_NONE
                 " (width=%u, data=0x%08x, pc=0x%08x)\n",
         waddr, width, wdata, last_pc);
  sim_abort();
}

uint32_t prom_read(uint32_t rom_addr) {
  if (ram == NULL || !range_inside(rom_addr, 4u, PMEM_BASE, pmem_high())) {
    printf(FMT_RED "instruction fetch outside PMEM at pc=0x%08x" FMT_NONE "\n",
           rom_addr);
    sim_abort();
    return 0u;
  }
  last_pc = rom_addr;
  return load_le(ram + rom_addr - PMEM_BASE, 4u);
}

uint32_t pmem_read(uint32_t raddr, unsigned char byte_mask,
                   bool skip_difftest_one) {
  const uint32_t width = mask_to_width(byte_mask);
  if (width == 0u) {
    return 0u;
  }
  const uint32_t addr = aligned_addr(raddr, width);

  if (ram != NULL && range_inside(addr, width, PMEM_BASE, pmem_high())) {
    const uint32_t data = load_le(ram + addr - PMEM_BASE, width);
    mtrace_record(addr, width, false, data);
    return data;
  }

  MemoryRegion *map = find_mmio(addr, width);
  if (map != NULL) {
    return mmio_read(map, addr, width, skip_difftest_one);
  }

  printf(FMT_RED "invalid memory read at 0x%08x" FMT_NONE
                 " (width=%u, pc=0x%08x)\n",
         raddr, width, last_pc);
  sim_abort();
  return 0u;
}
