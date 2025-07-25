/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2007-2011
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * Tom Cubie <tangliang@allwinnertech.com>
 */

#ifndef _SUNXI_CPU_SUN4I_H
#define _SUNXI_CPU_SUN4I_H

#define SUNXI_SRAM_A1_BASE		0x00000000
#define SUNXI_SRAM_A1_SIZE		(16 * 1024)	/* 16 kiB */

#if defined(CONFIG_SUNXI_GEN_SUN6I) && \
    !defined(CONFIG_MACH_SUN8I_R40) && \
    !defined(CONFIG_MACH_SUN8I_V3S)
#define SUNXI_SRAM_A2_BASE		0x00040000
#ifdef CONFIG_MACH_SUN8I_H3
#define SUNXI_SRAM_A2_SIZE		(48 * 1024)	/* 16+32 kiB */
#else
#define SUNXI_SRAM_A2_SIZE		(80 * 1024)	/* 16+64 kiB */
#endif
#else
#define SUNXI_SRAM_A2_BASE		0x00004000	/* 16 kiB */
#endif
#define SUNXI_SRAM_A3_BASE		0x00008000	/* 13 kiB */
#define SUNXI_SRAM_A4_BASE		0x0000b400	/* 3 kiB */
#define SUNXI_SRAM_D_BASE		0x00010000	/* 4 kiB */
#define SUNXI_SRAM_B_BASE		0x00020000	/* 64 kiB (secure) */

#define SUNXI_DE2_BASE			0x01000000

#ifdef CONFIG_MACH_SUN8I_A83T
#define SUNXI_CPUCFG_BASE		0x01700000
#endif

#define SUNXI_SRAMC_BASE		0x01c00000
#define SUNXI_DRAMC_BASE		0x01c01000
#define SUNXI_DMA_BASE			0x01c02000
#define SUNXI_NFC_BASE			0x01c03000
#define SUNXI_TS_BASE			0x01c04000
#define SUNXI_SPI0_BASE			0x01c05000
#define SUNXI_SPI1_BASE			0x01c06000
#define SUNXI_MS_BASE			0x01c07000
#define SUNXI_TVD_BASE			0x01c08000
#define SUNXI_CSI0_BASE			0x01c09000
#ifndef CONFIG_MACH_SUNXI_H3_H5
#define SUNXI_TVE0_BASE			0x01c0a000
#endif
#define SUNXI_EMAC_BASE			0x01c0b000
#define SUNXI_LCD0_BASE			0x01c0C000
#define SUNXI_LCD1_BASE			0x01c0d000
#define SUNXI_VE_BASE			0x01c0e000
#define SUNXI_MMC0_BASE			0x01c0f000
#define SUNXI_MMC1_BASE			0x01c10000
#define SUNXI_MMC2_BASE			0x01c11000
#ifndef CONFIG_MACH_SUN8I_T113
#define SUNXI_MMC3_BASE			0x01c12000
#endif
#ifdef CONFIG_SUNXI_GEN_SUN4I
#define SUNXI_USB0_BASE			0x01c13000
#define SUNXI_USB1_BASE			0x01c14000
#endif
#define SUNXI_SS_BASE			0x01c15000
#if !defined(CONFIG_MACH_SUNXI_H3_H5) && !defined(CONFIG_MACH_SUN50I)
#define SUNXI_HDMI_BASE			0x01c16000
#endif
#define SUNXI_SPI2_BASE			0x01c17000
#define SUNXI_SATA_BASE			0x01c18000
#ifdef CONFIG_SUNXI_GEN_SUN4I
#define SUNXI_PATA_BASE			0x01c19000
#define SUNXI_ACE_BASE			0x01c1a000
#define SUNXI_TVE1_BASE			0x01c1b000
#define SUNXI_USB2_BASE			0x01c1c000
#endif
#ifdef CONFIG_SUNXI_GEN_SUN6I
#if defined(CONFIG_MACH_SUNXI_H3_H5) || defined(CONFIG_MACH_SUN50I)
#define SUNXI_USBPHY_BASE		0x01c19000
#define SUNXI_USB0_BASE			SUNXI_USBPHY_BASE
#define SUNXI_USB1_BASE			0x01c1a000
#define SUNXI_USB2_BASE			0x01c1b000
#define SUNXI_USB3_BASE			0x01c1c000
#define SUNXI_USB4_BASE			0x01c1d000
#else
#define SUNXI_USB0_BASE			0x01c19000
#define SUNXI_USB1_BASE			0x01c1a000
#define SUNXI_USB2_BASE			0x01c1b000
#endif
#endif
#define SUNXI_CSI1_BASE			0x01c1d000
#define SUNXI_TZASC_BASE		0x01c1e000
#define SUNXI_SPI3_BASE			0x01c1f000

#define SUNXI_CCM_BASE			0x01c20000
#define SUNXI_INTC_BASE			0x01c20400
#define SUNXI_PIO_BASE			0x01c20800
#define SUNXI_TIMER_BASE		0x01c20c00
#ifndef CONFIG_SUNXI_GEN_SUN6I
#define SUNXI_PWM_BASE			0x01c20e00
#endif
#define SUNXI_SPDIF_BASE		0x01c21000
#ifdef CONFIG_SUNXI_GEN_SUN6I
#define SUNXI_PWM_BASE			0x01c21400
#else
#define SUNXI_AC97_BASE			0x01c21400
#endif
#define SUNXI_IR0_BASE			0x01c21800
#define SUNXI_IR1_BASE			0x01c21c00

#define SUNXI_IIS_BASE			0x01c22400
#define SUNXI_LRADC_BASE		0x01c22800
#define SUNXI_AD_DA_BASE		0x01c22c00
#define SUNXI_KEYPAD_BASE		0x01c23000
#define SUNXI_TZPC_BASE			0x01c23400

#if defined(CONFIG_MACH_SUN8I_A83T) || defined(CONFIG_MACH_SUNXI_H3_H5) || \
defined(CONFIG_MACH_SUN50I)
/* SID address space starts at 0x01c1400, but e-fuse is at offset 0x200 */
#define SUNXI_SIDC_BASE			0x01c14000
#define SUNXI_SID_BASE			0x01c14200
#else
#define SUNXI_SID_BASE			0x01c23800
#endif

#define SUNXI_SJTAG_BASE		0x01c23c00

#define SUNXI_TP_BASE			0x01c25000
#define SUNXI_PMU_BASE			0x01c25400

#if defined CONFIG_MACH_SUN7I || defined CONFIG_MACH_SUN8I_R40
#define SUNXI_CPUCFG_BASE		0x01c25c00
#endif

#ifdef CONFIG_MACH_SUNIV
#define SUNXI_UART0_BASE		0x01c25000
#define SUNXI_UART1_BASE		0x01c25400
#define SUNXI_UART2_BASE		0x01c25800
#else
#define SUNXI_UART0_BASE		0x01c28000
#define SUNXI_UART1_BASE		0x01c28400
#define SUNXI_UART2_BASE		0x01c28800
#endif
#define SUNXI_UART3_BASE		0x01c28c00
#define SUNXI_UART4_BASE		0x01c29000
#define SUNXI_UART5_BASE		0x01c29400
#define SUNXI_UART6_BASE		0x01c29800
#define SUNXI_UART7_BASE		0x01c29c00
#define SUNXI_PS2_0_BASE		0x01c2a000
#define SUNXI_PS2_1_BASE		0x01c2a400

#define SUNXI_TWI0_BASE			0x01c2ac00
#define SUNXI_TWI1_BASE			0x01c2b000
#define SUNXI_TWI2_BASE			0x01c2b400
#ifdef CONFIG_MACH_SUN6I
#define SUNXI_TWI3_BASE			0x01c0b800
#endif
#ifdef CONFIG_MACH_SUN7I
#define SUNXI_TWI3_BASE			0x01c2b800
#define SUNXI_TWI4_BASE			0x01c2c000
#endif

#define SUNXI_CAN_BASE			0x01c2bc00

#define SUNXI_SCR_BASE			0x01c2c400

#ifndef CONFIG_MACH_SUN6I
#define SUNXI_GPS_BASE			0x01c30000
#define SUNXI_MALI400_BASE		0x01c40000
#define SUNXI_GMAC_BASE			0x01c50000
#else
#define SUNXI_GMAC_BASE			0x01c30000
#endif

#define SUNXI_DRAM_COM_BASE		0x01c62000
#define SUNXI_DRAM_CTL0_BASE		0x01c63000
#define SUNXI_DRAM_CTL1_BASE		0x01c64000
#define SUNXI_DRAM_PHY0_BASE		0x01c65000
#define SUNXI_DRAM_PHY1_BASE		0x01c66000

#define SUNXI_GIC400_BASE		0x01c80000

/* module sram */
#define SUNXI_SRAM_C_BASE		0x01d00000

#ifndef CONFIG_MACH_SUN8I_H3
#define SUNXI_DE_FE0_BASE		0x01e00000
#else
#define SUNXI_TVE0_BASE			0x01e00000
#endif
#define SUNXI_DE_FE1_BASE		0x01e20000
#define SUNXI_DE_BE0_BASE		0x01e60000
#ifndef CONFIG_MACH_SUN50I_H5
#define SUNXI_DE_BE1_BASE		0x01e40000
#else
#define SUNXI_TVE0_BASE			0x01e40000
#endif
#define SUNXI_MP_BASE			0x01e80000
#define SUNXI_AVG_BASE			0x01ea0000

#if defined(CONFIG_MACH_SUNXI_H3_H5) || defined(CONFIG_MACH_SUN50I)
#define SUNXI_HDMI_BASE			0x01ee0000
#endif

#define SUNXI_RTC_BASE			0x01f00000
#define SUNXI_PRCM_BASE			0x01f01400

#if defined CONFIG_SUNXI_GEN_SUN6I && \
    !defined CONFIG_MACH_SUN8I_A83T && \
    !defined CONFIG_MACH_SUN8I_R40
#define SUNXI_CPUCFG_BASE		0x01f01c00
#endif

#define SUNXI_R_TWI_BASE		0x01f02400
#define SUNXI_R_UART_BASE		0x01f02800
#define SUNXI_R_PIO_BASE		0x01f02c00
#define SUN6I_P2WI_BASE			0x01f03400
#define SUNXI_RSB_BASE			0x01f03400

/* CoreSight Debug Module */
#define SUNXI_CSDM_BASE			0x3f500000

#define SUNXI_DDRII_DDRIII_BASE		0x40000000	/* 2 GiB */

#define SUNXI_BROM_BASE			0xffff0000	/* 32 kiB */

#define SUNXI_CPU_CFG			(SUNXI_TIMER_BASE + 0x13c)

/* SS bonding ids used for cpu identification */
#define SUNXI_SS_BOND_ID_A31		4
#define SUNXI_SS_BOND_ID_A31S		5

#ifndef __ASSEMBLY__
void sunxi_board_init(void);
void sunxi_reset(void);
int sunxi_get_ss_bonding_id(void);
int sunxi_get_sid(unsigned int *sid);
unsigned int sunxi_get_sram_id(void);
#endif /* __ASSEMBLY__ */

#endif /* _SUNXI_CPU_SUN4I_H */
