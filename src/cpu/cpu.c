#include "cpu.h"

#include <stdint.h>
#include <stdio.h>

#include "color.h"
#include "config.h"
#include "difftest.h"
#include "ftrace.h"
#include "memory.h"
#include "rtl_bridge.h"
#include "sdb.h"
#include "trace.h"
#include "device.h"

static SimState sim_state = SIM_STOP;
static int exit_good = 0;
uint64_t cpu_total_cycle = 0;

void set_npc_state(SimState state) { sim_state = state; }
SimState get_npc_state(void) { return sim_state; }
void sim_abort(void) {
  if (sim_state != SIM_END) {
    sim_state = SIM_ABORT;
    exit_good = -1;
  }
}
bool sim_is_running(void) { return sim_state == SIM_RUNNING; }
int sim_exit_code(void) { return exit_good; }

bool init_simulator(int argc, char **argv) { return rtl_bridge_init(argc, argv); }
void destroy_simulator(void) { rtl_bridge_destroy(); }

uint32_t cpu_current_pc(void) {
  const uint32_t pc = rtl_bridge_pc();
  return pc == 0u ? PMEM_BASE : pc;
}

bool cpu_reg_read(uint32_t index, uint32_t *value) { return rtl_bridge_reg_read(index, value); }
bool cpu_csr_read(uint32_t index, uint32_t *value) { return rtl_bridge_csr_read(index, value); }
bool cpu_csr_write(uint32_t index, uint32_t value) { return rtl_bridge_csr_write(index, value); }

bool cpu_axi_set_ram_arready(bool value) { return rtl_bridge_set_axi_ram_arready(value); }
bool cpu_axi_set_ram_rvalid(bool value) { return rtl_bridge_set_axi_ram_rvalid(value); }
bool cpu_axi_set_ram_rdata(uint32_t data) { return rtl_bridge_set_axi_ram_rdata(data); }
bool cpu_axi_set_ram_awready(bool value) { return rtl_bridge_set_axi_ram_awready(value); }
bool cpu_axi_set_ram_wready(bool value) { return rtl_bridge_set_axi_ram_wready(value); }
bool cpu_axi_set_ram_bvalid(bool value) { return rtl_bridge_set_axi_ram_bvalid(value); }

bool cpu_axi_get_ram_arready(void) { return rtl_bridge_get_axi_ram_arready(); }
bool cpu_axi_get_ram_rvalid(void) { return rtl_bridge_get_axi_ram_rvalid(); }
uint32_t cpu_axi_get_ram_rdata(void) { return rtl_bridge_get_axi_ram_rdata(); }
bool cpu_axi_get_ram_cpu_arvalid(void) { return rtl_bridge_get_axi_ram_cpu_arvalid(); }
bool cpu_axi_get_ram_cpu_rready(void) { return rtl_bridge_get_axi_ram_cpu_rready(); }
uint32_t cpu_axi_get_ram_cpu_araddr(void) { return rtl_bridge_get_axi_ram_cpu_araddr(); }

bool cpu_axi_get_ram_cpu_awvalid(void) { return rtl_bridge_get_axi_ram_cpu_awvalid(); }
uint32_t cpu_axi_get_ram_cpu_awaddr(void) { return rtl_bridge_get_axi_ram_cpu_awaddr(); }
bool cpu_axi_get_ram_cpu_wvalid(void) { return rtl_bridge_get_axi_ram_cpu_wvalid(); }
uint32_t cpu_axi_get_ram_cpu_wdata(void) { return rtl_bridge_get_axi_ram_cpu_wdata(); }
uint8_t cpu_axi_get_ram_cpu_wstrb(void) { return rtl_bridge_get_axi_ram_cpu_wstrb(); }
bool cpu_axi_get_ram_cpu_bready(void) { return rtl_bridge_get_axi_ram_cpu_bready(); }

void ebreak(void) {
  uint32_t a0 = 0;
  (void)cpu_reg_read(10u, &a0);
  exit_good = a0 == 0u ? 0 : 1;
  sim_state = SIM_END;

  const char *color = a0 == 0u ? FMT_GREEN : FMT_RED;
  printf("%s%s%s a0:%u\n", color,
         a0 == 0u ? "HIT GOOD TRAP!" : "HIT BAD TRAP!", FMT_NONE, a0);
}

static void exec_once(bool view_trace) {
  rtl_bridge_set_clock(false);
  rtl_bridge_eval();

  const uint32_t pc = rtl_bridge_pc();
  const uint32_t inst = rtl_bridge_inst();
  

  if (view_trace) {
    itrace_print(pc, inst);
  }

  rtl_bridge_set_clock(true);
  rtl_bridge_eval(); //上升沿才有可能更新pc

  uint32_t new_pc = rtl_bridge_pc();
  if (new_pc!=pc) {
    itrace_record(pc, inst);
  }else {
    // 是旧指令或者无效,跳过这条指令执行
    difftest_skip_ref();
  }

#ifdef CONFIG_DIFFTEST
  difftest_step(pc, inst);
#endif
  ftrace_step(pc, inst, cpu_current_pc());
  if (fbreakpoint_check(cpu_current_pc())) {
    set_npc_state(SIM_STOP);
  }

  if (sim_is_running() && wp_scan() > 0) {
    set_npc_state(SIM_STOP);
  }
}

static void cpu_update_total_cycle(void) {
  uint32_t mcycle = 0;
  uint32_t mcycleh = 0;
  if (!cpu_csr_read(0xb00u, &mcycle) || !cpu_csr_read(0xb80u, &mcycleh)) {
    return;
  }
  cpu_total_cycle = ((uint64_t)mcycleh << 32) | mcycle;
}

void cpu_exec(uint64_t n) {
  const bool view_trace = n < 10u && n > 0u;
  if (sim_state == SIM_END || sim_state == SIM_ABORT || sim_state == SIM_QUIT) {
    cpu_update_total_cycle();
    return;
  }

  sim_state = SIM_RUNNING;
  while (n > 0 && sim_is_running()) {
    exec_once(view_trace);
    device_update();
    n--;
  }

  cpu_update_total_cycle();

  if (sim_is_running()) {
    sim_state = SIM_STOP;
  }
}
