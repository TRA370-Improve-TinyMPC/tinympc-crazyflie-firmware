# The firmware uses the Kbuild build system. There are 'Kbuild' files in this
# example that outlays what needs to be built. (check src/Kbuild).
#
# The firmware is configured using options in Kconfig files, the
# values of these end up in the .config file in the firmware directory.
#
# By setting the OOT_CONFIG (it is '$(PWD)/oot-config' by default) environment
# variable you can provide a custom configuration. It is important that you
# enable the app-layer. See app-config in this directory for example.

#
# We want to execute the main Makefile for the firmware project,
# it will handle the build for us.
#
CRAZYFLIE_BASE := ../..

#
# To include header files from other directories
#
# EXTRA_CFLAGS += -lstdc++
# EXTRA_CFLAGS += -lgcc
# EXTRA_CFLAGS += -lc
# EXTRA_CFLAGS += -lm
EXTRA_CFLAGS += -I$(PWD)/TinyMPC2/include/Eigen
EXTRA_CFLAGS += -I$(PWD)/TinyMPC2/src
EXTRA_CFLAGS += -DEIGEN_INITIALIZE_MATRICES_BY_ZERO
EXTRA_CFLAGS += -DEIGEN_NO_MALLOC

ifeq ($(CONFIG_DEBUG),n)
EXTRA_CFLAGS += -DNDEBUG
EXTRA_CFLAGS += -DEIGEN_FAST_MATH
endif

#
# We override the default OOT_CONFIG here, we could also name our config
# to oot-config and that would be the default.
#
OOT_CONFIG := $(PWD)/app-config

OOT_USES_CXX := 1

include $(CRAZYFLIE_BASE)/tools/make/oot.mk
