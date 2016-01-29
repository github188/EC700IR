/*********************************************************************
 * Copyright (C) 2003-2006 Texas Instruments Incorporated. 
 * All Rights Reserved 
 *********************************************************************/
 /** \file cslr_dev.h
 * 
 * \brief This file contains the Register Desciptions for DEV
 * 
 *********************************************************************/
#ifndef _CSLR_DEV_H_
#define _CSLR_DEV_H_

#include <cslr.h>

#include <tistdtypes.h>

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 DEVSTAT;
    volatile Uint32 PRI_ALLOC;
    volatile Uint32 JTAGID;
    volatile Uint8 RSVD0[262136];
    volatile Uint32 PERLOCK;
    volatile Uint32 PERCFG0;
    volatile Uint8 RSVD1[8];
    volatile Uint32 PERSTAT0;
    volatile Uint32 PERSTAT1;
    volatile Uint8 RSVD2[4];
    volatile Uint32 EMACCFG;
    volatile Uint8 RSVD3[8];
    volatile Uint32 PERCFG1;
    volatile Uint8 RSVD4[36];
    volatile Uint32 EMUBUFPDN;
} CSL_DevRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/
/* DEVSTAT */

#define CSL_DEV_DEVSTAT_EMIFA_EN_MASK    (0x00400000u)
#define CSL_DEV_DEVSTAT_EMIFA_EN_SHIFT   (0x00000016u)
#define CSL_DEV_DEVSTAT_EMIFA_EN_RESETVAL (0x00000000u)

/*----EMIFA_EN Tokens----*/
#define CSL_DEV_DEVSTAT_EMIFA_EN_DISABLE (0x00000000u)
#define CSL_DEV_DEVSTAT_EMIFA_EN_ENABLE  (0x00000001u)

#define CSL_DEV_DEVSTAT_DDR2_EN_MASK     (0x00200000u)
#define CSL_DEV_DEVSTAT_DDR2_EN_SHIFT    (0x00000015u)
#define CSL_DEV_DEVSTAT_DDR2_EN_RESETVAL (0x00000000u)

/*----DDR2_EN Tokens----*/
#define CSL_DEV_DEVSTAT_DDR2_EN_DISABLE  (0x00000000u)
#define CSL_DEV_DEVSTAT_DDR2_EN_ENABLE   (0x00000001u)

#define CSL_DEV_DEVSTAT_PCI_EN_MASK      (0x00100000u)
#define CSL_DEV_DEVSTAT_PCI_EN_SHIFT     (0x00000014u)
#define CSL_DEV_DEVSTAT_PCI_EN_RESETVAL  (0x00000000u)

/*----PCI_EN Tokens----*/
#define CSL_DEV_DEVSTAT_PCI_EN_HPI       (0x00000000u)
#define CSL_DEV_DEVSTAT_PCI_EN_PCI       (0x00000001u)

#define CSL_DEV_DEVSTAT_CFGGP_MASK       (0x000E0000u)
#define CSL_DEV_DEVSTAT_CFGGP_SHIFT      (0x00000011u)
#define CSL_DEV_DEVSTAT_CFGGP_RESETVAL   (0x00000000u)

#define CSL_DEV_DEVSTAT_SYSCLKOUT_EN_MASK (0x00008000u)
#define CSL_DEV_DEVSTAT_SYSCLKOUT_EN_SHIFT (0x0000000Fu)
#define CSL_DEV_DEVSTAT_SYSCLKOUT_EN_RESETVAL (0x00000000u)

/*----SYSCLKOUT_EN Tokens----*/
#define CSL_DEV_DEVSTAT_SYSCLKOUT_EN_GP1 (0x00000000u)
#define CSL_DEV_DEVSTAT_SYSCLKOUT_EN_SYSCLK4 (0x00000001u)

#define CSL_DEV_DEVSTAT_MCBSP1_EN_MASK   (0x00004000u)
#define CSL_DEV_DEVSTAT_MCBSP1_EN_SHIFT  (0x0000000Eu)
#define CSL_DEV_DEVSTAT_MCBSP1_EN_RESETVAL (0x00000000u)

/*----MCBSP1_EN Tokens----*/
#define CSL_DEV_DEVSTAT_MCBSP1_EN_GPIO   (0x00000000u)
#define CSL_DEV_DEVSTAT_MCBSP1_EN_MCBSP_1 (0x00000001u)

#define CSL_DEV_DEVSTAT_PCI66_MASK       (0x00002000u)
#define CSL_DEV_DEVSTAT_PCI66_SHIFT      (0x0000000Du)
#define CSL_DEV_DEVSTAT_PCI66_RESETVAL   (0x00000000u)

/*----PCI66 Tokens----*/
#define CSL_DEV_DEVSTAT_PCI66_33MHZ      (0x00000000u)
#define CSL_DEV_DEVSTAT_PCI66_66MHZ      (0x00000001u)

#define CSL_DEV_DEVSTAT_PCI_EEAI_MASK    (0x00000800u)
#define CSL_DEV_DEVSTAT_PCI_EEAI_SHIFT   (0x0000000Bu)
#define CSL_DEV_DEVSTAT_PCI_EEAI_RESETVAL (0x00000000u)

/*----PCI_EEAI Tokens----*/
#define CSL_DEV_DEVSTAT_PCI_EEAI_DISABLE (0x00000000u)
#define CSL_DEV_DEVSTAT_PCI_EEAI_ENABLE  (0x00000001u)

#define CSL_DEV_DEVSTAT_MACSEL_MASK      (0x00000600u)
#define CSL_DEV_DEVSTAT_MACSEL_SHIFT     (0x00000009u)
#define CSL_DEV_DEVSTAT_MACSEL_RESETVAL  (0x00000000u)

/*----MACSEL Tokens----*/
#define CSL_DEV_DEVSTAT_MACSEL_MII       (0x00000000u)
#define CSL_DEV_DEVSTAT_MACSEL_RMII      (0x00000001u)
#define CSL_DEV_DEVSTAT_MACSEL_GMII      (0x00000002u)
#define CSL_DEV_DEVSTAT_MACSEL_RGMII     (0x00000003u)

#define CSL_DEV_DEVSTAT_UTOPIA_EN_MASK   (0x00000080u)
#define CSL_DEV_DEVSTAT_UTOPIA_EN_SHIFT  (0x00000007u)
#define CSL_DEV_DEVSTAT_UTOPIA_EN_RESETVAL (0x00000000u)

/*----UTOPIA_EN Tokens----*/
#define CSL_DEV_DEVSTAT_UTOPIA_EN_DISABLE (0x00000000u)
#define CSL_DEV_DEVSTAT_UTOPIA_EN_ENABLE (0x00000001u)

#define CSL_DEV_DEVSTAT_LENDIAN_MASK     (0x00000040u)
#define CSL_DEV_DEVSTAT_LENDIAN_SHIFT    (0x00000006u)
#define CSL_DEV_DEVSTAT_LENDIAN_RESETVAL (0x00000001u)

/*----LENDIAN Tokens----*/
#define CSL_DEV_DEVSTAT_LENDIAN_BE       (0x00000000u)
#define CSL_DEV_DEVSTAT_LENDIAN_LE       (0x00000001u)

#define CSL_DEV_DEVSTAT_HPI_WIDTH_MASK   (0x00000020u)
#define CSL_DEV_DEVSTAT_HPI_WIDTH_SHIFT  (0x00000005u)
#define CSL_DEV_DEVSTAT_HPI_WIDTH_RESETVAL (0x00000000u)

/*----HPI_WIDTH Tokens----*/
#define CSL_DEV_DEVSTAT_HPI_WIDTH_16BIT  (0x00000000u)
#define CSL_DEV_DEVSTAT_HPI_WIDTH_32BIT  (0x00000001u)

#define CSL_DEV_DEVSTAT_AECLKINSEL_MASK  (0x00000010u)
#define CSL_DEV_DEVSTAT_AECLKINSEL_SHIFT (0x00000004u)
#define CSL_DEV_DEVSTAT_AECLKINSEL_RESETVAL (0x00000000u)

/*----AECLKINSEL Tokens----*/
#define CSL_DEV_DEVSTAT_AECLKINSEL_AECLKIN (0x00000000u)
#define CSL_DEV_DEVSTAT_AECLKINSEL_SYSCLK4 (0x00000001u)

#define CSL_DEV_DEVSTAT_BOOTMODE_MASK    (0x0000000Fu)
#define CSL_DEV_DEVSTAT_BOOTMODE_SHIFT   (0x00000000u)
#define CSL_DEV_DEVSTAT_BOOTMODE_RESETVAL (0x00000000u)

/*----BOOTMODE Tokens----*/
#define CSL_DEV_DEVSTAT_BOOTMODE_NONE    (0x00000000u)
#define CSL_DEV_DEVSTAT_BOOTMODE_HPI     (0x00000001u)
#define CSL_DEV_DEVSTAT_BOOTMODE_EMIFA8BIT (0x00000004u)
#define CSL_DEV_DEVSTAT_BOOTMODE_MASTER_I2C (0x00000005u)
#define CSL_DEV_DEVSTAT_BOOTMODE_SLAVE_I2C (0x00000006u)
#define CSL_DEV_DEVSTAT_BOOTMODE_PCI     (0x00000007u)
#define CSL_DEV_DEVSTAT_BOOTMODE_SRIO    (0x00000008u)

#define CSL_DEV_DEVSTAT_RESETVAL         (0x00000040u)

/* PRI_ALLOC */

#define CSL_DEV_PRI_ALLOC_SRIO_MASK      (0x00000E00u)
#define CSL_DEV_PRI_ALLOC_SRIO_SHIFT     (0x00000009u)
#define CSL_DEV_PRI_ALLOC_SRIO_RESETVAL  (0x00000000u)

#define CSL_DEV_PRI_ALLOC_HOST_MASK      (0x00000038u)
#define CSL_DEV_PRI_ALLOC_HOST_SHIFT     (0x00000003u)
#define CSL_DEV_PRI_ALLOC_HOST_RESETVAL  (0x00000000u)

#define CSL_DEV_PRI_ALLOC_EMAC_MASK      (0x00000007u)
#define CSL_DEV_PRI_ALLOC_EMAC_SHIFT     (0x00000000u)
#define CSL_DEV_PRI_ALLOC_EMAC_RESETVAL  (0x00000000u)

#define CSL_DEV_PRI_ALLOC_RESETVAL       (0x00000000u)

/* JTAGID */

#define CSL_DEV_JTAGID_VARIANT_MASK      (0xF0000000u)
#define CSL_DEV_JTAGID_VARIANT_SHIFT     (0x0000001Cu)
#define CSL_DEV_JTAGID_VARIANT_RESETVAL  (0x00000000u)

#define CSL_DEV_JTAGID_PARTNUMBER_MASK   (0x0FFFF000u)
#define CSL_DEV_JTAGID_PARTNUMBER_SHIFT  (0x0000000Cu)
#define CSL_DEV_JTAGID_PARTNUMBER_RESETVAL (0x0000008Au)

#define CSL_DEV_JTAGID_MANUFACTURER_MASK (0x00000FFEu)
#define CSL_DEV_JTAGID_MANUFACTURER_SHIFT (0x00000001u)
#define CSL_DEV_JTAGID_MANUFACTURER_RESETVAL (0x00000017u)

#define CSL_DEV_JTAGID_LSB_MASK          (0x00000001u)
#define CSL_DEV_JTAGID_LSB_SHIFT         (0x00000000u)
#define CSL_DEV_JTAGID_LSB_RESETVAL      (0x00000001u)

#define CSL_DEV_JTAGID_RESETVAL          (0x0008A02Fu)

/* PERLOCK */

#define CSL_DEV_PERLOCK_LOCKVAL_MASK     (0xFFFFFFFFu)
#define CSL_DEV_PERLOCK_LOCKVAL_SHIFT    (0x00000000u)
#define CSL_DEV_PERLOCK_LOCKVAL_RESETVAL (0xF0F0F0F0u)

/*----LOCKVAL Tokens----*/
#define CSL_DEV_PERLOCK_LOCKVAL_UNLOCK   (0x0F0A0B00u)

#define CSL_DEV_PERLOCK_RESETVAL         (0xF0F0F0F0u)

/* PERCFG0 */

#define CSL_DEV_PERCFG0_SRIOCTL_MASK     (0xC0000000u)
#define CSL_DEV_PERCFG0_SRIOCTL_SHIFT    (0x0000001Eu)
#define CSL_DEV_PERCFG0_SRIOCTL_RESETVAL (0x00000000u)

/*----SRIOCTL Tokens----*/
#define CSL_DEV_PERCFG0_SRIOCTL_ENABLE   (0x00000003u)

#define CSL_DEV_PERCFG0_UTOPIACTL_MASK   (0x00400000u)
#define CSL_DEV_PERCFG0_UTOPIACTL_SHIFT  (0x00000016u)
#define CSL_DEV_PERCFG0_UTOPIACTL_RESETVAL (0x00000000u)

/*----UTOPIACTL Tokens----*/
#define CSL_DEV_PERCFG0_UTOPIACTL_ENABLE (0x00000001u)

#define CSL_DEV_PERCFG0_PCICTL_MASK      (0x00100000u)
#define CSL_DEV_PERCFG0_PCICTL_SHIFT     (0x00000014u)
#define CSL_DEV_PERCFG0_PCICTL_RESETVAL  (0x00000000u)

/*----PCICTL Tokens----*/
#define CSL_DEV_PERCFG0_PCICTL_ENABLE    (0x00000001u)

#define CSL_DEV_PERCFG0_HPICTL_MASK      (0x00040000u)
#define CSL_DEV_PERCFG0_HPICTL_SHIFT     (0x00000012u)
#define CSL_DEV_PERCFG0_HPICTL_RESETVAL  (0x00000000u)

/*----HPICTL Tokens----*/
#define CSL_DEV_PERCFG0_HPICTL_ENABLE    (0x00000001u)

#define CSL_DEV_PERCFG0_MCBSP1CTL_MASK   (0x00010000u)
#define CSL_DEV_PERCFG0_MCBSP1CTL_SHIFT  (0x00000010u)
#define CSL_DEV_PERCFG0_MCBSP1CTL_RESETVAL (0x00000000u)

/*----MCBSP1CTL Tokens----*/
#define CSL_DEV_PERCFG0_MCBSP1CTL_ENABLE (0x00000001u)

#define CSL_DEV_PERCFG0_MCBSP0CTL_MASK   (0x00004000u)
#define CSL_DEV_PERCFG0_MCBSP0CTL_SHIFT  (0x0000000Eu)
#define CSL_DEV_PERCFG0_MCBSP0CTL_RESETVAL (0x00000000u)

/*----MCBSP0CTL Tokens----*/
#define CSL_DEV_PERCFG0_MCBSP0CTL_ENABLE (0x00000001u)

#define CSL_DEV_PERCFG0_I2CCTL_MASK      (0x00001000u)
#define CSL_DEV_PERCFG0_I2CCTL_SHIFT     (0x0000000Cu)
#define CSL_DEV_PERCFG0_I2CCTL_RESETVAL  (0x00000000u)

/*----I2CCTL Tokens----*/
#define CSL_DEV_PERCFG0_I2CCTL_ENABLE    (0x00000001u)

#define CSL_DEV_PERCFG0_GPIOCTL_MASK     (0x00000400u)
#define CSL_DEV_PERCFG0_GPIOCTL_SHIFT    (0x0000000Au)
#define CSL_DEV_PERCFG0_GPIOCTL_RESETVAL (0x00000000u)

/*----GPIOCTL Tokens----*/
#define CSL_DEV_PERCFG0_GPIOCTL_ENABLE   (0x00000001u)

#define CSL_DEV_PERCFG0_TIMER1CTL_MASK   (0x00000100u)
#define CSL_DEV_PERCFG0_TIMER1CTL_SHIFT  (0x00000008u)
#define CSL_DEV_PERCFG0_TIMER1CTL_RESETVAL (0x00000000u)

/*----TIMER1CTL Tokens----*/
#define CSL_DEV_PERCFG0_TIMER1CTL_ENABLE (0x00000001u)

#define CSL_DEV_PERCFG0_TIMER0CTL_MASK   (0x00000040u)
#define CSL_DEV_PERCFG0_TIMER0CTL_SHIFT  (0x00000006u)
#define CSL_DEV_PERCFG0_TIMER0CTL_RESETVAL (0x00000000u)

/*----TIMER0CTL Tokens----*/
#define CSL_DEV_PERCFG0_TIMER0CTL_ENABLE (0x00000001u)

#define CSL_DEV_PERCFG0_EMACCTL_MASK     (0x00000010u)
#define CSL_DEV_PERCFG0_EMACCTL_SHIFT    (0x00000004u)
#define CSL_DEV_PERCFG0_EMACCTL_RESETVAL (0x00000000u)

/*----EMACCTL Tokens----*/
#define CSL_DEV_PERCFG0_EMACCTL_ENABLE   (0x00000001u)

#define CSL_DEV_PERCFG0_VCPCTL_MASK      (0x00000004u)
#define CSL_DEV_PERCFG0_VCPCTL_SHIFT     (0x00000002u)
#define CSL_DEV_PERCFG0_VCPCTL_RESETVAL  (0x00000000u)

/*----VCPCTL Tokens----*/
#define CSL_DEV_PERCFG0_VCPCTL_ENABLE    (0x00000001u)

#define CSL_DEV_PERCFG0_TCPCTL_MASK      (0x00000001u)
#define CSL_DEV_PERCFG0_TCPCTL_SHIFT     (0x00000000u)
#define CSL_DEV_PERCFG0_TCPCTL_RESETVAL  (0x00000000u)

/*----TCPCTL Tokens----*/
#define CSL_DEV_PERCFG0_TCPCTL_ENABLE    (0x00000001u)

#define CSL_DEV_PERCFG0_RESETVAL         (0x00000000u)

/* PERSTAT0 */

#define CSL_DEV_PERSTAT0_HPISTAT_MASK    (0x38000000u)
#define CSL_DEV_PERSTAT0_HPISTAT_SHIFT   (0x0000001Bu)
#define CSL_DEV_PERSTAT0_HPISTAT_RESETVAL (0x00000000u)

/*----HPISTAT Tokens----*/
#define CSL_DEV_PERSTAT0_HPISTAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_HPISTAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_HPISTAT_ENABLE  (0x00000001u)
#define CSL_DEV_PERSTAT0_HPISTAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_MCBSP1STAT_MASK (0x07000000u)
#define CSL_DEV_PERSTAT0_MCBSP1STAT_SHIFT (0x00000018u)
#define CSL_DEV_PERSTAT0_MCBSP1STAT_RESETVAL (0x00000000u)

/*----MCBSP1STAT Tokens----*/
#define CSL_DEV_PERSTAT0_MCBSP1STAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_MCBSP1STAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_MCBSP1STAT_ENABLE (0x00000001u)
#define CSL_DEV_PERSTAT0_MCBSP1STAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_MCBSP0STAT_MASK (0x00E00000u)
#define CSL_DEV_PERSTAT0_MCBSP0STAT_SHIFT (0x00000015u)
#define CSL_DEV_PERSTAT0_MCBSP0STAT_RESETVAL (0x00000000u)

/*----MCBSP0STAT Tokens----*/
#define CSL_DEV_PERSTAT0_MCBSP0STAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_MCBSP0STAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_MCBSP0STAT_ENABLE (0x00000001u)
#define CSL_DEV_PERSTAT0_MCBSP0STAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_I2CSTAT_MASK    (0x001C0000u)
#define CSL_DEV_PERSTAT0_I2CSTAT_SHIFT   (0x00000012u)
#define CSL_DEV_PERSTAT0_I2CSTAT_RESETVAL (0x00000000u)

/*----I2CSTAT Tokens----*/
#define CSL_DEV_PERSTAT0_I2CSTAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_I2CSTAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_I2CSTAT_ENABLE  (0x00000001u)
#define CSL_DEV_PERSTAT0_I2CSTAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_GPIOSTAT_MASK   (0x00038000u)
#define CSL_DEV_PERSTAT0_GPIOSTAT_SHIFT  (0x0000000Fu)
#define CSL_DEV_PERSTAT0_GPIOSTAT_RESETVAL (0x00000000u)

/*----GPIOSTAT Tokens----*/
#define CSL_DEV_PERSTAT0_GPIOSTAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_GPIOSTAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_GPIOSTAT_ENABLE (0x00000001u)
#define CSL_DEV_PERSTAT0_GPIOSTAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_TIMER1STAT_MASK (0x00007000u)
#define CSL_DEV_PERSTAT0_TIMER1STAT_SHIFT (0x0000000Cu)
#define CSL_DEV_PERSTAT0_TIMER1STAT_RESETVAL (0x00000000u)

/*----TIMER1STAT Tokens----*/
#define CSL_DEV_PERSTAT0_TIMER1STAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_TIMER1STAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_TIMER1STAT_ENABLE (0x00000001u)
#define CSL_DEV_PERSTAT0_TIMER1STAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_TIMER0STAT_MASK (0x00000E00u)
#define CSL_DEV_PERSTAT0_TIMER0STAT_SHIFT (0x00000009u)
#define CSL_DEV_PERSTAT0_TIMER0STAT_RESETVAL (0x00000000u)

/*----TIMER0STAT Tokens----*/
#define CSL_DEV_PERSTAT0_TIMER0STAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_TIMER0STAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_TIMER0STAT_ENABLE (0x00000001u)
#define CSL_DEV_PERSTAT0_TIMER0STAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_EMACSTAT_MASK   (0x000001C0u)
#define CSL_DEV_PERSTAT0_EMACSTAT_SHIFT  (0x00000006u)
#define CSL_DEV_PERSTAT0_EMACSTAT_RESETVAL (0x00000000u)

/*----EMACSTAT Tokens----*/
#define CSL_DEV_PERSTAT0_EMACSTAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_EMACSTAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_EMACSTAT_ENABLE (0x00000001u)
#define CSL_DEV_PERSTAT0_EMACSTAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_VCPSTAT_MASK    (0x00000038u)
#define CSL_DEV_PERSTAT0_VCPSTAT_SHIFT   (0x00000003u)
#define CSL_DEV_PERSTAT0_VCPSTAT_RESETVAL (0x00000000u)

/*----VCPSTAT Tokens----*/
#define CSL_DEV_PERSTAT0_VCPSTAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_VCPSTAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_VCPSTAT_ENABLE  (0x00000001u)
#define CSL_DEV_PERSTAT0_VCPSTAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_TCPSTAT_MASK    (0x00000007u)
#define CSL_DEV_PERSTAT0_TCPSTAT_SHIFT   (0x00000000u)
#define CSL_DEV_PERSTAT0_TCPSTAT_RESETVAL (0x00000000u)

/*----TCPSTAT Tokens----*/
#define CSL_DEV_PERSTAT0_TCPSTAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT0_TCPSTAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT0_TCPSTAT_ENABLE  (0x00000001u)
#define CSL_DEV_PERSTAT0_TCPSTAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT0_RESETVAL        (0x00000000u)

/* PERSTAT1 */

#define CSL_DEV_PERSTAT1_UTOPIASTAT_MASK (0x00000038u)
#define CSL_DEV_PERSTAT1_UTOPIASTAT_SHIFT (0x00000003u)
#define CSL_DEV_PERSTAT1_UTOPIASTAT_RESETVAL (0x00000000u)

/*----UTOPIASTAT Tokens----*/
#define CSL_DEV_PERSTAT1_UTOPIASTAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT1_UTOPIASTAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT1_UTOPIASTAT_ENABLE (0x00000001u)
#define CSL_DEV_PERSTAT1_UTOPIASTAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT1_PCISTAT_MASK    (0x00000007u)
#define CSL_DEV_PERSTAT1_PCISTAT_SHIFT   (0x00000000u)
#define CSL_DEV_PERSTAT1_PCISTAT_RESETVAL (0x00000000u)

/*----PCISTAT Tokens----*/
#define CSL_DEV_PERSTAT1_PCISTAT_STATIC_PDN (0x00000003u)
#define CSL_DEV_PERSTAT1_PCISTAT_DISABLE (0x00000000u)
#define CSL_DEV_PERSTAT1_PCISTAT_ENABLE  (0x00000001u)
#define CSL_DEV_PERSTAT1_PCISTAT_ENABLE_IN_PROGRESS (0x00000005u)

#define CSL_DEV_PERSTAT1_RESETVAL        (0x00000000u)

/* EMACCFG */

#define CSL_DEV_EMACCFG_RMII_RST_MASK    (0x00080000u)
#define CSL_DEV_EMACCFG_RMII_RST_SHIFT   (0x00000013u)
#define CSL_DEV_EMACCFG_RMII_RST_RESETVAL (0x00000001u)

/*----RMII_RST Tokens----*/
#define CSL_DEV_EMACCFG_RMII_RST_ASSERT  (0x00000000u)
#define CSL_DEV_EMACCFG_RMII_RST_RELEASE (0x00000001u)

#define CSL_DEV_EMACCFG_RESETVAL         (0x00080000u)

/* PERCFG1 */

#define CSL_DEV_PERCFG1_DDR2CTL_MASK     (0x00000002u)
#define CSL_DEV_PERCFG1_DDR2CTL_SHIFT    (0x00000001u)
#define CSL_DEV_PERCFG1_DDR2CTL_RESETVAL (0x00000000u)

/*----DDR2CTL Tokens----*/
#define CSL_DEV_PERCFG1_DDR2CTL_ENABLE   (0x00000001u)

#define CSL_DEV_PERCFG1_EMIFACTL_MASK    (0x00000001u)
#define CSL_DEV_PERCFG1_EMIFACTL_SHIFT   (0x00000000u)
#define CSL_DEV_PERCFG1_EMIFACTL_RESETVAL (0x00000000u)

/*----EMIFACTL Tokens----*/
#define CSL_DEV_PERCFG1_EMIFACTL_ENABLE  (0x00000001u)

#define CSL_DEV_PERCFG1_RESETVAL         (0x00000000u)

/* EMUBUFPDN */

#define CSL_DEV_EMUBUFPDN_EMUCTL_MASK    (0x00000001u)
#define CSL_DEV_EMUBUFPDN_EMUCTL_SHIFT   (0x00000000u)
#define CSL_DEV_EMUBUFPDN_EMUCTL_RESETVAL (0x00000000u)

/*----EMUCTL Tokens----*/
#define CSL_DEV_EMUBUFPDN_EMUCTL_ENABLE  (0x00000000u)
#define CSL_DEV_EMUBUFPDN_EMUCTL_DISABLE (0x00000001u)

#define CSL_DEV_EMUBUFPDN_RESETVAL       (0x00000000u)

#endif