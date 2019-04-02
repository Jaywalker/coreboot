/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2019 System76
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 */

#ifndef MAINBOARD_GPIO_H
#define MAINBOARD_GPIO_H

#include <soc/gpe.h>
#include <soc/gpio.h>

#ifndef __ACPI__

#define PAD_CFG_NC(pad) PAD_NC(pad, NONE)

/* Pad configuration in ramstage. */
static const struct pad_config gpio_table[] = {
	/* PM_BATLOW# */
	PAD_CFG_GPI(GPD0, NONE, PWROK),
	/* AC_PRESENT */
	PAD_CFG_NF(GPD1, NATIVE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPD2),
	/* PWR_BTN# */
	PAD_CFG_NF(GPD3, UP_20K, DEEP, NF1),
	/* SUSB#_PCH */
	PAD_CFG_NF(GPD4, NONE, DEEP, NF1),
	/* SUSC#_PCH */
	PAD_CFG_NF(GPD5, NONE, DEEP, NF1),
	/* SLP_A# */
	PAD_CFG_NF(GPD6, NONE, DEEP, NF1),
	/* Pull up */
	PAD_CFG_NC(GPD7),
	/* SUS_CLK */
	PAD_CFG_NF(GPD8, NONE, DEEP, NF1),
	/* T69 */
	PAD_CFG_NC(GPD9),
	/* T21 */
	PAD_CFG_NF(GPD10, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPD11),
	/* SB_KBCRST# */
	PAD_CFG_NF(GPP_A0, NONE, DEEP, NF1),
	/* LPC_AD0 */
	PAD_CFG_NF(GPP_A1, NATIVE, DEEP, NF1),
	/* LPC_AD1 */
	PAD_CFG_NF(GPP_A2, NATIVE, DEEP, NF1),
	/* LPC_AD2 */
	PAD_CFG_NF(GPP_A3, NATIVE, DEEP, NF1),
	/* LPC_AD3 */
	PAD_CFG_NF(GPP_A4, NATIVE, DEEP, NF1),
	/* LPC_FRAME# */
	PAD_CFG_NF(GPP_A5, NONE, DEEP, NF1),
	/* SERIRQ with pull up */
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1),
	/* TPM_PIRQ# */
	PAD_CFG_GPI(GPP_A7, NONE, DEEP),
	/* PM_CLKRUN# with pull-up */
	PAD_CFG_NF(GPP_A8, NONE, DEEP, NF1),
	/* PCLK_KBC */
	PAD_CFG_NF(GPP_A9, DN_20K, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_A10),
	/* NC */
	PAD_CFG_NC(GPP_A11),
	/* PCH_GPP_A12 with pull-up */
	PAD_CFG_GPI(GPP_A12, NONE, DEEP),
	/* SUSWARN# with tie to SUS_PWR_ACK */
	PAD_CFG_NF(GPP_A13, NONE, DEEP, NF1),
	/* SUS_STAT# T15 */
	PAD_CFG_NF(GPP_A14, NONE, DEEP, NF1),
	/* SUS_PWR_ACK with tie to SUSWARN# */
	PAD_CFG_NF(GPP_A15, UP_20K, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_A16),
	/* LIGHT_KB_DET# */
	PAD_CFG_GPI(GPP_A17, NONE, DEEP),
	/* T56 */
	PAD_CFG_GPI(GPP_A18, NONE, DEEP),
	/* SATA_PWR_EN */
	PAD_CFG_GPI(GPP_A19, NONE, DEEP),
	/* NC */
	PAD_CFG_NC(GPP_A20),
	/* NC */
	PAD_CFG_NC(GPP_A21),
	/* PS8338B_SW */
	PAD_CFG_GPO(GPP_A22, 0, DEEP),
	/* PS8338B_PCH */
	PAD_CFG_GPO(GPP_A23, 0, DEEP),
	/* CORE_VID0 with pull-up and pull-down */
	PAD_CFG_NF(GPP_B0, NONE, DEEP, NF1),
	/* CORE_VID1 with pull-up and pull-down */
	PAD_CFG_GPI(GPP_B1, NONE, DEEP),
	/* CNVI_WAKE# */
	PAD_CFG_GPI(GPP_B2, NONE, DEEP),
	/* NC */
	PAD_CFG_NC(GPP_B3),
	/* NC */
	PAD_CFG_NC(GPP_B4),
	/* NC */
	PAD_CFG_NC(GPP_B5),
	/* NC */
	PAD_CFG_NC(GPP_B6),
	/* WLAN_CLKREQ# */
	PAD_CFG_NF(GPP_B7, NONE, DEEP, NF1),
	/* LAN_CLKREQ# */
	PAD_CFG_NF(GPP_B8, NONE, DEEP, NF1),
	/* TBT_CLKREQ# */
	PAD_CFG_NF(GPP_B9, NONE, DEEP, NF1),
	/* SSD_CLKREQ# */
	PAD_CFG_NF(GPP_B10, NONE, DEEP, NF1),
	/* EXT_PWR_GATE# */
	PAD_CFG_NF(GPP_B11, NONE, DEEP, NF1),
	/* SLP_S0# with pull-down */
	PAD_CFG_NF(GPP_B12, NONE, DEEP, NF1),
	/* PLT_RST# with pull-down */
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1),
	/* PCH_SPKR */
	PAD_CFG_NF(GPP_B14, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_B15),
	/* T16 */
	PAD_CFG_NC(GPP_B16),
	/* T35 */
	PAD_CFG_NC(GPP_B17),
	/* Pull-down - strap for disabling no reboot mode */
	PAD_CFG_NC(GPP_B18),
	/* NC */
	PAD_CFG_NC(GPP_B19),
	/* NC */
	PAD_CFG_NC(GPP_B20),
	/* NC */
	PAD_CFG_NC(GPP_B21),
	/* T14 */
	PAD_CFG_NC(GPP_B22),
	/* T57 */
	PAD_CFG_NC(GPP_B23),
	/* SMB_CLK_DDR */
	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1),
	/* SMB_DAT_DDR */
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1),
	/* PCH_GPP_C2 with pull-up */
	PAD_CFG_GPI(GPP_C2, NONE, DEEP),
	/* NC */
	PAD_CFG_NC(GPP_C3),
	/* NC */
	PAD_CFG_NC(GPP_C4),
	/* WLAN_WAKEUP#, NC */
	PAD_CFG_GPI(GPP_C5, NONE, DEEP),
	/* T61, LAN_WAKEUP# */
	PAD_CFG_GPI(GPP_C6, NONE, DEEP),
	/* T64 */
	PAD_CFG_NC(GPP_C7),
	/* NC */
	PAD_CFG_NC(GPP_C8),
#if CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1325
	/* TBCIO_PLUG_EVENT */
	_PAD_CFG_STRUCT(GPP_C9, 0x84800100, 0x3000),
#elif CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1323
	/* TBCIO_PLUG_EVENT */
	_PAD_CFG_STRUCT(GPP_C9, 0x82880100, 0x3000),
#else
	#error Unknown Mainboard
#endif
	/* TBT_FRC_PWR */
	PAD_CFG_GPO(GPP_C10, 1, PLTRST),
	/* NC */
	PAD_CFG_NC(GPP_C11),
	/* GPP_C12_RTD3 */
	PAD_CFG_GPO(GPP_C12, 1, PLTRST),
	/* SSD_PWR_DN# */
	PAD_CFG_GPO(GPP_C13, 1, PLTRST),
	/* TBTA_HRESET */
	PAD_CFG_GPO(GPP_C14, 0, PLTRST),
	/* TBT_PERST_N */
	PAD_CFG_GPO(GPP_C15, 1, PLTRST),
	/* T_SDA */
	PAD_CFG_NF(GPP_C16, NONE, DEEP, NF1),
	/* T_SCL */
	PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_C18),
	/* NC, SWI */
	PAD_CFG_NC(GPP_C19),
	/* UART2_RXD */
	PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1),
	/* UART2_TXD */
	PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_C22),
#if CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1325
	/* TP_ATTN# */
	_PAD_CFG_STRUCT(GPP_C23, 0x80100100, 0x0),
#elif CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1323
	/* NC */
	PAD_CFG_NC(GPP_C23),
#else
	#error Unknown Mainboard
#endif
	/* NC */
	PAD_CFG_NC(GPP_D0),
	/* NC */
	PAD_CFG_NC(GPP_D1),
	/* NC */
	PAD_CFG_NC(GPP_D2),
	/* NC */
	PAD_CFG_NC(GPP_D3),
	/* NC */
	PAD_CFG_NC(GPP_D4),
	/* NC */
	PAD_CFG_NC(GPP_D5),
	/* NC */
	PAD_CFG_NC(GPP_D6),
	/* NC */
	PAD_CFG_NC(GPP_D7),
	/* SB_BLON */
	PAD_CFG_GPO(GPP_D8, 1, DEEP),
	/* SWI# */
	PAD_CFG_GPI_SCI_LOW(GPP_D9, NONE, DEEP, LEVEL),
	/* NC */
	PAD_CFG_NC(GPP_D10),
	/* RTD3_PCIE_WAKE# */
	_PAD_CFG_STRUCT(GPP_D11, 0x40880100, 0x3000),
	/* T33 */
	PAD_CFG_NC(GPP_D12),
	/* NC */
	PAD_CFG_NC(GPP_D13),
	/* NC */
	PAD_CFG_NC(GPP_D14),
	/* NC */
	PAD_CFG_NC(GPP_D15),
	/* NC, RTD3_3G_PW R_EN */
	PAD_CFG_GPO(GPP_D16, 1, PWROK),
	/* NC */
	PAD_CFG_NC(GPP_D17),
	/* NC */
	PAD_CFG_NC(GPP_D18),
	/* GPPC_DMIC_CLK */
	PAD_CFG_NF(GPP_D19, NONE, DEEP, NF1),
	/* GPPC_DMIC_DATA */
	PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1),
	/* TPM_DET# */
	PAD_CFG_GPI(GPP_D21, NONE, DEEP),
	/* TPM_TCM_Detect */
	PAD_CFG_GPI(GPP_D22, NONE, DEEP),
	/* T32 */
	PAD_CFG_NC(GPP_D23),
	/* PCH_GPP_E0 with pull-up */
	PAD_CFG_GPI(GPP_E0, NONE, DEEP),
	/* SATA_ODD_PRSNT# */
	PAD_CFG_GPI(GPP_E1, NONE, DEEP),
	/* SATAGP2 */
	//TODO: Should this be function 2?
	PAD_CFG_NF(GPP_E2, UP_20K, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_E3),
	/* T64 */
	PAD_CFG_NC(GPP_E4),
	/* T60 */
	PAD_CFG_NC(GPP_E5),
	/* DEVSLP2 */
	PAD_CFG_NF(GPP_E6, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_E7),
	/* PCH_SATAHDD_LED# */
	PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1),
	/* GP_BSSB_CLK with pull-up, T30 */
	PAD_CFG_GPI(GPP_E9, NONE, DEEP),
	/* GPP_E10 with pull-up, T31 */
	PAD_CFG_GPI(GPP_E10, NONE, DEEP),
	/* GPP_E11 with pull-up, T28 */
	PAD_CFG_GPI(GPP_E11, NONE, DEEP),
	/* USB_OC#78 with pull-up, T29 */
	PAD_CFG_GPI(GPP_E12, NONE, DEEP),
	/* MUX_HPD */
	PAD_CFG_NF(GPP_E13, NONE, DEEP, NF1),
	/* HDMI_HPD */
	PAD_CFG_NF(GPP_E14, NONE, DEEP, NF1),
	/* SMI# */
	_PAD_CFG_STRUCT(GPP_E15, 0x42840100, 0x0),
	/* SCI# */
	PAD_CFG_GPI_SCI_LOW(GPP_E16, NONE, PLTRST, LEVEL),
	/* EDP_HPD */
	PAD_CFG_NF(GPP_E17, NONE, DEEP, NF1),
	/* MDP_CTRLCLK */
	PAD_CFG_NF(GPP_E18, NONE, DEEP, NF1),
	/* MDP_CTRLDATA */
	PAD_CFG_NF(GPP_E19, NONE, DEEP, NF1),
	/* HDMI_CTRLCLK */
	PAD_CFG_NF(GPP_E20, NONE, DEEP, NF1),
	/* HDMI_CTRLDATA */
	PAD_CFG_NF(GPP_E21, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_E22),
	/* NC */
	PAD_CFG_NC(GPP_E23),
	/* CNVI_GNSS_PA_BLANKING */
	PAD_CFG_NF(GPP_F0, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_F1),
	/* NC */
	PAD_CFG_NC(GPP_F2),
	/* NC */
	PAD_CFG_NC(GPP_F3),
	/* CNVI_BRI_DT */
	PAD_CFG_NF(GPP_F4, NONE, DEEP, NF1),
	/* CNVI_BRI_RSP */
	PAD_CFG_NF(GPP_F5, NONE, DEEP, NF1),
	/* CNVI_RGI_DT */
	PAD_CFG_NF(GPP_F6, UP_20K, DEEP, NF1),
	/* CNVI_RGI_RSP */
	PAD_CFG_NF(GPP_F7, NONE, DEEP, NF1),
	/* CNVI_MFUART2_RXD */
	PAD_CFG_NF(GPP_F8, UP_20K, DEEP, NF1),
	/* CNVI_MFUART2_TXD */
	PAD_CFG_NF(GPP_F9, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_F10),
	/* NC */
	PAD_CFG_NC(GPP_F11),
	/* NC */
	PAD_CFG_NC(GPP_F12),
	/* NC */
	PAD_CFG_NC(GPP_F13),
	/* NC */
	PAD_CFG_NC(GPP_F14),
	/* NC */
	PAD_CFG_NC(GPP_F15),
	/* NC */
	PAD_CFG_NC(GPP_F16),
	/* NC */
	PAD_CFG_NC(GPP_F17),
	/* NC */
	PAD_CFG_NC(GPP_F18),
	/* NC */
	PAD_CFG_NC(GPP_F19),
	/* NC */
	PAD_CFG_NC(GPP_F20),
	/* NC */
	PAD_CFG_NC(GPP_F21),
	/* NC */
	PAD_CFG_NC(GPP_F22),
	/* A4WP_PRESENT */
	PAD_CFG_NF(GPP_F23, NONE, DEEP, NF1),
	/* NC, EDP_DET */
	PAD_CFG_NC(GPP_G0),
	/* NC */
	PAD_CFG_NC(GPP_G1),
	/* NC */
	PAD_CFG_NC(GPP_G2),
	/* NC */
	PAD_CFG_GPI(GPP_G3, NONE, DEEP),
	/* NC */
	PAD_CFG_GPI(GPP_G4, NONE, DEEP),
	/* BOARD_ID */
	PAD_CFG_GPI(GPP_G5, NONE, DEEP),
	/* NC */
	PAD_CFG_GPI(GPP_G6, NONE, DEEP),
	/* TBT_Detect */
	PAD_CFG_GPI(GPP_G7, NONE, DEEP),
	/* NC */
	PAD_CFG_NC(GPP_H0),
	/* CNVI_RST# */
	PAD_CFG_NF(GPP_H1, DN_20K, DEEP, NF3),
	/* CNVI_CLKREQ */
	PAD_CFG_NF(GPP_H2, DN_20K, DEEP, NF3),
	/* NC */
	PAD_CFG_NC(GPP_H3),
	/* T23 */
	PAD_CFG_NC(GPP_H4),
	/* T22 */
	PAD_CFG_NC(GPP_H5),
	/* NC */
	PAD_CFG_NC(GPP_H6),
	/* NC */
	PAD_CFG_NC(GPP_H7),
	/* NC */
	PAD_CFG_NC(GPP_H8),
	/* NC */
	PAD_CFG_NC(GPP_H9),
	/* NC */
	PAD_CFG_NC(GPP_H10),
	/* NC */
	PAD_CFG_NC(GPP_H11),
	/* NC */
	PAD_CFG_NC(GPP_H12),
	/* NC */
	PAD_CFG_NC(GPP_H13),
	/* G_INT1 */
	PAD_CFG_GPI(GPP_H14, NONE, DEEP),
	/* NC */
	PAD_CFG_NC(GPP_H15),
	/* NC */
	PAD_CFG_NC(GPP_H16),
	/* NC */
	PAD_CFG_NC(GPP_H17),
	/* CPU_C10_GATE# */
	PAD_CFG_NF(GPP_H18, NONE, DEEP, NF1),
	/* NC */
	PAD_CFG_NC(GPP_H19),
	/* NC */
	PAD_CFG_NC(GPP_H20),
	/* Pull-up and pull-down */
	PAD_CFG_GPI(GPP_H21, NONE, DEEP),
	/* TBT_RTD3_PWR_EN_R */
	PAD_CFG_GPO(GPP_H22, 1, DEEP),
	/* NC, WIGIG_PEWAKE */
	PAD_CFG_GPO(GPP_H23, 1, PLTRST),
};

/* Early pad configuration in romstage. */
static const struct pad_config early_gpio_table[] = {
	/* UART2_RXD */
	PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1),
	/* UART2_TXD */
	PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1),
};

#endif

#endif
