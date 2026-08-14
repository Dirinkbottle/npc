
void itrace_record(uint32_t pc, uint32_t inst) {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_ring[itrace_tail % TRACE_RING_SIZE] = {pc, inst};
  itrace_tail++;
#else
  (void)pc;
  (void)inst;
#endif
}
void itrace_dump() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  puts(FMT_BOLD FMT_CYAN "---- ITRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(itrace_tail); i < itrace_tail; i++) {
    print_itrace(itrace_ring[i % TRACE_RING_SIZE]);
  }

  const uint32_t current_pc = cpu_current_pc();
  uint32_t inst = 0;
  if (!peek_instruction(current_pc, &inst)) {
    printf(FMT_RED "-----> ITRACE 0x%08x: <outside PMEM>" FMT_NONE "\n",
           current_pc);
    return;
  }
  print_current_itrace(current_pc, inst);

  // This is a linear preview only.  It is not a prediction across branches
  // or jumps, and is kept separate from the architectural trace ring.
  for (uint32_t offset = 1; offset <= ITRACE_PREFETCH_SIZE; offset++) {
    const uint32_t prefetch_pc = current_pc + offset * 4;
    if (!peek_instruction(prefetch_pc, &inst)) {
      break;
    }
    print_itrace_prefetch(prefetch_pc, inst);
  }
#endif
}