#ifndef _CSLR_CRGEN_004_H_
#define _CSLR_CRGEN_004_H_

#include <cslr.h>

#include "tistdtypes.h"


/* Minimum unit = 4 bytes */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 PID;
    volatile Uint32 CTRL;
    volatile Uint32 STC_PRESENT_VALUE_H;
    volatile Uint32 STC_PRESENT_VALUE_L;
    volatile Uint32 STC_VALUE_H;
    volatile Uint32 STC_VALUE_L;
    volatile Uint32 PCR_VALUE_H;
    volatile Uint32 PCR_VALUE_L;
    volatile Uint32 PCR_PACKET_STATUS;
    volatile Uint32 LOOP_FILTER;
    volatile Uint32 STC_INIT_OFST_H;
    volatile Uint32 STC_INIT_OFST_L;
    volatile Uint32 RSVD0[4];
    volatile Uint32 INTEN;
    volatile Uint32 INTEN_SET;
    volatile Uint32 INTEN_CLR;
    volatile Uint32 STATUS;
    volatile Uint32 STATUS_CLR;
    volatile Uint32 EMULATION_CTRL;
} CSL_CrgenRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* PID */

#define CSL_CRGEN_PID_SCHEME_MASK        (0xC0000000u)
#define CSL_CRGEN_PID_SCHEME_SHIFT       (0x0000001Eu)
#define CSL_CRGEN_PID_SCHEME_RESETVAL    (0x00000001u)


#define CSL_CRGEN_PID_FUNC_MASK          (0x0FFF0000u)
#define CSL_CRGEN_PID_FUNC_SHIFT         (0x00000010u)
#define CSL_CRGEN_PID_FUNC_RESETVAL      (0x00000C0Bu)

#define CSL_CRGEN_PID_RTL_MASK           (0x0000F800u)
#define CSL_CRGEN_PID_RTL_SHIFT          (0x0000000Bu)
#define CSL_CRGEN_PID_RTL_RESETVAL       (0x00000000u)

#define CSL_CRGEN_PID_MAJOR_MASK         (0x00000700u)
#define CSL_CRGEN_PID_MAJOR_SHIFT        (0x00000008u)
#define CSL_CRGEN_PID_MAJOR_RESETVAL     (0x00000000u)

#define CSL_CRGEN_PID_CUSTOM_MASK        (0x000000C0u)
#define CSL_CRGEN_PID_CUSTOM_SHIFT       (0x00000006u)
#define CSL_CRGEN_PID_CUSTOM_RESETVAL    (0x00000000u)

#define CSL_CRGEN_PID_MINOR_MASK         (0x0000003Fu)
#define CSL_CRGEN_PID_MINOR_SHIFT        (0x00000000u)
#define CSL_CRGEN_PID_MINOR_RESETVAL     (0x00000000u)

#define CSL_CRGEN_PID_RESETVAL           (0x4C0B0000u)

/* CTRL */


#define CSL_CRGEN_CTRL_STC_LOAD_MODE_MASK (0x00000004u)
#define CSL_CRGEN_CTRL_STC_LOAD_MODE_SHIFT (0x00000002u)
#define CSL_CRGEN_CTRL_STC_LOAD_MODE_RESETVAL (0x00000000u)
/*----STC_LOAD_MODE Tokens----*/
#define CSL_CRGEN_CTRL_STC_LOAD_MODE_ZERO (0x00000000u)
#define CSL_CRGEN_CTRL_STC_LOAD_MODE_ONE (0x00000001u)

#define CSL_CRGEN_CTRL_CLK_SRC_SEL_MASK  (0x00000002u)
#define CSL_CRGEN_CTRL_CLK_SRC_SEL_SHIFT (0x00000001u)
#define CSL_CRGEN_CTRL_CLK_SRC_SEL_RESETVAL (0x00000000u)
/*----CLK_SRC_SEL Tokens----*/
#define CSL_CRGEN_CTRL_CLK_SRC_SEL_VIDEO_CLK (0x00000000u)
#define CSL_CRGEN_CTRL_CLK_SRC_SEL_PCR_CLK (0x00000001u)

#define CSL_CRGEN_CTRL_MODULE_EN_MASK    (0x00000001u)
#define CSL_CRGEN_CTRL_MODULE_EN_SHIFT   (0x00000000u)
#define CSL_CRGEN_CTRL_MODULE_EN_RESETVAL (0x00000000u)
/*----MODULE_EN Tokens----*/
#define CSL_CRGEN_CTRL_MODULE_EN_INACTIVATE (0x00000000u)
#define CSL_CRGEN_CTRL_MODULE_EN_ACTIVATE (0x00000001u)

#define CSL_CRGEN_CTRL_RESETVAL          (0x00000000u)

/* STC_PRESENT_VALUE_H */


#define CSL_CRGEN_STC_PRESENT_VALUE_H_STC_BASE_H_MASK (0x0001FFFFu)
#define CSL_CRGEN_STC_PRESENT_VALUE_H_STC_BASE_H_SHIFT (0x00000000u)
#define CSL_CRGEN_STC_PRESENT_VALUE_H_STC_BASE_H_RESETVAL (0x00000000u)

#define CSL_CRGEN_STC_PRESENT_VALUE_H_RESETVAL (0x00000000u)

/* STC_PRESENT_VALUE_L */

#define CSL_CRGEN_STC_PRESENT_VALUE_L_STC_BASE_L_MASK (0xFFFF0000u)
#define CSL_CRGEN_STC_PRESENT_VALUE_L_STC_BASE_L_SHIFT (0x00000010u)
#define CSL_CRGEN_STC_PRESENT_VALUE_L_STC_BASE_L_RESETVAL (0x00000000u)


#define CSL_CRGEN_STC_PRESENT_VALUE_L_STC_EXTENSION_MASK (0x000001FFu)
#define CSL_CRGEN_STC_PRESENT_VALUE_L_STC_EXTENSION_SHIFT (0x00000000u)
#define CSL_CRGEN_STC_PRESENT_VALUE_L_STC_EXTENSION_RESETVAL (0x00000000u)

#define CSL_CRGEN_STC_PRESENT_VALUE_L_RESETVAL (0x00000000u)

/* STC_VALUE_H */


#define CSL_CRGEN_STC_VALUE_H_STC_BASE_H_MASK (0x0001FFFFu)
#define CSL_CRGEN_STC_VALUE_H_STC_BASE_H_SHIFT (0x00000000u)
#define CSL_CRGEN_STC_VALUE_H_STC_BASE_H_RESETVAL (0x00000000u)

#define CSL_CRGEN_STC_VALUE_H_RESETVAL   (0x00000000u)

/* STC_VALUE_L */

#define CSL_CRGEN_STC_VALUE_L_STC_BASE_L_MASK (0xFFFF0000u)
#define CSL_CRGEN_STC_VALUE_L_STC_BASE_L_SHIFT (0x00000010u)
#define CSL_CRGEN_STC_VALUE_L_STC_BASE_L_RESETVAL (0x00000000u)


#define CSL_CRGEN_STC_VALUE_L_STC_EXTENSION_MASK (0x000001FFu)
#define CSL_CRGEN_STC_VALUE_L_STC_EXTENSION_SHIFT (0x00000000u)
#define CSL_CRGEN_STC_VALUE_L_STC_EXTENSION_RESETVAL (0x00000000u)

#define CSL_CRGEN_STC_VALUE_L_RESETVAL   (0x00000000u)

/* PCR_VALUE_H */


#define CSL_CRGEN_PCR_VALUE_H_PCR_BASE_H_MASK (0x0001FFFFu)
#define CSL_CRGEN_PCR_VALUE_H_PCR_BASE_H_SHIFT (0x00000000u)
#define CSL_CRGEN_PCR_VALUE_H_PCR_BASE_H_RESETVAL (0x00000000u)

#define CSL_CRGEN_PCR_VALUE_H_RESETVAL   (0x00000000u)

/* PCR_VALUE_L */

#define CSL_CRGEN_PCR_VALUE_L_PCR_BASE_L_MASK (0xFFFF0000u)
#define CSL_CRGEN_PCR_VALUE_L_PCR_BASE_L_SHIFT (0x00000010u)
#define CSL_CRGEN_PCR_VALUE_L_PCR_BASE_L_RESETVAL (0x00000000u)


#define CSL_CRGEN_PCR_VALUE_L_PCR_EXTENSION_MASK (0x000001FFu)
#define CSL_CRGEN_PCR_VALUE_L_PCR_EXTENSION_SHIFT (0x00000000u)
#define CSL_CRGEN_PCR_VALUE_L_PCR_EXTENSION_RESETVAL (0x00000000u)

#define CSL_CRGEN_PCR_VALUE_L_RESETVAL   (0x00000000u)

/* PCR_PACKET_STATUS */


#define CSL_CRGEN_PCR_PACKET_STATUS_PCR_PKT_STATUS_MASK (0x0000000Fu)
#define CSL_CRGEN_PCR_PACKET_STATUS_PCR_PKT_STATUS_SHIFT (0x00000000u)
#define CSL_CRGEN_PCR_PACKET_STATUS_PCR_PKT_STATUS_RESETVAL (0x00000000u)

#define CSL_CRGEN_PCR_PACKET_STATUS_RESETVAL (0x00000000u)

/* LOOP_FILTER */


#define CSL_CRGEN_LOOP_FILTER_LPF_IN_MASK (0x07FF0000u)
#define CSL_CRGEN_LOOP_FILTER_LPF_IN_SHIFT (0x00000010u)
#define CSL_CRGEN_LOOP_FILTER_LPF_IN_RESETVAL (0x00000000u)

#define CSL_CRGEN_LOOP_FILTER_LPF_OUT_MASK (0x0000FFFFu)
#define CSL_CRGEN_LOOP_FILTER_LPF_OUT_SHIFT (0x00000000u)
#define CSL_CRGEN_LOOP_FILTER_LPF_OUT_RESETVAL (0x00000000u)

#define CSL_CRGEN_LOOP_FILTER_RESETVAL   (0x00000000u)

/* STC_INIT_OFST_H */


#define CSL_CRGEN_STC_INIT_OFST_H_STC_BASE_H_MASK (0x0001FFFFu)
#define CSL_CRGEN_STC_INIT_OFST_H_STC_BASE_H_SHIFT (0x00000000u)
#define CSL_CRGEN_STC_INIT_OFST_H_STC_BASE_H_RESETVAL (0x00000000u)

#define CSL_CRGEN_STC_INIT_OFST_H_RESETVAL (0x00000000u)

/* STC_INIT_OFST_L */

#define CSL_CRGEN_STC_INIT_OFST_L_STC_BASE_L_MASK (0xFFFF0000u)
#define CSL_CRGEN_STC_INIT_OFST_L_STC_BASE_L_SHIFT (0x00000010u)
#define CSL_CRGEN_STC_INIT_OFST_L_STC_BASE_L_RESETVAL (0x00000000u)


#define CSL_CRGEN_STC_INIT_OFST_L_STC_EXTENSION_MASK (0x000001FFu)
#define CSL_CRGEN_STC_INIT_OFST_L_STC_EXTENSION_SHIFT (0x00000000u)
#define CSL_CRGEN_STC_INIT_OFST_L_STC_EXTENSION_RESETVAL (0x00000000u)

#define CSL_CRGEN_STC_INIT_OFST_L_RESETVAL (0x00000000u)

/* INTEN */


#define CSL_CRGEN_INTEN_INTEN_MASK       (0x00000001u)
#define CSL_CRGEN_INTEN_INTEN_SHIFT      (0x00000000u)
#define CSL_CRGEN_INTEN_INTEN_RESETVAL   (0x00000000u)
/*----INTEN Tokens----*/
#define CSL_CRGEN_INTEN_INTEN_DISABLE    (0x00000000u)
#define CSL_CRGEN_INTEN_INTEN_ENABLE     (0x00000001u)

#define CSL_CRGEN_INTEN_RESETVAL         (0x00000000u)

/* INTEN_SET */


#define CSL_CRGEN_INTEN_SET_INTEN_SET_MASK (0x00000001u)
#define CSL_CRGEN_INTEN_SET_INTEN_SET_SHIFT (0x00000000u)
#define CSL_CRGEN_INTEN_SET_INTEN_SET_RESETVAL (0x00000000u)
/*----INTEN_SET Tokens----*/
#define CSL_CRGEN_INTEN_SET_INTEN_SET_SET (0x00000001u)

#define CSL_CRGEN_INTEN_SET_RESETVAL     (0x00000000u)

/* INTEN_CLR */


#define CSL_CRGEN_INTEN_CLR_INTEN_CLR_MASK (0x00000001u)
#define CSL_CRGEN_INTEN_CLR_INTEN_CLR_SHIFT (0x00000000u)
#define CSL_CRGEN_INTEN_CLR_INTEN_CLR_RESETVAL (0x00000000u)
/*----INTEN_CLR Tokens----*/
#define CSL_CRGEN_INTEN_CLR_INTEN_CLR_CLR (0x00000001u)

#define CSL_CRGEN_INTEN_CLR_RESETVAL     (0x00000000u)

/* STATUS */


#define CSL_CRGEN_STATUS_PCR_DETECT_MASK (0x00000001u)
#define CSL_CRGEN_STATUS_PCR_DETECT_SHIFT (0x00000000u)
#define CSL_CRGEN_STATUS_PCR_DETECT_RESETVAL (0x00000000u)
/*----PCR_DETECT Tokens----*/
#define CSL_CRGEN_STATUS_PCR_DETECT_NOTDETECT (0x00000000u)
#define CSL_CRGEN_STATUS_PCR_DETECT_DETECT (0x00000001u)

#define CSL_CRGEN_STATUS_RESETVAL        (0x00000000u)

/* STATUS_CLR */


#define CSL_CRGEN_STATUS_CLR_PCR_DETECT_STATUS_CLR_MASK (0x00000001u)
#define CSL_CRGEN_STATUS_CLR_PCR_DETECT_STATUS_CLR_SHIFT (0x00000000u)
#define CSL_CRGEN_STATUS_CLR_PCR_DETECT_STATUS_CLR_RESETVAL (0x00000000u)
/*----PCR_DETECT_STATUS_CLR Tokens----*/
#define CSL_CRGEN_STATUS_CLR_PCR_DETECT_STATUS_CLR_CLR (0x00000001u)

#define CSL_CRGEN_STATUS_CLR_RESETVAL    (0x00000000u)

/* EMULATION_CTRL */


#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_SOFT_MASK (0x00000002u)
#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_SOFT_SHIFT (0x00000001u)
#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_SOFT_RESETVAL (0x00000000u)
/*----EMULSUSP_SOFT Tokens----*/
#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_SOFT_HARD_STOP (0x00000000u)
#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_SOFT_SOFT_STOP (0x00000001u)

#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_FREE_MASK (0x00000001u)
#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_FREE_SHIFT (0x00000000u)
#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_FREE_RESETVAL (0x00000000u)
/*----EMULSUSP_FREE Tokens----*/
#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_FREE_STOP (0x00000000u)
#define CSL_CRGEN_EMULATION_CTRL_EMULSUSP_FREE_NON_STOP (0x00000001u)

#define CSL_CRGEN_EMULATION_CTRL_RESETVAL (0x00000000u)

#endif
