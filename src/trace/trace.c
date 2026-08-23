#include "trace.h"

#include <stdio.h>

#include "color.h"
#include "cpu.h"
#include "disasm.h"
#include "ftrace.h"
#include "memory.h"

#define TRACE_RING_SIZE 16u
#define ITRACE_PREFETCH_SIZE 3u

typedef struct {
  uint32_t pc;
  uint32_t inst;
} ItraceEntry;

typedef struct {
  uint32_t pc;
  uint32_t addr;
  uint32_t len;
  uint32_t data;
  bool is_write;
} MtraceEntry;

typedef struct {
  uint32_t pc;
  const char *device;
  uint32_t addr;
  uint32_t len;
  uint32_t data;
  bool is_write;
} DtraceEntry;

#ifdef CONFIG_ITRACE
static ItraceEntry itrace_ring[TRACE_RING_SIZE];
static uint64_t itrace_tail;
#endif

#ifdef CONFIG_MTRACE
static MtraceEntry mtrace_ring[TRACE_RING_SIZE];
static uint64_t mtrace_tail;
#endif

#ifdef CONFIG_DTRACE
static DtraceEntry dtrace_ring[TRACE_RING_SIZE];
static uint64_t dtrace_tail;
#endif

#if defined(CONFIG_ITRACE) || defined(CONFIG_MTRACE) || defined(CONFIG_DTRACE)
static uint64_t ring_start(uint64_t tail) {
  return tail > TRACE_RING_SIZE ? tail - TRACE_RING_SIZE : 0u;
}
#endif

#if defined(CONFIG_ITRACE)
static void format_disassembly(uint32_t pc, uint32_t inst,
                               char *text, size_t size) {
  uint8_t code[4] = {
      (uint8_t)inst,
      (uint8_t)(inst >> 8),
      (uint8_t)(inst >> 16),
      (uint8_t)(inst >> 24),
  };
  disassemble(text, (int)size, pc, code, (int)sizeof(code));
}

static void print_itrace(const ItraceEntry *entry) {
  char text[128] = {0};
  format_disassembly(entry->pc, entry->inst, text, sizeof(text));
  printf(FMT_CYAN "ITRACE" FMT_NONE " 0x%08x: %08x\t%s\n",
         entry->pc, entry->inst, text);
}

static void print_current_itrace(uint32_t pc, uint32_t inst) {
  char text[128] = {0};
  format_disassembly(pc, inst, text, sizeof(text));
  printf(FMT_BOLD FMT_RED "-----> NEXT_INST" FMT_NONE
         " ITRACE 0x%08x: %08x\t%s\n",
         pc, inst, text);
}

static void print_itrace_prefetch(uint32_t pc, uint32_t inst) {
  char text[128] = {0};
  format_disassembly(pc, inst, text, sizeof(text));
  printf(FMT_DIM "ITRACE 0x%08x: %08x\t%s" FMT_NONE "\n", pc, inst, text);
}
#endif

#ifdef CONFIG_MTRACE
static void print_mtrace(const MtraceEntry *entry) {
  const char *dir_color = entry->is_write ? FMT_RED : FMT_GREEN;
  const char *dir_text = entry->is_write ? "write" : "read ";
  printf(FMT_GREEN "MTRACE" FMT_NONE " pc=0x%08x %s%s" FMT_NONE
                   " 0x%08x len=%u data=0x%08x\n",
         entry->pc, dir_color, dir_text, entry->addr, entry->len, entry->data);
}
#endif

#ifdef CONFIG_DTRACE
static void print_dtrace(const DtraceEntry *entry) {
  const char *dir_color = entry->is_write ? FMT_RED : FMT_GREEN;
  const char *dir_text = entry->is_write ? "write" : "read ";
  printf(FMT_MAGENTA "DTRACE" FMT_NONE " pc=0x%08x " FMT_CYAN "%s" FMT_NONE
                     " %s%s" FMT_NONE " 0x%08x len=%u data=0x%08x\n",
         entry->pc, entry->device, dir_color, dir_text,
         entry->addr, entry->len, entry->data);
}
#endif

void init_trace(void) {
#ifdef CONFIG_ITRACE
  itrace_tail = 0;
#endif
#ifdef CONFIG_MTRACE
  mtrace_tail = 0;
#endif
#ifdef CONFIG_DTRACE
  dtrace_tail = 0;
#endif
}

void trace_dump(void) {
  itrace_dump();
  mtrace_dump();
  dtrace_dump();
#ifdef CONFIG_FTRACE
  ftrace_backtrace();
#endif
}

void itrace_record(uint32_t pc, uint32_t inst) {
#ifdef CONFIG_ITRACE
  itrace_ring[itrace_tail % TRACE_RING_SIZE] = (ItraceEntry){pc, inst};
  itrace_tail++;
#else
  (void)pc;
  (void)inst;
#endif
}

void itrace_print(uint32_t pc, uint32_t inst) {
#ifdef CONFIG_ITRACE
  print_itrace(&(ItraceEntry){pc, inst});
#else
  (void)pc;
  (void)inst;
#endif
}

void itrace_dump(void) {
#ifdef CONFIG_ITRACE
  puts(FMT_BOLD FMT_CYAN "---- ITRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(itrace_tail); i < itrace_tail; i++) {
    print_itrace(&itrace_ring[i % TRACE_RING_SIZE]);
  }

  const uint32_t current_pc = cpu_current_pc();
  uint32_t inst = 0;
  if (!debug_pmem_read(current_pc, 4u, &inst)) {
    printf(FMT_RED "-----> ITRACE 0x%08x: <outside PMEM>" FMT_NONE "\n",
           current_pc);
    return;
  }
  print_current_itrace(current_pc, inst);

  for (uint32_t offset = 1; offset <= ITRACE_PREFETCH_SIZE; offset++) {
    const uint32_t prefetch_pc = current_pc + offset * 4u;
    if (!debug_pmem_read(prefetch_pc, 4u, &inst)) {
      break;
    }
    print_itrace_prefetch(prefetch_pc, inst);
  }
#endif
}

void mtrace_record(uint32_t addr, uint32_t len, bool is_write, uint32_t data) {
#ifdef CONFIG_MTRACE
  mtrace_ring[mtrace_tail % TRACE_RING_SIZE] =
      (MtraceEntry){memory_last_pc(), addr, len, data, is_write};
  mtrace_tail++;
#else
  (void)addr;
  (void)len;
  (void)is_write;
  (void)data;
#endif
}

void mtrace_dump(void) {
#ifdef CONFIG_MTRACE
  puts(FMT_BOLD FMT_GREEN "---- MTRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(mtrace_tail); i < mtrace_tail; i++) {
    print_mtrace(&mtrace_ring[i % TRACE_RING_SIZE]);
  }
#endif
}

void dtrace_record(const char *device, uint32_t addr, uint32_t len,
                   bool is_write, uint32_t data) {
#ifdef CONFIG_DTRACE
  dtrace_ring[dtrace_tail % TRACE_RING_SIZE] =
      (DtraceEntry){memory_last_pc(), device, addr, len, data, is_write};
  dtrace_tail++;
#else
  (void)device;
  (void)addr;
  (void)len;
  (void)is_write;
  (void)data;
#endif
}

void dtrace_dump(void) {
#ifdef CONFIG_DTRACE
  puts(FMT_BOLD FMT_MAGENTA "---- DTRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(dtrace_tail); i < dtrace_tail; i++) {
    print_dtrace(&dtrace_ring[i % TRACE_RING_SIZE]);
  }
#endif
}
