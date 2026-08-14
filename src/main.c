#include <stdint.h>
#include <stdio.h>

#include "color.h"
#include "cpu.h"
#include "device.h"
#include "difftest.h"
#include "disasm.h"
#include "ftrace.h"
#include "memory.h"
#include "sdb.h"
#include "trace.h"

int main(int argc, char **argv) {
  init_mdb(argc, argv);

  if (mdb_use_internal_img()) {
    printf(FMT_RED "warning: using built-in img program" FMT_NONE "\n");
    if (!init_internal_img()) {
      return -1;
    }
  } else if (!init_memory(mdb_image_file())) {
    return -1;
  }

  init_devices();
  init_trace();

#ifdef CONFIG_ITRACE
  init_disasm();
#endif

  init_ftrace(mdb_elf_file());

  if (!init_simulator(argc, argv)) {
    destroy_ftrace();
    destroy_memory();
    return -1;
  }

  if (init_difftest() != 0) {
    destroy_simulator();
    destroy_ftrace();
    destroy_memory();
    return -1;
  }
  difftest_sync_initial();

  if (mdb_batch_mode()) {
    cpu_exec(UINT64_MAX, false);
  } else {
    sdb_mainloop();
  }

#ifdef CONFIG_FTRACE
  if (get_npc_state() == SIM_END) {
    ftrace_dump_history();
  }
#endif

  destroy_simulator();
  destroy_ftrace();
  destroy_memory();
  return sim_exit_code();
}
