/*****************************************************\
 *  Copyright 2003, Texas Instruments Incorporated.  *
 *  All rights reserved.                             *
 *  Restricted rights to use, duplicate or disclose  *
 *  this   code   are  granted   through  contract.  *
 *                                                   *
 * "@(#) PSP/CSL  3.0.0.0  (2003-09-30)              *
\*****************************************************/

#ifndef _CSL_RESID_H_
#define _CSL_RESID_H_


/* ---- Total number of modues : CSL Abstraction ---- */
/* Module ID 0 is reserved. */
#define CSL_CHIP_NUM_MODULES   (2)

#define CSL_MCBSP_ID        (1)
#define CSL_EDMA_ID         (2)

/* ---- Total Number of Resource, one-to-one correspondence with H/W resource */
/* Resource ID - 0 is resvd. */
#define CSL_CHIP_NUM_RESOURCES    (74)

#define CSL_EDMA_CHA0_UID          (0)
#define CSL_EDMA_CHA1_UID          (1)
#define CSL_EDMA_CHA2_UID          (2)
#define CSL_EDMA_CHA3_UID          (3)
#define CSL_EDMA_CHA4_UID          (4)
#define CSL_EDMA_CHA5_UID          (5)
#define CSL_EDMA_CHA6_UID          (6)
#define CSL_EDMA_CHA7_UID          (7)
#define CSL_EDMA_CHA8_UID          (8)
#define CSL_EDMA_CHA9_UID          (9)
#define CSL_EDMA_CHA10_UID         (10)
#define CSL_EDMA_CHA11_UID         (11)
#define CSL_EDMA_CHA12_UID         (12)
#define CSL_EDMA_CHA13_UID         (13)
#define CSL_EDMA_CHA14_UID         (14)
#define CSL_EDMA_CHA15_UID         (15)
#define CSL_EDMA_CHA16_UID         (16)
#define CSL_EDMA_CHA17_UID         (17)
#define CSL_EDMA_CHA18_UID         (18)
#define CSL_EDMA_CHA19_UID          (19)
#define CSL_EDMA_CHA20_UID          (20)
#define CSL_EDMA_CHA21_UID          (21)
#define CSL_EDMA_CHA22_UID          (22)
#define CSL_EDMA_CHA23_UID          (23)
#define CSL_EDMA_CHA24_UID          (24)
#define CSL_EDMA_CHA25_UID          (25)
#define CSL_EDMA_CHA26_UID         (26)
#define CSL_EDMA_CHA27_UID         (27)
#define CSL_EDMA_CHA28_UID         (28)
#define CSL_EDMA_CHA29_UID         (29)
#define CSL_EDMA_CHA30_UID         (30)
#define CSL_EDMA_CHA31_UID         (31)
#define CSL_EDMA_CHA32_UID          (32)
#define CSL_EDMA_CHA33_UID          (33)
#define CSL_EDMA_CHA34_UID          (34)
#define CSL_EDMA_CHA35_UID          (35)
#define CSL_EDMA_CHA36_UID         (36)
#define CSL_EDMA_CHA37_UID         (37)
#define CSL_EDMA_CHA38_UID         (38)
#define CSL_EDMA_CHA39_UID         (39)
#define CSL_EDMA_CHA40_UID         (40)
#define CSL_EDMA_CHA41_UID         (41)
#define CSL_EDMA_CHA42_UID          (42)
#define CSL_EDMA_CHA43_UID          (43)
#define CSL_EDMA_CHA44_UID          (44)
#define CSL_EDMA_CHA45_UID          (45)
#define CSL_EDMA_CHA46_UID         (46)
#define CSL_EDMA_CHA47_UID         (47)
#define CSL_EDMA_CHA48_UID         (48)
#define CSL_EDMA_CHA49_UID         (49)
#define CSL_EDMA_CHA50_UID         (50)
#define CSL_EDMA_CHA51_UID         (51)
#define CSL_EDMA_CHA52_UID          (52)
#define CSL_EDMA_CHA53_UID          (53)
#define CSL_EDMA_CHA54_UID          (54)
#define CSL_EDMA_CHA55_UID          (55)
#define CSL_EDMA_CHA56_UID         (56)
#define CSL_EDMA_CHA57_UID         (57)
#define CSL_EDMA_CHA58_UID         (58)
#define CSL_EDMA_CHA59_UID         (59)
#define CSL_EDMA_CHA60_UID         (60)
#define CSL_EDMA_CHA61_UID         (61)
#define CSL_EDMA_CHA62_UID          (62)
#define CSL_EDMA_CHA63_UID          (63)
#define CSL_EDMA_QCHA0_UID          (64)
#define CSL_EDMA_QCHA1_UID          (65)
#define CSL_EDMA_QCHA2_UID         (66)
#define CSL_EDMA_QCHA3_UID         (67)
#define CSL_MCBSP_0_UID            (68)
#define CSL_MCBSP_1_UID            (69)

/*---- XIO masks for peripheral instances ---- */
#define CSL_MCBSP_0_XIO             (0x00000000)
#define CSL_MCBSP_1_XIO             (0x00000000)
#define CSL_EDMA_CHA0_XIO          (0x00000000)
#define CSL_EDMA_CHA1_XIO          (0x00000000)
#define CSL_EDMA_CHA2_XIO          (0x00000000)
#define CSL_EDMA_CHA3_XIO          (0x00000000)
#define CSL_EDMA_CHA4_XIO          (0x00000000)
#define CSL_EDMA_CHA5_XIO          (0x00000000)
#define CSL_EDMA_CHA6_XIO          (0x00000000)
#define CSL_EDMA_CHA7_XIO          (0x00000000)
#define CSL_EDMA_CHA8_XIO          (0x00000000)
#define CSL_EDMA_CHA9_XIO          (0x00000000)
#define CSL_EDMA_CHA10_XIO         (0x00000000)
#define CSL_EDMA_CHA11_XIO         (0x00000000)
#define CSL_EDMA_CHA12_XIO         (0x00000000)
#define CSL_EDMA_CHA13_XIO         (0x00000000)
#define CSL_EDMA_CHA14_XIO         (0x00000000)
#define CSL_EDMA_CHA15_XIO         (0x00000000)
#define CSL_EDMA_CHA16_XIO          (0x00000000)
#define CSL_EDMA_CHA17_XIO          (0x00000000)
#define CSL_EDMA_CHA18_XIO          (0x00000000)
#define CSL_EDMA_CHA19_XIO          (0x00000000)
#define CSL_EDMA_CHA20_XIO          (0x00000000)
#define CSL_EDMA_CHA21_XIO          (0x00000000)
#define CSL_EDMA_CHA22_XIO          (0x00000000)
#define CSL_EDMA_CHA23_XIO          (0x00000000)
#define CSL_EDMA_CHA24_XIO          (0x00000000)
#define CSL_EDMA_CHA25_XIO          (0x00000000)
#define CSL_EDMA_CHA26_XIO         (0x00000000)
#define CSL_EDMA_CHA27_XIO         (0x00000000)
#define CSL_EDMA_CHA28_XIO         (0x00000000)
#define CSL_EDMA_CHA29_XIO         (0x00000000)
#define CSL_EDMA_CHA30_XIO         (0x00000000)
#define CSL_EDMA_CHA31_XIO         (0x00000000)
#define CSL_EDMA_CHA32_XIO          (0x00000000)
#define CSL_EDMA_CHA33_XIO          (0x00000000)
#define CSL_EDMA_CHA34_XIO          (0x00000000)
#define CSL_EDMA_CHA35_XIO          (0x00000000)
#define CSL_EDMA_CHA36_XIO         (0x00000000)
#define CSL_EDMA_CHA37_XIO         (0x00000000)
#define CSL_EDMA_CHA38_XIO         (0x00000000)
#define CSL_EDMA_CHA39_XIO         (0x00000000)
#define CSL_EDMA_CHA40_XIO         (0x00000000)
#define CSL_EDMA_CHA41_XIO         (0x00000000)
#define CSL_EDMA_CHA42_XIO          (0x00000000)
#define CSL_EDMA_CHA43_XIO          (0x00000000)
#define CSL_EDMA_CHA44_XIO          (0x00000000)
#define CSL_EDMA_CHA45_XIO          (0x00000000)
#define CSL_EDMA_CHA46_XIO         (0x00000000)
#define CSL_EDMA_CHA47_XIO         (0x00000000)
#define CSL_EDMA_CHA48_XIO         (0x00000000)
#define CSL_EDMA_CHA49_XIO         (0x00000000)
#define CSL_EDMA_CHA50_XIO         (0x00000000)
#define CSL_EDMA_CHA51_XIO         (0x00000000)
#define CSL_EDMA_CHA52_XIO          (0x00000000)
#define CSL_EDMA_CHA53_XIO          (0x00000000)
#define CSL_EDMA_CHA54_XIO          (0x00000000)
#define CSL_EDMA_CHA55_XIO          (0x00000000)
#define CSL_EDMA_CHA56_XIO         (0x00000000)
#define CSL_EDMA_CHA57_XIO         (0x00000000)
#define CSL_EDMA_CHA58_XIO         (0x00000000)
#define CSL_EDMA_CHA59_XIO         (0x00000000)
#define CSL_EDMA_CHA60_XIO         (0x00000000)
#define CSL_EDMA_CHA61_XIO         (0x00000000)
#define CSL_EDMA_CHA62_XIO          (0x00000000)
#define CSL_EDMA_CHA63_XIO          (0x00000000)
#define CSL_EDMA_QCHA0_XIO          (0x00000000)
#define CSL_EDMA_QCHA1_XIO          (0x00000000)
#define CSL_EDMA_QCHA2_XIO         (0x00000000)                                              
#define CSL_EDMA_QCHA3_XIO         (0x00000000)

#endif /* _CSL_RESID_H_ */

