/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "disasm.h"

#include <assert.h>
#include <dlfcn.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <capstone/capstone.h>

#if defined(__APPLE__)
#define CS_LIB_SUFFIX "5.dylib"
#elif defined(__linux__)
#define CS_LIB_SUFFIX "so.5"
#else
#error "Unsupported platform"
#endif

static size_t (*cs_disasm_fn)(csh handle, const uint8_t *code,
                              size_t code_size, uint64_t address,
                              size_t count, cs_insn **insn);
static void (*cs_free_fn)(cs_insn *insn, size_t count);
static csh cs_handle;

static bool load_symbol(void *handle, void *target, const char *name) {
  void *symbol = dlsym(handle, name);
  if (symbol == NULL) {
    return false;
  }
  *(void **)target = symbol;
  return true;
}

static void *open_capstone_library(void) {
  const char *relative_path = "tools/capstone/repo/libcapstone." CS_LIB_SUFFIX;
  void *handle = dlopen(relative_path, RTLD_LAZY);
  if (handle != NULL) {
    return handle;
  }

#if defined(__linux__)
  char executable[PATH_MAX];
  const ssize_t length = readlink("/proc/self/exe", executable,
                                  sizeof(executable) - 1u);
  if (length > 0) {
    executable[length] = '\0';

    char *build_dir = strrchr(executable, '/');
    if (build_dir != NULL) {
      *build_dir = '\0';
      char *npc_root = strrchr(executable, '/');
      if (npc_root != NULL) {
        *npc_root = '\0';

        char library[PATH_MAX];
        const int written = snprintf(library, sizeof(library), "%s/%s",
                                     executable, relative_path);
        if (written > 0 && (size_t)written < sizeof(library)) {
          handle = dlopen(library, RTLD_LAZY);
          if (handle != NULL) {
            return handle;
          }
        }
      }
    }
  }
#endif

  return NULL;
}

void init_disasm(void) {
  (void)load_symbol;

  void *dl_handle = open_capstone_library();
  assert(dl_handle != NULL);

  cs_err (*cs_open_fn)(cs_arch arch, cs_mode mode, csh *handle) = NULL;
  int re=0;
  (void)re;
  re =load_symbol(dl_handle, &cs_open_fn, "cs_open");
  re &=load_symbol(dl_handle, &cs_disasm_fn, "cs_disasm");
  re &=load_symbol(dl_handle, &cs_free_fn, "cs_free");
  assert(re!=0);

  const cs_err ret = cs_open_fn(CS_ARCH_RISCV, CS_MODE_RISCV32, &cs_handle);
  (void)ret;
  assert(ret == CS_ERR_OK);
}

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
  cs_insn *insn = NULL;
  const size_t count = cs_disasm_fn(cs_handle, code, (size_t)nbyte,
                                    pc, 0u, &insn);
  if (count != 1u) {
    snprintf(str, (size_t)size, "%s", "invalid inst");
    if (count > 0u) {
      cs_free_fn(insn, count);
    }
    return;
  }

  int written = snprintf(str, (size_t)size, "%s", insn->mnemonic);
  if (written < 0) {
    cs_free_fn(insn, count);
    return;
  }

  if (insn->op_str[0] != '\0' && written < size) {
    snprintf(str + written, (size_t)(size - written), "\t%s", insn->op_str);
  }
  cs_free_fn(insn, count);
}
