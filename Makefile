XBE_TITLE = asteroids
GEN_XISO = $(XBE_TITLE).iso
SRCS += $(wildcard $(CURDIR)/asteroids/*.c)
NXDK_DIR = /home/ryan/nxdk
NXDK_SDL = y
CFLAGS += -I$(CURDIR)/asteroids/
include $(NXDK_DIR)/Makefile
