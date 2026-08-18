#include "rtl_bridge.h"

#include <new>

#include "config.h"
#include <Vminirv.h>
#include <Vminirv___024root.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

// prom_read()/pmem_read() 在 C 侧 (src/memory/memory.c) 实现，C++ 这里要按 C 符号链接。
extern "C" void prom_read();
extern "C" void pmem_read();

// 由 C 侧直接维护的时钟/复位状态，使用 extern "C" 保证符号名不被 C++ 改编。
extern "C" {
uint8_t cpu_clk = 0;
uint8_t cpu_rst = 0;
}

namespace {

Vminirv *top = nullptr;
VerilatedVcdC *wave = nullptr;

void sync_clock_reset() {
  if (top == nullptr) {
    return;
  }
  top->clk = cpu_clk ? 1 : 0;
  top->rst = cpu_rst ? 1 : 0;
}

void eval_impl() {
  if (top == nullptr) {
    return;
  }
  sync_clock_reset();


  // 每次 eval 都驱动一次 C 侧 AXI 状态机。
  prom_read();
  pmem_read();

  top->eval();



#ifdef CONFIG_DUMP_WAVE
  if (wave != nullptr) {
    wave->dump(Verilated::time());
  }
#endif
  Verilated::timeInc(1);
}

}  // namespace

extern "C" bool rtl_bridge_init(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);

  top = new (std::nothrow) Vminirv;
#ifdef CONFIG_DUMP_WAVE
  wave = new (std::nothrow) VerilatedVcdC;
  if (top == nullptr || wave == nullptr) {
    rtl_bridge_destroy();
    return false;
  }

  Verilated::traceEverOn(true);
  top->trace(wave, 99);
  wave->open("waveform.vcd");
#else
  if (top == nullptr) {
    rtl_bridge_destroy();
    return false;
  }
#endif

  /* Synchronous reset for one complete clock cycle. */
  cpu_rst = 1;
  cpu_clk = 0;
  eval_impl();
  cpu_clk = 1;
  eval_impl();

  /* Evaluate the first fetch without committing an instruction. */
  cpu_rst = 0;
  cpu_clk = 0;
  sync_clock_reset();
  top->eval();
  return true;
}

extern "C" void rtl_bridge_destroy(void) {
  if (top != nullptr) {
    top->final();
  }
#ifdef CONFIG_DUMP_WAVE
  if (wave != nullptr) {
    wave->close();
    delete wave;
    wave = nullptr;
  }
#endif
  delete top;
  top = nullptr;
}

extern "C" void rtl_bridge_set_clock(bool high) {
  cpu_clk = high ? 1 : 0;
  if (top != nullptr) {
    top->clk = cpu_clk;
  }
}

extern "C" void rtl_bridge_eval(void) {
  eval_impl();
}

extern "C" uint32_t rtl_bridge_pc(void) {
  return top == nullptr ? 0u : top->rootp->minirv__DOT__pc;
}

extern "C" uint32_t rtl_bridge_inst(void) {
  return top == nullptr ? 0u : top->rootp->minirv__DOT__inst;
}

extern "C" bool rtl_bridge_invalid(void) {
  return top != nullptr && top->invalid_inst;
}

extern "C" bool rtl_bridge_reg_read(uint32_t index, uint32_t *value) {
  if (top == nullptr || value == nullptr || index >= 32u) {
    return false;
  }
  *value = top->rootp->minirv__DOT__minirv_registerfile__DOT__register_file[index];
  return true;
}

extern "C" bool rtl_bridge_csr_read(uint32_t index, uint32_t *value) {
  if (top == nullptr || value == nullptr || index >= 4096u) {
    return false;
  }
  *value =
      top->rootp->minirv__DOT__u_ControlStatusRegister__DOT__csr_register[index];
  return true;
}

extern "C" bool rtl_bridge_csr_write(uint32_t index, uint32_t value) {
  if (top == nullptr || index >= 4096u) {
    return false;
  }
  top->rootp->minirv__DOT__u_ControlStatusRegister__DOT__csr_register[index] =
      value;
  return true;
}

extern "C" bool rtl_bridge_set_axi_rom_arready(bool value) {
  if (top == nullptr) {
    return false;
  }
  top->axi_rom_arready = value ? 1 : 0;
  return true;
}

extern "C" bool rtl_bridge_set_axi_rom_rvalid(bool value) {
  if (top == nullptr) {
    return false;
  }
  top->axi_rom_rvalid = value ? 1 : 0;
  return true;
}

extern "C" bool rtl_bridge_set_axi_rom_rdata(uint32_t data) {
  if (top == nullptr) {
    return false;
  }
  top->axi_rom_rdata = data;
  return true;
}

extern "C" bool rtl_bridge_get_axi_rom_arready(void) {
  return top != nullptr && top->axi_rom_arready;
}

extern "C" bool rtl_bridge_get_axi_rom_rvalid(void) {
  return top != nullptr && top->axi_rom_rvalid;
}

extern "C" uint32_t rtl_bridge_get_axi_rom_rdata(void) {
  return top == nullptr ? 0u : top->axi_rom_rdata;
}

extern "C" bool rtl_bridge_get_axi_rom_cpu_arvalid(void) {
  return top != nullptr && top->axi_cpu_rom_arvalid;
}

extern "C" bool rtl_bridge_get_axi_rom_cpu_rready(void) {
  return top != nullptr && top->axi_cpu_rom_rready;
}

extern "C" uint32_t rtl_bridge_get_axi_rom_cpu_araddr(void) {
  return top == nullptr ? 0u : top->axi_cpu_rom_araddr;
}

extern "C" bool rtl_bridge_set_axi_ram_arready(bool value) {
  if (top == nullptr) {
    return false;
  }
  top->axi_ram_arready = value ? 1 : 0;
  return true;
}

extern "C" bool rtl_bridge_set_axi_ram_rvalid(bool value) {
  if (top == nullptr) {
    return false;
  }
  top->axi_ram_rvalid = value ? 1 : 0;
  return true;
}

extern "C" bool rtl_bridge_set_axi_ram_rdata(uint32_t data) {
  if (top == nullptr) {
    return false;
  }
  top->axi_ram_rdata = data;
  return true;
}

extern "C" bool rtl_bridge_get_axi_ram_arready(void) {
  return top != nullptr && top->axi_ram_arready;
}

extern "C" bool rtl_bridge_get_axi_ram_rvalid(void) {
  return top != nullptr && top->axi_ram_rvalid;
}

extern "C" uint32_t rtl_bridge_get_axi_ram_rdata(void) {
  return top == nullptr ? 0u : top->axi_ram_rdata;
}

extern "C" bool rtl_bridge_get_axi_ram_cpu_arvalid(void) {
  return top != nullptr && top->axi_cpu_ram_arvalid;
}

extern "C" bool rtl_bridge_get_axi_ram_cpu_rready(void) {
  return top != nullptr && top->axi_cpu_ram_rready;
}

extern "C" uint32_t rtl_bridge_get_axi_ram_cpu_araddr(void) {
  return top == nullptr ? 0u : top->axi_cpu_ram_araddr;
}

extern "C" bool rtl_bridge_get_mem_addr_read_unalign(void) {
  return top != nullptr && top->mem_addr_read_unalign;
}

extern "C" bool rtl_bridge_get_mem_addr_write_unalign(void) {
  return top != nullptr && top->mem_addr_write_unalign;
}
