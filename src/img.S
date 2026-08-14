# 内置测试镜像: 验证 sw 后立即 lw 的 store->load 冒险。
# 依次: lui/addi 构造 0xdeadbeef, lui 构造 PMEM 基址, sw, lw, ebreak。
# ABI: t0=x5, t1=x6, t2=x7
  .global _internalimg_start
  .global _internalimg_end

_internalimg_start:
  lui   t0, 0xdeadc        # t0 = 0xdeadc000
  addi  t0, t0, -0x111     # t0 = 0xdeadbeef (32 位全用满)
  lui   t1, 0x80000        # t1 = 0x80000000 (PMEM 基址)
  sw    t0, 0x40(t1)       # [0x80000040] = 0xdeadbeef
  lw    t2, 0x40(t1)       # t2 = [0x80000040]  (sw->lw 冒险)
  ebreak                   # 结束模拟 (0x00100073)

_internalimg_end:
