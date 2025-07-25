/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2015 Hans de Goede <hdegoede@redhat.com>
 */

#ifndef _SUNXI_CPU_H
#define _SUNXI_CPU_H

#if defined(CONFIG_MACH_SUN9I)
#include <asm/arch/cpu_sun9i.h>
#elif defined(CONFIG_MACH_SUN8I_T113)
#include <asm/arch/cpu_ncat_v2.h>
#elif defined(CONFIG_SUN50I_GEN_H6)
#include <asm/arch/cpu_sun50i_h6.h>
#else
#include <asm/arch/cpu_sun4i.h>
#endif

#define SOCID_A64	0x1689
#define SOCID_H3	0x1680
#define SOCID_V3S	0x1681
#define SOCID_H5	0x1718
#define SOCID_R40	0x1701

#endif /* _SUNXI_CPU_H */
