TOPNAME ?= minirv

CSRC      := csrc
OBJ_DIR   := obj_dir
HOST_DIR  := $(OBJ_DIR)/host
VSRCS     := $(shell find vsrc -type f -name '*.v')
CAPSTONE  := $(abspath $(CSRC)/tools/capstone/repo/libcapstone.so.5)

NVBOARD_HOME := $(abspath nvboard)
include $(NVBOARD_HOME)/scripts/nvboard.mk

# Host sources belong to NPC.  Generated Kconfig/capstone sources, stale
# NVBoard bindings, and RTL unit tests are not simulator sources.
HOST_SRCS := $(filter-out $(CSRC)/auto_bind.cpp,$(shell find $(CSRC) \
  -type d \( -path '$(CSRC)/tools' -o -path '$(CSRC)/test' \) -prune -o \
  -type f \( -name '*.c' -o -name '*.cpp' -o -name '*.S' \) -print))
HOST_CSRCS   := $(filter %.c,$(HOST_SRCS))
HOST_CPPSRCS := $(filter %.cpp,$(HOST_SRCS))
HOST_OBJS := $(patsubst %.c,$(HOST_DIR)/%.o,$(HOST_CSRCS)) \
             $(patsubst %.cpp,$(HOST_DIR)/%.o,$(HOST_CPPSRCS))
HOST_DEPS := $(HOST_OBJS:.o=.d)

HEADER_DIRS := $(sort $(dir $(shell find $(CSRC) \
  -type d \( -path '$(CSRC)/tools' -o -path '$(CSRC)/test' \) -prune -o \
  -type f -name '*.h' -print) \
  $(shell find include/generated -type f -name '*.h')))

VERILATOR_ROOT ?= $(shell verilator -getenv VERILATOR_ROOT)
# `?=` does not handle an empty CXX exported by a parent Makefile.  Without a
# compiler command, the first -I flag is parsed as a Make recipe prefix.
ifeq ($(strip $(CXX)),)
  CXX := g++
endif
CFLAGS += $(addprefix -I,$(HEADER_DIRS))
CFLAGS += -I$(OBJ_DIR)
CFLAGS += -isystem $(VERILATOR_ROOT)/include -isystem $(VERILATOR_ROOT)/include/vltstd
CFLAGS += -I$(CSRC)/tools/capstone/repo/include
CFLAGS += -I$(NVBOARD_HOME)/include -I$(NVBOARD_HOME)/usr/include
CFLAGS += -MMD -MP -Wall -Wextra -Werror -Wno-sign-compare -g3 -Og  -fno-omit-frame-pointer \
          -fno-optimize-sibling-calls \
          -fsanitize=address,undefined,bounds-strict \
          -fstack-protector-strong
CXXFLAGS += -std=gnu++17
LDLIBS += $(NVBOARD_ARCHIVE) -fsanitize=address,undefined,bounds-strict -ldl -lreadline

KCONFIG      := $(CSRC)/tools/kconfig
CONF         := $(KCONFIG)/build/conf
MCONF        := $(KCONFIG)/build/mconf
KCONFIG_FILE := $(abspath Kconfig)
DOT_CONFIG   := $(abspath .config)
-include include/config/auto.conf

MODEL_MK  := $(OBJ_DIR)/V$(TOPNAME).mk
SIM       := $(OBJ_DIR)/V$(TOPNAME)

.DEFAULT_GOAL := sim
.PHONY: sim run menuconfig clean check hex_asm hex_c bind_file

ifeq ($(filter menuconfig,$(MAKECMDGOALS)),)
  ifeq ($(wildcard $(DOT_CONFIG)),)
    $(error Please run 'make menuconfig' first)
  endif
endif
$(CONF):
	$(MAKE) -s -C $(KCONFIG) conf

$(MCONF):
	$(MAKE) -s -C $(KCONFIG) mconf

menuconfig: $(CONF) $(MCONF)
	$(MCONF) $(KCONFIG_FILE)
	$(CONF) --syncconfig $(KCONFIG_FILE)

$(CAPSTONE):
	$(MAKE) -s -C $(CSRC)/tools/capstone

$(MODEL_MK): $(VSRCS) Makefile
	@mkdir -p $(OBJ_DIR)
	@verilator --cc --trace --exe --top $(TOPNAME) --Mdir $(OBJ_DIR) $(VSRCS)
	@touch $@

# Keep the source extension in the prerequisite and the object extension in
# the target: one rule covers every C/C++ file found above.
$(HOST_DIR)/%.o: %.c $(MODEL_MK) $(CAPSTONE)
	@mkdir -p $(dir $@)
	@echo + CXX $<
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<

$(HOST_DIR)/%.o: %.cpp $(MODEL_MK) $(CAPSTONE)
	@mkdir -p $(dir $@)
	@echo + CXX $<
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
# 内置测试镜像: RISC-V 汇编 -> 原始二进制 -> 嵌入宿主二进制
INTERNAL_IMG_ASM    := $(CSRC)/img.S
INTERNAL_IMG_BIN    := $(OBJ_DIR)/img.bin
INTERNAL_IMG_HOST_O := $(OBJ_DIR)/img_host.o

$(INTERNAL_IMG_BIN): $(INTERNAL_IMG_ASM) $(MODEL_MK)
	@mkdir -p $(dir $@)
	@echo + AS $<
	@riscv64-linux-gnu-as -march=rv32i -o $(OBJ_DIR)/img.o $<
	@riscv64-linux-gnu-objcopy -O binary $(OBJ_DIR)/img.o $@

$(INTERNAL_IMG_HOST_O): $(INTERNAL_IMG_BIN)
	@echo + EMBED $<
	@cd $(OBJ_DIR) && objcopy -I binary -O elf64-x86-64 -B i386:x86-64 img.bin img_host.o

HOST_OBJS += $(INTERNAL_IMG_HOST_O)

$(SIM): $(MODEL_MK) $(CAPSTONE) $(NVBOARD_ARCHIVE) $(HOST_OBJS)
	@$(MAKE) -s -C $(OBJ_DIR) -f V$(TOPNAME).mk V$(TOPNAME) \
	  VK_USER_OBJS="$(abspath $(HOST_OBJS))" USER_LDLIBS="$(LDLIBS)"

sim: $(SIM)

run: $(SIM)
	@$(SIM) $(ARGS)

check:
	@verilator --lint-only $(VSRCS) --top $(TOPNAME) -Wall -Wpedantic

hex_asm:
	@riscv64-linux-gnu-as -march=rv32i -o tsrc/rvt.o tsrc/rvt.asm
	@riscv64-linux-gnu-ld -Ttext 0x00000000 -m elf32lriscv -o tsrc/rvt.elf tsrc/rvt.o
	@riscv64-linux-gnu-objcopy -O verilog --verilog-data-width=4 tsrc/rvt.elf tsrc/rom.hex

hex_c:
	@riscv64-linux-gnu-gcc -march=rv32i -mabi=ilp32 -ffreestanding -fno-stack-protector -mno-save-restore -fomit-frame-pointer -O2 -c tsrc/rvt.c -o tsrc/rvt.o
	@riscv64-linux-gnu-ld -Ttext 0x00000000 -m elf32lriscv -o tsrc/rvt.elf tsrc/rvt.o
	@riscv64-linux-gnu-objcopy -O verilog tsrc/rvt.elf tsrc/rom.hex

clean:
	rm -rf $(OBJ_DIR)

-include $(HOST_DEPS)
