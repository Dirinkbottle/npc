.section .text
.globl _start
.option norvc

/*
 * Built-in RV32I + Zicsr self-test.
 *
 * Conventions:
 *   x1  = scratch RAM base (0x80001000)
 *   x2  = failure code, mirrored to mscratch by fail
 *   x3..x9 = temporaries
 *   x10 = a0, 0 for good trap / 1 for bad trap
 *
 * Only x0..x15 are used so the image is also friendly to an RV32E-style
 * register-file implementation.
 */
_start:
    lui   x1, 0x80001

    /* ------------------------------------------------------------ */
    /* U type: LUI / AUIPC                                         */
    /* ------------------------------------------------------------ */
    lui   x3, 0x12345
    lui   x4, 0x12345
    addi  x2, x0, 1
    bne   x3, x4, fail

    auipc x3, 0
    auipc x4, 0
    addi  x3, x3, 4
    addi  x2, x0, 2
    bne   x3, x4, fail

    /* ------------------------------------------------------------ */
    /* I type arithmetic / logical / shifts                        */
    /* ------------------------------------------------------------ */
    addi  x3, x0, 7
    addi  x4, x3, -2
    addi  x5, x0, 5
    addi  x2, x0, 3
    bne   x4, x5, fail

    addi  x3, x0, -1
    slti  x4, x3, 1
    addi  x5, x0, 1
    addi  x2, x0, 4
    bne   x4, x5, fail

    sltiu x4, x3, 1
    addi  x5, x0, 0
    addi  x2, x0, 5
    bne   x4, x5, fail

    addi  x3, x0, 0x55
    xori  x4, x3, 0x0f
    addi  x5, x0, 0x5a
    addi  x2, x0, 6
    bne   x4, x5, fail

    ori   x4, x3, 0x0a
    addi  x5, x0, 0x5f
    addi  x2, x0, 7
    bne   x4, x5, fail

    andi  x4, x3, 0x0f
    addi  x5, x0, 5
    addi  x2, x0, 8
    bne   x4, x5, fail

    addi  x3, x0, 3
    slli  x4, x3, 4
    addi  x5, x0, 48
    addi  x2, x0, 9
    bne   x4, x5, fail

    addi  x3, x0, -16
    srli  x4, x3, 2
    lui   x5, 0x40000
    addi  x5, x5, -4
    addi  x2, x0, 10
    bne   x4, x5, fail

    srai  x4, x3, 2
    addi  x5, x0, -4
    addi  x2, x0, 11
    bne   x4, x5, fail

    /* ------------------------------------------------------------ */
    /* R type                                                       */
    /* ------------------------------------------------------------ */
    addi  x3, x0, 7
    addi  x4, x0, 3

    add   x5, x3, x4
    addi  x6, x0, 10
    addi  x2, x0, 12
    bne   x5, x6, fail

    sub   x5, x3, x4
    addi  x6, x0, 4
    addi  x2, x0, 13
    bne   x5, x6, fail

    sll   x5, x3, x4
    addi  x6, x0, 56
    addi  x2, x0, 14
    bne   x5, x6, fail

    addi  x3, x0, -1
    addi  x4, x0, 1
    slt   x5, x3, x4
    addi  x6, x0, 1
    addi  x2, x0, 15
    bne   x5, x6, fail

    sltu  x5, x3, x4
    addi  x6, x0, 0
    addi  x2, x0, 16
    bne   x5, x6, fail

    addi  x3, x0, 7
    addi  x4, x0, 3
    xor   x5, x3, x4
    addi  x6, x0, 4
    addi  x2, x0, 17
    bne   x5, x6, fail

    or    x5, x3, x4
    addi  x6, x0, 7
    addi  x2, x0, 18
    bne   x5, x6, fail

    and   x5, x3, x4
    addi  x6, x0, 3
    addi  x2, x0, 19
    bne   x5, x6, fail

    addi  x3, x0, -16
    addi  x4, x0, 2
    srl   x5, x3, x4
    lui   x6, 0x40000
    addi  x6, x6, -4
    addi  x2, x0, 20
    bne   x5, x6, fail

    sra   x5, x3, x4
    addi  x6, x0, -4
    addi  x2, x0, 21
    bne   x5, x6, fail

    /* ------------------------------------------------------------ */
    /* Branches: every supported condition                         */
    /* ------------------------------------------------------------ */
    addi  x3, x0, 5
    addi  x4, x0, 5
    addi  x2, x0, 22
    beq   x3, x4, 1f
    jal   x0, fail
1:
    addi  x4, x0, 6
    addi  x2, x0, 23
    bne   x3, x4, 2f
    jal   x0, fail
2:
    addi  x3, x0, -1
    addi  x4, x0, 1
    addi  x2, x0, 24
    blt   x3, x4, 3f
    jal   x0, fail
3:
    addi  x2, x0, 25
    bge   x4, x3, 4f
    jal   x0, fail
4:
    addi  x3, x0, 1
    addi  x4, x0, -1
    addi  x2, x0, 26
    bltu  x3, x4, 5f
    jal   x0, fail
5:
    addi  x2, x0, 27
    bgeu  x4, x3, 6f
    jal   x0, fail
6:

    /* ------------------------------------------------------------ */
    /* JAL: verify the skipped instruction really is skipped.       */
    /* ------------------------------------------------------------ */
    addi  x5, x0, 0
    jal   x4, 7f
    addi  x5, x0, 1
7:
    addi  x2, x0, 28
    bne   x5, x0, fail

    /* ------------------------------------------------------------ */
    /* Store-byte lane mask + byte loads.                           */
    /* The word is built as 0x84838281 one byte at a time.          */
    /* ------------------------------------------------------------ */
    sw    x0, 0(x1)

    addi  x3, x0, 0x81
    sb    x3, 0(x1)
    lbu   x4, 0(x1)
    addi  x5, x0, 0x81
    addi  x2, x0, 30
    bne   x4, x5, fail
    lb    x4, 0(x1)
    addi  x5, x0, -127
    addi  x2, x0, 31
    bne   x4, x5, fail

    addi  x3, x0, 0x82
    sb    x3, 1(x1)
    lbu   x4, 1(x1)
    addi  x5, x0, 0x82
    addi  x2, x0, 32
    bne   x4, x5, fail
    lb    x4, 1(x1)
    addi  x5, x0, -126
    addi  x2, x0, 33
    bne   x4, x5, fail

    addi  x3, x0, 0x83
    sb    x3, 2(x1)
    lbu   x4, 2(x1)
    addi  x5, x0, 0x83
    addi  x2, x0, 34
    bne   x4, x5, fail
    lb    x4, 2(x1)
    addi  x5, x0, -125
    addi  x2, x0, 35
    bne   x4, x5, fail

    addi  x3, x0, 0x84
    sb    x3, 3(x1)
    lbu   x4, 3(x1)
    addi  x5, x0, 0x84
    addi  x2, x0, 36
    bne   x4, x5, fail
    lb    x4, 3(x1)
    addi  x5, x0, -124
    addi  x2, x0, 37
    bne   x4, x5, fail

    lw    x4, 0(x1)
    lui   x5, 0x84838
    addi  x5, x5, 0x281
    addi  x2, x0, 38
    bne   x4, x5, fail

    /* ------------------------------------------------------------ */
    /* SH low/high masks + LH/LHU.                                  */
    /* Final word: 0x83848182                                       */
    /* ------------------------------------------------------------ */
    sw    x0, 4(x1)

    lui   x3, 0x8
    addi  x3, x3, 0x182
    sh    x3, 4(x1)

    lhu   x4, 4(x1)
    lui   x5, 0x8
    addi  x5, x5, 0x182
    addi  x2, x0, 40
    bne   x4, x5, fail

    lh    x4, 4(x1)
    lui   x5, 0xffff8
    addi  x5, x5, 0x182
    addi  x2, x0, 41
    bne   x4, x5, fail

    lui   x3, 0x8
    addi  x3, x3, 0x384
    sh    x3, 6(x1)

    lhu   x4, 6(x1)
    lui   x5, 0x8
    addi  x5, x5, 0x384
    addi  x2, x0, 42
    bne   x4, x5, fail

    lh    x4, 6(x1)
    lui   x5, 0xffff8
    addi  x5, x5, 0x384
    addi  x2, x0, 43
    bne   x4, x5, fail

    lw    x4, 4(x1)
    lui   x5, 0x83848
    addi  x5, x5, 0x182
    addi  x2, x0, 44
    bne   x4, x5, fail

    /* ------------------------------------------------------------ */
    /* SW/LW full-word mask.                                        */
    /* ------------------------------------------------------------ */
    lui   x3, 0x11223
    addi  x3, x3, 0x344
    sw    x3, 8(x1)
    lw    x4, 8(x1)
    addi  x2, x0, 45
    bne   x3, x4, fail

    /* ------------------------------------------------------------ */
    /* Zicsr: all six CSR instructions.                             */
    /* ------------------------------------------------------------ */
    addi  x3, x0, 3
    csrrw x4, mscratch, x3
    csrrs x5, mscratch, x0
    addi  x2, x0, 50
    bne   x5, x3, fail

    addi  x4, x0, 4
    csrrs x5, mscratch, x4
    addi  x6, x0, 7
    csrrs x7, mscratch, x0
    addi  x2, x0, 51
    bne   x7, x6, fail

    addi  x4, x0, 2
    csrrc x5, mscratch, x4
    addi  x6, x0, 5
    csrrs x7, mscratch, x0
    addi  x2, x0, 52
    bne   x7, x6, fail

    csrrwi x5, mscratch, 3
    addi   x6, x0, 3
    csrrs  x7, mscratch, x0
    addi   x2, x0, 53
    bne    x7, x6, fail

    csrrsi x5, mscratch, 4
    addi   x6, x0, 7
    csrrs  x7, mscratch, x0
    addi   x2, x0, 54
    bne    x7, x6, fail

    csrrci x5, mscratch, 1
    addi   x6, x0, 6
    csrrs  x7, mscratch, x0
    addi   x2, x0, 55
    bne    x7, x6, fail

    /* FENCE is implemented as a legal no-op in this core. */
    fence

    /* ------------------------------------------------------------ */
    /* JALR: jump to a fixed section offset without linker relocs.  */
    /* ------------------------------------------------------------ */
    lui   x3, 0x80000
    addi  x3, x3, 0x500
    jalr  x4, 0(x3)

    /* Reaching here means JALR failed to redirect control. */
    addi  x2, x0, 60
    jal   x0, fail

fail:
    csrrw x0, mscratch, x2
    addi  x10, x0, 1
    ebreak

    /* Keep JALR and trap targets at fixed PMEM offsets. */
    .org 0x500
jalr_target:
    /* x4 is JALR's return address and therefore must be non-zero. */
    addi  x2, x0, 61
    beq   x4, x0, fail

    /* ECALL + MRET test. mtvec = 0x80000600. */
    lui   x3, 0x80000
    addi  x3, x3, 0x600
    csrrw x0, mtvec, x3
    ecall

    /* Returning here proves MRET used the adjusted mepc. */
    addi  x10, x0, 0
    ebreak

    .org 0x600
ecall_handler:
    csrrs x3, mcause, x0
    addi  x4, x0, 11
    addi  x2, x0, 62
    bne   x3, x4, fail

    csrrs x3, mepc, x0
    addi  x3, x3, 4
    csrrw x0, mepc, x3
    mret
