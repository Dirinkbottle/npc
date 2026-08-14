uint32_t cpu_current_pc() {
  // Each completed CPU step has already advanced the RTL PC on its rising
  // edge.  This is the instruction that MDB would execute next.
  return top == nullptr ? PMEM_BASE : top->rootp->minirv__DOT__pc;
}

bool cpu_reg_read(std::uint32_t index, std::uint32_t *value) {
  if (top == nullptr || value == nullptr || index >= 32) {
    return false;
  }
  *value = top->rootp->minirv__DOT__minirv_registerfile__DOT__registersfile[index];
  return true;
}
extern "C" void ebreak() {
  const uint32_t a0 =
      top->rootp->minirv__DOT__minirv_registerfile__DOT__registersfile[10];
  exit_good = (a0 == 0) ? 0 : 1;
  sim_state = SIM_END;
  const char *color = a0 == 0 ? FMT_GREEN : FMT_RED;
  printf("%s%s%s a0:%u\n", color, a0 == 0 ? "HIT GOOD TRAP!" : "HIT BAD TRAP!",
         FMT_NONE, a0);
}

static void eval_and_dump() {
  top->eval();
  wave->dump(Verilated::time());
  Verilated::timeInc(1);
}

void init_simulator(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  top = new Vminirv;
  wave = new VerilatedVcdC;
  Verilated::traceEverOn(true);
  top->trace(wave, 99);
  wave->open("waveform.vcd");
  

  // Synchronous reset: one full clock cycle, then evaluate the first fetch at
  // the low phase without committing an instruction.
  top->rst = 1;
  top->clk = 0;
  eval_and_dump();
  top->clk = 1;
  eval_and_dump();

  top->rst = 0;
  top->clk = 0;
  top->eval();

}

void destroy_simulator() {
  if (wave != nullptr) {
    wave->close();
    delete wave;
    wave = nullptr;
  }
  delete top;
  top = nullptr;
}