RED := \033[31m
RESET := \033[0m
RISCV_TOOL_CHINE := $(patsubst %gcc,%,$(shell which riscv64-unknown-elf-gcc))
RISCV_CC := $(RISCV_TOOL_CHINE)gcc
RISCV_OBJCOPY := $(RISCV_TOOL_CHINE)objcopy
RISCV_OBJDUMP := $(RISCV_TOOL_CHINE)objdump
TOOL :=
CC := $(TOOL)gcc
OBJDUMP := $(TOOL)objdump
CXX := $(TOOL)g++
LD := $(TOOL)ld
BUILDDIR := build
VERILATED_FILE := $(addprefix $(BUILDDIR)/rtl/,libVminirv.a libverilated.a)
VERILATOR_ROOT ?= $(shell verilator -getenv VERILATOR_ROOT)
INCLUDEDIR :=$(addprefix -I,$(shell find . -type d -name 'include')) -I$(BUILDDIR)/rtl
-include include/config/auto.conf

COMMON_CFLAGS := -c $(INCLUDEDIR) -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd -MMD -MP -Wall -Wextra -Werror -Wno-sign-compare
COMMON_CXXFLAGS := -c $(INCLUDEDIR) -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd

CFLAGS_DEBUG := $(COMMON_CFLAGS) -g3 -O0 -fno-omit-frame-pointer -fsanitize=address,undefined,bounds-strict -fstack-protector-strong
CXXFLAGS_DEBUG := $(COMMON_CXXFLAGS) -g3 -O0 -fno-omit-frame-pointer -fsanitize=address,undefined,bounds-strict -fstack-protector-strong
LDFLAGS_DEBUG := -fsanitize=address,undefined,bounds-strict

CFLAGS_RELEASE := $(COMMON_CFLAGS) -O3 -DNDEBUG
CXXFLAGS_RELEASE := $(COMMON_CXXFLAGS) -O3 -DNDEBUG
LDFLAGS_RELEASE :=

ifeq ($(CONFIG_BUILD_RELEASE),y)
CFLAGS := $(CFLAGS_RELEASE)
CXXFLAGS := $(CXXFLAGS_RELEASE)
LDFLAGS := $(LDFLAGS_RELEASE)
else
CFLAGS := $(CFLAGS_DEBUG)
CXXFLAGS := $(CXXFLAGS_DEBUG)
LDFLAGS := $(LDFLAGS_DEBUG)
endif

LDLIBS := -lreadline -ldl
SRC := $(shell find src backend -type d -path 'src/tools' -prune -o -type f \( -name "*.c" -o -name "*.cpp" -o -name "*.S" \) -print)
VSRC := $(shell find rtl -type f -name "*.v")
CSRC :=$(filter %.c,$(SRC))
CPPSRC :=$(filter %.cpp,$(SRC))
COBJS := $(patsubst %.c,build/%.o,$(CSRC))
CPPOBJS := $(CPPSRC:%.cpp=build/%.o)
CPU_BINARY := $(BUILDDIR)/npc
IMG_ASM      := src/img.S
IMG_OBJ      := $(BUILDDIR)/src/img.o
IMG_BIN      := $(BUILDDIR)/src/img.bin
IMG_COMBINE_S := src/img_combine.S
IMG_HOST_OBJ := $(BUILDDIR)/src/img_combine.o
ASM_OBJ      := $(IMG_HOST_OBJ)
RTL_MK		 :=$(BUILDDIR)/rtl/Vminirv.mk
CAPSTONE  := $(abspath tools/capstone/repo/libcapstone.so.5)
DEPENDFILE = $(COBJS:%.o=%.d) $(CPPOBJS:%.o=%.d)
.DEFAULT_GOAL ?=all
.PHONY: all clean check
-include $(DEPENDFILE)
include script/menuconf.mk
ifeq ($(filter menuconfig,$(MAKECMDGOALS)),)
  ifeq ($(wildcard $(DOT_CONFIG)),)
    $(error Please run 'make menuconfig' first)
  endif
endif

$(CAPSTONE):
	$(MAKE) -s -f script/capstone.mk capstone

$(IMG_OBJ): $(IMG_ASM)
	@mkdir -p $(dir $@)
	$(RISCV_CC) -c -march=rv32i_zicsr -mabi=ilp32 $< -o $@

$(IMG_BIN): $(IMG_OBJ)
	@mkdir -p $(dir $@)
	$(RISCV_OBJDUMP) -d $< -Mno-aliases --adjust-vma=0x80000000 > $(BUILDDIR)/src/img.txt
	$(RISCV_OBJCOPY) -O binary $< $@

$(IMG_HOST_OBJ): $(IMG_COMBINE_S) $(IMG_BIN)
	@mkdir -p $(dir $@)
	$(CC) -c $< -o $@

$(BUILDDIR)/%.o:%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS)  $< -o $@
$(BUILDDIR)/%.o:%.cpp | $(RTL_MK)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -o $@
$(VERILATED_FILE): $(RTL_MK)
	$(MAKE) -C $(BUILDDIR)/rtl -f Vminirv.mk libVminirv

$(CPU_BINARY):$(COBJS) $(CPPOBJS) $(VERILATED_FILE) $(ASM_OBJ) | $(CAPSTONE)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS)  -o $@

$(RTL_MK): $(VSRC)
	@mkdir -p $(BUILDDIR)/rtl
	verilator --cc --trace --top minirv --Mdir $(BUILDDIR)/rtl $(VSRC)

all:$(CPU_BINARY)
	$(info build cpu binary)

clean:
	rm -rf $(BUILDDIR)

img-run:$(CPU_BINARY)
	$(CPU_BINARY) -img


check:
	verilator --lint-only rtl/*.v --top-module minirv -Wall -Wno-fatal --sv -Werror-MULTIDRIVEN -Werror-LATCH -Werror-UNDRIVEN -Werror-CASEINCOMPLETE