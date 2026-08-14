#ifndef __DIFFTEST__
#define __DIFFTEST__
#define NEMU_SO "/home/inkbottle/othersrc/ysyx/ysyx-workbench/ics-pa/nemu/build/riscv32-nemu-interpreter-so"
#include <stdint.h>
#include <stddef.h>
extern bool skip_one_difftest_exec;
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

struct difftest_cpu_state {
  uint32_t gpr[32];
  uint32_t pc;
};

extern void (*difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction);
extern void (*difftest_regcpy)(void *dut, bool direction,int);
extern void (*difftest_exec)(uint64_t n);
extern void (*difftest_raise_intr)(uint64_t NO);
extern void (*difftest_init)(int port);

int init_difftest();

#endif
