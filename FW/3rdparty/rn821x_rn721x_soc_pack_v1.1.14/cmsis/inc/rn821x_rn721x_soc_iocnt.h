/**
 * @file    rn821x_rn721x_soc_iocnt.h
 * @brief   IOCNT definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_IOCNT_H
#define RN821X_RN721X_SOC_IOCNT_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* IOCNT_CFG0 */
#if defined(RN821x_RN721x_SOC_V2)
#define IOCNT_CFG0_CFG0                      (BITS(0,31))                                        /*!< pulse forwarding configuration bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define IOCNT_CFG0_CNT                       (BITS(0,19))                                        /*!< pluse counter bits */
#define IOCNT_CFG0_CFG                       (BITS(20,30))                                       /*!< pluse freqency division configuration bits */
#define IOCNT_CFG0_INT                       (BIT(31))                                           /*!< pluse inversion output enable bit */
#endif

/* IOCNT_CFG1 */
#if defined(RN821x_RN721x_SOC_V2)
#define IOCNT_CFG1_CFG1                      (BITS(0,31))                                        /*!< pulse forwarding configuration bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define IOCNT_CFG1_CNT                       (BITS(0,19))                                        /*!< pluse counter bits */
#define IOCNT_CFG1_CFG                       (BITS(20,30))                                       /*!< pluse freqency division configuration bits */
#define IOCNT_CFG1_INT                       (BIT(31))                                           /*!< pluse inversion output enable bit */
#endif

/* IOCNT_CFG2 */
#if defined(RN821x_RN721x_SOC_V2)
#define IOCNT_CFG2_CFG2                      (BITS(0,31))                                        /*!< pulse forwarding configuration bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define IOCNT_CFG2_CNT                       (BITS(0,19))                                        /*!< pluse counter bits */
#define IOCNT_CFG2_CFG                       (BITS(20,30))                                       /*!< pluse freqency division configuration bits */
#define IOCNT_CFG2_INT                       (BIT(31))                                           /*!< pluse inversion output enable bit */
#endif

/* IOCNT_CFG3 */
#if defined(RN821x_RN721x_SOC_V2)
#define IOCNT_CFG3_CFG3                      (BITS(0,31))                                        /*!< pulse forwarding configuration bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define IOCNT_CFG3_CNT                       (BITS(0,19))                                        /*!< pluse counter bits */
#define IOCNT_CFG3_CFG                       (BITS(20,30))                                       /*!< pluse freqency division configuration bits */
#define IOCNT_CFG3_INT                       (BIT(31))                                           /*!< pluse inversion output enable bit */
#endif

/* IOCNT_CFG4 */
#if defined(RN821x_RN721x_SOC_V2)
#define IOCNT_CFG4_CFG4                      (BITS(0,31))                                        /*!< pulse forwarding configuration bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define IOCNT_CFG4_CNT                       (BITS(0,19))                                        /*!< pluse counter bits */
#define IOCNT_CFG4_CFG                       (BITS(20,30))                                       /*!< pluse freqency division configuration bits */
#define IOCNT_CFG4_INT                       (BIT(31))                                           /*!< pluse inversion output enable bit */

/* IOCNT_OUT0 */
#define IOCNT_OUT0_OUT0                      (BITS(0,19))                                        /*!< pulse forwarding output counter bits */

/* IOCNT_OUT1 */
#define IOCNT_OUT1_OUT1                      (BITS(0,19))                                        /*!< pulse forwarding output counter bits */

/* IOCNT_OUT2 */
#define IOCNT_OUT2_OUT2                      (BITS(0,19))                                        /*!< pulse forwarding output counter bits */

/* IOCNT_OUT3 */
#define IOCNT_OUT3_OUT3                      (BITS(0,19))                                        /*!< pulse forwarding output counter bits */

/* IOCNT_OUT4 */
#define IOCNT_OUT4_OUT4                      (BITS(0,19))                                        /*!< pulse forwarding output counter bits */
#endif

/* IOCNT_CHNL */
#if defined(RN821x_RN721x_SOC_V2)
#define IOCNT_CHNL_CHNL                      (BITS(0,29))                                        /*!< pulse forwarding channel select bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define IOCNT_CHNL_IOCNT0_SEL                (BITS(0,5))                                         /*!< IOCNT0 input selection bits */
#define IOCNT_CHNL_IOCNT1_SEL                (BITS(6,11))                                        /*!< IOCNT1 input selection bits */
#define IOCNT_CHNL_IOCNT2_SEL                (BITS(12,17))                                       /*!< IOCNT2 input selection bits */
#define IOCNT_CHNL_IOCNT3_SEL                (BITS(18,23))                                       /*!< IOCNT3 input selection bits */
#define IOCNT_CHNL_IOCNT4_SEL                (BITS(24,29))                                       /*!< IOCNT4 input selection bits */
#endif

/* IOCNT_CTL */
#if defined(RN821x_RN721x_SOC_V2)
#define IOCNT_CTL_CTL                        (BITS(0,31))                                        /*!< pulse forwarding control bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define IOCNT_CTL_IOCNT0_EN                  (BIT(0))                                            /*!< IOCNT0 enable bit */
#define IOCNT_CTL_IOCNT1_EN                  (BIT(1))                                            /*!< IOCNT1 enable bit */
#define IOCNT_CTL_IOCNT2_EN                  (BIT(2))                                            /*!< IOCNT2 enable bit */
#define IOCNT_CTL_IOCNT3_EN                  (BIT(3))                                            /*!< IOCNT3 enable bit */
#define IOCNT_CTL_IOCNT4_EN                  (BIT(4))                                            /*!< IOCNT4 enable bit */
#define IOCNT_CTL_IOCNT0_MODE                (BIT(8))                                            /*!< IOCNT0 count mode selection bit */
#define IOCNT_CTL_IOCNT1_MODE                (BIT(9))                                            /*!< IOCNT1 count mode selection bit */
#define IOCNT_CTL_IOCNT2_MODE                (BIT(10))                                           /*!< IOCNT2 count mode selection bit */
#define IOCNT_CTL_IOCNT3_MODE                (BIT(11))                                           /*!< IOCNT3 count mode selection bit */
#define IOCNT_CTL_IOCNT4_MODE                (BIT(12))                                           /*!< IOCNT4 count mode selection bit */
#define IOCNT_CTL_CNT_CLR                    (BIT(16))                                           /*!< pulse counter mode selection bit */
#define IOCNT_CTL_FLT_BYPASS0                (BIT(17))                                           /*!< IOCNT0 FLT_BYPASS enable bit */
#define IOCNT_CTL_FLT_BYPASS1                (BIT(18))                                           /*!< IOCNT1 FLT_BYPASS enable bit */
#define IOCNT_CTL_FLT_BYPASS2                (BIT(19))                                           /*!< IOCNT2 FLT_BYPASS enable bit */
#define IOCNT_CTL_FLT_BYPASS3                (BIT(20))                                           /*!< IOCNT3 FLT_BYPASS enable bit */
#define IOCNT_CTL_FLT_BYPASS4                (BIT(21))                                           /*!< IOCNT4 FLT_BYPASS enable bit */
#define IOCNT_CTL_FLT_CFG                    (BITS(25,31))                                       /*!< IOCNT4~0 filter period config bits */
#endif

#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* IOCNT_CTL1 */
#define IOCNT_CTL1_COPL                      (BITS(0,4))                                         /*!< pulse forwarding config bits */

/* IOCNT_CMD */
#define IOCNT_CMD_IOCNT0_KICK                (BIT(0))                                            /*!< IOCNT0 pulse forwarding special commond generation bit */
#define IOCNT_CMD_IOCNT1_KICK                (BIT(1))                                            /*!< IOCNT1 pulse forwarding special commond generation bit */
#define IOCNT_CMD_IOCNT2_KICK                (BIT(2))                                            /*!< IOCNT2 pulse forwarding special commond generation bit */
#define IOCNT_CMD_IOCNT3_KICK                (BIT(3))                                            /*!< IOCNT3 pulse forwarding special commond generation bit */
#define IOCNT_CMD_IOCNT4_KICK                (BIT(4))                                            /*!< IOCNT4 pulse forwarding special commond generation bit */

/* IOCNT_REMD0 */
#define IOCNT_REMD0_REMD                     (BITS(0,10))                                        /*!< input pulse remainder bits */

/* IOCNT_REMD1 */
#define IOCNT_REMD1_REMD                     (BITS(0,10))                                        /*!< input pulse remainder bits */

/* IOCNT_REMD2 */
#define IOCNT_REMD2_REMD                     (BITS(0,10))                                        /*!< input pulse remainder bits */

/* IOCNT_REMD3 */
#define IOCNT_REMD3_REMD                     (BITS(0,10))                                        /*!< input pulse remainder bits */

/* IOCNT_REMD4 */
#define IOCNT_REMD4_REMD                     (BITS(0,10))                                        /*!< input pulse remainder bits */
#endif

/* constants definitions */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* IOCNT_CFG0_INT */
#define IOCNT_CFG0_INT_NORM                  ((uint32_t)0x00000000U)                             /*!< output pulse level direction same as input pulse level */
#define IOCNT_CFG0_INT_INT                   (IOCNT_CFG0_INT)                                    /*!< output pulse after it being inverted */

/* IOCNT_CFG1_INT */
#define IOCNT_CFG1_INT_NORM                  ((uint32_t)0x00000000U)                             /*!< output pulse level direction same as input pulse level */
#define IOCNT_CFG1_INT_INT                   (IOCNT_CFG1_INT)                                    /*!< output pulse after it being inverted */

/* IOCNT_CFG2_INT */
#define IOCNT_CFG2_INT_NORM                  ((uint32_t)0x00000000U)                             /*!< output pulse level direction same as input pulse level */
#define IOCNT_CFG2_INT_INT                   (IOCNT_CFG2_INT)                                    /*!< output pulse after it being inverted */

/* IOCNT_CFG3_INT */
#define IOCNT_CFG3_INT_NORM                  ((uint32_t)0x00000000U)                             /*!< output pulse level direction same as input pulse level */
#define IOCNT_CFG3_INT_INT                   (IOCNT_CFG3_INT)                                    /*!< output pulse after it being inverted */

/* IOCNT_CFG4_INT */
#define IOCNT_CFG4_INT_NORM                  ((uint32_t)0x00000000U)                             /*!< output pulse level direction same as input pulse level */
#define IOCNT_CFG4_INT_INT                   (IOCNT_CFG4_INT)                                    /*!< output pulse after it being inverted */
#endif

#endif /* RN821X_RN721X_SOC_IOCNT_H */
/* r1192 */
