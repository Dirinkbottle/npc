.section .text
.globl _start
.option norvc

_start:
    # 测试地址 0x80001000
    lui  x1, 0x80001

    # 写入 0x84838281
    #
    # little endian:
    # +0 = 0x81
    # +1 = 0x82
    # +2 = 0x83
    # +3 = 0x84
    lui  x3, 0x84838
    addi x3, x3, 0x281
    sw   x3, 0(x1)


    # ============================================================
    # LBU lane 0
    # ============================================================
    lbu  x4, 0(x1)
    addi x5, x0, 0x81
    bne  x4, x5, fail10


    # ============================================================
    # LBU lane 1
    # ============================================================
    lbu  x4, 1(x1)
    addi x5, x0, 0x82
    bne  x4, x5, fail11


    # ============================================================
    # LBU lane 2
    # ============================================================
    lbu  x4, 2(x1)
    addi x5, x0, 0x83
    bne  x4, x5, fail12


    # ============================================================
    # LBU lane 3
    # ============================================================
    lbu  x4, 3(x1)
    addi x5, x0, 0x84
    bne  x4, x5, fail13


    # ============================================================
    # LHU low halfword
    #
    # bytes:
    #   81 82
    #
    # little endian = 0x8281
    # ============================================================
    lhu  x4, 0(x1)

    lui  x5, 0x8
    addi x5, x5, 0x281       # 0x00008281

    bne  x4, x5, fail20


    # ============================================================
    # LHU high halfword
    #
    # bytes:
    #   83 84
    #
    # little endian = 0x8483
    # ============================================================
    lhu  x4, 2(x1)

    lui  x5, 0x8
    addi x5, x5, 0x483       # 0x00008483

    bne  x4, x5, fail21


    # ============================================================
    # SUCCESS
    # ============================================================
    addi x10, x0, 0
    ebreak


fail10:
    addi x2, x0, 10          # LBU lane 0
    csrrw x0, mscratch, x2
    addi x10, x0, 1
    ebreak

fail11:
    addi x2, x0, 11          # LBU lane 1
    csrrw x0, mscratch, x2
    addi x10, x0, 1
    ebreak

fail12:
    addi x2, x0, 12          # LBU lane 2
    csrrw x0, mscratch, x2
    addi x10, x0, 1
    ebreak

fail13:
    addi x2, x0, 13          # LBU lane 3
    csrrw x0, mscratch, x2
    addi x10, x0, 1
    ebreak

fail20:
    addi x2, x0, 20          # LHU low
    csrrw x0, mscratch, x2
    addi x10, x0, 1
    ebreak

fail21:
    addi x2, x0, 21          # LHU high
    csrrw x0, mscratch, x2
    addi x10, x0, 1
    ebreak