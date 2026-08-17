#include "trace.h"

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "color.h"
#include "ftrace.h"

typedef struct FunctionBreakpoint {
  int no;
  uint32_t addr;
  char *symbol;
  struct FunctionBreakpoint *next;
} FunctionBreakpoint;

static FunctionBreakpoint *head;
static int next_no;

void init_fbreakpoint(void) {
  FunctionBreakpoint *bp = head;
  while (bp != NULL) {
    FunctionBreakpoint *next = bp->next;
    free(bp->symbol);
    free(bp);
    bp = next;
  }
  head = NULL;
  next_no = 0;
}

static bool add_breakpoint(uint32_t addr, const char *symbol) {
  FunctionBreakpoint *bp = malloc(sizeof(*bp));
  if (bp == NULL) {
    printf(FMT_RED "Cannot allocate function breakpoint" FMT_NONE "\n");
    return false;
  }

  bp->symbol = malloc(strlen(symbol) + 1u);
  if (bp->symbol == NULL) {
    free(bp);
    printf(FMT_RED "Cannot allocate function breakpoint name" FMT_NONE "\n");
    return false;
  }
  strcpy(bp->symbol, symbol);
  bp->no = next_no++;
  bp->addr = addr;
  bp->next = head;
  head = bp;

  printf("Breakpoint %d: %s at 0x%08x\n", bp->no, bp->symbol, bp->addr);
  return true;
}

bool fbreakpoint_set_name(const char *name) {
  if (name == NULL || *name == '\0') {
    return false;
  }

  uint32_t start = 0u;
  uint32_t end = 0u;
  if (!ftrace_lookup_function(name, &start, &end)) {
    printf("Function symbol '%s' not found.\n", name);
    return false;
  }

  return add_breakpoint(start, name);
}

bool fbreakpoint_set_addr(uint32_t addr) {
  char symbol[32];
  snprintf(symbol, sizeof(symbol), "0x%08x", addr);
  return add_breakpoint(addr, symbol);
}

bool fbreakpoint_delete(int no) {
  FunctionBreakpoint **link = &head;
  while (*link != NULL && (*link)->no != no) {
    link = &(*link)->next;
  }
  if (*link == NULL) {
    printf("Breakpoint %d not found.\n", no);
    return false;
  }

  FunctionBreakpoint *bp = *link;
  *link = bp->next;
  printf("Deleted breakpoint %d (%s).\n", bp->no, bp->symbol);
  free(bp->symbol);
  free(bp);
  return true;
}

bool fbreakpoint_delete_name(const char *name) {
  if (name == NULL || *name == '\0') {
    return false;
  }

  FunctionBreakpoint **link = &head;
  while (*link != NULL && strcmp((*link)->symbol, name) != 0) {
    link = &(*link)->next;
  }
  if (*link == NULL) {
    printf("Breakpoint '%s' not found.\n", name);
    return false;
  }

  FunctionBreakpoint *bp = *link;
  *link = bp->next;
  printf("Deleted breakpoint %d (%s).\n", bp->no, bp->symbol);
  free(bp->symbol);
  free(bp);
  return true;
}

bool fbreakpoint_delete_addr(uint32_t addr) {
  FunctionBreakpoint **link = &head;
  while (*link != NULL && (*link)->addr != addr) {
    link = &(*link)->next;
  }
  if (*link == NULL) {
    printf("Breakpoint at 0x%08x not found.\n", addr);
    return false;
  }

  FunctionBreakpoint *bp = *link;
  *link = bp->next;
  printf("Deleted breakpoint %d (%s).\n", bp->no, bp->symbol);
  free(bp->symbol);
  free(bp);
  return true;
}

bool fbreakpoint_check(uint32_t pc) {
  for (FunctionBreakpoint *bp = head; bp != NULL; bp = bp->next) {
    if (bp->addr == pc) {
      printf(FMT_BOLD FMT_RED "\nBreakpoint %d hit: %s at 0x%08x" FMT_NONE "\n",
             bp->no, bp->symbol, pc);
      return true;
    }
  }
  return false;
}

void fbreakpoint_print(void) {
  if (head == NULL) {
    puts("No function breakpoints.");
    return;
  }

  for (FunctionBreakpoint *bp = head; bp != NULL; bp = bp->next) {
    printf("Breakpoint %d: %s at 0x%08x\n", bp->no, bp->symbol, bp->addr);
  }
}
