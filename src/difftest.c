#include "difftest.h"
#include <dlfcn.h>
#include <stdio.h>

void (*difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = nullptr;
void (*difftest_regcpy)(void *dut, bool direction,int) = nullptr;
void (*difftest_exec)(uint64_t n) = nullptr;
void (*difftest_raise_intr)(uint64_t NO) = nullptr;
void (*difftest_init)(int port) = nullptr;

int init_difftest() {
  void *handle = dlopen(NEMU_SO, RTLD_NOW);
  if (handle == nullptr) {
    fprintf(stderr, "dlopen: %s\n", dlerror());
    return -1;
  }

  difftest_memcpy = (void (*)(uint64_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  difftest_regcpy = (void (*)(void *, bool,int))dlsym(handle, "difftest_regcpy");
  difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  difftest_init = (void (*)(int))dlsym(handle, "difftest_init");

  if (!difftest_memcpy || !difftest_regcpy || !difftest_exec ||
      !difftest_raise_intr || !difftest_init) {
    fprintf(stderr, "dlsym failed: %s\n", dlerror());
    return -1;
  }

  difftest_init(0);
  return 0;
}
