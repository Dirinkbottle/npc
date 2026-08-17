#include "ftrace.h"

#ifdef CONFIG_FTRACE

#include <elf.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "color.h"
#include "cpu.h"

typedef struct {
  uint32_t start;
  uint32_t end;
  char *name;
} FunctionSymbol;

typedef struct {
  const FunctionSymbol *function;
  uint32_t return_pc;
} CallFrame;

typedef struct {
  bool is_call;
  uint32_t pc;
  uint32_t return_pc;
  size_t unwind_count;
  const FunctionSymbol *from;
  const FunctionSymbol *to;
} TraceEvent;

static FunctionSymbol *functions;
static size_t nr_functions;
static size_t cap_functions;

static CallFrame *call_stack;
static size_t nr_frames;
static size_t cap_frames;

static TraceEvent *call_history;
static size_t nr_events;
static size_t cap_events;

static bool grow_array(void **ptr, size_t *capacity,
                       size_t elem_size, size_t required) {
  if (*capacity >= required) {
    return true;
  }
  size_t next = *capacity == 0u ? 32u : *capacity * 2u;
  while (next < required) {
    next *= 2u;
  }
  void *new_ptr = realloc(*ptr, next * elem_size);
  if (new_ptr == NULL) {
    return false;
  }
  *ptr = new_ptr;
  *capacity = next;
  return true;
}

static bool range_ok(size_t file_size, uint64_t offset, uint64_t size) {
  return offset <= file_size && size <= file_size - offset;
}

static bool read_object(const uint8_t *image, size_t image_size,
                        uint64_t offset, void *object, size_t object_size) {
  if (!range_ok(image_size, offset, object_size)) {
    return false;
  }
  memcpy(object, image + offset, object_size);
  return true;
}

static bool read_file(const char *path, uint8_t **image, size_t *image_size) {
  *image = NULL;
  *image_size = 0u;

  FILE *file = fopen(path, "rb");
  if (file == NULL) {
    printf(FMT_YELLOW "ftrace: cannot open ELF '%s'" FMT_NONE "\n", path);
    return false;
  }
  if (fseek(file, 0, SEEK_END) != 0) {
    fclose(file);
    return false;
  }

  const long raw_size = ftell(file);
  if (raw_size < 0 || fseek(file, 0, SEEK_SET) != 0) {
    fclose(file);
    return false;
  }

  const size_t size = (size_t)raw_size;
  uint8_t *buffer = size == 0u ? NULL : malloc(size);
  if (size != 0u && buffer == NULL) {
    fclose(file);
    return false;
  }

  const bool ok = size == 0u || fread(buffer, 1, size, file) == size;
  fclose(file);
  if (!ok) {
    free(buffer);
    printf(FMT_YELLOW "ftrace: failed to read ELF '%s'" FMT_NONE "\n", path);
    return false;
  }

  *image = buffer;
  *image_size = size;
  return true;
}

static bool read_section(const uint8_t *image, size_t image_size,
                         const Elf32_Ehdr *ehdr, uint32_t index,
                         Elf32_Shdr *section) {
  const uint64_t offset = (uint64_t)ehdr->e_shoff +
                          (uint64_t)index * ehdr->e_shentsize;
  return read_object(image, image_size, offset, section, sizeof(*section));
}

static char *copy_string(const char *str, size_t max_len) {
  const void *nul = memchr(str, '\0', max_len);
  if (nul == NULL) {
    return NULL;
  }
  const size_t len = (size_t)((const char *)nul - str);
  char *copy = malloc(len + 1u);
  if (copy == NULL) {
    return NULL;
  }
  memcpy(copy, str, len);
  copy[len] = '\0';
  return copy;
}

static bool push_function(uint32_t start, uint32_t end,
                          const char *name, size_t max_name) {
  if (!grow_array((void **)&functions, &cap_functions,
                  sizeof(*functions), nr_functions + 1u)) {
    return false;
  }
  char *name_copy = copy_string(name, max_name);
  if (name_copy == NULL) {
    return false;
  }
  functions[nr_functions++] = (FunctionSymbol){start, end, name_copy};
  return true;
}

static bool push_frame(const FunctionSymbol *function, uint32_t return_pc) {
  if (!grow_array((void **)&call_stack, &cap_frames,
                  sizeof(*call_stack), nr_frames + 1u)) {
    return false;
  }
  call_stack[nr_frames++] = (CallFrame){function, return_pc};
  return true;
}

static bool push_event(bool is_call, uint32_t pc, uint32_t return_pc,
                       size_t unwind_count, const FunctionSymbol *from,
                       const FunctionSymbol *to) {
  if (!grow_array((void **)&call_history, &cap_events,
                  sizeof(*call_history), nr_events + 1u)) {
    return false;
  }
  call_history[nr_events++] = (TraceEvent){
      is_call, pc, return_pc, unwind_count, from, to,
  };
  return true;
}

static const FunctionSymbol *find_function(uint32_t pc) {
  for (size_t i = 0; i < nr_functions; i++) {
    if (pc >= functions[i].start && pc < functions[i].end) {
      return &functions[i];
    }
  }
  return NULL;
}

bool ftrace_lookup_function(const char *name, uint32_t *start, uint32_t *end) {
  if (name == NULL || start == NULL || end == NULL) {
    return false;
  }
  for (size_t i = 0; i < nr_functions; i++) {
    if (strcmp(functions[i].name, name) == 0) {
      *start = functions[i].start;
      *end = functions[i].end;
      return true;
    }
  }
  return false;
}

static const char *function_name(const FunctionSymbol *function) {
  return function == NULL ? "??" : function->name;
}

static uint32_t function_start(const FunctionSymbol *function) {
  return function == NULL ? 0u : function->start;
}

static uint32_t function_end(const FunctionSymbol *function) {
  return function == NULL ? 0u : function->end;
}

static int compare_function(const void *lhs, const void *rhs) {
  const FunctionSymbol *a = lhs;
  const FunctionSymbol *b = rhs;
  if (a->start < b->start) return -1;
  if (a->start > b->start) return 1;
  return 0;
}

static void print_history_indent(size_t depth) {
  for (size_t i = 0; i < depth * 4u; i++) {
    putchar(' ');
  }
}

static void clear_runtime_history(void) {
  free(call_stack);
  call_stack = NULL;
  nr_frames = 0u;
  cap_frames = 0u;

  free(call_history);
  call_history = NULL;
  nr_events = 0u;
  cap_events = 0u;
}

static void clear_functions(void) {
  for (size_t i = 0; i < nr_functions; i++) {
    free(functions[i].name);
  }
  free(functions);
  functions = NULL;
  nr_functions = 0u;
  cap_functions = 0u;
}

static void record_return(uint32_t pc, uint32_t target_pc) {
  size_t match_index = nr_frames;
  for (size_t i = nr_frames; i > 0u; i--) {
    if (call_stack[i - 1u].return_pc == target_pc) {
      match_index = i - 1u;
      break;
    }
  }

  if (match_index == nr_frames) {
    (void)push_event(false, pc, target_pc, nr_frames,
                     find_function(pc), find_function(target_pc));
    nr_frames = 0u;
    return;
  }

  const CallFrame returning = call_stack[match_index];
  const FunctionSymbol *caller = match_index > 0u
      ? call_stack[match_index - 1u].function
      : find_function(target_pc);
  const size_t unwind_count = nr_frames - match_index;
  (void)push_event(false, pc, target_pc, unwind_count,
                   returning.function, caller);
  nr_frames = match_index;
}

void init_ftrace(const char *elf_file) {
  clear_runtime_history();
  clear_functions();
  if (elf_file == NULL) {
    return;
  }

  uint8_t *image = NULL;
  size_t image_size = 0u;
  if (!read_file(elf_file, &image, &image_size)) {
    return;
  }

  Elf32_Ehdr ehdr = {0};
  if (!read_object(image, image_size, 0u, &ehdr, sizeof(ehdr)) ||
      memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0 ||
      ehdr.e_ident[EI_CLASS] != ELFCLASS32 ||
      ehdr.e_ident[EI_DATA] != ELFDATA2LSB ||
      ehdr.e_shentsize != sizeof(Elf32_Shdr) || ehdr.e_shnum == 0u ||
      !range_ok(image_size, ehdr.e_shoff,
                (uint64_t)ehdr.e_shnum * ehdr.e_shentsize)) {
    printf(FMT_RED "ftrace: '%s' is not a supported 32-bit little-endian ELF"
                   FMT_NONE "\n", elf_file);
    free(image);
    return;
  }

  for (uint32_t section_index = 0; section_index < ehdr.e_shnum;
       section_index++) {
    Elf32_Shdr symtab = {0};
    if (!read_section(image, image_size, &ehdr, section_index, &symtab) ||
        symtab.sh_type != SHT_SYMTAB ||
        symtab.sh_entsize != sizeof(Elf32_Sym) ||
        symtab.sh_link >= ehdr.e_shnum ||
        !range_ok(image_size, symtab.sh_offset, symtab.sh_size)) {
      continue;
    }

    Elf32_Shdr strtab = {0};
    if (!read_section(image, image_size, &ehdr, symtab.sh_link, &strtab) ||
        strtab.sh_type != SHT_STRTAB ||
        !range_ok(image_size, strtab.sh_offset, strtab.sh_size)) {
      continue;
    }

    const uint32_t symbol_count = symtab.sh_size / symtab.sh_entsize;
    for (uint32_t symbol_index = 0; symbol_index < symbol_count;
         symbol_index++) {
      Elf32_Sym symbol = {0};
      const uint64_t symbol_offset = (uint64_t)symtab.sh_offset +
                                     (uint64_t)symbol_index * symtab.sh_entsize;
      if (!read_object(image, image_size, symbol_offset,
                       &symbol, sizeof(symbol)) ||
          ELF32_ST_TYPE(symbol.st_info) != STT_FUNC || symbol.st_size == 0u ||
          symbol.st_name >= strtab.sh_size) {
        continue;
      }

      const uint64_t function_end = (uint64_t)symbol.st_value + symbol.st_size;
      if (function_end > UINT32_MAX) {
        continue;
      }

      const char *name = (const char *)(image + strtab.sh_offset + symbol.st_name);
      const size_t max_name = strtab.sh_size - symbol.st_name;
      if (!push_function(symbol.st_value, (uint32_t)function_end,
                         name, max_name)) {
        printf(FMT_RED "ftrace: out of memory while loading symbols" FMT_NONE "\n");
        free(image);
        clear_functions();
        return;
      }
    }
  }

  free(image);
  if (nr_functions > 0u) {
    qsort(functions, nr_functions, sizeof(*functions), compare_function);
  }

  if (nr_functions == 0u) {
    printf(FMT_YELLOW "ftrace: no STT_FUNC symbols found in '%s'" FMT_NONE "\n",
           elf_file);
  } else {
    printf(FMT_GREEN "ftrace: loaded %zu function symbols from %s" FMT_NONE "\n",
           nr_functions, elf_file);
  }
}

void destroy_ftrace(void) {
  clear_runtime_history();
  clear_functions();
}

void ftrace_step(uint32_t pc, uint32_t inst, uint32_t next_pc) {
  if (nr_functions == 0u) {
    return;
  }

  const uint32_t opcode = inst & 0x7fu;
  const uint32_t rd = (inst >> 7) & 0x1fu;
  const uint32_t rs1 = (inst >> 15) & 0x1fu;
  const int32_t imm_i = (int32_t)inst >> 20;
  const bool is_jal = opcode == 0x6fu;
  const bool is_jalr = opcode == 0x67u && ((inst >> 12) & 0x7u) == 0u;
  const bool is_call = (is_jal || is_jalr) && (rd == 1u || rd == 5u) &&
                       next_pc != pc + 4u;
  const bool is_return = is_jalr && rd == 0u && (rs1 == 1u || rs1 == 5u) &&
                         imm_i == 0 && next_pc != pc + 4u;

  if (is_call) {
    const FunctionSymbol *caller = find_function(pc);
    const FunctionSymbol *callee = find_function(next_pc);
    (void)push_event(true, pc, pc + 4u, 0u, caller, callee);
    (void)push_frame(callee, pc + 4u);
    return;
  }

  if (is_return) {
    record_return(pc, next_pc);
  }
}

void ftrace_backtrace(void) {
  if (nr_functions == 0u) {
    puts(FMT_YELLOW "ftrace is unavailable; start NPC with -e <program.elf>."
                    FMT_NONE);
    return;
  }

  if (nr_frames == 0u) {
    const uint32_t pc = cpu_current_pc();
    const FunctionSymbol *current = find_function(pc);
    if (current == NULL) {
      printf(FMT_CYAN "#0" FMT_NONE "  ? ()@[0x00000000,0x00000000)\n");
    } else {
      printf(FMT_CYAN "#0" FMT_NONE "  " FMT_GREEN "%s" FMT_NONE
                     " ()@[0x%08x,0x%08x)\n",
             current->name, current->start, current->end);
    }
    return;
  }

  for (size_t i = 0; i < nr_frames; i++) {
    const CallFrame *frame = &call_stack[nr_frames - 1u - i];
    if (i == 0u) {
      printf(FMT_CYAN "#%-2zu" FMT_NONE " " FMT_GREEN "%s" FMT_NONE
                     " ()@[0x%08x,0x%08x)\n",
             i, function_name(frame->function), function_start(frame->function),
             function_end(frame->function));
      continue;
    }

    const CallFrame *callee = &call_stack[nr_frames - i];
    const uint32_t call_site = callee->return_pc - 4u;
    printf(FMT_CYAN "#%-2zu" FMT_NONE " 0x%08x in " FMT_GREEN "%s" FMT_NONE
                   " ()@[0x%08x,0x%08x)\n",
           i, call_site, function_name(frame->function),
           function_start(frame->function), function_end(frame->function));
  }
}

void ftrace_dump_history(void) {
  if (nr_events == 0u) {
    return;
  }

  puts(FMT_BOLD FMT_YELLOW "---- FTRACE history ----" FMT_NONE);
  size_t depth = 0u;
  for (size_t i = 0; i < nr_events; i++) {
    const TraceEvent *event = &call_history[i];
    if (event->is_call) {
      depth++;
      print_history_indent(depth);
      printf(FMT_GREEN "CALL:  " FMT_NONE " %s -> %s (pc=0x%08x)\n",
             function_name(event->from), function_name(event->to), event->pc);
      continue;
    }

    print_history_indent(depth);
    printf(FMT_MAGENTA "RETURN:" FMT_NONE " %s -> %s (pc=0x%08x)\n",
           function_name(event->from), function_name(event->to), event->pc);
    if (event->unwind_count >= depth) {
      depth = 0u;
    } else {
      depth -= event->unwind_count;
    }
  }
}

#endif /* CONFIG_FTRACE */
