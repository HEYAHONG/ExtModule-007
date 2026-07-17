/**
 * @file    rn821x_rn721x_soc_d2f.h
 * @brief   D2F definitions for RN821X_RN721X_SOC
 * @version v1.1.3
 */
#ifndef RN821X_RN721X_SOC_D2F_H
#define RN821X_RN721X_SOC_D2F_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* D2F_HFCONST4 */
#define D2F_HFCONST4_HFCONST4                (BITS(0,15))                                        /*!< D2F00/03 high frequency pulse constant register configuration bits */

/* D2F_HFCONST5 */
#define D2F_HFCONST5_HFCONST5                (BITS(0,15))                                        /*!< D2F01/04 high frequency pulse constant register configuration bits */

/* D2F_HFCONST6 */
#define D2F_HFCONST6_HFCONST6                (BITS(0,15))                                        /*!< D2F02/05 high frequency pulse constant register configuration bits */

/* D2F_HFCONST7 */
#define D2F_HFCONST7_HFCONST7                (BITS(0,15))                                        /*!< D2F06~11 high frequency pulse constant register configuration bits */

/* D2F_CFG */
#define D2F_CFG_EREGCAR                      (BIT(0))                                            /*!< D2F energy register mode selection bit */
#define D2F_CFG_D2F_DISABLE                  (BIT(1))                                            /*!< D2F module disable bit */

/* D2F_OUT_CFG */
#define D2F_OUT_CFG_D2F_OUT4_CFG             (BITS(16,18))                                       /*!< D2F_OUT4 d2f output pulse selection bits */
#define D2F_OUT_CFG_D2F_OUT3_CFG             (BITS(12,14))                                       /*!< D2F_OUT3 d2f output pulse selection bits */
#define D2F_OUT_CFG_D2F_OUT2_CFG             (BITS(8,10))                                        /*!< D2F_OUT2 d2f output pulse selection bits */
#define D2F_OUT_CFG_D2F_OUT1_CFG             (BITS(4,6))                                         /*!< D2F_OUT1 d2f output pulse selection bits */
#define D2F_OUT_CFG_D2F_OUT0_CFG             (BITS(0,2))                                         /*!< D2F_OUT0 d2f output pulse selection bits */

/* D2F_IE */
#define D2F_IE_D2F0IE                        (BIT(0))                                            /*!< D2F00 interrupt enable bit */
#define D2F_IE_D2F1IE                        (BIT(1))                                            /*!< D2F01 interrupt enable bit */
#define D2F_IE_D2F2IE                        (BIT(2))                                            /*!< D2F02 interrupt enable bit */
#define D2F_IE_D2F3IE                        (BIT(3))                                            /*!< D2F03 interrupt enable bit */
#define D2F_IE_D2F4IE                        (BIT(4))                                            /*!< D2F04 interrupt enable bit */
#define D2F_IE_D2F5IE                        (BIT(5))                                            /*!< D2F05 interrupt enable bit */
#define D2F_IE_D2F6IE                        (BIT(6))                                            /*!< D2F06 interrupt enable bit */
#define D2F_IE_D2F7IE                        (BIT(7))                                            /*!< D2F07 interrupt enable bit */
#define D2F_IE_D2F8IE                        (BIT(8))                                            /*!< D2F08 interrupt enable bit */
#define D2F_IE_D2F9IE                        (BIT(9))                                            /*!< D2F09 interrupt enable bit */
#define D2F_IE_D2F10IE                       (BIT(10))                                           /*!< D2F10 interrupt enable bit */
#define D2F_IE_D2F11IE                       (BIT(11))                                           /*!< D2F11 interrupt enable bit */

/* D2F_IF */
#define D2F_IF_D2F0IF                        (BIT(0))                                            /*!< D2F00 interrupt flag */
#define D2F_IF_D2F1IF                        (BIT(1))                                            /*!< D2F01 interrupt flag */
#define D2F_IF_D2F2IF                        (BIT(2))                                            /*!< D2F02 interrupt flag */
#define D2F_IF_D2F3IF                        (BIT(3))                                            /*!< D2F03 interrupt flag */
#define D2F_IF_D2F4IF                        (BIT(4))                                            /*!< D2F04 interrupt flag */
#define D2F_IF_D2F5IF                        (BIT(5))                                            /*!< D2F05 interrupt flag */
#define D2F_IF_D2F6IF                        (BIT(6))                                            /*!< D2F06 interrupt flag */
#define D2F_IF_D2F7IF                        (BIT(7))                                            /*!< D2F07 interrupt flag */
#define D2F_IF_D2F8IF                        (BIT(8))                                            /*!< D2F08 interrupt flag */
#define D2F_IF_D2F9IF                        (BIT(9))                                            /*!< D2F09 interrupt flag */
#define D2F_IF_D2F10IF                       (BIT(10))                                           /*!< D2F10 interrupt flag */
#define D2F_IF_D2F11IF                       (BIT(11))                                           /*!< D2F11 interrupt flag */

/* D2F_D2FFCNT00 */
#define D2F_D2FFCNT00_D2FFCNT00              (BITS(0,15))                                        /*!< D2F counter resistor No.00 bits */

/* D2F_D2FFCNT01 */
#define D2F_D2FFCNT01_D2FFCNT01              (BITS(0,15))                                        /*!< D2F counter resistor No.01 bits */

/* D2F_D2FFCNT02 */
#define D2F_D2FFCNT02_D2FFCNT02              (BITS(0,15))                                        /*!< D2F counter resistor No.02 bits */

/* D2F_D2FFCNT03 */
#define D2F_D2FFCNT03_D2FFCNT03              (BITS(0,15))                                        /*!< D2F counter resistor No.03 bits */

/* D2F_D2FFCNT04 */
#define D2F_D2FFCNT04_D2FFCNT04              (BITS(0,15))                                        /*!< D2F counter resistor No.04 bits */

/* D2F_D2FFCNT05 */
#define D2F_D2FFCNT05_D2FFCNT05              (BITS(0,15))                                        /*!< D2F counter resistor No.05 bits */

/* D2F_D2FFCNT06 */
#define D2F_D2FFCNT06_D2FFCNT06              (BITS(0,15))                                        /*!< D2F counter resistor No.06 bits */

/* D2F_D2FFCNT07 */
#define D2F_D2FFCNT07_D2FFCNT07              (BITS(0,15))                                        /*!< D2F counter resistor No.07 bits */

/* D2F_D2FFCNT08 */
#define D2F_D2FFCNT08_D2FFCNT08              (BITS(0,15))                                        /*!< D2F counter resistor No.08 bits */

/* D2F_D2FFCNT09 */
#define D2F_D2FFCNT09_D2FFCNT09              (BITS(0,15))                                        /*!< D2F counter resistor No.09 bits */

/* D2F_D2FFCNT10 */
#define D2F_D2FFCNT10_D2FFCNT10              (BITS(0,15))                                        /*!< D2F counter resistor No.10 bits */

/* D2F_D2FFCNT11 */
#define D2F_D2FFCNT11_D2FFCNT11              (BITS(0,15))                                        /*!< D2F counter resistor No.11 bits */

/* D2F_D2FP00 */
#define D2F_D2FP00_D2FP00                    (BITS(0,31))                                        /*!< D2F power register No.00 bits */

/* D2F_D2FP01 */
#define D2F_D2FP01_D2FP01                    (BITS(0,31))                                        /*!< D2F power register No.01 bits */

/* D2F_D2FP02 */
#define D2F_D2FP02_D2FP02                    (BITS(0,31))                                        /*!< D2F power register No.02 bits */

/* D2F_D2FP03 */
#define D2F_D2FP03_D2FP03                    (BITS(0,31))                                        /*!< D2F power register No.03 bits */

/* D2F_D2FP04 */
#define D2F_D2FP04_D2FP04                    (BITS(0,31))                                        /*!< D2F power register No.04 bits */

/* D2F_D2FP05 */
#define D2F_D2FP05_D2FP05                    (BITS(0,31))                                        /*!< D2F power register No.05 bits */

/* D2F_D2FP06 */
#define D2F_D2FP06_D2FP06                    (BITS(0,31))                                        /*!< D2F power register No.06 bits */

/* D2F_D2FP07 */
#define D2F_D2FP07_D2FP07                    (BITS(0,31))                                        /*!< D2F power register No.07 bits */

/* D2F_D2FP08 */
#define D2F_D2FP08_D2FP08                    (BITS(0,31))                                        /*!< D2F power register No.08 bits */

/* D2F_D2FP09 */
#define D2F_D2FP09_D2FP09                    (BITS(0,31))                                        /*!< D2F power register No.09 bits */

/* D2F_D2FP10 */
#define D2F_D2FP10_D2FP10                    (BITS(0,31))                                        /*!< D2F power register No.10 bits */

/* D2F_D2FP11 */
#define D2F_D2FP11_D2FP11                    (BITS(0,31))                                        /*!< D2F power register No.11 bits */

/* D2F_D2FE00 */
#define D2F_D2FE00_D2FE00                    (BITS(0,23))                                        /*!< D2F energy register No.00 bits */

/* D2F_D2FE01 */
#define D2F_D2FE01_D2FE01                    (BITS(0,23))                                        /*!< D2F energy register No.01 bits */

/* D2F_D2FE02 */
#define D2F_D2FE02_D2FE02                    (BITS(0,23))                                        /*!< D2F energy register No.02 bits */

/* D2F_D2FE03 */
#define D2F_D2FE03_D2FE03                    (BITS(0,23))                                        /*!< D2F energy register No.03 bits */

/* D2F_D2FE04 */
#define D2F_D2FE04_D2FE04                    (BITS(0,23))                                        /*!< D2F energy register No.04 bits */

/* D2F_D2FE05 */
#define D2F_D2FE05_D2FE05                    (BITS(0,23))                                        /*!< D2F energy register No.05 bits */

/* D2F_D2FE06 */
#define D2F_D2FE06_D2FE06                    (BITS(0,23))                                        /*!< D2F energy register No.06 bits */

/* D2F_D2FE07 */
#define D2F_D2FE07_D2FE07                    (BITS(0,23))                                        /*!< D2F energy register No.07 bits */

/* D2F_D2FE08 */
#define D2F_D2FE08_D2FE08                    (BITS(0,23))                                        /*!< D2F energy register No.08 bits */

/* D2F_D2FE09 */
#define D2F_D2FE09_D2FE09                    (BITS(0,23))                                        /*!< D2F energy register No.09 bits */

/* D2F_D2FE10 */
#define D2F_D2FE10_D2FE10                    (BITS(0,23))                                        /*!< D2F energy register No.10 bits */

/* D2F_D2FE11 */
#define D2F_D2FE11_D2FE11                    (BITS(0,23))                                        /*!< D2F energy register No.11 bits */

/* constants definitions */
/* D2F_CFG_EREGCAR */
#define D2F_CFG_EREGCAR_RC                   ((uint32_t)0x00000000U)                             /*!< D2F energy register select as clear after read */
#define D2F_CFG_EREGCAR_ACC                  (D2F_CFG_EREGCAR)                                   /*!< D2F energy register select as accumulation mode */

/* D2F_OUT_CFG_D2F_OUT4_CFG */
#define D2F_OUT_CFG_D2F_OUT4_CFG_CFG(regval)  (D2F_OUT_CFG_D2F_OUT4_CFG & ((uint32_t)(regval) << 16))
#define D2F_OUT_CFG_D2F_OUT4_CFG_D2F00       (D2F_OUT_CFG_D2F_OUT4_CFG_CFG(0))                   /*!< select as D2F00 pulse */
#define D2F_OUT_CFG_D2F_OUT4_CFG_D2F01       (D2F_OUT_CFG_D2F_OUT4_CFG_CFG(1))                   /*!< select as D2F01 pulse */
#define D2F_OUT_CFG_D2F_OUT4_CFG_D2F02       (D2F_OUT_CFG_D2F_OUT4_CFG_CFG(2))                   /*!< select as D2F02 pulse */
#define D2F_OUT_CFG_D2F_OUT4_CFG_D2F03       (D2F_OUT_CFG_D2F_OUT4_CFG_CFG(3))                   /*!< select as D2F03 pulse */
#define D2F_OUT_CFG_D2F_OUT4_CFG_D2F04       (D2F_OUT_CFG_D2F_OUT4_CFG_CFG(4))                   /*!< select as D2F04 pulse */
#define D2F_OUT_CFG_D2F_OUT4_CFG_D2F05       (D2F_OUT_CFG_D2F_OUT4_CFG_CFG(5))                   /*!< select as D2F05 pulse */

/* D2F_OUT_CFG_D2F_OUT3_CFG */
#define D2F_OUT_CFG_D2F_OUT3_CFG_CFG(regval)  (D2F_OUT_CFG_D2F_OUT3_CFG & ((uint32_t)(regval) << 12))
#define D2F_OUT_CFG_D2F_OUT3_CFG_D2F00       (D2F_OUT_CFG_D2F_OUT3_CFG_CFG(0))                   /*!< select as D2F00 pulse */
#define D2F_OUT_CFG_D2F_OUT3_CFG_D2F01       (D2F_OUT_CFG_D2F_OUT3_CFG_CFG(1))                   /*!< select as D2F01 pulse */
#define D2F_OUT_CFG_D2F_OUT3_CFG_D2F02       (D2F_OUT_CFG_D2F_OUT3_CFG_CFG(2))                   /*!< select as D2F02 pulse */
#define D2F_OUT_CFG_D2F_OUT3_CFG_D2F03       (D2F_OUT_CFG_D2F_OUT3_CFG_CFG(3))                   /*!< select as D2F03 pulse */
#define D2F_OUT_CFG_D2F_OUT3_CFG_D2F04       (D2F_OUT_CFG_D2F_OUT3_CFG_CFG(4))                   /*!< select as D2F04 pulse */
#define D2F_OUT_CFG_D2F_OUT3_CFG_D2F05       (D2F_OUT_CFG_D2F_OUT3_CFG_CFG(5))                   /*!< select as D2F05 pulse */

/* D2F_OUT_CFG_D2F_OUT2_CFG */
#define D2F_OUT_CFG_D2F_OUT2_CFG_CFG(regval)  (D2F_OUT_CFG_D2F_OUT2_CFG & ((uint32_t)(regval) << 8))
#define D2F_OUT_CFG_D2F_OUT2_CFG_D2F00       (D2F_OUT_CFG_D2F_OUT2_CFG_CFG(0))                   /*!< select as D2F00 pulse */
#define D2F_OUT_CFG_D2F_OUT2_CFG_D2F01       (D2F_OUT_CFG_D2F_OUT2_CFG_CFG(1))                   /*!< select as D2F01 pulse */
#define D2F_OUT_CFG_D2F_OUT2_CFG_D2F02       (D2F_OUT_CFG_D2F_OUT2_CFG_CFG(2))                   /*!< select as D2F02 pulse */
#define D2F_OUT_CFG_D2F_OUT2_CFG_D2F03       (D2F_OUT_CFG_D2F_OUT2_CFG_CFG(3))                   /*!< select as D2F03 pulse */
#define D2F_OUT_CFG_D2F_OUT2_CFG_D2F04       (D2F_OUT_CFG_D2F_OUT2_CFG_CFG(4))                   /*!< select as D2F04 pulse */
#define D2F_OUT_CFG_D2F_OUT2_CFG_D2F05       (D2F_OUT_CFG_D2F_OUT2_CFG_CFG(5))                   /*!< select as D2F05 pulse */

/* D2F_OUT_CFG_D2F_OUT1_CFG */
#define D2F_OUT_CFG_D2F_OUT1_CFG_CFG(regval)  (D2F_OUT_CFG_D2F_OUT1_CFG & ((uint32_t)(regval) << 4))
#define D2F_OUT_CFG_D2F_OUT1_CFG_D2F00       (D2F_OUT_CFG_D2F_OUT1_CFG_CFG(0))                   /*!< select as D2F00 pulse */
#define D2F_OUT_CFG_D2F_OUT1_CFG_D2F01       (D2F_OUT_CFG_D2F_OUT1_CFG_CFG(1))                   /*!< select as D2F01 pulse */
#define D2F_OUT_CFG_D2F_OUT1_CFG_D2F02       (D2F_OUT_CFG_D2F_OUT1_CFG_CFG(2))                   /*!< select as D2F02 pulse */
#define D2F_OUT_CFG_D2F_OUT1_CFG_D2F03       (D2F_OUT_CFG_D2F_OUT1_CFG_CFG(3))                   /*!< select as D2F03 pulse */
#define D2F_OUT_CFG_D2F_OUT1_CFG_D2F04       (D2F_OUT_CFG_D2F_OUT1_CFG_CFG(4))                   /*!< select as D2F04 pulse */
#define D2F_OUT_CFG_D2F_OUT1_CFG_D2F05       (D2F_OUT_CFG_D2F_OUT1_CFG_CFG(5))                   /*!< select as D2F05 pulse */

/* D2F_OUT_CFG_D2F_OUT0_CFG */
#define D2F_OUT_CFG_D2F_OUT0_CFG_CFG(regval)  (D2F_OUT_CFG_D2F_OUT0_CFG & ((uint32_t)(regval) << 0))
#define D2F_OUT_CFG_D2F_OUT0_CFG_D2F00       (D2F_OUT_CFG_D2F_OUT0_CFG_CFG(0))                   /*!< select as D2F00 pulse */
#define D2F_OUT_CFG_D2F_OUT0_CFG_D2F01       (D2F_OUT_CFG_D2F_OUT0_CFG_CFG(1))                   /*!< select as D2F01 pulse */
#define D2F_OUT_CFG_D2F_OUT0_CFG_D2F02       (D2F_OUT_CFG_D2F_OUT0_CFG_CFG(2))                   /*!< select as D2F02 pulse */
#define D2F_OUT_CFG_D2F_OUT0_CFG_D2F03       (D2F_OUT_CFG_D2F_OUT0_CFG_CFG(3))                   /*!< select as D2F03 pulse */
#define D2F_OUT_CFG_D2F_OUT0_CFG_D2F04       (D2F_OUT_CFG_D2F_OUT0_CFG_CFG(4))                   /*!< select as D2F04 pulse */
#define D2F_OUT_CFG_D2F_OUT0_CFG_D2F05       (D2F_OUT_CFG_D2F_OUT0_CFG_CFG(5))                   /*!< select as D2F05 pulse */
#endif

#endif /* RN821X_RN721X_SOC_D2F_H */
/* r1974 */
