# Capstone disassembly library integration
#
# Provides `capstone` to build libcapstone from tools/capstone,
# plus `clean-capstone` to remove the build.

CAPSTONE_HOME := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/../tools/capstone)

ifeq ($(shell uname -s),Linux)
CAPSTONE_LIB := libcapstone.so.5
else ifeq ($(shell uname -s),Darwin)
CAPSTONE_LIB := libcapstone.5.dylib
else
$(error Unsupported OS ($(shell uname -s)))
endif

CAPSTONE := $(CAPSTONE_HOME)/repo/$(CAPSTONE_LIB)

.PHONY: capstone clean-capstone

$(CAPSTONE):
	$(MAKE) -s -C $(CAPSTONE_HOME) all

capstone: $(CAPSTONE)

clean-capstone:
	$(MAKE) -s -C $(CAPSTONE_HOME) clean
