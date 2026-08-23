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


bool rtl_bridge_set_axi_ram_arready(bool value);
bool rtl_bridge_set_axi_ram_rvalid(bool value);
bool rtl_bridge_set_axi_ram_rdata(uint32_t data);
bool rtl_bridge_set_axi_ram_awready(bool value);
bool rtl_bridge_set_axi_ram_wready(bool value);
bool rtl_bridge_set_axi_ram_bvalid(bool value);

bool rtl_bridge_get_axi_ram_arready(void);
bool rtl_bridge_get_axi_ram_rvalid(void);
uint32_t rtl_bridge_get_axi_ram_rdata(void);
bool rtl_bridge_get_axi_ram_cpu_arvalid(void);
bool rtl_bridge_get_axi_ram_cpu_rready(void);
uint32_t rtl_bridge_get_axi_ram_cpu_araddr(void);

bool rtl_bridge_get_axi_ram_cpu_awvalid(void);
uint32_t rtl_bridge_get_axi_ram_cpu_awaddr(void);
bool rtl_bridge_get_axi_ram_cpu_wvalid(void);
uint32_t rtl_bridge_get_axi_ram_cpu_wdata(void);
uint8_t rtl_bridge_get_axi_ram_cpu_wstrb(void);
bool rtl_bridge_get_axi_ram_cpu_bready(void);

bool rtl_bridge_get_mem_addr_read_unalign(void);
bool rtl_bridge_get_mem_addr_write_unalign(void);

#ifdef __cplusplus
}
#endif

#endif
