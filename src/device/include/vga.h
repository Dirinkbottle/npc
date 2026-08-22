#ifndef NPC_DEVICE_VGA_H
#define NPC_DEVICE_VGA_H

#include <stdint.h>

#define VGA_WIDTH  400u
#define VGA_HEIGHT 300u

#define VGA_CTL_MMIO UINT32_C(0xa0000100)
#define VGA_CTL_SIZE 8u
#define VGA_FB_ADDR  UINT32_C(0xa1000000)

void init_vga(void);
void vga_update_screen(void);
void vga_destroy(void);

#endif
