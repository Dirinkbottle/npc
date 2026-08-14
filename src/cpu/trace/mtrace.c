
void mtrace_record(uint32_t addr, uint32_t len, bool is_write, uint32_t data) {
#ifdef CONFIG_MTRACE
  mtrace_ring[mtrace_tail % TRACE_RING_SIZE] = {last_pc, addr, len, data,
                                                is_write};
  mtrace_tail++;
#else
  (void)addr;
  (void)len;
  (void)is_write;
  (void)data;
#endif
}
void mtrace_dump() {
#ifdef CONFIG_MTRACE
  puts(FMT_BOLD FMT_GREEN "---- MTRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(mtrace_tail); i < mtrace_tail; i++) {
    print_mtrace(mtrace_ring[i % TRACE_RING_SIZE]);
  }
#endif
}
