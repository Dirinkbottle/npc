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

/* DPI-C entry point called by the RTL on EBREAK. */
void ebreak(void);

#endif
