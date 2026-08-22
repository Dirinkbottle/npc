.section .text
.globl _start
.option norvc
 lui t0, 0xa0000       # t0 = 0xa0000000
    addi t0, t0, 0x3f8    # t0 = 0xa00003f8

    # 加载字符 'b' (ASCII 0x62)
    li t1, 0x62           # 或 addi t1, zero, 0x62

    # 写入内存
    sb t1, 0(t0)