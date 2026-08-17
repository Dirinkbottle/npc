#ifndef NPC_TRACE_H
#define NPC_TRACE_H

#include <stdbool.h>
#include <stdint.h>

void init_trace(void);
void trace_dump(void);

void itrace_record(uint32_t pc, uint32_t inst);
void itrace_print(uint32_t pc, uint32_t inst);
void itrace_dump(void);

void mtrace_record(uint32_t addr, uint32_t len, bool is_write, uint32_t data);
void mtrace_dump(void);

void dtrace_record(const char *device, uint32_t addr, uint32_t len,
                   bool is_write, uint32_t data);
void dtrace_dump(void);

void init_fbreakpoint(void);
bool fbreakpoint_set_name(const char *name);
bool fbreakpoint_set_addr(uint32_t addr);
bool fbreakpoint_delete(int no);
bool fbreakpoint_delete_name(const char *name);
bool fbreakpoint_delete_addr(uint32_t addr);
bool fbreakpoint_check(uint32_t pc);
void fbreakpoint_print(void);

#endif
