#ifndef NPC_DEVICE_TIMER_H
#define NPC_DEVICE_TIMER_H

#include <stdint.h>

#define RTC_MMIO_BASE UINT32_C(0xa0000048)
#define RTC_MMIO_SIZE 8u

void init_timer(void);

#endif
