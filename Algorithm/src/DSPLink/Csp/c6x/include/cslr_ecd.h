/***************************************************************************\
*    THE FOLLOWING REGISTERS ARE NOT VALID(RESERVED) IN KALEIDO11          * 
*                                                                          *  
*    -> HDADDR and HDNUM REGISTERS                                         *
*                                                                          *  
*                                                                          *  
\**************************************************************************/

#ifndef _CSLR_ECD_1_H_
#define _CSLR_ECD_1_H_

#include <cslr.h>

#include "tistdtypes.h"


/* Minimum unit = 4 bytes */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 PID;
    volatile Uint32 COUNT;
    volatile Uint32 CTRL;
    volatile Uint32 RSVD0;
    volatile Uint32 RUN;
    volatile Uint32 MODE;
    volatile Uint32 RBTOP;
    volatile Uint32 RBEND;
    volatile Uint32 STRBUFCNT;
    volatile Uint32 NUMZERO;
    volatile Uint32 STRBUFPTR;
    volatile Uint32 BITPTR;
    volatile Uint32 STRMWD0;
    volatile Uint32 STRMWD1;
    volatile Uint32 DMAPTR;
    volatile Uint32 RSDPTR;
    volatile Uint32 HDADDR;
    volatile Uint32 HDNUM;
    volatile Uint32 ERRSTAT;
    volatile Uint32 NUMTTL;
    volatile Uint32 NUMHD;
    volatile Uint32 NUMRESI;
    volatile Uint32 BITSOUTSTANDING;
    volatile Uint32 RSVD1;
    volatile Uint32 MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR;
    volatile Uint32 MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR;
    volatile Uint32 MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA;
    volatile Uint32 MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR;
    volatile Uint32 MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR;
    volatile Uint32 MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR;
    volatile Uint32 MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR;
    volatile Uint32 VC1_PREDRTPTR_H264_MBA1PTR;
    volatile Uint32 VC1_ANCHORPTR_H264_MBB0PTR;
    volatile Uint32 VC1_ACPREDPTR_H264_MBB1PTR;
    volatile Uint32 VC1_OVERFLAGPTR_H264_MBC0PTR;
    volatile Uint32 VC1_MVMODEPTR_H264_MBC1PTR;
    volatile Uint32 VC1_SKIPPTR_H264_MBD0PTR;
    volatile Uint32 VC1_DIRECTPTR_H264_MBD1PTR;
    volatile Uint32 VC1_FIELDTXPTR_H264_COL0PTR;
    volatile Uint32 VC1_FWDBITPTR_H264_COL1PTR;
    volatile Uint32 H264_MBPTR;
    volatile Uint32 H264_PRVMBPTR;
    volatile Uint32 H264_CTXPTR;
    volatile Uint32 H264_WBUFNAPTR;
    volatile Uint32 H264_TEST;
} CSL_EcdRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* PID */

#define CSL_ECD_PID_SCHEME_MASK          (0xC0000000u)
#define CSL_ECD_PID_SCHEME_SHIFT         (0x0000001Eu)
#define CSL_ECD_PID_SCHEME_RESETVAL      (0x00000001u)


#define CSL_ECD_PID_FUNC_MASK            (0x0FFF0000u)
#define CSL_ECD_PID_FUNC_SHIFT           (0x00000010u)
#define CSL_ECD_PID_FUNC_RESETVAL        (0x00000C01u)

#define CSL_ECD_PID_RTL_MASK             (0x0000F800u)
#define CSL_ECD_PID_RTL_SHIFT            (0x0000000Bu)
#define CSL_ECD_PID_RTL_RESETVAL         (0x00000000u)

#define CSL_ECD_PID_MAJOR_MASK           (0x00000700u)
#define CSL_ECD_PID_MAJOR_SHIFT          (0x00000008u)
#define CSL_ECD_PID_MAJOR_RESETVAL       (0x00000001u)

#define CSL_ECD_PID_CUSTOM_MASK          (0x000000C0u)
#define CSL_ECD_PID_CUSTOM_SHIFT         (0x00000006u)
#define CSL_ECD_PID_CUSTOM_RESETVAL      (0x00000000u)

#define CSL_ECD_PID_MINOR_MASK           (0x0000003Fu)
#define CSL_ECD_PID_MINOR_SHIFT          (0x00000000u)
#define CSL_ECD_PID_MINOR_RESETVAL       (0x00000000u)

#define CSL_ECD_PID_RESETVAL             (0x4C010100u)

/* COUNT */

#define CSL_ECD_COUNT_EN_MASK            (0x80000000u)
#define CSL_ECD_COUNT_EN_SHIFT           (0x0000001Fu)
#define CSL_ECD_COUNT_EN_RESETVAL        (0x00000000u)
/*----EN Tokens----*/
#define CSL_ECD_COUNT_EN_DISABLE         (0x00000000u)
#define CSL_ECD_COUNT_EN_ENABLE          (0x00000001u)

#define CSL_ECD_COUNT_RST_MASK           (0x40000000u)
#define CSL_ECD_COUNT_RST_SHIFT          (0x0000001Eu)
#define CSL_ECD_COUNT_RST_RESETVAL       (0x00000000u)
/*----RST Tokens----*/
#define CSL_ECD_COUNT_RST_SET            (0x00000001u)


#define CSL_ECD_COUNT_VALUE_MASK         (0x0000FFFFu)
#define CSL_ECD_COUNT_VALUE_SHIFT        (0x00000000u)
#define CSL_ECD_COUNT_VALUE_RESETVAL     (0x00000000u)

#define CSL_ECD_COUNT_RESETVAL           (0x00000000u)

/* CTRL */


#define CSL_ECD_CTRL_ADDR_MASK           (0x003FF800u)
#define CSL_ECD_CTRL_ADDR_SHIFT          (0x0000000Bu)
#define CSL_ECD_CTRL_ADDR_RESETVAL       (0x00000000u)


#define CSL_ECD_CTRL_SSM_MASK            (0x00000004u)
#define CSL_ECD_CTRL_SSM_SHIFT           (0x00000002u)
#define CSL_ECD_CTRL_SSM_RESETVAL        (0x00000000u)
/*----SSM Tokens----*/
#define CSL_ECD_CTRL_SSM_NORMAL          (0x00000000u)
#define CSL_ECD_CTRL_SSM_SSP             (0x00000001u)

#define CSL_ECD_CTRL_CSB_MASK            (0x00000002u)
#define CSL_ECD_CTRL_CSB_SHIFT           (0x00000001u)
#define CSL_ECD_CTRL_CSB_RESETVAL        (0x00000000u)
/*----CSB Tokens----*/
#define CSL_ECD_CTRL_CSB_DEFINE          (0x00000000u)

#define CSL_ECD_CTRL_EN_MASK             (0x00000001u)
#define CSL_ECD_CTRL_EN_SHIFT            (0x00000000u)
#define CSL_ECD_CTRL_EN_RESETVAL         (0x00000000u)
/*----EN Tokens----*/
#define CSL_ECD_CTRL_EN_SET              (0x00000001u)

#define CSL_ECD_CTRL_RESETVAL            (0x00000000u)

/* RUN */


#define CSL_ECD_RUN_RUN_MASK             (0x00000001u)
#define CSL_ECD_RUN_RUN_SHIFT            (0x00000000u)
#define CSL_ECD_RUN_RUN_RESETVAL         (0x00000000u)
/*----RUN Tokens----*/
#define CSL_ECD_RUN_RUN_SET              (0x00000001u)

#define CSL_ECD_RUN_RESETVAL             (0x00000000u)

/* MODE */


#define CSL_ECD_MODE_CODEC_MASK          (0x000000F0u)
#define CSL_ECD_MODE_CODEC_SHIFT         (0x00000004u)
#define CSL_ECD_MODE_CODEC_RESETVAL      (0x00000000u)
/*----CODEC Tokens----*/
#define CSL_ECD_MODE_CODEC_MPEG1         (0x00000002u)
#define CSL_ECD_MODE_CODEC_MPEG2         (0x00000003u)
#define CSL_ECD_MODE_CODEC_MPEG4         (0x00000004u)
#define CSL_ECD_MODE_CODEC_VC1           (0x00000005u)
#define CSL_ECD_MODE_CODEC_H264          (0x00000006u)
#define CSL_ECD_MODE_CODEC_HEADER        (0x00000007u)


#define CSL_ECD_MODE_DIR_MASK            (0x00000001u)
#define CSL_ECD_MODE_DIR_SHIFT           (0x00000000u)
#define CSL_ECD_MODE_DIR_RESETVAL        (0x00000000u)
/*----DIR Tokens----*/
#define CSL_ECD_MODE_DIR_DECODE          (0x00000000u)
#define CSL_ECD_MODE_DIR_ENCODE          (0x00000001u)

#define CSL_ECD_MODE_RESETVAL            (0x00000000u)

/* RBTOP */


#define CSL_ECD_RBTOP_RBTOP_MASK         (0x00000FF8u)
#define CSL_ECD_RBTOP_RBTOP_SHIFT        (0x00000003u)
#define CSL_ECD_RBTOP_RBTOP_RESETVAL     (0x00000000u)


#define CSL_ECD_RBTOP_RESETVAL           (0x00000000u)

/* RBEND */


#define CSL_ECD_RBEND_RBEND_MASK         (0x00000FF8u)
#define CSL_ECD_RBEND_RBEND_SHIFT        (0x00000003u)
#define CSL_ECD_RBEND_RBEND_RESETVAL     (0x00000000u)


#define CSL_ECD_RBEND_RESETVAL           (0x00000000u)

/* STRBUFCNT */

#define CSL_ECD_STRBUFCNT_EPCHNDL_MASK   (0x80000000u)
#define CSL_ECD_STRBUFCNT_EPCHNDL_SHIFT  (0x0000001Fu)
#define CSL_ECD_STRBUFCNT_EPCHNDL_RESETVAL (0x00000000u)
/*----EPCHNDL Tokens----*/
#define CSL_ECD_STRBUFCNT_EPCHNDL_OFF    (0x00000000u)
#define CSL_ECD_STRBUFCNT_EPCHNDL_ON     (0x00000001u)


#define CSL_ECD_STRBUFCNT_ENDIAN_MASK    (0x00010000u)
#define CSL_ECD_STRBUFCNT_ENDIAN_SHIFT   (0x00000010u)
#define CSL_ECD_STRBUFCNT_ENDIAN_RESETVAL (0x00000000u)
/*----ENDIAN Tokens----*/
#define CSL_ECD_STRBUFCNT_ENDIAN_FMTA    (0x00000000u)
#define CSL_ECD_STRBUFCNT_ENDIAN_FMTB    (0x00000001u)


#define CSL_ECD_STRBUFCNT_RESETVAL       (0x00000000u)

/* NUMZERO */


#define CSL_ECD_NUMZERO_NUMZERO_MASK     (0x00000003u)
#define CSL_ECD_NUMZERO_NUMZERO_SHIFT    (0x00000000u)
#define CSL_ECD_NUMZERO_NUMZERO_RESETVAL (0x00000000u)
/*----NUMZERO Tokens----*/
#define CSL_ECD_NUMZERO_NUMZERO_ZERO     (0x00000000u)
#define CSL_ECD_NUMZERO_NUMZERO_ONE      (0x00000001u)
#define CSL_ECD_NUMZERO_NUMZERO_TWO      (0x00000001u)

#define CSL_ECD_NUMZERO_RESETVAL         (0x00000000u)

/* STRBUFPTR */


#define CSL_ECD_STRBUFPTR_STRBUFPTR_MASK (0x00000FF8u)
#define CSL_ECD_STRBUFPTR_STRBUFPTR_SHIFT (0x00000003u)
#define CSL_ECD_STRBUFPTR_STRBUFPTR_RESETVAL (0x00000000u)


#define CSL_ECD_STRBUFPTR_RESETVAL       (0x00000000u)

/* BITPTR */


#define CSL_ECD_BITPTR_BITPTR_MASK       (0x0000003Fu)
#define CSL_ECD_BITPTR_BITPTR_SHIFT      (0x00000000u)
#define CSL_ECD_BITPTR_BITPTR_RESETVAL   (0x00000000u)

#define CSL_ECD_BITPTR_RESETVAL          (0x00000000u)

/* STRMWD0 */

#define CSL_ECD_STRMWD0_STRMWD0_MASK     (0xFFFFFFFFu)
#define CSL_ECD_STRMWD0_STRMWD0_SHIFT    (0x00000000u)
#define CSL_ECD_STRMWD0_STRMWD0_RESETVAL (0x00000000u)

#define CSL_ECD_STRMWD0_RESETVAL         (0x00000000u)

/* STRMWD1 */

#define CSL_ECD_STRMWD1_STRMWD1_MASK     (0xFFFFFFFFu)
#define CSL_ECD_STRMWD1_STRMWD1_SHIFT    (0x00000000u)
#define CSL_ECD_STRMWD1_STRMWD1_RESETVAL (0x00000000u)

#define CSL_ECD_STRMWD1_RESETVAL         (0x00000000u)

/* DMAPTR */


#define CSL_ECD_DMAPTR_DMAPTR_MASK       (0x00000FF8u)
#define CSL_ECD_DMAPTR_DMAPTR_SHIFT      (0x00000003u)
#define CSL_ECD_DMAPTR_DMAPTR_RESETVAL   (0x00000000u)


#define CSL_ECD_DMAPTR_RESETVAL          (0x00000000u)

/* RSDPTR */


#define CSL_ECD_RSDPTR_RSDPTR_MASK       (0x00003FF8u)
#define CSL_ECD_RSDPTR_RSDPTR_SHIFT      (0x00000003u)
#define CSL_ECD_RSDPTR_RSDPTR_RESETVAL   (0x00000000u)


#define CSL_ECD_RSDPTR_RESETVAL          (0x00000000u)

/* HDADDR */


#define CSL_ECD_HDADDR_HDADDR_MASK       (0x00003FF8u)
#define CSL_ECD_HDADDR_HDADDR_SHIFT      (0x00000003u)
#define CSL_ECD_HDADDR_HDADDR_RESETVAL   (0x00000000u)


#define CSL_ECD_HDADDR_RESETVAL          (0x00000000u)

/* HDNUM */


#define CSL_ECD_HDNUM_HDNUM_MASK         (0x000003FFu)
#define CSL_ECD_HDNUM_HDNUM_SHIFT        (0x00000000u)
#define CSL_ECD_HDNUM_HDNUM_RESETVAL     (0x00000000u)

#define CSL_ECD_HDNUM_RESETVAL           (0x00000000u)

/* ERRSTAT */


#define CSL_ECD_ERRSTAT_MBCOUNT_MASK     (0x000000F0u)
#define CSL_ECD_ERRSTAT_MBCOUNT_SHIFT    (0x00000004u)
#define CSL_ECD_ERRSTAT_MBCOUNT_RESETVAL (0x00000000u)

#define CSL_ECD_ERRSTAT_RBERRSTAT_MASK   (0x00000008u)
#define CSL_ECD_ERRSTAT_RBERRSTAT_SHIFT  (0x00000003u)
#define CSL_ECD_ERRSTAT_RBERRSTAT_RESETVAL (0x00000000u)

#define CSL_ECD_ERRSTAT_EOSSTAT_MASK     (0x00000004u)
#define CSL_ECD_ERRSTAT_EOSSTAT_SHIFT    (0x00000002u)
#define CSL_ECD_ERRSTAT_EOSSTAT_RESETVAL (0x00000000u)

#define CSL_ECD_ERRSTAT_STRMERRSTAT_MASK (0x00000002u)
#define CSL_ECD_ERRSTAT_STRMERRSTAT_SHIFT (0x00000001u)
#define CSL_ECD_ERRSTAT_STRMERRSTAT_RESETVAL (0x00000000u)

#define CSL_ECD_ERRSTAT_BUSY_MASK        (0x00000001u)
#define CSL_ECD_ERRSTAT_BUSY_SHIFT       (0x00000000u)
#define CSL_ECD_ERRSTAT_BUSY_RESETVAL    (0x00000000u)

#define CSL_ECD_ERRSTAT_RESETVAL         (0x00000000u)

/* NUMTTL */

#define CSL_ECD_NUMTTL_NUMTTL_MASK       (0xFFFFFFFFu)
#define CSL_ECD_NUMTTL_NUMTTL_SHIFT      (0x00000000u)
#define CSL_ECD_NUMTTL_NUMTTL_RESETVAL   (0x00000000u)

#define CSL_ECD_NUMTTL_RESETVAL          (0x00000000u)

/* NUMHD */

#define CSL_ECD_NUMHD_NUMHD_MASK         (0xFFFFFFFFu)
#define CSL_ECD_NUMHD_NUMHD_SHIFT        (0x00000000u)
#define CSL_ECD_NUMHD_NUMHD_RESETVAL     (0x00000000u)

#define CSL_ECD_NUMHD_RESETVAL           (0x00000000u)

/* NUMRESI */

#define CSL_ECD_NUMRESI_NUMRESI_MASK     (0xFFFFFFFFu)
#define CSL_ECD_NUMRESI_NUMRESI_SHIFT    (0x00000000u)
#define CSL_ECD_NUMRESI_NUMRESI_RESETVAL (0x00000000u)

#define CSL_ECD_NUMRESI_RESETVAL         (0x00000000u)

/* BITSOUTSTANDING */

#define CSL_ECD_BITSOUTSTANDING_VALUE_MASK (0xFFFFFFFFu)
#define CSL_ECD_BITSOUTSTANDING_VALUE_SHIFT (0x00000000u)
#define CSL_ECD_BITSOUTSTANDING_VALUE_RESETVAL (0x00000000u)

#define CSL_ECD_BITSOUTSTANDING_RESETVAL (0x00000000u)

/* MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR */

#define CSL_ECD_MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR_MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR_MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR_SHIFT (0x00000000u)
#define CSL_ECD_MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR_MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR_RESETVAL (0x00000000u)

#define CSL_ECD_MP2_PICPTR_MP4_SLIPTR_VC1_SLIPTR_H264_SLIPTR_RESETVAL (0x00000000u)

/* MP2_PICPTR */


#define CSL_ECD_MP2_PICPTR_PICPTR_MASK   (0x000003F8u)
#define CSL_ECD_MP2_PICPTR_PICPTR_SHIFT  (0x00000003u)
#define CSL_ECD_MP2_PICPTR_PICPTR_RESETVAL (0x00000000u)


#define CSL_ECD_MP2_PICPTR_RESETVAL      (0x00000000u)

/* MP4_SLIPTR */


#define CSL_ECD_MP4_SLIPTR_SLIPTR_MASK   (0x000003F8u)
#define CSL_ECD_MP4_SLIPTR_SLIPTR_SHIFT  (0x00000003u)
#define CSL_ECD_MP4_SLIPTR_SLIPTR_RESETVAL (0x00000000u)


#define CSL_ECD_MP4_SLIPTR_RESETVAL      (0x00000000u)

/* VC1_SLIPTR */


#define CSL_ECD_VC1_SLIPTR_SLIPTR_MASK   (0x000003F8u)
#define CSL_ECD_VC1_SLIPTR_SLIPTR_SHIFT  (0x00000003u)
#define CSL_ECD_VC1_SLIPTR_SLIPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_SLIPTR_RESETVAL      (0x00000000u)

/* H264_SLIPTR */


#define CSL_ECD_H264_SLIPTR_SLIPTR_MASK  (0x00001FF8u)
#define CSL_ECD_H264_SLIPTR_SLIPTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_SLIPTR_SLIPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_SLIPTR_RESETVAL     (0x00000000u)

/* MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR */

#define CSL_ECD_MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR_MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR_MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR_SHIFT (0x00000000u)
#define CSL_ECD_MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR_MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR_RESETVAL (0x00000000u)

#define CSL_ECD_MP2_MBDATAPTR_MP4_MBPTR_VC1_MBPTR_H264_WORKPTR_RESETVAL (0x00000000u)

/* MP2_MBDATAPTR */


#define CSL_ECD_MP2_MBDATAPTR_MBDATAPTR_MASK (0x00003FF8u)
#define CSL_ECD_MP2_MBDATAPTR_MBDATAPTR_SHIFT (0x00000003u)
#define CSL_ECD_MP2_MBDATAPTR_MBDATAPTR_RESETVAL (0x00000000u)


#define CSL_ECD_MP2_MBDATAPTR_RESETVAL   (0x00000000u)

/* MP4_MBPTR */


#define CSL_ECD_MP4_MBPTR_MBDATAPTR_MASK (0x00003FF8u)
#define CSL_ECD_MP4_MBPTR_MBDATAPTR_SHIFT (0x00000003u)
#define CSL_ECD_MP4_MBPTR_MBDATAPTR_RESETVAL (0x00000000u)


#define CSL_ECD_MP4_MBPTR_RESETVAL       (0x00000000u)

/* VC1_MBPTR */


#define CSL_ECD_VC1_MBPTR_MBDATAPTR_MASK (0x00003FF8u)
#define CSL_ECD_VC1_MBPTR_MBDATAPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_MBPTR_MBDATAPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_MBPTR_RESETVAL       (0x00000000u)

/* H264_WORKPTR */


#define CSL_ECD_H264_WORKPTR_WORKPTR_MASK (0x000007F8u)
#define CSL_ECD_H264_WORKPTR_WORKPTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_WORKPTR_WORKPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_WORKPTR_RESETVAL    (0x00000000u)

/* MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA */

#define CSL_ECD_MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA_MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA_MASK (0xFFFFFFFFu)
#define CSL_ECD_MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA_MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA_SHIFT (0x00000000u)
#define CSL_ECD_MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA_MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA_RESETVAL (0x00000000u)

#define CSL_ECD_MP2_WORKPTR_MP4_WORKPTR_VC1_WORKPTR_H264_MBDATA_RESETVAL (0x00000000u)

/* MP2_WORKPTR */


#define CSL_ECD_MP2_WORKPTR_WORKPTR_MASK (0x000003F8u)
#define CSL_ECD_MP2_WORKPTR_WORKPTR_SHIFT (0x00000003u)
#define CSL_ECD_MP2_WORKPTR_WORKPTR_RESETVAL (0x00000000u)


#define CSL_ECD_MP2_WORKPTR_RESETVAL     (0x00000000u)

/* MP4_WORKPTR */


#define CSL_ECD_MP4_WORKPTR_WORKPTR_MASK (0x000003F8u)
#define CSL_ECD_MP4_WORKPTR_WORKPTR_SHIFT (0x00000003u)
#define CSL_ECD_MP4_WORKPTR_WORKPTR_RESETVAL (0x00000000u)


#define CSL_ECD_MP4_WORKPTR_RESETVAL     (0x00000000u)

/* VC1_WORKPTR */


#define CSL_ECD_VC1_WORKPTR_WORKPTR_MASK (0x000003F8u)
#define CSL_ECD_VC1_WORKPTR_WORKPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_WORKPTR_WORKPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_WORKPTR_RESETVAL     (0x00000000u)

/* H264_MBDATAPTR */


#define CSL_ECD_H264_MBDATAPTR_MBDATAPTR_MASK (0x000007F8u)
#define CSL_ECD_H264_MBDATAPTR_MBDATAPTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBDATAPTR_MBDATAPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBDATAPTR_RESETVAL  (0x00000000u)

/* MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR */

#define CSL_ECD_MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR_MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR_MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR_SHIFT (0x00000000u)
#define CSL_ECD_MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR_MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR_RESETVAL (0x00000000u)

#define CSL_ECD_MP2_TEST_MP4_CURPREDPTR0_VC1_CURPREDPTR_H264_MB0PTR_RESETVAL (0x00000000u)

/* MP2_TEST */


#define CSL_ECD_MP2_TEST_FORCE5_MASK     (0x00000080u)
#define CSL_ECD_MP2_TEST_FORCE5_SHIFT    (0x00000007u)
#define CSL_ECD_MP2_TEST_FORCE5_RESETVAL (0x00000000u)
/*----FORCE5 Tokens----*/
#define CSL_ECD_MP2_TEST_FORCE5_NORMAL   (0x00000000u)
#define CSL_ECD_MP2_TEST_FORCE5_FORCE    (0x00000001u)

#define CSL_ECD_MP2_TEST_FORCE1_MASK     (0x00000040u)
#define CSL_ECD_MP2_TEST_FORCE1_SHIFT    (0x00000006u)
#define CSL_ECD_MP2_TEST_FORCE1_RESETVAL (0x00000000u)
/*----FORCE1 Tokens----*/
#define CSL_ECD_MP2_TEST_FORCE1_NORMAL   (0x00000000u)
#define CSL_ECD_MP2_TEST_FORCE1_FORCE    (0x00000001u)

#define CSL_ECD_MP2_TEST_SKIPMASK_MASK   (0x00000020u)
#define CSL_ECD_MP2_TEST_SKIPMASK_SHIFT  (0x00000005u)
#define CSL_ECD_MP2_TEST_SKIPMASK_RESETVAL (0x00000000u)
/*----SKIPMASK Tokens----*/
#define CSL_ECD_MP2_TEST_SKIPMASK_NORMAL (0x00000000u)
#define CSL_ECD_MP2_TEST_SKIPMASK_ERRMASK (0x00000001u)

#define CSL_ECD_MP2_TEST_MODESMASK_MASK  (0x00000010u)
#define CSL_ECD_MP2_TEST_MODESMASK_SHIFT (0x00000004u)
#define CSL_ECD_MP2_TEST_MODESMASK_RESETVAL (0x00000000u)
/*----MODESMASK Tokens----*/
#define CSL_ECD_MP2_TEST_MODESMASK_NORMAL (0x00000000u)
#define CSL_ECD_MP2_TEST_MODESMASK_ERRMASK (0x00000001u)

#define CSL_ECD_MP2_TEST_MVSMASK_MASK    (0x00000008u)
#define CSL_ECD_MP2_TEST_MVSMASK_SHIFT   (0x00000003u)
#define CSL_ECD_MP2_TEST_MVSMASK_RESETVAL (0x00000000u)
/*----MVSMASK Tokens----*/
#define CSL_ECD_MP2_TEST_MVSMASK_NORMAL  (0x00000000u)
#define CSL_ECD_MP2_TEST_MVSMASK_ERRMASK (0x00000001u)

#define CSL_ECD_MP2_TEST_CBPMASK_MASK    (0x00000004u)
#define CSL_ECD_MP2_TEST_CBPMASK_SHIFT   (0x00000002u)
#define CSL_ECD_MP2_TEST_CBPMASK_RESETVAL (0x00000000u)
/*----CBPMASK Tokens----*/
#define CSL_ECD_MP2_TEST_CBPMASK_NORMAL  (0x00000000u)
#define CSL_ECD_MP2_TEST_CBPMASK_ERRMASK (0x00000001u)

#define CSL_ECD_MP2_TEST_SSCMASK_MASK    (0x00000002u)
#define CSL_ECD_MP2_TEST_SSCMASK_SHIFT   (0x00000001u)
#define CSL_ECD_MP2_TEST_SSCMASK_RESETVAL (0x00000000u)
/*----SSCMASK Tokens----*/
#define CSL_ECD_MP2_TEST_SSCMASK_NORMAL  (0x00000000u)
#define CSL_ECD_MP2_TEST_SSCMASK_ERRMASK (0x00000001u)

#define CSL_ECD_MP2_TEST_RSDMASK_MASK    (0x00000001u)
#define CSL_ECD_MP2_TEST_RSDMASK_SHIFT   (0x00000000u)
#define CSL_ECD_MP2_TEST_RSDMASK_RESETVAL (0x00000000u)
/*----RSDMASK Tokens----*/
#define CSL_ECD_MP2_TEST_RSDMASK_NORMAL  (0x00000000u)
#define CSL_ECD_MP2_TEST_RSDMASK_ERRMASK (0x00000001u)

#define CSL_ECD_MP2_TEST_RESETVAL        (0x00000000u)

/* MP4_CURPREDPTR0 */


#define CSL_ECD_MP4_CURPREDPTR0_CURPREDPTR0_MASK (0x00003FF8u)
#define CSL_ECD_MP4_CURPREDPTR0_CURPREDPTR0_SHIFT (0x00000003u)
#define CSL_ECD_MP4_CURPREDPTR0_CURPREDPTR0_RESETVAL (0x00000000u)


#define CSL_ECD_MP4_CURPREDPTR0_RESETVAL (0x00000000u)

/* VC1_CURPREDPTR */


#define CSL_ECD_VC1_CURPREDPTR_CURPREDPTR_MASK (0x000003F8u)
#define CSL_ECD_VC1_CURPREDPTR_CURPREDPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_CURPREDPTR_CURPREDPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_CURPREDPTR_RESETVAL  (0x00000000u)

/* H264_MB0PTR */


#define CSL_ECD_H264_MB0PTR_MB0PTR_MASK  (0x000007F8u)
#define CSL_ECD_H264_MB0PTR_MB0PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MB0PTR_MB0PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MB0PTR_RESETVAL     (0x00000000u)

/* MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR */

#define CSL_ECD_MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR_MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR_MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR_SHIFT (0x00000000u)
#define CSL_ECD_MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR_MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR_RESETVAL (0x00000000u)

#define CSL_ECD_MP4_CURPREDPTR1_VC1_PREDLPTR_H264_MB1PTR_RESETVAL (0x00000000u)

/* MP4_CURPREDPTR1 */


#define CSL_ECD_MP4_CURPREDPTR1_CURPREDPTR1_MASK (0x000003F8u)
#define CSL_ECD_MP4_CURPREDPTR1_CURPREDPTR1_SHIFT (0x00000003u)
#define CSL_ECD_MP4_CURPREDPTR1_CURPREDPTR1_RESETVAL (0x00000000u)


#define CSL_ECD_MP4_CURPREDPTR1_RESETVAL (0x00000000u)

/* VC1_PREDLPTR */


#define CSL_ECD_VC1_PREDLPTR_PREDLPTR_MASK (0x000003F8u)
#define CSL_ECD_VC1_PREDLPTR_PREDLPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_PREDLPTR_PREDLPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_PREDLPTR_RESETVAL    (0x00000000u)

/* H264_MB1PTR */


#define CSL_ECD_H264_MB1PTR_MB1PTR_MASK  (0x000007F8u)
#define CSL_ECD_H264_MB1PTR_MB1PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MB1PTR_MB1PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MB1PTR_RESETVAL     (0x00000000u)

/* MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR */

#define CSL_ECD_MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR_MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR_MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR_SHIFT (0x00000000u)
#define CSL_ECD_MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR_MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR_RESETVAL (0x00000000u)

#define CSL_ECD_MP4_PREDBPTR_VC1_PREDLTPTR_H264_MBBUFPTR_RESETVAL (0x00000000u)

/* MP4_PREDBPTR */


#define CSL_ECD_MP4_PREDBPTR_PREDBPTR_MASK (0x00003FF8u)
#define CSL_ECD_MP4_PREDBPTR_PREDBPTR_SHIFT (0x00000003u)
#define CSL_ECD_MP4_PREDBPTR_PREDBPTR_RESETVAL (0x00000000u)


#define CSL_ECD_MP4_PREDBPTR_RESETVAL    (0x00000000u)

/* VC1_PREDLTPTR */


#define CSL_ECD_VC1_PREDLTPTR_PREDLTPTR_MASK (0x00003FF8u)
#define CSL_ECD_VC1_PREDLTPTR_PREDLTPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_PREDLTPTR_PREDLTPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_PREDLTPTR_RESETVAL   (0x00000000u)

/* H264_MBBUFPTR */


#define CSL_ECD_H264_MBBUFPTR_MBBUFPTR_MASK (0x000007F8u)
#define CSL_ECD_H264_MBBUFPTR_MBBUFPTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBBUFPTR_MBBUFPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBBUFPTR_RESETVAL   (0x00000000u)

/* MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR */

#define CSL_ECD_MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR_MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR_MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR_SHIFT (0x00000000u)
#define CSL_ECD_MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR_MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR_RESETVAL (0x00000000u)

#define CSL_ECD_MP4_PREDCPTR_VC1_PREDTPTR_H264_MBA0PTR_RESETVAL (0x00000000u)

/* MP4_PREDCPTR */


#define CSL_ECD_MP4_PREDCPTR_PREDCPTR_MASK (0x00003FF8u)
#define CSL_ECD_MP4_PREDCPTR_PREDCPTR_SHIFT (0x00000003u)
#define CSL_ECD_MP4_PREDCPTR_PREDCPTR_RESETVAL (0x00000000u)


#define CSL_ECD_MP4_PREDCPTR_RESETVAL    (0x00000000u)

/* VC1_PREDTPTR */


#define CSL_ECD_VC1_PREDTPTR_PREDTPTR_MASK (0x00003FF8u)
#define CSL_ECD_VC1_PREDTPTR_PREDTPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_PREDTPTR_PREDTPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_PREDTPTR_RESETVAL    (0x00000000u)

/* H264_MBA0PTR */


#define CSL_ECD_H264_MBA0PTR_MBA0PTR_MASK (0x000007F8u)
#define CSL_ECD_H264_MBA0PTR_MBA0PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBA0PTR_MBA0PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBA0PTR_RESETVAL    (0x00000000u)

/* VC1_PREDRTPTR_H264_MBA1PTR */

#define CSL_ECD_VC1_PREDRTPTR_H264_MBA1PTR_VC1_PREDRTPTR_H264_MBA1PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_PREDRTPTR_H264_MBA1PTR_VC1_PREDRTPTR_H264_MBA1PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_PREDRTPTR_H264_MBA1PTR_VC1_PREDRTPTR_H264_MBA1PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_PREDRTPTR_H264_MBA1PTR_RESETVAL (0x00000000u)

/* VC1_PREDRTPTR */


#define CSL_ECD_VC1_PREDRTPTR_PREDRTPTR_MASK (0x00003FF8u)
#define CSL_ECD_VC1_PREDRTPTR_PREDRTPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_PREDRTPTR_PREDRTPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_PREDRTPTR_RESETVAL   (0x00000000u)

/* H264_MBA1PTR */


#define CSL_ECD_H264_MBA1PTR_MBA1PTR_MASK (0x000007F8u)
#define CSL_ECD_H264_MBA1PTR_MBA1PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBA1PTR_MBA1PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBA1PTR_RESETVAL    (0x00000000u)

/* VC1_ANCHORPTR_H264_MBB0PTR */

#define CSL_ECD_VC1_ANCHORPTR_H264_MBB0PTR_VC1_ANCHORPTR_H264_MBB0PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_ANCHORPTR_H264_MBB0PTR_VC1_ANCHORPTR_H264_MBB0PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_ANCHORPTR_H264_MBB0PTR_VC1_ANCHORPTR_H264_MBB0PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_ANCHORPTR_H264_MBB0PTR_RESETVAL (0x00000000u)

/* VC1_ANCHORPTR */


#define CSL_ECD_VC1_ANCHORPTR_ANCHORPTR_MASK (0x00003FF8u)
#define CSL_ECD_VC1_ANCHORPTR_ANCHORPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_ANCHORPTR_ANCHORPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_ANCHORPTR_RESETVAL   (0x00000000u)

/* H264_MBB0PTR */


#define CSL_ECD_H264_MBB0PTR_MBB0PTR_MASK (0x00003FF8u)
#define CSL_ECD_H264_MBB0PTR_MBB0PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBB0PTR_MBB0PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBB0PTR_RESETVAL    (0x00000000u)

/* VC1_ACPREDPTR_H264_MBB1PTR */

#define CSL_ECD_VC1_ACPREDPTR_H264_MBB1PTR_VC1_ACPREDPTR_H264_MBB1PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_ACPREDPTR_H264_MBB1PTR_VC1_ACPREDPTR_H264_MBB1PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_ACPREDPTR_H264_MBB1PTR_VC1_ACPREDPTR_H264_MBB1PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_ACPREDPTR_H264_MBB1PTR_RESETVAL (0x00000000u)

/* VC1_ACPREDPTR */


#define CSL_ECD_VC1_ACPREDPTR_ACPREDPTR_MASK (0x00001FF8u)
#define CSL_ECD_VC1_ACPREDPTR_ACPREDPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_ACPREDPTR_ACPREDPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_ACPREDPTR_RESETVAL   (0x00000000u)

/* H264_MBB1PTR */


#define CSL_ECD_H264_MBB1PTR_MBB1PTR_MASK (0x00003FF8u)
#define CSL_ECD_H264_MBB1PTR_MBB1PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBB1PTR_MBB1PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBB1PTR_RESETVAL    (0x00000000u)

/* VC1_OVERFLAGPTR_H264_MBC0PTR */

#define CSL_ECD_VC1_OVERFLAGPTR_H264_MBC0PTR_VC1_OVERFLAGPTR_H264_MBC0PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_OVERFLAGPTR_H264_MBC0PTR_VC1_OVERFLAGPTR_H264_MBC0PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_OVERFLAGPTR_H264_MBC0PTR_VC1_OVERFLAGPTR_H264_MBC0PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_OVERFLAGPTR_H264_MBC0PTR_RESETVAL (0x00000000u)

/* VC1_OVERFLAGPTR */


#define CSL_ECD_VC1_OVERFLAGPTR_OVERFLAGPTR_MASK (0x00001FF8u)
#define CSL_ECD_VC1_OVERFLAGPTR_OVERFLAGPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_OVERFLAGPTR_OVERFLAGPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_OVERFLAGPTR_RESETVAL (0x00000000u)

/* H264_MBC0PTR */


#define CSL_ECD_H264_MBC0PTR_MBC0PTR_MASK (0x00003FF8u)
#define CSL_ECD_H264_MBC0PTR_MBC0PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBC0PTR_MBC0PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBC0PTR_RESETVAL    (0x00000000u)

/* VC1_MVMODEPTR_H264_MBC1PTR */

#define CSL_ECD_VC1_MVMODEPTR_H264_MBC1PTR_VC1_MVMODEPTR_H264_MBC1PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_MVMODEPTR_H264_MBC1PTR_VC1_MVMODEPTR_H264_MBC1PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_MVMODEPTR_H264_MBC1PTR_VC1_MVMODEPTR_H264_MBC1PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_MVMODEPTR_H264_MBC1PTR_RESETVAL (0x00000000u)

/* VC1_MVMODEPTR */


#define CSL_ECD_VC1_MVMODEPTR_MVMODEPTR_MASK (0x00001FF8u)
#define CSL_ECD_VC1_MVMODEPTR_MVMODEPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_MVMODEPTR_MVMODEPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_MVMODEPTR_RESETVAL   (0x00000000u)

/* H264_MBC1PTR */


#define CSL_ECD_H264_MBC1PTR_MBC1PTR_MASK (0x00003FF8u)
#define CSL_ECD_H264_MBC1PTR_MBC1PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBC1PTR_MBC1PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBC1PTR_RESETVAL    (0x00000000u)

/* VC1_SKIPPTR_H264_MBD0PTR */

#define CSL_ECD_VC1_SKIPPTR_H264_MBD0PTR_VC1_SKIPPTR_H264_MBD0PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_SKIPPTR_H264_MBD0PTR_VC1_SKIPPTR_H264_MBD0PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_SKIPPTR_H264_MBD0PTR_VC1_SKIPPTR_H264_MBD0PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_SKIPPTR_H264_MBD0PTR_RESETVAL (0x00000000u)

/* VC1_SKIPPTR */


#define CSL_ECD_VC1_SKIPPTR_SKIPPTR_MASK (0x00001FF8u)
#define CSL_ECD_VC1_SKIPPTR_SKIPPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_SKIPPTR_SKIPPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_SKIPPTR_RESETVAL     (0x00000000u)

/* H264_MBD0PTR */


#define CSL_ECD_H264_MBD0PTR_MBD0PTR_MASK (0x00003FF8u)
#define CSL_ECD_H264_MBD0PTR_MBD0PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBD0PTR_MBD0PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBD0PTR_RESETVAL    (0x00000000u)

/* VC1_DIRECTPTR_H264_MBD1PTR */

#define CSL_ECD_VC1_DIRECTPTR_H264_MBD1PTR_VC1_DIRECTPTR_H264_MBD1PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_DIRECTPTR_H264_MBD1PTR_VC1_DIRECTPTR_H264_MBD1PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_DIRECTPTR_H264_MBD1PTR_VC1_DIRECTPTR_H264_MBD1PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_DIRECTPTR_H264_MBD1PTR_RESETVAL (0x00000000u)

/* VC1_DIRECTPTR */


#define CSL_ECD_VC1_DIRECTPTR_DIRECTPTR_MASK (0x00001FF8u)
#define CSL_ECD_VC1_DIRECTPTR_DIRECTPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_DIRECTPTR_DIRECTPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_DIRECTPTR_RESETVAL   (0x00000000u)

/* H264_MBD1PTR */


#define CSL_ECD_H264_MBD1PTR_MBD1PTR_MASK (0x00003FF8u)
#define CSL_ECD_H264_MBD1PTR_MBD1PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_MBD1PTR_MBD1PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBD1PTR_RESETVAL    (0x00000000u)

/* VC1_FIELDTXPTR_H264_COL0PTR */

#define CSL_ECD_VC1_FIELDTXPTR_H264_COL0PTR_VC1_FIELDTXPTR_H264_COL0PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_FIELDTXPTR_H264_COL0PTR_VC1_FIELDTXPTR_H264_COL0PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_FIELDTXPTR_H264_COL0PTR_VC1_FIELDTXPTR_H264_COL0PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_FIELDTXPTR_H264_COL0PTR_RESETVAL (0x00000000u)

/* VC1_FIELDTXPTR */


#define CSL_ECD_VC1_FIELDTXPTR_FIELDTXPTR_MASK (0x00001FF8u)
#define CSL_ECD_VC1_FIELDTXPTR_FIELDTXPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_FIELDTXPTR_FIELDTXPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_FIELDTXPTR_RESETVAL  (0x00000000u)

/* H264_COL0PTR */


#define CSL_ECD_H264_COL0PTR_COL0PTR_MASK (0x00003FF8u)
#define CSL_ECD_H264_COL0PTR_COL0PTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_COL0PTR_COL0PTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_COL0PTR_RESETVAL    (0x00000000u)

/* VC1_FWDBITPTR_H264_COL1PTR */

#define CSL_ECD_VC1_FWDBITPTR_H264_COL1PTR_VC1_FWDBITPTR_H264_COL1PTR_MASK (0xFFFFFFFFu)
#define CSL_ECD_VC1_FWDBITPTR_H264_COL1PTR_VC1_FWDBITPTR_H264_COL1PTR_SHIFT (0x00000000u)
#define CSL_ECD_VC1_FWDBITPTR_H264_COL1PTR_VC1_FWDBITPTR_H264_COL1PTR_RESETVAL (0x00000000u)

#define CSL_ECD_VC1_FWDBITPTR_H264_COL1PTR_RESETVAL (0x00000000u)

/* VC1_FWDBITPTR */


#define CSL_ECD_VC1_FWDBITPTR_FWDBITPTR_MASK (0x00001FF8u)
#define CSL_ECD_VC1_FWDBITPTR_FWDBITPTR_SHIFT (0x00000003u)
#define CSL_ECD_VC1_FWDBITPTR_FWDBITPTR_RESETVAL (0x00000000u)


#define CSL_ECD_VC1_FWDBITPTR_RESETVAL   (0x00000000u)

/* H264_COL1PTR */


#define CSL_ECD_H264_COL1PTR_FIELDTXPTR_MASK (0x00003FF8u)
#define CSL_ECD_H264_COL1PTR_FIELDTXPTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_COL1PTR_FIELDTXPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_COL1PTR_RESETVAL    (0x00000000u)

/* H264_MBPTR */


#define CSL_ECD_H264_MBPTR_MBPTR_MASK    (0x00003FF8u)
#define CSL_ECD_H264_MBPTR_MBPTR_SHIFT   (0x00000003u)
#define CSL_ECD_H264_MBPTR_MBPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_MBPTR_RESETVAL      (0x00000000u)

/* H264_PRVMBPTR */


#define CSL_ECD_H264_PRVMBPTR_PRVMBPTR_MASK (0x000007F8u)
#define CSL_ECD_H264_PRVMBPTR_PRVMBPTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_PRVMBPTR_PRVMBPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_PRVMBPTR_RESETVAL   (0x00000000u)

/* H264_CTXPTR */


#define CSL_ECD_H264_CTXPTR_CTXPTR_MASK  (0x000003F8u)
#define CSL_ECD_H264_CTXPTR_CTXPTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_CTXPTR_CTXPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_CTXPTR_RESETVAL     (0x00000000u)

/* H264_WBUFNAPTR */


#define CSL_ECD_H264_WBUFNAPTR_WBUFNAPTR_MASK (0x000007F8u)
#define CSL_ECD_H264_WBUFNAPTR_WBUFNAPTR_SHIFT (0x00000003u)
#define CSL_ECD_H264_WBUFNAPTR_WBUFNAPTR_RESETVAL (0x00000000u)


#define CSL_ECD_H264_WBUFNAPTR_RESETVAL  (0x00000000u)

/* H264_TEST */


#define CSL_ECD_H264_TEST_TEST_MASK      (0x000000FFu)
#define CSL_ECD_H264_TEST_TEST_SHIFT     (0x00000000u)
#define CSL_ECD_H264_TEST_TEST_RESETVAL  (0x00000000u)

#define CSL_ECD_H264_TEST_RESETVAL       (0x00000000u)

#endif
