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

int exit_good = 0;
uint32_t last_pc = PMEM_BASE;
bool debug_enable = false;
bool skip_one_difftest_exec = false;





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
