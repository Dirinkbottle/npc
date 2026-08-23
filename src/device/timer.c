#include "device.h"
#include "memory.h"
#include "./include/timer.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/time.h>

static uint32_t rtc_space[RTC_MMIO_SIZE / sizeof(uint32_t)];
static uint64_t old_time_us = 0;

static uint64_t get_time_us(void) {
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t now_us = (uint64_t)now.tv_sec * 1000000u +
                    (uint64_t)now.tv_usec;
  if (old_time_us == 0) {
    old_time_us = now_us;
  }
  return now_us - old_time_us;
}

static void timer_handler(uint32_t offset, uint32_t len, bool is_write) {
  (void)len;
  if (offset != 0u && offset != sizeof(uint32_t)) {
    printf("[Device timeer]:Cannot read with offset=0 of offset's size ne uint32_t\n");
    assert(0);
    return;
  }

  if (!is_write && offset == sizeof(uint32_t)) {
    uint64_t us = get_time_us();
    rtc_space[0] = (uint32_t)us;
    rtc_space[1] = (uint32_t)(us >> 32);
  }
}

void init_timer(void) {
  add_mmio_map("rtc", RTC_MMIO_BASE, RTC_MMIO_SIZE,
               (uint8_t *)rtc_space, timer_handler);
}
