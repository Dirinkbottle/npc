#include "color.h"
#include "cpu.h"
#include "device.h"
#include "memory.h"
#include "./include/uart.h"
#include <stdio.h>
#include <string.h>
static uint8_t uart_space[UART_MMIO_SIZE];



// 串口handler
static void uart_handler(uint32_t offset, uint32_t len, bool is_write) {
  // if (offset != 0u || len != 1u) {
  if (offset != 0u) {
    printf(FMT_RED "unsupported UART access: offset=%u len=%u write=%d" FMT_NONE "\n",
           offset, len, is_write ? 1 : 0);
    sim_abort();
    return;
  }
  if (is_write) {
    putch((char)uart_space[0]);
  }else {
    int ch = getchar();
    uart_space[0] = (char)(ch==EOF ? 0xff :ch);
    return;
  }
  // 伪代码
  
}

void putch(char ch) {
  putchar((unsigned char)ch);
  fflush(stdout);
}

void init_uart(){
    memset(uart_space, 0, sizeof(uart_space));
    add_mmio_map("uart", UART_MMIO_BASE, UART_MMIO_SIZE, uart_space,
                uart_handler);
                return;
}
