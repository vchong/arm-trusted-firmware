#
# Copyright (c) 2013-2014, ARM Limited and Contributors. All rights reserved.
# Copyright (c) 2014, Hisilicon Ltd.
# Copyright (c) 2014, Linaro Ltd.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# Redistributions of source code must retain the above copyright notice, this
# list of conditions and the following disclaimer.
#
# Redistributions in binary form must reproduce the above copyright notice,
# this list of conditions and the following disclaimer in the documentation
# and/or other materials provided with the distribution.
#
# Neither the name of ARM nor the names of its contributors may be used
# to endorse or promote products derived from this software without specific
# prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#

# On V8R2 EVB, the TSP can execute either from Trusted SRAM or Trusted DRAM.
# Trusted SRAM is the default.
#
PLAT_TSP_LOCATION	:=	tsram
ifeq (${PLAT_TSP_LOCATION}, tsram)
  PLAT_TSP_LOCATION_ID := FVP_IN_TRUSTED_SRAM
else ifeq (${PLAT_TSP_LOCATION}, tdram)
  PLAT_TSP_LOCATION_ID := FVP_IN_TRUSTED_DRAM
else
  $(error "Unsupported PLAT_TSP_LOCATION value")
endif

# Process flags
$(eval $(call add_define,PLAT_TSP_LOCATION_ID))


PLAT_INCLUDES		:=	-Iplat/lcb/include/

PLAT_BL_COMMON_SOURCES	:=	drivers/arm/pl011/pl011_console.S	\
				drivers/io/io_dw_mmc.c			\
				drivers/io/io_fip.c			\
				drivers/io/io_memmap.c			\
				drivers/io/io_storage.c			\
				lib/aarch64/xlat_tables.c		\
				plat/common/aarch64/plat_common.c	\
				plat/common/plat_gic.c			\
				plat/lcb/plat_io_storage.c

BL1_SOURCES		+=	drivers/arm/cci400/cci400.c		\
				lib/cpus/aarch64/cortex_a53.S		\
				lib/cpus/aarch64/cortex_a57.S		\
				plat/common/aarch64/platform_up_stack.S	\
				plat/lcb/aarch64/plat_helpers.S		\
				plat/lcb/aarch64/bl1_plat_helpers.S	\
				plat/lcb/aarch64/lcb_common.c		\
				plat/lcb/bl1_plat_setup.c		\
				plat/lcb/pll.c				\
				plat/lcb/sp804_timer.c			\
				plat/lcb/dw_mmc.c			\
				plat/lcb/partitions.c			\
				plat/lcb/drivers/pmic/hi6553.c		\
				plat/lcb/drivers/gpio/gpio.c

BL2_SOURCES		+=	plat/common/aarch64/platform_up_stack.S	\
				plat/lcb/aarch64/lcb_common.c		\
				plat/lcb/bl2_plat_setup.c		\
				plat/lcb/dw_mmc.c			\
				plat/lcb/sp804_timer.c

BL31_SOURCES		+=	drivers/arm/gic/arm_gic.c		\
				lib/cpus/aarch64/cortex_a53.S		\
				plat/common/aarch64/platform_up_stack.S	\
				plat/lcb/aarch64/lcb_common.c		\
				plat/lcb/bl31_plat_setup.c		\
				plat/lcb/plat_pm.c			\
				plat/lcb/plat_topology.c
