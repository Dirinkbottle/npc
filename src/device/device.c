#include "device.h"

#include <stdio.h>
#include <sys/time.h>

#include "cpu.h"
#include "./include/keyboard.h"
#include "./include/timer.h"
#include "./include/uart.h"
#include "./include/vga.h"

#define DEVICE_HZ 60u

static uint64_t get_time_us(void) {
  struct timeval now;
  gettimeofday(&now, NULL);
  return (uint64_t)now.tv_sec * 1000000u + (uint64_t)now.tv_usec;
}

void init_devices(void) {
  init_uart();
  init_timer();
  init_keyboard();
  init_vga();
}

void device_update(void) {
  static uint64_t last = 0;
  const uint64_t now = get_time_us();
  if (now - last < 1000000u / DEVICE_HZ) {
    return;
  }
  last = now;

  vga_update_screen();
  keyboard_update();
}


void destory_device(){
  vga_destroy();
}




