#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "include/minirv.h"
#include "difftest.h"

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
