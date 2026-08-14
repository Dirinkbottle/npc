#ifndef NPC_DEVICE_H
#define NPC_DEVICE_H

#include <stdint.h>

#define UART_MMIO_BASE UINT32_C(0xa00003f8)
#define UART_MMIO_SIZE 8u

void init_devices(void);
void putch(char ch);

#endif
