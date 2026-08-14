#include <cassert>
#include <cerrno>
#include <cctype>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <getopt.h>

#include "include/mdb.h"
#include "include/ftrace.h"
#include "include/minirv.h"
#include "sdb/ast.h"
#include "sdb/sdb.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

namespace {

bool batch_mode = false;
bool use_internal_img = false;
const char *image_file = nullptr;
const char *elf_file = nullptr;

void print_usage(const char *program) {
  printf(FMT_YELLOW "Usage:" FMT_NONE " %s [-b] [-d] [-f image] [-e program.elf]"
                   " [image]\n",
         program);
  puts("  -b, --batch       run continuously instead of entering the monitor");
  puts("  -d, --debug       print enabled trace entries while running");
  puts("  -f, --file FILE   load a binary image");
  puts("  -e, --elf FILE    load ELF symbols for ftrace/backtrace");
  puts("  -i, --img         use the built-in internal test image");
}

void print_usage_hint(const char *hint) {
  printf(FMT_YELLOW "usage: %s" FMT_NONE "\n", hint);
}

int cmd_continue(char *args) {
  if (args != nullptr) {
    print_usage_hint("c");
    return 0;
  }
  cpu_exec(UINT64_MAX, false);
  return 0;
}

int cmd_step(char *args) {
  uint64_t n = 1;
  if (args != nullptr) {
    char *end = nullptr;
    errno = 0;
    n = strtoull(args, &end, 0);
    if (errno != 0 || *args == '\0' || *end != '\0' || n == 0) {
      print_usage_hint("si [N], where N is a positive integer");
      return 0;
    }
  }
  cpu_exec(n, true);
  return 0;
}

int cmd_quit(char *args) {
  if (args != nullptr) {
    print_usage_hint("q");
    return 0;
  }
  set_npc_state(SIM_QUIT);
  return 0;
}

int cmd_p(char *args) {
  if (args == nullptr) {
    print_usage_hint("p EXPR");
    return 0;
  }
  ASTNode *result = expr(args);
  if (result == nullptr) {
    printf(FMT_RED "invalid expression" FMT_NONE "\n");
    return 0;
  }
  switch (result->type) {
    case AST_INT: printf(FMT_GREEN "%d" FMT_NONE "\n", result->int_val); break;
    case AST_LONG: printf(FMT_GREEN "0x%llx" FMT_NONE "\n", result->long_val); break;
    case AST_DOUBLE: printf(FMT_GREEN "%f" FMT_NONE "\n", result->dbl_val); break;
    case AST_STRING: printf("%s\n", result->str_val); break;
    default: printf(FMT_RED "invalid expression result" FMT_NONE "\n"); break;
  }
  return 0;
}

int cmd_watchpoint(char *args) {
  if (args == nullptr) {
    print_usage_hint("w EXPR");
    return 0;
  }
  wp_set(args);
  return 0;
}

int cmd_delete_watchpoint(char *args) {
  if (args == nullptr) {
    print_usage_hint("d N");
    return 0;
  }
  char *end = nullptr;
  errno = 0;
  const long number = strtol(args, &end, 10);
  if (errno != 0 || *args == '\0' || *end != '\0' || number < 0 ||
      number > INT32_MAX) {
    print_usage_hint("d N");
    return 0;
  }
  wp_delete(static_cast<int>(number));
  return 0;
}

const char *const reg_abi_names[32] = {
    "zero", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6",
};

void print_registers() {
  for (int i = 0; i < 32; i++) {
    uint32_t value = 0;
    cpu_reg_read(i, &value);
    printf(FMT_CYAN "x%-2d (%-4s)" FMT_NONE ": " FMT_GREEN "0x%08x" FMT_NONE "  ",
           i, reg_abi_names[i], value);
    if (i % 8 == 7) {
      printf("\n");
    }
  }
  printf(FMT_CYAN "pc        " FMT_NONE ": " FMT_GREEN "0x%08x" FMT_NONE "\n",
         cpu_current_pc());
}

int cmd_info(char *args) {
  if (args == nullptr) {
    print_usage_hint("info r | info w");
    return 0;
  }
  if (strcmp(args, "w") == 0) {
    wp_print();
    return 0;
  }
  if (strcmp(args, "r") == 0) {
    print_registers();
    return 0;
  }
  print_usage_hint("info r | info w");
  return 0;
}

int cmd_backtrace(char *args) {
  if (args != nullptr) {
    print_usage_hint("bt");
    return 0;
  }
#ifdef CONFIG_FTRACE
  ftrace_backtrace();
#else
  puts(FMT_YELLOW "ftrace is disabled; enable CONFIG_FTRACE in menuconfig."
                  FMT_NONE);
#endif
  return 0;
}

int cmd_itrace(char *args) {
  if (args != nullptr) {
    print_usage_hint("itrace");
    return 0;
  }
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_dump();
#else
  puts(FMT_YELLOW "itrace is disabled; enable CONFIG_TRACE in menuconfig."
                  FMT_NONE);
#endif
  return 0;
}

int cmd_mtrace(char *args) {
  if (args != nullptr) {
    print_usage_hint("mtrace");
    return 0;
  }
#ifdef CONFIG_MTRACE
  mtrace_dump();
#else
  puts(FMT_YELLOW "mtrace is disabled; enable CONFIG_MTRACE in menuconfig."
                  FMT_NONE);
#endif
  return 0;
}

int cmd_dtrace(char *args) {
  if (args != nullptr) {
    print_usage_hint("dtrace");
    return 0;
  }
#ifdef CONFIG_DTRACE
  dtrace_dump();
#else
  puts(FMT_YELLOW "dtrace is disabled; enable CONFIG_DTRACE in menuconfig."
                  FMT_NONE);
#endif
  return 0;
}

struct Command {
  const char *name;
  const char *description;
  int (*handler)(char *args);
};

int cmd_help(char *args);

const Command commands[] = {
    {"c", "continue execution", cmd_continue},
    {"si", "step N instructions (default 1)", cmd_step},
    {"p", "evaluate expression", cmd_p},
    {"w", "set watchpoint: w EXPR", cmd_watchpoint},
    {"d", "delete watchpoint: d N", cmd_delete_watchpoint},
    {"info", "show registers/watchpoints: info r | info w", cmd_info},
    {"bt", "show ftrace call stack (requires -e ELF)", cmd_backtrace},
    {"itrace", "show the latest instruction trace entries", cmd_itrace},
    {"mtrace", "show the latest physical-memory trace entries", cmd_mtrace},
    {"dtrace", "show the latest device/MMIO trace entries", cmd_dtrace},
    {"q", "quit the simulator", cmd_quit},
    {"help", "show command help", cmd_help},
};

int cmd_help(char *args) {
  if (args == nullptr) {
    for (const Command &command : commands) {
      printf("  " FMT_CYAN "%-6s" FMT_NONE " %s\n", command.name,
             command.description);
    }
    return 0;
  }
  for (const Command &command : commands) {
    if (strcmp(args, command.name) == 0) {
      printf("  " FMT_CYAN "%-6s" FMT_NONE " %s\n", command.name,
             command.description);
      return 0;
    }
  }
  printf(FMT_RED "unknown command '%s'" FMT_NONE "\n", args);
  return 0;
}

void execute_line(char *line) {
  char *cursor = line;
  while (isspace(static_cast<unsigned char>(*cursor))) {
    cursor++;
  }
  if (*cursor == '\0') {
    return;
  }
  char *command_name = cursor;
  while (*cursor != '\0' && !isspace(static_cast<unsigned char>(*cursor))) {
    cursor++;
  }
  if (*cursor != '\0') {
    *cursor++ = '\0';
  }
  while (isspace(static_cast<unsigned char>(*cursor))) {
    cursor++;
  }
  char *args = *cursor == '\0' ? nullptr : cursor;
  if (args != nullptr) {
    char *end = args + strlen(args);
    while (end > args && isspace(static_cast<unsigned char>(end[-1]))) {
      *--end = '\0';
    }
  }

  for (const Command &command : commands) {
    if (strcmp(command_name, command.name) == 0) {
      command.handler(args);
      return;
    }
  }
  printf(FMT_RED "unknown command '%s'" FMT_NONE
                 "; type 'help' for help\n",
         command_name);
}

}  // namespace

void init_mdb(int argc, char **argv) {
  static const option long_options[] = {
      {"batch", no_argument, nullptr, 'b'},
      {"debug", no_argument, nullptr, 'd'},
      {"file", required_argument, nullptr, 'f'},
      {"elf", required_argument, nullptr, 'e'},
      {"img", no_argument, nullptr, 'i'},
      {"help", no_argument, nullptr, 'h'},
      {nullptr, 0, nullptr, 0},
  };

  int option = 0;
  while ((option = getopt_long_only(argc, argv, "bde:f:ih", long_options,
                                    nullptr)) != -1) {
    switch (option) {
      case 'b': batch_mode = true; break;
      case 'd': debug_enable = true; break;
      case 'f': image_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 'i': use_internal_img = true; break;
      case 'h':
        print_usage(argv[0]);
        exit(0);
      default:
        print_usage(argv[0]);
        exit(1);
    }
  }

  if (optind < argc) {
    if (image_file != nullptr || optind + 1 != argc) {
      print_usage(argv[0]);
      exit(1);
    }
    image_file = argv[optind];
  }

  init_sdb();
}

const char *mdb_image_file() {
  return image_file;
}

const char *mdb_elf_file() {
  return elf_file;
}

bool mdb_batch_mode() {
  return batch_mode;
}

bool mdb_use_internal_img() {
  return use_internal_img;
}

void sdb_mainloop() {
  char *line;
  puts(FMT_BOLD FMT_CYAN "MiniRV monitor" FMT_NONE
                        ". Type 'help' for help.");
  char banner[100];
  while (sim_state == SIM_STOP) {
    snprintf(banner, 100,FMT_BOLD FMT_CYAN "(minirv)" FMT_NONE " pc=0x%08x > ", top->rootp->minirv__DOT__pc);
    if ((line=readline(banner))!=NULL) {
        execute_line(line);
        if (*line!='\0') {
            add_history(line);
        }
        free(line);
    }else {
        assert(0);
    }
  }
  return;
}
