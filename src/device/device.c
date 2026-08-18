#include "device.h"

#include <stdio.h>
#include "./include/timer.h"
#include "./include/uart.h"


void init_devices(void) {
  init_uart();
  init_timer();
}




