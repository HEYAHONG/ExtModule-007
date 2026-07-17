/**
 * @file    rn821x_rn721x_soc_madc.h
 * @brief   MADC definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_MADC_H
#define RN821X_RN721X_SOC_MADC_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* MADC_AD_CTRL */
#define MADC_AD_CTRL_SAR_CH                  (BITS(0,2))                                         /*!< SAR ADC channel selection bits(part1) */
#define MADC_AD_CTRL_SAR_PGA                 (BITS(3,4))                                         /*!< SAR ADC PGA selection bits */
#define MADC_AD_CTRL_SAR_IE                  (BIT(5))                                            /*!< SAR ADC interrupt enable bit */
#if defined(RN821x_RN721x_SOC_B)
#define MADC_AD_CTRL_SARDMA_IE               (BIT(6))                                            /*!< SAR DMA enable/disable bit */
#elif !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C)
#define MADC_AD_CTRL_SAR_CH3                 (BIT(6))                                            /*!< SAR ADC channel selection bits(part2) */
#endif
#define MADC_AD_CTRL_SAR_WAIT                (BITS(7,11))                                        /*!< set SAR ADC duration config bits((SAR_WAIT+1)*30.5us) between enable and sample */
#define MADC_AD_CTRL_REF_WAIT                (BITS(12,16))                                       /*!< set voltage reference duration config bits((REF_WAIT+1)*30.5us) between REF enable and ADC enable */

/* MADC_AD_START */
#define MADC_AD_START_AD_START               (BIT(0))                                            /*!< SAR ADC start control bit, =1 start sar-measure once */

/* MADC_AD_STAT */
#define MADC_AD_STAT_DREADY                  (BIT(0))                                            /*!< SAR ADC data ready/pending flag */
#define MADC_AD_STAT_TPS_BUSY                (BIT(1))                                            /*!< automatic temperature measurement busy flag */

/* MADC_AD_DATA */
#define MADC_AD_DATA_AD_DATA                 (BITS(0,9))                                         /*!< SAR ADC result data bits */

/* MADC_LVD_CTRL */
#define MADC_LVD_CTRL_LVDS                   (BITS(0,3))                                         /*!< LVD threshold voltage set bits */
#define MADC_LVD_CTRL_LVDIE                  (BIT(5))                                            /*!< LVD interrupt enable bit */
#define MADC_LVD_CTRL_CMP1IE                 (BIT(6))                                            /*!< comparator No.1 interrupt enable bit */
#define MADC_LVD_CTRL_CMP2IE                 (BIT(7))                                            /*!< comparator No.2 interrupt enable bit */
#define MADC_LVD_CTRL_SWHMIE                 (BIT(8))                                            /*!< change to main power interrupt enable bit */
#define MADC_LVD_CTRL_SWHBIE                 (BIT(9))                                            /*!< change to battery interrupt enable bit */

/* MADC_LVD_STAT */
#define MADC_LVD_STAT_LVDIF                  (BIT(0))                                            /*!< LVD status flag */
#define MADC_LVD_STAT_CMP1IF                 (BIT(1))                                            /*!< comparator NO.1 status flag */
#define MADC_LVD_STAT_CMP2IF                 (BIT(2))                                            /*!< comparator No.2 status flag */
#define MADC_LVD_STAT_LVDIIF                 (BIT(4))                                            /*!< LVD interrupt flag */
#define MADC_LVD_STAT_CMP1IIF                (BIT(5))                                            /*!< comparator NO.1 interrupt flag */
#define MADC_LVD_STAT_CMP2IIF                (BIT(6))                                            /*!< comparator No.2 interrupt flag */
#define MADC_LVD_STAT_SWHMIF                 (BIT(7))                                            /*!< change to main power interrupt flag */
#define MADC_LVD_STAT_SWHBIF                 (BIT(8))                                            /*!< change to battery interrupt flag */
#define MADC_LVD_STAT_SWHF                   (BIT(9))                                            /*!< power change status bit */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* MADC_AD_CTRL1 */
#define MADC_AD_CTRL1_SAR_PGA                (BITS(0,2))                                         /*!< SAR ADC PGA config bits */
#define MADC_AD_CTRL1_SAR_PGA_SEL            (BIT(3))                                            /*!< SAR ADC PGA selection bits */
#define MADC_AD_CTRL1_SAR_SAMPLE             (BITS(4,6))                                         /*!< SAR ADC simple clock numble bits */
#define MADC_AD_CTRL1_SAR_CONVERT            (BITS(8,14))                                        /*!< SAR ADC simple to DOUT wait time config bits */

/* MADC_AD_DATA2 */
#define MADC_AD_DATA2_AD_DATA2               (BITS(0,11))                                        /*!< SAR ADC 12 bit result data bits */

/* MADC_AD_CTRL3 */
#define MADC_AD_CTRL3_AD_CTRL3               (BITS(0,14))                                        /*!< SAR ADC 12 bit result data bits */

/* MADC_AD_DATA3 */
#define MADC_AD_DATA3_AD_DATA3               (BITS(0,15))                                        /*!< SAR ADC 12 bit result data bits */
#endif

/* constants definitions */
/* MADC_AD_CTRL_SAR_PGA */
#define MADC_AD_CTRL_SAR_PGA_CFG(regval)  (MADC_AD_CTRL_SAR_PGA & ((uint32_t)(regval) << 3))
#define MADC_AD_CTRL_SAR_PGA_0P5             (MADC_AD_CTRL_SAR_PGA_CFG(0))                       /*!< select SAR ADC PGA as 0.5 */
#define MADC_AD_CTRL_SAR_PGA_1               (MADC_AD_CTRL_SAR_PGA_CFG(1))                       /*!< select SAR ADC PGA as 1 */
#define MADC_AD_CTRL_SAR_PGA_1P5             (MADC_AD_CTRL_SAR_PGA_CFG(2))                       /*!< select SAR ADC PGA as 1.5 */
#define MADC_AD_CTRL_SAR_PGA_2               (MADC_AD_CTRL_SAR_PGA_CFG(3))                       /*!< select SAR ADC PGA as 2 */

/* MADC_AD_STAT_DREADY */
#define MADC_AD_STAT_DREADY_PEND             ((uint32_t)0x00000000U)                             /*!< SAR ADC data pending flag */
#define MADC_AD_STAT_DREADY_READY            (MADC_AD_STAT_DREADY)                               /*!< SAR ADC data ready flag */

/* MADC_AD_STAT_TPS_BUSY */
#define MADC_AD_STAT_TPS_BUSY_IDLE           ((uint32_t)0x00000000U)                             /*!< no outstanding automatic temperature measurement */
#define MADC_AD_STAT_TPS_BUSY_BUSY           (MADC_AD_STAT_TPS_BUSY)                             /*!< pending automatic temperature measurement */

/* MADC_LVD_CTRL_LVDS */
#define MADC_LVD_CTRL_LVDS_CFG(regval)  (MADC_LVD_CTRL_LVDS & ((uint32_t)(regval) << 0))
#define MADC_LVD_CTRL_LVDS_2P3               (MADC_LVD_CTRL_LVDS_CFG(0))                         /*!< select 2.3 as LVD Vil, 2.4 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_2P5               (MADC_LVD_CTRL_LVDS_CFG(1))                         /*!< select 2.5 as LVD Vil, 2.6 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_2P7               (MADC_LVD_CTRL_LVDS_CFG(2))                         /*!< select 2.7 as LVD Vil, 2.8 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_2P9               (MADC_LVD_CTRL_LVDS_CFG(3))                         /*!< select 2.9 as LVD Vil, 3.0 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_3P1               (MADC_LVD_CTRL_LVDS_CFG(4))                         /*!< select 3.1 as LVD Vil, 3.2 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_3P3               (MADC_LVD_CTRL_LVDS_CFG(5))                         /*!< select 3.3 as LVD Vil, 3.4 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_3P5               (MADC_LVD_CTRL_LVDS_CFG(6))                         /*!< select 3.5 as LVD Vil, 3.6 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_3P7               (MADC_LVD_CTRL_LVDS_CFG(7))                         /*!< select 3.7 as LVD Vil, 3.8 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_3P9               (MADC_LVD_CTRL_LVDS_CFG(8))                         /*!< select 3.9 as LVD Vil, 4.0 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_4P0               (MADC_LVD_CTRL_LVDS_CFG(9))                         /*!< select 4.0 as LVD Vil, 4.1 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_4P2               (MADC_LVD_CTRL_LVDS_CFG(10))                        /*!< select 4.2 as LVD Vil, 4.3 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_4P4               (MADC_LVD_CTRL_LVDS_CFG(11))                        /*!< select 4.4 as LVD Vil, 4.5 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_4P6               (MADC_LVD_CTRL_LVDS_CFG(12))                        /*!< select 4.6 as LVD Vil, 4.7 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_4P7               (MADC_LVD_CTRL_LVDS_CFG(13))                        /*!< select 4.7 as LVD Vil, 4.8 as LVD Vih */
#define MADC_LVD_CTRL_LVDS_LVDIN             (MADC_LVD_CTRL_LVDS_CFG(14))                        /*!< select 1.25 as LVD Vil, 1.45 as LVD Vih ,and compare with voltage found on LVDIN pin */

/* MADC_LVD_STAT_LVDIF */
#define MADC_LVD_STAT_LVDIF_L                ((uint32_t)0x00000000U)                             /*!< status flag, lower than threshold */
#define MADC_LVD_STAT_LVDIF_H                (MADC_LVD_STAT_LVDIF)                               /*!< status flag, higher than threshold */

/* MADC_LVD_STAT_CMP1IF */
#define MADC_LVD_STAT_CMP1IF_L               ((uint32_t)0x00000000U)                             /*!< status flag, lower than threshold */
#define MADC_LVD_STAT_CMP1IF_H               (MADC_LVD_STAT_CMP1IF)                              /*!< status flag, higher than threshold */

/* MADC_LVD_STAT_CMP2IF */
#define MADC_LVD_STAT_CMP2IF_L               ((uint32_t)0x00000000U)                             /*!< status flag, lower than threshold */
#define MADC_LVD_STAT_CMP2IF_H               (MADC_LVD_STAT_CMP2IF)                              /*!< status flag, higher than threshold */

/* MADC_LVD_STAT_SWHF */
#define MADC_LVD_STAT_SWHF_M                 ((uint32_t)0x00000000U)                             /*!< power selected as main power mode */
#define MADC_LVD_STAT_SWHF_B                 (MADC_LVD_STAT_SWHF)                                /*!< power selected as battery mode */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* MADC_AD_CTRL1_SAR_PGA */
#define MADC_AD_CTRL1_SAR_PGA_CFG(regval)  (MADC_AD_CTRL1_SAR_PGA & ((uint32_t)(regval) << 0))
#define MADC_AD_CTRL1_SAR_PGA_0P5            (MADC_AD_CTRL1_SAR_PGA_CFG(0))                      /*!< PGA select as 0.5 */
#define MADC_AD_CTRL1_SAR_PGA_1P0            (MADC_AD_CTRL1_SAR_PGA_CFG(1))                      /*!< PGA select as 1.0 */
#define MADC_AD_CTRL1_SAR_PGA_1P5            (MADC_AD_CTRL1_SAR_PGA_CFG(2))                      /*!< PGA select as 1.5 */
#define MADC_AD_CTRL1_SAR_PGA_2P0            (MADC_AD_CTRL1_SAR_PGA_CFG(3))                      /*!< PGA select as 2.0 */
#define MADC_AD_CTRL1_SAR_PGA_0P25           (MADC_AD_CTRL1_SAR_PGA_CFG(4))                      /*!< PGA select as 0.25 */

/* MADC_AD_CTRL1_SAR_PGA_SEL */
#define MADC_AD_CTRL1_SAR_PGA_SEL_CTL_PGA    ((uint32_t)0x00000000U)                             /*!< select AD_CTRL[4:3] PGA as PGA */
#define MADC_AD_CTRL1_SAR_PGA_SEL_CTL1_PGA   (MADC_AD_CTRL1_SAR_PGA_SEL)                         /*!< select AD_CTRL1[2:0] PGA as PGA */

/* MADC_AD_CTRL1_SAR_SAMPLE */
#define MADC_AD_CTRL1_SAR_SAMPLE_CFG(regval)  (MADC_AD_CTRL1_SAR_SAMPLE & ((uint32_t)(regval) << 4))
#define MADC_AD_CTRL1_SAR_SAMPLE_1CLK        (MADC_AD_CTRL1_SAR_SAMPLE_CFG(0))                   /*!< select as 1 clock */
#define MADC_AD_CTRL1_SAR_SAMPLE_2CLK        (MADC_AD_CTRL1_SAR_SAMPLE_CFG(1))                   /*!< select as 2 clock */
#define MADC_AD_CTRL1_SAR_SAMPLE_3CLK        (MADC_AD_CTRL1_SAR_SAMPLE_CFG(2))                   /*!< select as 3 clock */
#define MADC_AD_CTRL1_SAR_SAMPLE_4CLK        (MADC_AD_CTRL1_SAR_SAMPLE_CFG(3))                   /*!< select as 4 clock */
#define MADC_AD_CTRL1_SAR_SAMPLE_5CLK        (MADC_AD_CTRL1_SAR_SAMPLE_CFG(4))                   /*!< select as 5 clock */
#define MADC_AD_CTRL1_SAR_SAMPLE_6CLK        (MADC_AD_CTRL1_SAR_SAMPLE_CFG(5))                   /*!< select as 6 clock */
#define MADC_AD_CTRL1_SAR_SAMPLE_7CLK        (MADC_AD_CTRL1_SAR_SAMPLE_CFG(6))                   /*!< select as 7 clock */
#define MADC_AD_CTRL1_SAR_SAMPLE_8CLK        (MADC_AD_CTRL1_SAR_SAMPLE_CFG(7))                   /*!< select as 8 clock */
#endif

#endif /* RN821X_RN721X_SOC_MADC_H */
/* r1190 */
