#ifndef NPC_CSRC_MINIRV_H
#define NPC_CSRC_MINIRV_H

#include "color.h"

// The RTL starts executing at PMEM_BASE.  Keep this range separate from MMIO
// so pmem_read()/pmem_write() can route device accesses in the same way as
// NEMU's paddr_read()/paddr_write().

enum SimState {
  SIM_STOP,
  SIM_RUNNING,
  SIM_END,
  SIM_ABORT,
  SIM_QUIT,
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

// Host-side UART endpoint.  The UART MMIO write handler calls this function.

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

extern "C" void ebreak();

#endif
