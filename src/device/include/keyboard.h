#ifndef NPC_DEVICE_KEYBOARD_H
#define NPC_DEVICE_KEYBOARD_H

#include <stdint.h>

#define KEYBOARD_MMIO_BASE UINT32_C(0xa0000060)
#define KEYBOARD_MMIO_SIZE 4u

void init_keyboard(void);
void keyboard_update(void);

#endif
