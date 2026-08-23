# Kconfig (menuconfig) integration
#
# Provides `menuconfig` to edit options in Kconfig and sync the generated
# config headers, plus `clean-kconfig` to remove the generated tools.

KCONFIG_HOME := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/../tools/kconfig)
CONF         := $(KCONFIG_HOME)/build/conf
MCONF        := $(KCONFIG_HOME)/build/mconf
KCONFIG_FILE := $(abspath Kconfig)
DOT_CONFIG   := $(abspath .config)

.PHONY: menuconfig conf mconf clean-kconfig

$(CONF):
	@$(MAKE) -s -C $(KCONFIG_HOME) conf

$(MCONF):
	@$(MAKE) -s -C $(KCONFIG_HOME) mconf

conf: $(CONF)

mconf: $(MCONF)

menuconfig: $(CONF) $(MCONF)
	$(MCONF) $(KCONFIG_FILE)
	$(CONF) --syncconfig $(KCONFIG_FILE)

clean-kconfig:
	-rm -rf $(KCONFIG_HOME)/build
