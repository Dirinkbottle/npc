


void set_npc_state(SimState state) {
  sim_state = state;
}

void sim_abort() {
  if (sim_state != SIM_END) {
    sim_state = SIM_ABORT;
    exit_good = -1;
  }
}

bool sim_is_running() {
  return sim_state == SIM_RUNNING;
}


static void difftest_stepone(uint32_t pc, uint32_t inst);

static void exec_once(bool display_trace) {
  if (display_trace) {
    trace_begin_step();
  }

  // Data loads and instruction fetch happen while the clock is low.  Capture
  // the architectural instruction before the rising edge commits it.
  top->clk = 0;
  eval_and_dump();

  const uint32_t pc = top->rootp->minirv__DOT__pc;
  const uint32_t inst = top->rootp->minirv__DOT__inst;
  itrace_record(pc, inst);
  if (top->inv) {
    printf(FMT_RED "Invalid instruction at pc 0x%08x" FMT_NONE "\n", pc);
    sim_abort();
    if (display_trace) {
      trace_print_pending();
    }
    return;
  }

  top->clk = 1;
  eval_and_dump();
  
  difftest_stepone(pc, inst);

#ifdef CONFIG_FTRACE
  ftrace_step(pc, inst, cpu_current_pc());
#endif
  if (sim_is_running() && wp_scan() > 0) {
    set_npc_state(SIM_STOP);
  }

  if (display_trace) {
    trace_print_pending();
  }
}

void cpu_exec(uint64_t n, bool print_step) {
  if (top == nullptr || sim_state == SIM_END || sim_state == SIM_ABORT ||
      sim_state == SIM_QUIT) {
    return;
  }

  sim_state = SIM_RUNNING;
  while (n > 0 && sim_is_running()) {
    const bool old_debug_enable = debug_enable;
    debug_enable = old_debug_enable || print_step;
    exec_once(debug_enable || print_step);
    debug_enable = old_debug_enable;
    n--;
  }

  if (sim_is_running()) {
    sim_state = SIM_STOP;
  }

  // `c` normally remains quiet.  If it stops because of a trap or an error,
  // show the most recent rings so the terminal point remains debuggable.
  if ((sim_state == SIM_END || sim_state == SIM_ABORT) && !print_step &&
      !debug_enable) {
    trace_dump();
  }
}