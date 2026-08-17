#ifndef NPC_FTRACE_H
#define NPC_FTRACE_H

#include <stdint.h>
#include <stdbool.h>
#include "config.h"

#ifdef CONFIG_FTRACE
void init_ftrace(const char *elf_file);
void destroy_ftrace(void);
void ftrace_step(uint32_t pc, uint32_t inst, uint32_t next_pc);
void ftrace_backtrace(void);
void ftrace_dump_history(void);
bool ftrace_lookup_function(const char *name, uint32_t *start, uint32_t *end);
#else
static inline void init_ftrace(const char *elf_file) { (void)elf_file; }
static inline void destroy_ftrace(void) {}
static inline void ftrace_step(uint32_t pc, uint32_t inst, uint32_t next_pc) {
  (void)pc;
  (void)inst;
  (void)next_pc;
}
static inline void ftrace_backtrace(void) {}
static inline void ftrace_dump_history(void) {}
static inline bool ftrace_lookup_function(const char *name, uint32_t *start,
                                          uint32_t *end) {
  (void)name;
  (void)start;
  (void)end;
  return false;
}
#endif

#endif
