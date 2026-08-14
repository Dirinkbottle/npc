
void dtrace_record(const MemoryRegion *map, uint32_t addr, uint32_t len,
                   bool is_write, uint32_t data) {
#ifdef CONFIG_DTRACE
  dtrace_ring[dtrace_tail % TRACE_RING_SIZE] = {last_pc, map->name, addr,
                                                len, data, is_write};
  dtrace_tail++;
#else
  (void)map;
  (void)addr;
  (void)len;
  (void)is_write;
  (void)data;
#endif
}
void dtrace_dump() {
#ifdef CONFIG_DTRACE
  puts(FMT_BOLD FMT_MAGENTA "---- DTRACE (latest) ----" FMT_NONE);
  for (uint64_t i = ring_start(dtrace_tail); i < dtrace_tail; i++) {
    print_dtrace(dtrace_ring[i % TRACE_RING_SIZE]);
  }
#endif
}
