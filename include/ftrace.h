#ifndef NPC_CSRC_FTRACE_H
#define NPC_CSRC_FTRACE_H

#include <cstdint>
#include "common.h"

#ifdef CONFIG_FTRACE
// Ftrace is active only after an ELF file is supplied with `-e ELF`.
// It observes already-committed control-flow instructions and never affects
// the RTL's execution.
void init_ftrace(const char *elf_file);
void destroy_ftrace();
void ftrace_step(std::uint32_t pc, std::uint32_t inst,
                 std::uint32_t next_pc);
void ftrace_backtrace();
void ftrace_dump_history();
#endif

#endif
