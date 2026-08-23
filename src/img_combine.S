# 内置测试镜像: 验证 sw 后立即 lw 的 store->load 冒险。
# 依次: lui/addi 构造 0xdeadbeef, lui 构造 PMEM 基址, sw, lw, ebreak。
# ABI: t0=x5, t1=x6, t2=x7
  .global _binary_img_bin_start
  .global _binary_img_bin_end

_binary_img_bin_start:
  .incbin "build/src/img.bin"
_binary_img_bin_end:
