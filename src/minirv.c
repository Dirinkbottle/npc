#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vminirv.h>
#include <Vminirv___024root.h>

#include "include/mdb.h"
#include "include/difftest.h"
#include "include/ftrace.h"
#include "include/minirv.h"
#include "sdb/sdb.h"
#include <difftest.h>

Vminirv *top = nullptr;
static VerilatedVcdC *wave = nullptr;

SimState sim_state = SIM_STOP;
int exit_good = 0;
uint32_t last_pc = PMEM_BASE;
bool debug_enable = false;
bool skip_one_difftest_exec = false;

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

std::uint32_t cpu_current_pc() {
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

static void difftest_sync_initial() {
  difftest_cpu_state state = {};
  for (int i = 0; i < 32; i++) {
    uint32_t v = 0;
    cpu_reg_read(i, &v);
    state.gpr[i] = v;
  }
  state.pc = cpu_current_pc();
  difftest_regcpy(&state, DIFFTEST_TO_REF,sizeof(state.pc));

  if (pmem_image_size() > 0) {
    difftest_memcpy(PMEM_BASE, pmem_space(), pmem_image_size(), DIFFTEST_TO_REF);
  }
}

// `difftest_regcpy()` transfers the complete architectural state in the
// shared RV32 ABI: x0..x31 plus the PC.  It does not transfer PMEM; an MMIO
// instruction has not modified PMEM, so there is no PMEM range to copy here.
static void difftest_sync_dut_state_to_ref() {
  difftest_cpu_state dut_state = {};
  for (int i = 0; i < 32; i++) {
    cpu_reg_read(i, &dut_state.gpr[i]);
  }
  dut_state.pc = cpu_current_pc();
  difftest_regcpy(&dut_state, DIFFTEST_TO_REF, sizeof(dut_state.pc));
}

static void difftest_print_mismatch_header(uint32_t pc, uint32_t inst) {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  uint8_t code[4] = {
      static_cast<uint8_t>(inst), static_cast<uint8_t>(inst >> 8),
      static_cast<uint8_t>(inst >> 16), static_cast<uint8_t>(inst >> 24),
  };
  char text[128] = {};
  disassemble(text, sizeof(text), pc, code, sizeof(code));
  printf(FMT_BOLD FMT_RED "=== difftest mismatch @ pc = 0x%08x: %08x  %s ===" FMT_NONE
         "\n",
         pc, inst, text);
#else
  printf(FMT_BOLD FMT_RED "=== difftest mismatch @ pc = 0x%08x: %08x ===" FMT_NONE
         "\n",
         pc, inst);
#endif
}

static void difftest_stepone(uint32_t pc, uint32_t inst) {
  if (skip_one_difftest_exec) {
    skip_one_difftest_exec = false;

    // The DUT has completed an MMIO access.  NEMU cannot reproduce host
    // device state, so do not execute it there; resume from DUT CPU state.
    difftest_sync_dut_state_to_ref();
    return;
  }

  difftest_exec(1);
  difftest_cpu_state ref_state = {};
  difftest_regcpy(&ref_state, DIFFTEST_TO_DUT, sizeof(ref_state.pc));

  bool header_printed = false;
  for (int i = 0; i < 32; i++) {
    uint32_t dut_val = 0;
    cpu_reg_read(i, &dut_val);
    const uint32_t ref_val = ref_state.gpr[i];
    if (dut_val != ref_val) {
      if (!header_printed) {
        difftest_print_mismatch_header(pc, inst);
        header_printed = true;
      }
      printf("  " FMT_BOLD FMT_CYAN "x%-2d" FMT_NONE
             "  " FMT_RED "DUT = 0x%08x" FMT_NONE
             "  " FMT_GREEN "REF = 0x%08x" FMT_NONE "\n",
             i, dut_val, ref_val);
      set_npc_state(SIM_ABORT);
    }
  }

  const uint32_t dut_pc = cpu_current_pc();
  const uint32_t ref_pc = ref_state.pc;
  if (dut_pc != ref_pc) {
    if (!header_printed) {
      difftest_print_mismatch_header(pc, inst);
      header_printed = true;
    }
    printf("  " FMT_BOLD FMT_CYAN "pc " FMT_NONE
           "  " FMT_RED "DUT = 0x%08x" FMT_NONE
           "  " FMT_GREEN "REF = 0x%08x" FMT_NONE "\n",
           dut_pc, ref_pc);
  }
}

int main(int argc, char **argv) {
  init_mdb(argc, argv);

  if (mdb_use_internal_img()) {
    printf(FMT_RED "warning: Using built-in img Program (built-in img)" FMT_NONE
                   "\n");
    if (!init_internal_img()) {
      return -1;
    }
  } else if (!init_memory(mdb_image_file())) {
    return -1;
  }


  // init difftest

  init_devices();
  init_trace();
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  init_disasm();
#endif
#ifdef CONFIG_FTRACE
  init_ftrace(mdb_elf_file());
#endif
  init_simulator(argc, argv);

  if (init_difftest() != 0) {
    return -1;
  }

  difftest_sync_initial();

  if (mdb_batch_mode()) {
    cpu_exec(UINT64_MAX, false);
  } else {
    sdb_mainloop();
  }

    sim_abort();

#ifdef CONFIG_FTRACE
  if (sim_state == SIM_END) {
    ftrace_dump_history();
  }
#endif
  destroy_simulator();
#ifdef CONFIG_FTRACE
  destroy_ftrace();
#endif
  destroy_memory();
  return exit_good;
}
