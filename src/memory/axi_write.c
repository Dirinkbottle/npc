#include "memory.h"

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>

#include "cpu.h"

/*
 * AXI-Lite RAM write slave.
 *
 * The RTL master currently issues AW first, then W, then waits for B.  READY is
 * held until the master drops VALID, so the C model cannot accidentally create
 * a zero-time handshake between two Verilator evals.
 */
typedef enum AxiWriteState {
  AXI_WRITE_IDLE = 0,
  AXI_WRITE_WAIT_AW,
  AXI_WRITE_ACK_AW,
  AXI_WRITE_WAIT_W,
  AXI_WRITE_ACK_W,
  AXI_WRITE_WAIT_BREADY,
} AxiWriteState;

static AxiWriteState write_state = AXI_WRITE_IDLE;
static uint32_t write_addr = 0;
static uint32_t write_data = 0;
static uint8_t write_strobe = 0;

void pmem_write_axi(void) {
  switch (write_state) {
    case AXI_WRITE_IDLE:
      cpu_axi_set_ram_awready(false);
      cpu_axi_set_ram_wready(false);
      cpu_axi_set_ram_bvalid(false);
      write_state = AXI_WRITE_WAIT_AW;
      break;

    case AXI_WRITE_WAIT_AW:
      if (cpu_axi_get_ram_cpu_awvalid()) {
        write_addr = cpu_axi_get_ram_cpu_awaddr();
        cpu_axi_set_ram_awready(true);
        write_state = AXI_WRITE_ACK_AW;
      }
      break;

    case AXI_WRITE_ACK_AW:
      if (!cpu_axi_get_ram_cpu_awvalid()) {
        cpu_axi_set_ram_awready(false);
        write_state = AXI_WRITE_WAIT_W;
      }
      break;

    case AXI_WRITE_WAIT_W:
      if (cpu_axi_get_ram_cpu_wvalid()) {
        write_data = cpu_axi_get_ram_cpu_wdata();
        write_strobe = cpu_axi_get_ram_cpu_wstrb() & 0x0fu;
        cpu_axi_set_ram_wready(true);
        write_state = AXI_WRITE_ACK_W;
      }
      break;

    case AXI_WRITE_ACK_W:
      if (!cpu_axi_get_ram_cpu_wvalid()) {
        cpu_axi_set_ram_wready(false);
        assert((write_addr & 0x3u) == 0u);
        pmem_write(write_addr, write_data, write_strobe, true);
        cpu_axi_set_ram_bvalid(true);
        write_state = AXI_WRITE_WAIT_BREADY;
      }
      break;

    case AXI_WRITE_WAIT_BREADY:
      if (cpu_axi_get_ram_cpu_bready()) {
        cpu_axi_set_ram_bvalid(false);
        write_state = AXI_WRITE_IDLE;
      }
      break;

    default:
      assert(0 && "invalid AXI write state");
  }
}
