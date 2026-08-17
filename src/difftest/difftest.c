#include "difftest.h"

#include <dlfcn.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#include "color.h"
#include "cpu.h"
#include "disasm.h"
#include "memory.h"

#ifndef NPC_NEMU_SO
#define NPC_NEMU_SO "/home/inkbottle/othersrc/ysyx/ysyx-workbench/ics-pa/nemu/build/riscv32-nemu-interpreter-so"
#endif

enum {
  DIFFTEST_TO_DUT,
  DIFFTEST_TO_REF,
};

enum {
  CSR_MSTATUS  = 0x300,
  CSR_MTVEC    = 0x305,
  CSR_MSCRATCH = 0x340,
  CSR_MEPC     = 0x341,
  CSR_MCAUSE   = 0x342,
};

static const uint32_t difftest_csr_addrs[] = {
    CSR_MSTATUS,
    CSR_MTVEC,
    CSR_MSCRATCH,
    CSR_MEPC,
    CSR_MCAUSE,
};

#define NR_DIFFTEST_CSR \
  ((uint32_t)(sizeof(difftest_csr_addrs) / sizeof(difftest_csr_addrs[0])))

typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
  uint32_t csr[NR_DIFFTEST_CSR];
} DifftestCpuState;

static void (*ref_memcpy)(uint64_t addr, void *buf, size_t n, bool direction);
static void (*ref_regcpy)(void *dut, bool direction, int size);
static void (*ref_exec)(uint64_t n);
static void (*ref_raise_intr)(uint64_t no);
static void (*ref_init)(int port);
static bool skip_ref_once;

static bool load_symbol(void *handle, void *target, const char *name) {
  void *symbol = dlsym(handle, name);
  if (symbol == NULL) {
    return false;
  }
  *(void **)target = symbol;
  return true;
}

int init_difftest(void) {
  void *handle = dlopen(NPC_NEMU_SO, RTLD_NOW);
  if (handle == NULL) {
    fprintf(stderr, "dlopen: %s\n", dlerror());
    return -1;
  }

  if (!load_symbol(handle, &ref_memcpy, "difftest_memcpy") ||
      !load_symbol(handle, &ref_regcpy, "difftest_regcpy") ||
      !load_symbol(handle, &ref_exec, "difftest_exec") ||
      !load_symbol(handle, &ref_raise_intr, "difftest_raise_intr") ||
      !load_symbol(handle, &ref_init, "difftest_init")) {
    fprintf(stderr, "dlsym failed: %s\n", dlerror());
    return -1;
  }

  ref_init(0);
  skip_ref_once = false;
  return 0;
}

void difftest_skip_ref(void) {
  skip_ref_once = true;
}

static void read_dut_state(DifftestCpuState *state) {
  for (uint32_t i = 0; i < 32u; i++) {
    state->gpr[i] = 0u;
    (void)cpu_reg_read(i, &state->gpr[i]);
  }
  state->pc = cpu_current_pc();
  for (uint32_t i = 0; i < NR_DIFFTEST_CSR; i++) {
    state->csr[i] = 0u;
    (void)cpu_csr_read(difftest_csr_addrs[i], &state->csr[i]);
  }
}

void difftest_sync_initial(void) {
  DifftestCpuState state = {0};
  read_dut_state(&state);
  ref_regcpy(&state, DIFFTEST_TO_REF, (int)sizeof(state.pc));

  if (pmem_image_size() > 0u) {
    ref_memcpy(PMEM_BASE, pmem_space(), pmem_image_size(), DIFFTEST_TO_REF);
  }
}

static void sync_dut_state_to_ref(void) {
  DifftestCpuState state = {0};
  read_dut_state(&state);
  ref_regcpy(&state, DIFFTEST_TO_REF, (int)sizeof(state.pc));
}

static void print_mismatch_header(uint32_t pc, uint32_t inst) {
#ifdef CONFIG_ITRACE
  uint8_t code[4] = {
      (uint8_t)inst,
      (uint8_t)(inst >> 8),
      (uint8_t)(inst >> 16),
      (uint8_t)(inst >> 24),
  };
  char text[128] = {0};
  disassemble(text, (int)sizeof(text), pc, code, (int)sizeof(code));
  printf(FMT_BOLD FMT_RED
         "=== difftest mismatch @ pc = 0x%08x: %08x  %s ===" FMT_NONE "\n",
         pc, inst, text);
#else
  printf(FMT_BOLD FMT_RED
         "=== difftest mismatch @ pc = 0x%08x: %08x ===" FMT_NONE "\n",
         pc, inst);
#endif
}

void difftest_step(uint32_t pc, uint32_t inst) {
  if (skip_ref_once) {
    skip_ref_once = false;
    sync_dut_state_to_ref();
    return;
  }

  ref_exec(1);

  DifftestCpuState ref_state = {0};
  ref_regcpy(&ref_state, DIFFTEST_TO_DUT, (int)sizeof(ref_state.pc));

  bool header_printed = false;
  for (uint32_t i = 0; i < 32u; i++) {
    uint32_t dut_value = 0u;
    (void)cpu_reg_read(i, &dut_value);
    if (dut_value == ref_state.gpr[i]) {
      continue;
    }

    // 这里就没匹配
    if (!header_printed) {
      print_mismatch_header(pc, inst);
      header_printed = true;
    }
    printf("  " FMT_BOLD FMT_CYAN "x%-2u" FMT_NONE
           "  " FMT_RED "DUT = 0x%08x" FMT_NONE
           "  " FMT_GREEN "REF = 0x%08x" FMT_NONE "\n",
           i, dut_value, ref_state.gpr[i]);
    sim_abort();
  }

  for (uint32_t i = 0; i < NR_DIFFTEST_CSR; i++) {
    uint32_t dut_value = 0u;
    (void)cpu_csr_read(difftest_csr_addrs[i], &dut_value);
    if (dut_value == ref_state.csr[i]) {
      continue;
    }

    if (!header_printed) {
      print_mismatch_header(pc, inst);
      header_printed = true;
    }
    printf("  " FMT_BOLD FMT_CYAN "csr_%03x" FMT_NONE
           "  " FMT_RED "DUT = 0x%08x" FMT_NONE
           "  " FMT_GREEN "REF = 0x%08x" FMT_NONE "\n",
           difftest_csr_addrs[i], dut_value, ref_state.csr[i]);
    sim_abort();
  }

  const uint32_t dut_pc = cpu_current_pc();
  if (dut_pc != ref_state.pc) {
    if (!header_printed) {
      print_mismatch_header(pc, inst);
    }
    printf("  " FMT_BOLD FMT_CYAN "pc " FMT_NONE
           "  " FMT_RED "DUT = 0x%08x" FMT_NONE
           "  " FMT_GREEN "REF = 0x%08x" FMT_NONE "\n",
           dut_pc, ref_state.pc);
    sim_abort();
  }
}
