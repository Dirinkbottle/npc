#ifndef NPC_CSRC_COLOR_H
#define NPC_CSRC_COLOR_H

// ANSI SGR color codes, usable from both C and C++ translation units.
// They are plain string literals so they can be concatenated directly with
// printf format strings:
//
//   printf(FMT_RED "error" FMT_NONE ": %s\n", detail);
//
// Both ANSI_PRINT() and ANSI_FMT() wrap a literal in a color and reset it.
#define FMT_NONE    "\033[0m"
#define FMT_RESET   "\033[0m"
#define FMT_BOLD    "\033[1m"
#define FMT_DIM     "\033[2m"
#define FMT_RED     "\033[31m"
#define FMT_GREEN   "\033[32m"
#define FMT_YELLOW  "\033[33m"
#define FMT_BLUE    "\033[34m"
#define FMT_MAGENTA "\033[35m"
#define FMT_CYAN    "\033[36m"

#define ANSI_PRINT(str, color) color str FMT_NONE
#define ANSI_FMT(str, color) color str FMT_NONE

#endif
