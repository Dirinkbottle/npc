#include "rtl_bridge.h"

#include <new>

#include <Vminirv.h>
#include <Vminirv___024root.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

namespace {

Vminirv *top = nullptr;
VerilatedVcdC *wave = nullptr;

void eval_and_dump_impl() {
  if (top == nullptr) {
    return;
  }
  top->eval();
  if (wave != nullptr) {
    wave->dump(Verilated::time());
  }
  Verilated::timeInc(1);
}

}  // namespace

extern "C" bool rtl_bridge_init(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);

  top = new (std::nothrow) Vminirv;
  wave = new (std::nothrow) VerilatedVcdC;
  if (top == nullptr || wave == nullptr) {
    rtl_bridge_destroy();
    return false;
  }

  Verilated::traceEverOn(true);
  top->trace(wave, 99);
  wave->open("waveform.vcd");

  /* Synchronous reset for one complete clock cycle. */
  top->rst = 1;
  top->clk = 0;
  eval_and_dump_impl();
  top->clk = 1;
  eval_and_dump_impl();

  /* Evaluate the first fetch without committing an instruction. */
  top->rst = 0;
  top->clk = 0;
  top->eval();
  return true;
}

extern "C" void rtl_bridge_destroy(void) {
  if (top != nullptr) {
    top->final();
  }
  if (wave != nullptr) {
    wave->close();
    delete wave;
    wave = nullptr;
  }
  delete top;
  top = nullptr;
}

extern "C" void rtl_bridge_set_clock(bool high) {
  if (top != nullptr) {
    top->clk = high ? 1 : 0;
  }
}

extern "C" void rtl_bridge_eval_and_dump(void) {
  eval_and_dump_impl();
}

extern "C" uint32_t rtl_bridge_pc(void) {
  return top == nullptr ? 0u : top->rootp->minirv__DOT__pc;
}

extern "C" uint32_t rtl_bridge_inst(void) {
  return top == nullptr ? 0u : top->rootp->minirv__DOT__inst;
}

extern "C" bool rtl_bridge_invalid(void) {
  return top != nullptr && top->inv;
}

extern "C" bool rtl_bridge_reg_read(uint32_t index, uint32_t *value) {
  if (top == nullptr || value == nullptr || index >= 32u) {
    return false;
  }
  *value = top->rootp->minirv__DOT__minirv_registerfile__DOT__registersfile[index];
  return true;
}
