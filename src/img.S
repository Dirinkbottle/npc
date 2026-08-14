lui   t0, 0xdeadc        # t0 = 0xdeadc000
addi  t0, t0, -0x111     # t0 = 0xdeadbeef (32 位全用满)
lui   t1, 0x80000        # t1 = 0x80000000 (PMEM 基址)
sw    t0, 0x40(t1)       # [0x80000040] = 0xdeadbeef
lw    t2, 0x40(t1)       # t2 = [0x80000040]  (sw->lw 冒险)
ebreak                   # 结束模拟 (0x00100073)