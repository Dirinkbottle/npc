.text
.globl _start

# 简单 Zicsr 扩展测试。
# 使用 mscratch 作为可读写的临时 CSR，初始值为 0。
# 假设 I/B/J 类跳转指令已经正确，任何一项检查失败都会：
#   a0 = -1
#   ebreak
# 全部通过时：
#   a0 = 0
#   ebreak
_start:
    # csrrwi: 旧值为 0，写入 0x15
    csrrwi t0, mscratch, 0x15
    bnez   t0, fail

    # csrrsi: 旧值 0x15，置位 0x03 -> 0x17
    li     t0, 0x15
    csrrsi t1, mscratch, 0x03
    bne    t1, t0, fail

    # csrrci: 旧值 0x17，清位 0x02 -> 0x15
    li     t0, 0x17
    csrrci t2, mscratch, 0x02
    bne    t2, t0, fail

    # 检查 csrrci 后的 CSR 值为 0x15
    li     t0, 0x15
    csrr   t3, mscratch
    bne    t3, t0, fail

    # csrrw: 旧值 0x15，写入 0x2a
    li     t4, 0x2a
    csrrw  t5, mscratch, t4
    li     t0, 0x15
    bne    t5, t0, fail

    # 检查 csrrw 后的 CSR 值为 0x2a
    csrr   t3, mscratch
    bne    t3, t4, fail

    # csrrs: 旧值 0x2a，置位 0x11 -> 0x3b
    li     t6, 0x11
    csrrs  t5, mscratch, t6
    li     t0, 0x2a
    bne    t5, t0, fail

    # 检查 csrrs 后的 CSR 值为 0x3b
    or     t0, t4, t6
    csrr   t3, mscratch
    bne    t3, t0, fail

    # csrrc: 旧值 0x3b，清位 0x0a -> 0x31
    li     t6, 0x0a
    csrrc  t5, mscratch, t6
    bne    t5, t0, fail

    # 检查 csrrc 后的 CSR 值为 0x3b & ~0x0a
    xori   t6, t6, -1
    and    t0, t0, t6
    csrr   t3, mscratch
    bne    t3, t0, fail

    # ecall / mret 测试。
    # 将 mtvec 指向 ecall_handler，然后 ecall 进入 handler。
    li     t0, 0x80000098
    csrw   mtvec, t0

    li     a0, 1
    ecall
    # 如果 ecall 没有正确跳转到 mtvec，则会执行到这里。
    j      fail

ecall_return:
    # mret 应当返回到这里，此时 a0 = 1 - 1 = 0。
    ebreak

ecall_handler:
    addi   a0, a0, -1
    li     t0, 0x80000094
    csrw   mepc, t0
    mret

fail:
    li     a0, -1
    ebreak
