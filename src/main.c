#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <signal.h>
#include "color.h"
#include "cpu.h"
#include "device.h"
#include "device/include/vga.h"
#include "difftest.h"
#include "disasm.h"
#include "ftrace.h"
#include "memory.h"
#include "sdb.h"
#include "trace.h"

void sigint_handler(int sig){
  (void)sig;
  set_npc_state(SIM_STOP);
  return;
}
// 输出学号
void output_marchid(){
  //le byte
  uint32_t mvendorid=0; 
  uint32_t studentid=0;
  if(!cpu_csr_read(MVENDORID, &mvendorid) || !cpu_csr_read(MARCHID, &studentid)){
    printf(ANSI_PRINT("Student id read failed\n",FMT_RED));
    assert(0);
  }
  char ysyx[5]={0};
  for (int i =0;i<4; i++) {
    ysyx[3-i] = (char)(mvendorid &0xff);
    mvendorid>>=8;
  }
  printf("MADE BY " ANSI_PRINT("%s_%u\n",FMT_GREEN),ysyx,studentid);
  return;
}

void output_cycles(void) {
  puts(FMT_BOLD FMT_CYAN "\n========== Simulation statistics ==========" FMT_NONE);
#define TRUE_PREFIX FMT_GREEN "[TRUE]:" FMT_NONE
  printf(TRUE_PREFIX " total cycles                 = %llu\n",
         (unsigned long long)cpu_total_cycle);
  printf(TRUE_PREFIX " total instructions           = %llu\n",
         (unsigned long long)cpu_total_inst);
  printf(TRUE_PREFIX " device MMIO memory reads      = %llu\n",
         (unsigned long long)device_mmio_memory_read);
  printf(TRUE_PREFIX " device MMIO memory writes     = %llu\n",
         (unsigned long long)device_mmio_memory_write);
  printf(TRUE_PREFIX " difftest skipped instructions  = %llu\n",
         (unsigned long long)difftest_skip_count);
  printf(TRUE_PREFIX " difftest executed instructions = %llu\n",
         (unsigned long long)difftest_exec_count);

#ifdef CONFIG_DIFFTEST
  const uint64_t difftest_instruction_count =
      difftest_skip_count + difftest_exec_count;
  if (difftest_instruction_count == cpu_total_inst) {
    printf(FMT_GREEN
           "[TRUE]: difftest_check: skip %llu + exec %llu == %llu"
           FMT_NONE "\n",
           (unsigned long long)difftest_skip_count,
           (unsigned long long)difftest_exec_count,
           (unsigned long long)cpu_total_inst);
  } else {
    printf(FMT_RED
           "[FALSE]: difftest_check: skip %llu + exec %llu != %llu"
           FMT_NONE "\n",
           (unsigned long long)difftest_skip_count,
           (unsigned long long)difftest_exec_count,
           (unsigned long long)cpu_total_inst);
    assert(0);
  }
#endif
  puts(FMT_BOLD FMT_CYAN "============================================" FMT_NONE);
#undef TRUE_PREFIX
}

int main(int argc, char **argv) {
  // 注册ctrl_c信号捕获

  signal(SIGINT, sigint_handler);

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

#ifdef CONFIG_DIFFTEST
  if (init_difftest() != 0) {
    destroy_simulator();
    destroy_ftrace();
    destroy_memory();
    return -1;
  }
  difftest_sync_initial();
#endif


  // 输出学号
  output_marchid();

  if (mdb_batch_mode()) {
    cpu_exec(UINT64_MAX);
  } else {
    sdb_mainloop();
  }

#ifdef CONFIG_FTRACE
  if (get_npc_state() == SIM_END) {
    // ftrace_dump_history();
  }
#endif

  // 输出运行的总周期数
  output_cycles();

  destroy_simulator();
  destroy_ftrace();
  destroy_memory();
  destory_device();
  
  return sim_exit_code();
}
