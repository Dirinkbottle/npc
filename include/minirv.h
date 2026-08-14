#ifndef NPC_CSRC_MINIRV_H
#define NPC_CSRC_MINIRV_H

#include <cstddef>
#include <cstdint>
#include "common.h"
#include "color.h"

// The RTL starts executing at PMEM_BASE.  Keep this range separate from MMIO
// so pmem_read()/pmem_write() can route device accesses in the same way as
// NEMU's paddr_read()/paddr_write().
constexpr std::uint32_t PMEM_BASE = 0x80000000u;
constexpr std::size_t PMEM_SIZE = 0x010000000u;

constexpr std::uint32_t UART_MMIO_BASE = 0xa00003f8u;
constexpr std::uint32_t UART_MMIO_SIZE = 8u;
constexpr std::size_t MAX_MMIO_MAPS = 16;

enum SimState {
  SIM_STOP,
  SIM_RUNNING,
  SIM_END,
  SIM_ABORT,
  SIM_QUIT,
};

enum class MemoryType {
  Normal,
  Device,
};

// A device receives the byte offset in its MMIO range, the access length, and
// whether the access is a write.  The mapped backing store has already been
// updated before a write handler runs; a read handler may prepare it first.
using memory_handler_t = void (*)(std::uint32_t offset, std::uint32_t len,
                                  bool is_write);

struct MemoryRegion {
  const char *name;
  std::uint32_t start;
  std::uint32_t end;  // Inclusive.
  std::uint8_t *space;
  MemoryType type;
  memory_handler_t memory_handler;
};

extern SimState sim_state;
extern int exit_good;
extern std::uint32_t last_pc;

// `-d` only controls live trace display.  It no longer enables ad-hoc prints
// inside PMEM/MMIO access functions.
extern bool debug_enable;

void set_npc_state(SimState state);
void sim_abort();
bool sim_is_running();
std::uint32_t cpu_current_pc();
bool cpu_reg_read(std::uint32_t index, std::uint32_t *value);
void cpu_exec(std::uint64_t n, bool print_step);

// Simulator lifecycle.  Main is deliberately just an initializer that calls
// these functions and then enters the monitor or batch execution.
void init_simulator(int argc, char **argv);
void destroy_simulator();

// Physical memory and image lifecycle.
bool init_memory(const char *image_file);
bool init_internal_img();
void destroy_memory();
uint8_t *pmem_space();
std::size_t pmem_image_size();
bool debug_pmem_read(std::uint32_t addr, std::uint32_t len,
                     std::uint32_t *data);

// MMIO registration and lookup.  `size` is expressed in bytes.
void add_mmio_map(const char *name, std::uint32_t start, std::uint32_t size,
                  std::uint8_t *space, memory_handler_t memory_handler);
MemoryRegion *find_mmio(std::uint32_t addr, std::uint32_t len);
void init_devices();

// Host-side UART endpoint.  The UART MMIO write handler calls this function.
void putch(char ch);

// Traces follow NEMU's three categories.  CONFIG_TRACE is accepted as a
// temporary alias for CONFIG_ITRACE while the local Kconfig equivalent is
// being added.
void init_trace();
void trace_begin_step();
void trace_print_pending();
void trace_dump();
void itrace_dump();
void mtrace_dump();
void dtrace_dump();
void itrace_record(std::uint32_t pc, std::uint32_t inst);
void mtrace_record(std::uint32_t addr, std::uint32_t len, bool is_write,
                   std::uint32_t data);
void dtrace_record(const MemoryRegion *map, std::uint32_t addr,
                   std::uint32_t len, bool is_write, std::uint32_t data);

#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
void init_disasm();
void disassemble(char *str, int size, std::uint64_t pc, std::uint8_t *code,
                 int nbyte);
#endif

// DPI-C entry points imported by vsrc/minirv/minirv.v.
extern "C" std::uint32_t pmem_read(std::uint32_t raddr,
                                   unsigned char byte_mask,
                                   bool skip_difftest_one);
extern "C" void pmem_write(std::uint32_t waddr, std::uint32_t wdata,
                           char byte_mask, bool skip_difftest_one);
extern "C" std::uint32_t prom_read(std::uint32_t rom_addr);
extern "C" void ebreak();

#endif
