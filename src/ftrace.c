#include <cstdlib>
#include <elf.h>

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

#include "include/ftrace.h"
#include "include/minirv.h"
#include "assert.h"
#ifdef CONFIG_FTRACE

namespace {

struct FunctionSymbol {
  std::uint32_t start;
  std::uint32_t end;
  std::string name;
};

struct CallFrame {
  const FunctionSymbol *function;
  std::uint32_t return_pc;
};

struct TraceEvent {
  bool is_call;
  std::uint32_t pc;
  std::uint32_t return_pc;
  std::size_t unwind_count;
  const FunctionSymbol *from;
  const FunctionSymbol *to;
};

std::vector<FunctionSymbol> functions;
std::vector<CallFrame> call_stack;
std::vector<TraceEvent> call_history;

bool range_ok(std::size_t file_size, std::uint64_t offset,
              std::uint64_t size) {
  return offset <= file_size && size <= file_size - offset;
}

template <typename T>
bool read_object(const std::vector<std::uint8_t> &image, std::uint64_t offset,
                 T *object) {
  if (!range_ok(image.size(), offset, sizeof(*object))) {
    return false;
  }
  memcpy(object, image.data() + offset, sizeof(*object));
  return true;
}

bool read_file(const char *path, std::vector<std::uint8_t> *image) {
  FILE *file = fopen(path, "rb");
  if (file == nullptr) {
    printf(FMT_YELLOW "ftrace: cannot open ELF '%s'" FMT_NONE "\n", path);
    return false;
  }
  if (fseek(file, 0, SEEK_END) != 0) {
    fclose(file);
    return false;
  }
  const long size = ftell(file);
  if (size < 0 || fseek(file, 0, SEEK_SET) != 0) {
    fclose(file);
    return false;
  }
  image->resize(static_cast<std::size_t>(size));
  const bool ok = image->empty() ||
                  fread(image->data(), 1, image->size(), file) == image->size();
  fclose(file);
  if (!ok) {
    printf(FMT_YELLOW "ftrace: failed to read ELF '%s'" FMT_NONE "\n", path);
  }
  return ok;
}

bool read_section(const std::vector<std::uint8_t> &image, const Elf32_Ehdr &ehdr,
                  std::uint32_t index, Elf32_Shdr *section) {
  const std::uint64_t offset = static_cast<std::uint64_t>(ehdr.e_shoff) +
                               static_cast<std::uint64_t>(index) *
                                   ehdr.e_shentsize;
  return read_object(image, offset, section);
}

const FunctionSymbol *find_function(std::uint32_t pc) {
  for (const FunctionSymbol &function : functions) {
    if (pc >= function.start && pc < function.end) {
      return &function;
    }
  }
  return nullptr;
}

const char *function_name(const FunctionSymbol *function) {
  return function == nullptr ? "??" : function->name.c_str();
}

std::uint32_t function_start(const FunctionSymbol *function) {
  return function == nullptr ? 0 : function->start;
}

std::uint32_t function_end(const FunctionSymbol *function) {
  return function == nullptr ? 0 : function->end;
}

void print_history_indent(std::size_t depth) {
  for (std::size_t i = 0; i < depth * 4; i++) {
    putchar(' ');
  }
}

void record_return(std::uint32_t pc, std::uint32_t target_pc) {
  std::size_t match_index = call_stack.size();
  for (std::size_t i = call_stack.size(); i > 0; i--) {
    if (call_stack[i - 1].return_pc == target_pc) {
      match_index = i - 1;
      break;
    }
  }

  if (match_index == call_stack.size()) {
    // An unmatched return means ftrace missed a call or observed non-local
    // control flow.  Discard only ftrace metadata; simulation continues.
    call_history.push_back({false, pc, target_pc, call_stack.size(),
                            find_function(pc), find_function(target_pc)});
    call_stack.clear(); //已经不可信
    return;
  }

  const CallFrame &returning = call_stack[match_index];
  const FunctionSymbol *caller = match_index > 0
      ? call_stack[match_index - 1].function
      : find_function(target_pc);
  const std::size_t unwind_count = call_stack.size() - match_index;
  call_history.push_back(
      {false, pc, target_pc, unwind_count, returning.function, caller});
  call_stack.erase(call_stack.begin() + match_index, call_stack.end());
}

}  // namespace

void init_ftrace(const char *elf_file) {
  functions.clear();
  call_stack.clear();
  call_history.clear();
  if (elf_file == nullptr) {
    return;
  }

  std::vector<std::uint8_t> image;
  if (!read_file(elf_file, &image)) {
    return;
  }

  Elf32_Ehdr ehdr = {};
  if (!read_object(image, 0, &ehdr) ||
      memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0 ||
      ehdr.e_ident[EI_CLASS] != ELFCLASS32 ||
      ehdr.e_ident[EI_DATA] != ELFDATA2LSB ||
      ehdr.e_shentsize != sizeof(Elf32_Shdr) || ehdr.e_shnum == 0 ||
      !range_ok(image.size(), ehdr.e_shoff,
                static_cast<std::uint64_t>(ehdr.e_shnum) * ehdr.e_shentsize)) {
    printf(FMT_RED "ftrace: '%s' is not a supported 32-bit little-endian ELF"
                   FMT_NONE "\n",
           elf_file);
    return;
  }

  for (std::uint32_t section_index = 0; section_index < ehdr.e_shnum;
       section_index++) {
    Elf32_Shdr symtab = {};
    if (!read_section(image, ehdr, section_index, &symtab) ||
        symtab.sh_type != SHT_SYMTAB || symtab.sh_entsize != sizeof(Elf32_Sym) ||
        symtab.sh_link >= ehdr.e_shnum ||
        !range_ok(image.size(), symtab.sh_offset, symtab.sh_size)) {
      continue;
    }

    Elf32_Shdr strtab = {};
    if (!read_section(image, ehdr, symtab.sh_link, &strtab) ||
        strtab.sh_type != SHT_STRTAB ||
        !range_ok(image.size(), strtab.sh_offset, strtab.sh_size)) {
      continue;
    }

    const std::uint32_t symbol_count = symtab.sh_size / symtab.sh_entsize;
    for (std::uint32_t symbol_index = 0; symbol_index < symbol_count;
         symbol_index++) {
      Elf32_Sym symbol = {};
      const std::uint64_t symbol_offset =
          static_cast<std::uint64_t>(symtab.sh_offset) +
          static_cast<std::uint64_t>(symbol_index) * symtab.sh_entsize;
      if (!read_object(image, symbol_offset, &symbol) ||
          ELF32_ST_TYPE(symbol.st_info) != STT_FUNC || symbol.st_size == 0 ||
          symbol.st_name >= strtab.sh_size) {
        continue;
      }

      const char *name = reinterpret_cast<const char *>(
          image.data() + strtab.sh_offset + symbol.st_name);
      const std::size_t max_name = strtab.sh_size - symbol.st_name;
      const void *nul = memchr(name, '\0', max_name);
      if (nul == nullptr) {
        continue;
      }
      functions.push_back({symbol.st_value, symbol.st_value + symbol.st_size,
                           std::string(name)});
    }
  }

  std::sort(functions.begin(), functions.end(),
            [](const FunctionSymbol &lhs, const FunctionSymbol &rhs) {
              return lhs.start < rhs.start;
            });
  if (functions.empty()) {
    printf(FMT_YELLOW "ftrace: no STT_FUNC symbols found in '%s'" FMT_NONE "\n",
           elf_file);
  } else {
    printf(FMT_GREEN "ftrace: loaded %zu function symbols from %s" FMT_NONE
                     "\n",
           functions.size(), elf_file);
  }
}

void destroy_ftrace() {
  call_history.clear();
  call_stack.clear();
  functions.clear();
}

void ftrace_step(std::uint32_t pc, std::uint32_t inst,
                 std::uint32_t next_pc) {
  if (functions.empty()) {
    return;
  }

  const std::uint32_t opcode = inst & 0x7fu;
  const std::uint32_t rd = (inst >> 7) & 0x1fu;
  const std::uint32_t rs1 = (inst >> 15) & 0x1fu;
  const std::int32_t imm_i = static_cast<std::int32_t>(inst) >> 20;
  const bool is_jal = opcode == 0x6fu;
  const bool is_jalr = opcode == 0x67u && ((inst >> 12) & 0x7u) == 0;
  const bool is_call = (is_jal || is_jalr) && (rd == 1 || rd == 5) &&
                       next_pc != pc + 4;
  const bool is_return = is_jalr && rd == 0 && (rs1 == 1 || rs1 == 5) &&
                         imm_i == 0 && next_pc != pc + 4;

  if (is_call) {
    const FunctionSymbol *caller = find_function(pc);
    const FunctionSymbol *callee = find_function(next_pc);
    call_history.push_back({true, pc, pc + 4, 0, caller, callee});
    call_stack.push_back({callee, pc + 4});
    return;
  }

  if (is_return) {
    record_return(pc, next_pc);
  }
}

void ftrace_backtrace() {
  if (functions.empty()) {
    puts(FMT_YELLOW "ftrace is unavailable; start NPC with -e <program.elf>."
                    FMT_NONE);
    return;
  }
  if (call_stack.empty()) {
    const std::uint32_t pc = cpu_current_pc();
    const FunctionSymbol *current = find_function(pc);
    if (current == nullptr) {
      printf(FMT_CYAN "#0" FMT_NONE "  ? ()@[0x00000000,0x00000000)\n");
    } else {
      printf(FMT_CYAN "#0" FMT_NONE "  " FMT_GREEN "%s" FMT_NONE
                     " ()@[0x%08x,0x%08x)\n",
             current->name.c_str(), current->start, current->end);
    }
    return;
  }
  for (std::size_t i = 0; i < call_stack.size(); i++) {
    const CallFrame &frame = call_stack[call_stack.size() - 1 - i];
    if (i == 0) {
      printf(FMT_CYAN "#%-2zu" FMT_NONE " " FMT_GREEN "%s" FMT_NONE
                     " ()@[0x%08x,0x%08x)\n",
             i, function_name(frame.function), function_start(frame.function),
             function_end(frame.function));
      continue;
    }
    const CallFrame &callee = call_stack[call_stack.size() - i];
    const std::uint32_t call_site = callee.return_pc - 4;
    printf(FMT_CYAN "#%-2zu" FMT_NONE " 0x%08x in " FMT_GREEN "%s" FMT_NONE
                   " ()@[0x%08x,0x%08x)\n",
           i, call_site, function_name(frame.function),
           function_start(frame.function), function_end(frame.function));
  }
}

void ftrace_dump_history() {
  if (call_history.empty()) {
    return;
  }

  puts(FMT_BOLD FMT_YELLOW "---- FTRACE history ----" FMT_NONE);
  std::size_t depth = 0;
  for (const TraceEvent &event : call_history) {
    if (event.is_call) {
      depth++;
      print_history_indent(depth);
      printf(FMT_GREEN "CALL:  " FMT_NONE " %s -> %s (pc=0x%08x)\n",
             function_name(event.from), function_name(event.to), event.pc);
      continue;
    }

    print_history_indent(depth);
    printf(FMT_MAGENTA "RETURN:" FMT_NONE " %s -> %s (pc=0x%08x)\n",
           function_name(event.from), function_name(event.to), event.pc);
    if (event.unwind_count >= depth) {
      depth = 0;
    } else {
      depth -= event.unwind_count;
    }
  }
}

#endif  // CONFIG_FTRACE
