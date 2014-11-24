/*
 * Copyright (c) 2014, Hisilicon Ltd.
 * Copyright (c) 2014, Linaro Ltd.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of ARM nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __HI6220_H__
#define __HI6220_H__

#define ACPU_CTRL_BASE				0xf6504000
#define ACPU_SC_CPU_CTRL			(ACPU_CTRL_BASE + 0x000)
#define ACPU_SC_CPU_STAT			(ACPU_CTRL_BASE + 0x008)
#define ACPU_SC_VD_CTRL				(ACPU_CTRL_BASE + 0x054)
#define ACPU_SC_VD_MASK_PATTERN_CTRL		(ACPU_CTRL_BASE + 0x058)
#define ACPU_SC_VD_DLY_FIXED_CTRL		(ACPU_CTRL_BASE + 0x05c)
#define ACPU_SC_VD_DLY_TABLE0_CTRL		(ACPU_CTRL_BASE + 0x060)
#define ACPU_SC_VD_DLY_TABLE1_CTRL		(ACPU_CTRL_BASE + 0x064)
#define ACPU_SC_VD_DLY_TABLE2_CTRL		(ACPU_CTRL_BASE + 0x068)
#define ACPU_SC_VD_HPM_CTRL			(ACPU_CTRL_BASE + 0x06c)

#define ACPU_SC_CPU_STAT_CLKDIV_VD_MASK		(3 << 20)

#define ACPU_SC_VD_CTRL_TUNE_EN_DIF		(1 << 0)
#define ACPU_SC_VD_CTRL_TUNE_EN_INT		(1 << 11)
#define ACPU_SC_VD_CTRL_SHIFT_TABLE0_MASK	(0xf << 12)
#define ACPU_SC_VD_CTRL_FORCE_CLK_EN		(1 << 28)

#define ACPU_SC_VD_MASK_PATTERN			((1 << 13) - 1)

#define ACPU_SC_VD_HPM_CTRL_OSC_DIV_MASK	0xffff
#define ACPU_SC_VD_HPM_CTRL_DLY_EXP_MASK	(0xffffff << 8)

#define PERI_BASE				0xf7030000
#define PERI_SC_PERIPH_CTRL2			(PERI_BASE + 0x004)
#define PERI_SC_PERIPH_CTRL13			(PERI_BASE + 0x028)
#define PERI_SC_DDR_CTRL0			(PERI_BASE + 0x050)
#define PERI_SC_PERIPH_CLKEN0			(PERI_BASE + 0x200)
#define PERI_SC_PERIPH_CLKDIS0			(PERI_BASE + 0x204)
#define PERI_SC_PERIPH_CLKEN8			(PERI_BASE + 0x240)
#define PERI_SC_PERIPH_CLKEN12			(PERI_BASE + 0x270)
#define PERI_SC_PERIPH_RSTEN0			(PERI_BASE + 0x300)
#define PERI_SC_PERIPH_RSTDIS0			(PERI_BASE + 0x304)
#define PERI_SC_PERIPH_RSTSTAT0			(PERI_BASE + 0x308)
#define PERI_SC_PERIPH_RSTDIS8			(PERI_BASE + 0x344)
#define PERI_SC_CLK_SEL0			(PERI_BASE + 0x400)
#define PERI_SC_CLKCFG8BIT1			(PERI_BASE + 0x494)

#define PMCTRL_BASE				0xf7032000
#define PMCTRL_ACPUPLLCTRL			(PMCTRL_BASE + 0x000)
#define PMCTRL_ACPUPLLFREQ			(PMCTRL_BASE + 0x004)
#define PMCTRL_DDRPLL1CTRL			(PMCTRL_BASE + 0x010)
#define PMCTRL_DDRPLL0CTRL			(PMCTRL_BASE + 0x030)
#define PMCTRL_ACPUPLLSEL			(PMCTRL_BASE + 0x100)
#define PMCTRL_ACPUCLKDIV			(PMCTRL_BASE + 0x104)
#define PMCTRL_ACPUSYSPLLCFG			(PMCTRL_BASE + 0x110)
#define PMCTRL_ACPUCLKOFFCFG			(PMCTRL_BASE + 0x114)
#define PMCTRL_ACPUPLLFRAC			(PMCTRL_BASE + 0x134)
#define PMCTRL_ACPUPMUVOLUPTIME			(PMCTRL_BASE + 0x360)
#define PMCTRL_ACPUPMUVOLDNTIME			(PMCTRL_BASE + 0x364)
#define PMCTRL_ACPUVOLPMUADDR			(PMCTRL_BASE + 0x368)
#define PMCTRL_ACPUVOLUPSTEP			(PMCTRL_BASE + 0x36c)
#define PMCTRL_ACPUVOLDNSTEP			(PMCTRL_BASE + 0x370)
#define PMCTRL_ACPUDFTVOL			(PMCTRL_BASE + 0x374)
#define PMCTRL_ACPUDESTVOL			(PMCTRL_BASE + 0x378)
#define PMCTRL_ACPUVOLTTIMEOUT			(PMCTRL_BASE + 0x37c)
#define PMCTRL_DDRCLKSEL			(PMCTRL_BASE + 0x580)
#define PMCTRL_DDRCLKDIVCFG			(PMCTRL_BASE + 0x5a8)

#define PMCTRL_ACPUPLLCTRL_EN_CFG		(1 << 0)

#define PMCTRL_ACPUCLKDIV_CPUEXT_CFG_MASK	(3 << 0)
#define PMCTRL_ACPUCLKDIV_DDR_CFG_MASK		(3 << 8)
#define PMCTRL_ACPUCLKDIV_CPUEXT_STAT_MASK	(3 << 16)
#define PMCTRL_ACPUCLKDIV_DDR_STAT_MASK		(3 << 24)

#define PMCTRL_ACPUPLLSEL_ACPUPLL_CFG		(1 << 0)
#define PMCTRL_ACPUPLLSEL_ACPUPLL_STAT		(1 << 1)
#define PMCTRL_ACPUPLLSEL_SYSPLL_STAT		(1 << 2)

#define PMCTRL_ACPUSYSPLL_CLKDIV_CFG_MASK	0x7
#define PMCTRL_ACPUSYSPLL_CLKEN_CFG		(1 << 4)
#define PMCTRL_ACPUSYSPLL_CLKDIV_SW		(3 << 12)

#define PMCTRL_ACPUSYSPLLCFG_SYSPLL_CLKEN	(1 << 4)
#define PMCTRL_ACPUSYSPLLCFG_CLKDIV_MASK	(3 << 12)

#define PMCTRL_ACPUDESTVOL_DEST_VOL_MASK	0x7f
#define PMCTRL_ACPUDESTVOL_CURR_VOL_MASK	(0x7f << 8)

#define MDDRC_AXI_BASE				0xf7120000
#define MDDRC_AXI_ACTION			(MDDRC_AXI_BASE + 0x020)
#define MDDRC_AXI_REGION_MAP0			(MDDRC_AXI_BASE + 0x100)
#define MDDRC_AXI_REGION_ATTRIB0		(MDDRC_AXI_BASE + 0x104)
#define MDDRC_AXI_QOS_MAP_PORT(i)		(MDDRC_AXI_BASE + 0x200 + i * 0x10)
#define MDDRC_AXI_QOS_WRPRI_PORT(i)		(MDDRC_AXI_BASE + 0x204 + i * 0x10)
#define MDDRC_AXI_QOS_RDPRI_PORT(i)		(MDDRC_AXI_BASE + 0x208 + i * 0x10)
#define MDDRC_AXI_OSTD_GROUP(i)			(MDDRC_AXI_BASE + 0x400 + i * 0x10)

#define MDDRC_SECURITY1_BASE			0xf7121400
#define MDDRC_SECURITY1_ATTRIB0			(MDDRC_SECURITY1_BASE + 0x104)

#define MDDRC_SECURITY2_BASE			0xf7121800
#define MDDRC_SECURITY2_ATTRIB0			(MDDRC_SECURITY2_BASE + 0x104)

#define MDDRC_SECURITY3_BASE			0xf7121c00
#define MDDRC_SECURITY3_ATTRIB0			(MDDRC_SECURITY3_BASE + 0x104)

#define MDDRC_SECURITY4_BASE			0xf7122000
#define MDDRC_SECURITY4_ATTRIB0			(MDDRC_SECURITY4_BASE + 0x104)

#define MDDRC_QOS_BASE				0xf7124000
#define MDDRC_QOSB_PUSH_CTRL			(MDDRC_QOS_BASE + 0x000)
#define MDDRC_QOSB_BANK_CTRL_CHAN(i)		(MDDRC_QOS_BASE + 0x068 + i * 4)
#define MDDRC_QOSB_BUF_BYP			(MDDRC_QOS_BASE + 0x088)
#define MDDRC_QOSB_WBUF_CTRL_CHAN(i)		(MDDRC_QOS_BASE + 0x08c + i * 4)
#define MDDRC_QOSB_WRTOUT0			(MDDRC_QOS_BASE + 0x09c)
#define MDDRC_QOSB_WRTOUT1			(MDDRC_QOS_BASE + 0x0a0)
#define MDDRC_QOSB_RDTOUT0			(MDDRC_QOS_BASE + 0x0ac)
#define MDDRC_QOSB_RDTOUT1			(MDDRC_QOS_BASE + 0x0b0)
#define MDDRC_QOSB_WRTOUT_MAP			(MDDRC_QOS_BASE + 0x0bc)
#define MDDRC_QOSB_RDTOUT_MAP			(MDDRC_QOS_BASE + 0x0d0)
#define MDDRC_QOSB_TIMEOUT_MODE			(MDDRC_QOS_BASE + 0x1f0)
#define MDDRC_QOSB_WBUF_PRI_CTRL		(MDDRC_QOS_BASE + 0x1f4)

#define MDDRC_DMC_BASE				0xf7128000
#define MDDRC_DMC_CTRL_SREF			(MDDRC_DMC_BASE + 0x000)
#define MDDRC_DMC_CTRL_SFC			(MDDRC_DMC_BASE + 0x00c)
#define MDDRC_DMC_CFG_LP			(MDDRC_DMC_BASE + 0x01c)
#define MDDRC_DMC_CFG_SREF			(MDDRC_DMC_BASE + 0x020)
#define MDDRC_DMC_CFG_PD			(MDDRC_DMC_BASE + 0x028)
#define MDDRC_DMC_CFG_AREF			(MDDRC_DMC_BASE + 0x02c)
#define MDDRC_DMC_CFG_WORKHOME			(MDDRC_DMC_BASE + 0x040)
#define MDDRC_DMC_CFG_DDRMODE			(MDDRC_DMC_BASE + 0x050)
#define MDDRC_DMC_CFG_RNKVOL0			(MDDRC_DMC_BASE + 0x060)
#define MDDRC_DMC_CFG_RNKVOL1			(MDDRC_DMC_BASE + 0x064)
#define MDDRC_DMC_CFG_TIMING0			(MDDRC_DMC_BASE + 0x100)
#define MDDRC_DMC_CFG_TIMING1			(MDDRC_DMC_BASE + 0x104)
#define MDDRC_DMC_CFG_TIMING2			(MDDRC_DMC_BASE + 0x108)
#define MDDRC_DMC_CFG_TIMING3			(MDDRC_DMC_BASE + 0x10c)
#define MDDRC_DMC_CFG_TIMING4			(MDDRC_DMC_BASE + 0x110)
#define MDDRC_DMC_CFG_TIMING5			(MDDRC_DMC_BASE + 0x114)
#define MDDRC_DMC_CFG_TIMING6			(MDDRC_DMC_BASE + 0x118)
#define MDDRC_DMC_CFG_DDRPHY			(MDDRC_DMC_BASE + 0x200)
#define MDDRC_DMC_CFG_SFC			(MDDRC_DMC_BASE + 0x210)
#define MDDRC_DMC_CFG_SFC_ADDR1			(MDDRC_DMC_BASE + 0x218)
#define MDDRC_DMC_CFG_TMON			(MDDRC_DMC_BASE + 0x240)
#define MDDRC_DMC_CFG_TMON_RANK			(MDDRC_DMC_BASE + 0x244)
#define MDDRC_DMC_INTMASK			(MDDRC_DMC_BASE + 0x280)
#define MDDRC_DMC_CURR_FUNC			(MDDRC_DMC_BASE + 0x294)
#define MDDRC_DMC_HIS_SFC_RDATA0		(MDDRC_DMC_BASE + 0x4a8)

#define MDDRC_PACK_BASE				0xf712c000
#define MDDRC_PACK_DDRC_PHYINITCTRL		(MDDRC_PACK_BASE + 0x004)
#define MDDRC_PACK_DDRC_PHYINITSTATUS		(MDDRC_PACK_BASE + 0x008)
#define MDDRC_PACK_DDRC_PHYCLKGATED		(MDDRC_PACK_BASE + 0x00c)
#define MDDRC_PACK_DDRC_PHYTIMER0		(MDDRC_PACK_BASE + 0x010)
#define MDDRC_PACK_DDRC_PHYTIMER1		(MDDRC_PACK_BASE + 0x014)
#define MDDRC_PACK_DDRC_PLLCTRL			(MDDRC_PACK_BASE + 0x018)
#define MDDRC_PACK_DDRC_PLLTIMER		(MDDRC_PACK_BASE + 0x01c)
#define MDDRC_PACK_DDRC_DLYMEASCTRL		(MDDRC_PACK_BASE + 0x020)
#define MDDRC_PACK_DDRC_DRAMTIMER0		(MDDRC_PACK_BASE + 0x030)
#define MDDRC_PACK_DDRC_DRAMTIMER1		(MDDRC_PACK_BASE + 0x034)
#define MDDRC_PACK_DDRC_DRAMTIMER2		(MDDRC_PACK_BASE + 0x038)
#define MDDRC_PACK_DDRC_DRAMTIMER3		(MDDRC_PACK_BASE + 0x03c)
#define MDDRC_PACK_DDRC_DRAMTIMER4		(MDDRC_PACK_BASE + 0x040)
#define MDDRC_PACK_DDRC_TRAINCTRL0		(MDDRC_PACK_BASE + 0x048)
#define MDDRC_PACK_DDRC_MODEREG01		(MDDRC_PACK_BASE + 0x064)
#define MDDRC_PACK_DDRC_MODEREG23		(MDDRC_PACK_BASE + 0x068)
#define MDDRC_PACK_DDRC_MISC			(MDDRC_PACK_BASE + 0x070)
#define MDDRC_PACK_DDRC_PHYCTRL0		(MDDRC_PACK_BASE + 0x078)
#define MDDRC_PACK_DDRC_RETCTRL0		(MDDRC_PACK_BASE + 0x080)
#define MDDRC_PACK_DDRC_IOCTL			(MDDRC_PACK_BASE + 0x088)
#define MDDRC_PACK_DDRC_PHYCTRL1		(MDDRC_PACK_BASE + 0x090)
#define MDDRC_PACK_DDRC_IOCTL1			(MDDRC_PACK_BASE + 0x0b0)
#define MDDRC_PACK_DDRC_IOCTL2			(MDDRC_PACK_BASE + 0x0b4)
#define MDDRC_PACK_DDRC_TRAINCTRL1		(MDDRC_PACK_BASE + 0x0d0)
#define MDDRC_PACK_DDRC_TRAINCTRL3		(MDDRC_PACK_BASE + 0x0dc)
#define MDDRC_PACK_DDRC_ACADDRBDL0		(MDDRC_PACK_BASE + 0x140)
#define MDDRC_PACK_DDRC_ACADDRBDL1		(MDDRC_PACK_BASE + 0x144)
#define MDDRC_PACK_DDRC_ACADDRBDL2		(MDDRC_PACK_BASE + 0x148)
#define MDDRC_PACK_DDRC_ACADDRBDL3		(MDDRC_PACK_BASE + 0x14c)
#define MDDRC_PACK_DDRC_ACADDRBDL4		(MDDRC_PACK_BASE + 0x150)
#define MDDRC_PACK_DDRC_CATCONFIG		(MDDRC_PACK_BASE + 0x1c8)
#define MDDRC_PACK_DDRC_ADDRPHBOUND		(MDDRC_PACK_BASE + 0x1d4)
#define MDDRC_PACK_DDRC_LPCTRL			(MDDRC_PACK_BASE + 0x1e4)
#define MDDRC_PACK_DDRC_DXNWDQNBDL0(i)		(MDDRC_PACK_BASE + 0x210 + i * 0x80)
#define MDDRC_PACK_DDRC_DXNWDQNBDL1(i)		(MDDRC_PACK_BASE + 0x214 + i * 0x80)
#define MDDRC_PACK_DDRC_DXNWDQNBDL2(i)		(MDDRC_PACK_BASE + 0x218 + i * 0x80)
#define MDDRC_PACK_DDRC_DXNRDQSDLY0		(MDDRC_PACK_BASE + 0x22c)
#define MDDRC_PACK_DDRC_DXNWDQDLY0		(MDDRC_PACK_BASE + 0x234)
#define MDDRC_PACK_DDRC_DXPHYCTRL0		(MDDRC_PACK_BASE + 0x258)
#define MDDRC_PACK_DDRC_DXPHYRSVD0		(MDDRC_PACK_BASE + 0x270)
#define MDDRC_PACK_DDRC_DXNRDQSDLY1		(MDDRC_PACK_BASE + 0x2ac)
#define MDDRC_PACK_DDRC_DXNWDQDLY1		(MDDRC_PACK_BASE + 0x2b4)
#define MDDRC_PACK_DDRC_DXPHYCTRL1		(MDDRC_PACK_BASE + 0x2d8)
#define MDDRC_PACK_DDRC_DXPHYRSVD1		(MDDRC_PACK_BASE + 0x2f0)
#define MDDRC_PACK_DDRC_DXNRDQSDLY2		(MDDRC_PACK_BASE + 0x32c)
#define MDDRC_PACK_DDRC_DXNWDQDLY2		(MDDRC_PACK_BASE + 0x334)
#define MDDRC_PACK_DDRC_DXPHYCTRL2		(MDDRC_PACK_BASE + 0x358)
#define MDDRC_PACK_DDRC_DXPHYRSVD2		(MDDRC_PACK_BASE + 0x370)
#define MDDRC_PACK_DDRC_DXNRDQSDLY3		(MDDRC_PACK_BASE + 0x3ac)
#define MDDRC_PACK_DDRC_DXNWDQDLY3		(MDDRC_PACK_BASE + 0x3b4)
#define MDDRC_PACK_DDRC_DXPHYCTRL3		(MDDRC_PACK_BASE + 0x3d8)
#define MDDRC_PACK_DDRC_DXPHYRSVD3		(MDDRC_PACK_BASE + 0x3f0)

#define MMC0_BASE				0xf723d000
#define MMC0_CTRL				(MMC0_BASE + 0x000)
#define MMC0_CLKENA				(MMC0_BASE + 0x004)
#define MMC0_CLKDIV				(MMC0_BASE + 0x008)
#define MMC0_TMOUT				(MMC0_BASE + 0x014)
#define MMC0_CTYPE				(MMC0_BASE + 0x018)
#define MMC0_BLKSIZ				(MMC0_BASE + 0x01c)
#define MMC0_BYTCNT				(MMC0_BASE + 0x020)
#define MMC0_INTMSK				(MMC0_BASE + 0x024)
#define MMC0_CMDARG				(MMC0_BASE + 0x028)
#define MMC0_CMD				(MMC0_BASE + 0x02c)
#define MMC0_RESP0				(MMC0_BASE + 0x030)
#define MMC0_RESP1				(MMC0_BASE + 0x034)
#define MMC0_RESP2				(MMC0_BASE + 0x038)
#define MMC0_RESP3				(MMC0_BASE + 0x03c)
#define MMC0_RINTSTS				(MMC0_BASE + 0x044)
#define MMC0_STATUS				(MMC0_BASE + 0x048)
#define MMC0_FIFOTH				(MMC0_BASE + 0x04c)
#define MMC0_DEBNCE				(MMC0_BASE + 0x064)
#define MMC0_UHSREG				(MMC0_BASE + 0x074)
#define MMC0_BMOD				(MMC0_BASE + 0x080)
#define MMC0_IDSTS				(MMC0_BASE + 0x08c)
#define MMC0_IDINTEN				(MMC0_BASE + 0x090)
#define MMC0_CARDTHRCTL				(MMC0_BASE + 0X100)

#define CMD_UPDATE_CLK				0x80202000
#define CMD_START_BIT				(1 << 31)

#define MMC_INT_HLE				(1 << 12)

#define MMC_8BIT_MODE				(1 << 16)

#define MMC_BLOCK_SIZE				512

#define BIT_CMD_RESPONSE_EXPECT			(1 << 6)
#define BIT_CMD_LONG_RESPONSE			(1 << 7)
#define BIT_CMD_CHECK_RESPONSE_CRC		(1 << 8)
#define BIT_CMD_DATA_EXPECTED			(1 << 9)
#define BIT_CMD_READ				(0 << 10)
#define BIT_CMD_WRITE				(1 << 10)
#define BIT_CMD_BLOCK_TRANSFER			(0 << 11)
#define BIT_CMD_STREAM_TRANSFER			(1 << 11)
#define BIT_CMD_SEND_AUTO_STOP			(1 << 12)
#define BIT_CMD_WAIT_PRVDATA_COMPLETE		(1 << 13)
#define BIT_CMD_STOP_ABORT_CMD			(1 << 14)
#define BIT_CMD_SEND_INIT			(1 << 15)
#define BIT_CMD_UPDATE_CLOCK_ONLY		(1 << 21)
#define BIT_CMD_READ_CEATA_DEVICE		(1 << 22)
#define BIT_CMD_CCS_EXPECTED			(1 << 23)
#define BIT_CMD_ENABLE_BOOT			(1 << 24)
#define BIT_CMD_EXPECT_BOOT_ACK			(1 << 25)
#define BIT_CMD_DISABLE_BOOT			(1 << 26)
#define BIT_CMD_MANDATORY_BOOT			(0 << 27)
#define BIT_CMD_ALTERNATE_BOOT			(1 << 27)
#define BIT_CMD_VOLT_SWITCH			(1 << 28)
#define BIT_CMD_USE_HOLD_REG			(1 << 29)
#define BIT_CMD_START				(1 << 31)

#define MMC_INT_EBE				(1 << 15)
#define MMC_INT_HLE				(1 << 12)
#define MMC_INT_RTO				(1 << 8)
#define MMC_INT_RCRC				(1 << 6)
#define MMC_INT_RE				(1 << 1)

#define EMMC_FIX_RCA				6

/* bits in MMC0_CTRL */
#define MMC_CTRL_RESET				(1 << 0)
#define MMC_FIFO_RESET				(1 << 1)
#define MMC_DMA_RESET				(1 << 2)
#define MMC_INT_EN				(1 << 4)
#define MMC_DMA_EN				(1 << 25)

#define MMC_STS_DATA_BUSY			(1 << 9)

#define MMC_IDMAC_ENABLE			(1 << 7)
#define MMC_IDMAC_FB				(1 << 1)
#define MMC_IDMAC_SWRESET			(1 << 0)

#define MMC_FIFO_TWMARK(x)			(x & 0xfff)
#define MMC_FIFO_RWMARK(x)			((x & 0x1ff) << 16)
#define MMC_DMA_BURST_SIZE(x)			((x & 0x7) << 28)

#define MMC_CARD_RD_THR(x)			((x & 0xfff) << 16)
#define MMC_CARD_RD_THR_EN			(1 << 0)

#define AO_CTRL_BASE				0xf7800000
#define AO_SC_SYS_CTRL0				(AO_CTRL_BASE + 0x000)
#define AO_SC_SYS_STAT1				(AO_CTRL_BASE + 0x014)
#define AO_SC_MCU_SUBSYS_CTRL3			(AO_CTRL_BASE + 0x40c)
#define AO_SC_PERIPH_CLKEN4			(AO_CTRL_BASE + 0x630)
#define AO_SC_PERIPH_CLKEN5			(AO_CTRL_BASE + 0x63c)
#define AO_SC_PERIPH_RSTDIS4			(AO_CTRL_BASE + 0x6f4)
#define AO_SC_ECONUM				(AO_CTRL_BASE + 0xf00)

#define AO_SC_SYS_CTRL0_MODE_NORMAL		0x004
#define AO_SC_SYS_CTRL0_MODE_MASK		0x007

#define AO_SC_MCU_SUBSYS_CTRL3_RCLK_3		0x003
#define AO_SC_MCU_SUBSYS_CTRL3_RCLK_MASK	0x007

#define AO_SC_PERIPH_CLKEN4_PMUSSI		(1 << 27)

#define AO_SC_PERIPH_CLKEN5_PMUSSI_CCPU		(1 << 0)
#define AO_SC_PERIPH_CLKEN5_PMUSSI_MCU		(1 << 16)

#define PMUSSI_BASE				0xf8000000

#define TIMER0_BASE				0xf8008000
#define TIMER00_LOAD				(TIMER0_BASE + 0x000)
#define TIMER00_VALUE				(TIMER0_BASE + 0x004)
#define TIMER00_CONTROL				(TIMER0_BASE + 0x008)
#define TIMER00_BGLOAD				(TIMER0_BASE + 0x018)

#define GPIO0_BASE				0xf8011000
#define GPIO1_BASE				0xf8012000
#define GPIO2_BASE				0xf8013000
#define GPIO3_BASE				0xf8014000
#define GPIO4_BASE				0xf7020000
#define GPIO5_BASE				0xf7021000
#define GPIO6_BASE				0xf7022000
#define GPIO7_BASE				0xf7023000
#define GPIO8_BASE				0xf7024000
#define GPIO9_BASE				0xf7025000
#define GPIO10_BASE				0xf7026000
#define GPIO11_BASE				0xf7027000
#define GPIO12_BASE				0xf7028000
#define GPIO13_BASE				0xf7029000
#define GPIO14_BASE				0xf702a000
#define GPIO15_BASE				0xf702b000
#define GPIO16_BASE				0xf702c000
#define GPIO17_BASE				0xf702d000
#define GPIO18_BASE				0xf702e000
#define GPIO19_BASE				0xf702f000

#define GPIO_DIR				0x400

#endif	/* __HI6220_H__ */
