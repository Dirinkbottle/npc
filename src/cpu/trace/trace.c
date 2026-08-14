void init_trace() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_tail = itrace_pending = 0;
#endif
#ifdef CONFIG_MTRACE
  mtrace_tail = mtrace_pending = 0;
#endif
#ifdef CONFIG_DTRACE
  dtrace_tail = dtrace_pending = 0;
#endif
}

void trace_begin_step() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_pending = itrace_tail;
#endif
#ifdef CONFIG_MTRACE
  mtrace_pending = mtrace_tail;
#endif
#ifdef CONFIG_DTRACE
  dtrace_pending = dtrace_tail;
#endif
}




void trace_print_pending() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  const uint64_t start = itrace_pending > ring_start(itrace_tail)
                             ? itrace_pending
                             : ring_start(itrace_tail);
  for (uint64_t i = start; i < itrace_tail; i++) {
    print_itrace(itrace_ring[i % TRACE_RING_SIZE]);
  }
  itrace_pending = itrace_tail;
#endif
#ifdef CONFIG_MTRACE
  const uint64_t mstart = mtrace_pending > ring_start(mtrace_tail)
                              ? mtrace_pending
                              : ring_start(mtrace_tail);
  for (uint64_t i = mstart; i < mtrace_tail; i++) {
    print_mtrace(mtrace_ring[i % TRACE_RING_SIZE]);
  }
  mtrace_pending = mtrace_tail;
#endif
#ifdef CONFIG_DTRACE
  const uint64_t dstart = dtrace_pending > ring_start(dtrace_tail)
                              ? dtrace_pending
                              : ring_start(dtrace_tail);
  for (uint64_t i = dstart; i < dtrace_tail; i++) {
    print_dtrace(dtrace_ring[i % TRACE_RING_SIZE]);
  }
  dtrace_pending = dtrace_tail;
#endif
}

void trace_dump() {
#if defined(CONFIG_TRACE) || defined(CONFIG_ITRACE)
  itrace_dump();
#endif
#ifdef CONFIG_MTRACE
  mtrace_dump();
#endif
#ifdef CONFIG_DTRACE
  dtrace_dump();
#endif
#ifdef CONFIG_FTRACE
    ftrace_backtrace();
#endif
}

