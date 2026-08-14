#include "cpu.h"

#include <stdio.h>

#include "color.h"
#include "difftest.h"
#include "ftrace.h"
#include "memory.h"
#include "rtl_bridge.h"
#include "sdb.h"
#include "trace.h"

static SimState sim_state = SIM_STOP;
static int exit_good = 0;
static bool debug_enable = false;

void set_npc_state(SimState state) {
  sim_state = state;
}

SimState get_npc_state(void) {
  return sim_state;
}

void sim_abort(void) {
  if (sim_state != SIM_END) {
    sim_state = SIM_ABORT;
    exit_good = -1;
  }
}

bool sim_is_running(void) {
  return sim_state == SIM_RUNNING;
}

int sim_exit_code(void) {
  return exit_good;
}

void cpu_set_debug(bool enable) {
  debug_enable = enable;
}

bool cpu_debug_enabled(void) {
  return debug_enable;
}

bool init_simulator(int argc, char **argv) {
  return rtl_bridge_init(argc, argv);
}

void destroy_simulator(void) {
  rtl_bridge_destroy();
}

uint32_t cpu_current_pc(void) {
  const uint32_t pc = rtl_bridge_pc();
  return pc == 0u ? PMEM_BASE : pc;
}

bool cpu_reg_read(uint32_t index, uint32_t *value) {
  return rtl_bridge_reg_read(index, value);
}

void ebreak(void) {
  uint32_t a0 = 0;
  (void)cpu_reg_read(10u, &a0);
  exit_good = a0 == 0u ? 0 : 1;
  sim_state = SIM_END;

  const char *color = a0 == 0u ? FMT_GREEN : FMT_RED;
  printf("%s%s%s a0:%u\n", color,
         a0 == 0u ? "HIT GOOD TRAP!" : "HIT BAD TRAP!", FMT_NONE, a0);
}

static void exec_once(bool display_trace) {
  if (display_trace) {
    trace_begin_step();
  }

  /* Loads and instruction fetches settle while the clock is low. */
  rtl_bridge_set_clock(false);
  rtl_bridge_eval_and_dump();

  const uint32_t pc = rtl_bridge_pc();
  const uint32_t inst = rtl_bridge_inst();
  itrace_record(pc, inst);

  if (rtl_bridge_invalid()) {
    printf(FMT_RED "Invalid instruction at pc 0x%08x" FMT_NONE "\n", pc);
    sim_abort();
    if (display_trace) {
      trace_print_pending();
    }
    return;
  }

  /* Rising edge commits the architectural instruction. */
  rtl_bridge_set_clock(true);
  rtl_bridge_eval_and_dump();

#ifdef CONFIG_DIFFTEST
  difftest_step(pc, inst);
#endif
  ftrace_step(pc, inst, cpu_current_pc());

  if (sim_is_running() && wp_scan() > 0) {
    set_npc_state(SIM_STOP);
  }

  if (display_trace) {
    trace_print_pending();
  }
}

void cpu_exec(uint64_t n, bool print_step) {
  if (sim_state == SIM_END || sim_state == SIM_ABORT || sim_state == SIM_QUIT) {
    return;
  }

  sim_state = SIM_RUNNING;
  while (n > 0 && sim_is_running()) {
    const bool old_debug = debug_enable;
    debug_enable = old_debug || print_step;
    exec_once(debug_enable || print_step);
    debug_enable = old_debug;
    n--;
  }

  if (sim_is_running()) {
    sim_state = SIM_STOP;
  }

  if ((sim_state == SIM_END || sim_state == SIM_ABORT) && !print_step &&
      !debug_enable) {
    trace_dump();
  }
}
