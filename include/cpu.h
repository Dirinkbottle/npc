#ifndef NPC_CPU_H
#define NPC_CPU_H

#include <stdbool.h>
#include <stdint.h>
#define MVENDORID 3857
#define MARCHID 3858
typedef enum SimState {
  SIM_STOP,
  SIM_RUNNING,
  SIM_END,
  SIM_ABORT,
  SIM_QUIT,
} SimState;

void set_npc_state(SimState state);
SimState get_npc_state(void);
void sim_abort(void);
bool sim_is_running(void);
int sim_exit_code(void);

bool init_simulator(int argc, char **argv);
void destroy_simulator(void);

uint32_t cpu_current_pc(void);
bool cpu_reg_read(uint32_t index, uint32_t *value);
bool cpu_csr_read(uint32_t index, uint32_t *value);
bool cpu_csr_write(uint32_t index, uint32_t value);
void cpu_exec(uint64_t n);

/* AXI 总线接口：set 写 RTL 输入，get 读 RTL 输出。 */

bool cpu_axi_set_ram_arready(bool value);
bool cpu_axi_set_ram_rvalid(bool value);
bool cpu_axi_set_ram_rdata(uint32_t data);
bool cpu_axi_set_ram_awready(bool value);
bool cpu_axi_set_ram_wready(bool value);
bool cpu_axi_set_ram_bvalid(bool value);

bool cpu_axi_get_ram_arready(void);
bool cpu_axi_get_ram_rvalid(void);
uint32_t cpu_axi_get_ram_rdata(void);
bool cpu_axi_get_ram_cpu_arvalid(void);
bool cpu_axi_get_ram_cpu_rready(void);
uint32_t cpu_axi_get_ram_cpu_araddr(void);

bool cpu_axi_get_ram_cpu_awvalid(void);
uint32_t cpu_axi_get_ram_cpu_awaddr(void);
bool cpu_axi_get_ram_cpu_wvalid(void);
uint32_t cpu_axi_get_ram_cpu_wdata(void);
uint8_t cpu_axi_get_ram_cpu_wstrb(void);
bool cpu_axi_get_ram_cpu_bready(void);

extern uint8_t cpu_clk;
extern uint8_t cpu_rst;
extern uint64_t cpu_total_cycle;
extern uint64_t cpu_total_inst;
void ebreak(void);

#endif
