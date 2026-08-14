#ifndef NPC_TRACE_H
#define NPC_TRACE_H

#include <stdbool.h>
#include <stdint.h>

void init_trace(void);
void trace_begin_step(void);
void trace_print_pending(void);
void trace_dump(void);

void itrace_record(uint32_t pc, uint32_t inst);
void itrace_dump(void);

void mtrace_record(uint32_t addr, uint32_t len, bool is_write, uint32_t data);
void mtrace_dump(void);

void dtrace_record(const char *device, uint32_t addr, uint32_t len,
                   bool is_write, uint32_t data);
void dtrace_dump(void);

#endif
