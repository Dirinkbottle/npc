#ifndef NPC_VERILATOR_RTL_BRIDGE_H
#define NPC_VERILATOR_RTL_BRIDGE_H

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

bool rtl_bridge_init(int argc, char **argv);
void rtl_bridge_destroy(void);

void rtl_bridge_set_clock(bool high);
void rtl_bridge_eval(void);

uint32_t rtl_bridge_pc(void);
uint32_t rtl_bridge_inst(void);
bool rtl_bridge_invalid(void);
bool rtl_bridge_reg_read(uint32_t index, uint32_t *value);
bool rtl_bridge_csr_read(uint32_t index, uint32_t *value);
bool rtl_bridge_csr_write(uint32_t index, uint32_t value);

#ifdef __cplusplus
}
#endif

#endif
