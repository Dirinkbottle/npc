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


static void difftest_sync_initial() {
  difftest_cpu_state state = {};
  for (int i = 0; i < 32; i++) {
    uint32_t v = 0;
    cpu_reg_read(i, &v);
    state.gpr[i] = v;
  }
  state.pc = cpu_current_pc();
  difftest_regcpy(&state, DIFFTEST_TO_REF,sizeof(state.pc));

  if (pmem_image_size() > 0) {
    difftest_memcpy(PMEM_BASE, pmem_space(), pmem_image_size(), DIFFTEST_TO_REF);
  }
}

// `difftest_regcpy()` transfers the complete architectural state in the
// shared RV32 ABI: x0..x31 plus the PC.  It does not transfer PMEM; an MMIO
// instruction has not modified PMEM, so there is no PMEM range to copy here.
static void difftest_sync_dut_state_to_ref() {
  difftest_cpu_state dut_state = {};
  for (int i = 0; i < 32; i++) {
    cpu_reg_read(i, &dut_state.gpr[i]);
  }
  dut_state.pc = cpu_current_pc();
  difftest_regcpy(&dut_state, DIFFTEST_TO_REF, sizeof(dut_state.pc));
}

static void difftest_print_mismatch_header(uint32_t pc, uint32_t inst) {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  uint8_t code[4] = {
      static_cast<uint8_t>(inst), static_cast<uint8_t>(inst >> 8),
      static_cast<uint8_t>(inst >> 16), static_cast<uint8_t>(inst >> 24),
  };
  char text[128] = {};
  disassemble(text, sizeof(text), pc, code, sizeof(code));
  printf(FMT_BOLD FMT_RED "=== difftest mismatch @ pc = 0x%08x: %08x  %s ===" FMT_NONE
         "\n",
         pc, inst, text);
#else
  printf(FMT_BOLD FMT_RED "=== difftest mismatch @ pc = 0x%08x: %08x ===" FMT_NONE
         "\n",
         pc, inst);
#endif
}

static void difftest_stepone(uint32_t pc, uint32_t inst) {
  if (skip_one_difftest_exec) {
    skip_one_difftest_exec = false;

    // The DUT has completed an MMIO access.  NEMU cannot reproduce host
    // device state, so do not execute it there; resume from DUT CPU state.
    difftest_sync_dut_state_to_ref();
    return;
  }

  difftest_exec(1);
  difftest_cpu_state ref_state = {};
  difftest_regcpy(&ref_state, DIFFTEST_TO_DUT, sizeof(ref_state.pc));

  bool header_printed = false;
  for (int i = 0; i < 32; i++) {
    uint32_t dut_val = 0;
    cpu_reg_read(i, &dut_val);
    const uint32_t ref_val = ref_state.gpr[i];
    if (dut_val != ref_val) {
      if (!header_printed) {
        difftest_print_mismatch_header(pc, inst);
        header_printed = true;
      }
      printf("  " FMT_BOLD FMT_CYAN "x%-2d" FMT_NONE
             "  " FMT_RED "DUT = 0x%08x" FMT_NONE
             "  " FMT_GREEN "REF = 0x%08x" FMT_NONE "\n",
             i, dut_val, ref_val);
      set_npc_state(SIM_ABORT);
    }
  }

  const uint32_t dut_pc = cpu_current_pc();
  const uint32_t ref_pc = ref_state.pc;
  if (dut_pc != ref_pc) {
    if (!header_printed) {
      difftest_print_mismatch_header(pc, inst);
      header_printed = true;
    }
    printf("  " FMT_BOLD FMT_CYAN "pc " FMT_NONE
           "  " FMT_RED "DUT = 0x%08x" FMT_NONE
           "  " FMT_GREEN "REF = 0x%08x" FMT_NONE "\n",
           dut_pc, ref_pc);
  }
}