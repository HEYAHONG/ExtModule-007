/**
 * @file    rn821x_rn721x_soc_rtc.h
 * @brief   RTC definitions for RN821X_RN721X_SOC
 * @version v1.1.6
 */
#ifndef RN821X_RN721X_SOC_RTC_H
#define RN821X_RN721X_SOC_RTC_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* RTC_CTRL */
#define RTC_CTRL_FOUT                        (BITS(0,2))                                         /*!< output frequency selections bits */
#define RTC_CTRL_TCP                         (BITS(3,5))                                         /*!< temperature compensation period bits */
#define RTC_CTRL_TSE                         (BITS(6,7))                                         /*!< temperature sensor enable configuration bits */
#define RTC_CTRL_WRTC                        (BIT(8))                                            /*!< RTC register write enable/disable bit */
#define RTC_CTRL_WR_BUSY                     (BIT(9))                                            /*!< RTC register writing busy flag (RTC register only can be changed or set when Wr_busy is 0) */
#define RTC_CTRL_CAL_BUSY                    (BIT(10))                                           /*!< RTC calibration busy flag */

/* RTC_SC */
#define RTC_SC_SC                            (BITS(0,6))                                         /*!< seconds bits (BCD format, SC[6:4] standing for 10 seconds,SC[3:0] standing seconds) */

/* RTC_MN */
#define RTC_MN_MN                            (BITS(0,6))                                         /*!< minutes bits (BCD format, MN[6:4] standing for 10 minutes,MN[3:0] standing for minutes) */

/* RTC_HR */
#define RTC_HR_HR                            (BITS(0,5))                                         /*!< hours bits (BCD format, HR[5:4] standing for 10 hours,HR[3:0] standing for hours) */

/* RTC_DT */
#define RTC_DT_DT                            (BITS(0,5))                                         /*!< date bits (BCD format, DT[5:4] standing for 10 date,DT[3:0] standing for date) */

/* RTC_MO */
#define RTC_MO_MO                            (BITS(0,4))                                         /*!< month bits (BCD format, MO[5] standing for 10 month,MO[3:0] standing for month) */

/* RTC_YR */
#define RTC_YR_YR                            (BITS(0,7))                                         /*!< year bits (BCD format, YR[7:4] standing for 10 year,YR[3:0] standing for year) */

/* RTC_DW */
#define RTC_DW_DW                            (BITS(0,2))                                         /*!< day of the week bits */

/* RTC_CNT1 */
#define RTC_CNT1_CNT                         (BITS(0,7))                                         /*!< RTC counter1 perset value bits(set CNT1 flag every (CNT+1) seconds) */
#define RTC_CNT1_PD                          (BIT(8))                                            /*!< RTC CNT1 ON/OFF control bit */

/* RTC_CNT2 */
#define RTC_CNT2_CNT                         (BITS(0,7))                                         /*!< RTC counter2 perset value bits(set counter2 flag every (CNT+1)/256 seconds) */
#define RTC_CNT2_PD                          (BIT(8))                                            /*!< RTC CNT2 ON/OFF control bit */

/* RTC_SCA */
#define RTC_SCA_SCA                          (BITS(0,6))                                         /*!< alarm seconds bits (BCD format,SCA[6:4] standing for 10 seconds,SCA[3:0] standing for seconds) */

/* RTC_MNA */
#define RTC_MNA_MNA                          (BITS(0,6))                                         /*!< alarm minitues bits (BCD format,MNA[6:4] standing for 10 minitues,MNA[3:0] standing for minitues) */

/* RTC_HRA */
#define RTC_HRA_HRA                          (BITS(0,5))                                         /*!< alarm hours bits (BCD format,MNA[5:4] standing for 10 hours,MNA[3:0] standing for hours) */

/* RTC_IE */
#define RTC_IE_ALMIE                         (BIT(0))                                            /*!< alarm interrupt enable bit */
#define RTC_IE_RTCCNT1IE                     (BIT(1))                                            /*!< counter1 interrupt enable bit */
#define RTC_IE_RTCCNT2IE                     (BIT(2))                                            /*!< counter2 interrupt enable bit */
#define RTC_IE_SCIE                          (BIT(3))                                            /*!< sencond interrupt enable bit */
#define RTC_IE_MNIE                          (BIT(4))                                            /*!< minute interrupt enable bit */
#define RTC_IE_HRIE                          (BIT(5))                                            /*!< hour interrupt enable bit */
#define RTC_IE_DTIE                          (BIT(6))                                            /*!< date interrupt enable bit */
#define RTC_IE_MOIE                          (BIT(7))                                            /*!< month interrupt enable bit */
#define RTC_IE_IECLKEN                       (BIT(8))                                            /*!< interrupt clock enable bit.enabled when any bit of RTC_IE[8:0] is high */
#define RTC_IE_RTC_1S_SEL                    (BIT(9))                                            /*!< RTC_1S clock source selection bit */

/* RTC_IF */
#define RTC_IF_ALMIF                         (BIT(0))                                            /*!< alarm event interrupt flag */
#define RTC_IF_RTCCNT1IF                     (BIT(1))                                            /*!< counter1 event interrupt flag */
#define RTC_IF_RTCCNT2IF                     (BIT(2))                                            /*!< counter2 event interrupt flag */
#define RTC_IF_SCIF                          (BIT(3))                                            /*!< sencond event interrupt flag */
#define RTC_IF_MNIF                          (BIT(4))                                            /*!< minute event interrupt flag */
#define RTC_IF_HRIF                          (BIT(5))                                            /*!< hour event interrupt flag */
#define RTC_IF_DTIF                          (BIT(6))                                            /*!< date event interrupt flag */
#define RTC_IF_MOIF                          (BIT(7))                                            /*!< month event interrupt flag */

/* RTC_TEMP */
#define RTC_TEMP_TEMP                        (BITS(0,9))                                         /*!< current chip temperature bits(TEMP[9] for sign, TEMP[8:2] for integer part,TEMP[1:0] for decimal part) */

/* RTC_PS */
#define RTC_PS_PS                            (BITS(0,7))                                         /*!< password config bits */

/* RTC_MODE */
#define RTC_MODE_MODE                        (BIT(0))                                            /*!< compensation mode config bits */

/* RTC_DOTA0 */
#define RTC_DOTA0_DOTA0                      (BITS(0,12))                                        /*!< initial freq deviation bits */

/* RTC_ALPHAL */
#define RTC_ALPHAL_ALPHAL                    (BITS(0,10))                                        /*!< RTC low temperature coefficient ALPHA config  bits */

/* RTC_ALPHAH */
#define RTC_ALPHAH_ALPHAH                    (BITS(0,10))                                        /*!< RTC high temperature coefficient ALPHA config  bits */

/* RTC_XT0 */
#define RTC_XT0_XT0                          (BITS(0,6))                                         /*!< RTC temperature curve vertex temperature bits */

/* RTC_TADJ */
#define RTC_TADJ_TADJ                        (BITS(0,10))                                        /*!< RTC prodution single point correctionbits */

/* RTC_ZT */
#define RTC_ZT_ZT                            (BITS(0,14))                                        /*!< coefficient config register ZT bits */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* RTC_DOTAT */
#define RTC_DOTAT_DOTAT                      (BITS(0,15))                                        /*!< total compensation bits */

/* RTC_FPTR */
#define RTC_FPTR_FPTR                        (BITS(0,15))                                        /*!< PLL compensation bits */

/* RTC_FDTR1S */
#define RTC_FDTR1S_FDTR1S                    (BITS(0,5))                                         /*!< RTC compensation bits */

/* RTC_FDTR30S */
#define RTC_FDTR30S_FDTR30S                  (BITS(0,6))                                         /*!< RTC compensation bits */

/* RTC_FDTR120S */
#define RTC_FDTR120S_FDTR120S                (BITS(0,8))                                         /*!< RTC compensation bits */
#else
/* RTC_DOTAT */
#define RTC_DOTAT_DOTAT                      (BITS(0,31))                                        /*!< total compensation bits */

/* RTC_FPTR */
#define RTC_FPTR_FPTR                        (BITS(0,31))                                        /*!< PLL compensation bits */

/* RTC_FDTR1S */
#define RTC_FDTR1S_FDTR1S                    (BITS(0,31))                                        /*!< RTC compensation bits */

/* RTC_FDTR30S */
#define RTC_FDTR30S_FDTR30S                  (BITS(0,31))                                        /*!< RTC compensation bits */

/* RTC_FDTR120S */
#define RTC_FDTR120S_FDTR120S                (BITS(0,31))                                        /*!< RTC compensation bits */

#endif

#if !defined(RN821x_RN721x_SOC_V3) &&  !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* RTC_TEMPOS */
#define RTC_TEMPOS_TEMPOS                    (BITS(0,5))                                         /*!< nomal mode temperature offset bits */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* RTC_CALPS */
#define RTC_CALPS_CALPS                      (BITS(0,7))                                         /*!< Password bits for RTC secondary calibration registers */

/* RTC_CAL_T0 */
#define RTC_CAL_T0_CAL_T0                    (BITS(0,7))                                         /*!< RTC calibration register T0 bits (to calibrate RTC for 0.25ppm per bit when temprature is lower than -30 degree) */

/* RTC_CAL_T1 */
#define RTC_CAL_T1_CAL_T1                    (BITS(0,7))                                         /*!< RTC calibration register T1 bits (to calibrate RTC for 0.25ppm per bit when temprature is between -30 and -20 degree) */

/* RTC_CAL_T2 */
#define RTC_CAL_T2_CAL_T2                    (BITS(0,7))                                         /*!< RTC calibration register T2 bits (to calibrate RTC for 0.25ppm per bit when temprature is between -20 and -10 degree) */

/* RTC_CAL_T3 */
#define RTC_CAL_T3_CAL_T3                    (BITS(0,7))                                         /*!< RTC calibration register T3 bits (to calibrate RTC for 0.25ppm per bit when temprature is between -10 and 0 degree) */

/* RTC_CAL_T4 */
#define RTC_CAL_T4_CAL_T4                    (BITS(0,7))                                         /*!< RTC calibration register T4 bits (to calibrate RTC for 0.25ppm per bit when temprature is between 0 and 10 degree) */

/* RTC_CAL_T5 */
#define RTC_CAL_T5_CAL_T5                    (BITS(0,7))                                         /*!< RTC calibration register T5 bits (to calibrate RTC for 0.25ppm per bit when temprature is between 35 and 45 degree) */

/* RTC_CAL_T6 */
#define RTC_CAL_T6_CAL_T6                    (BITS(0,7))                                         /*!< RTC calibration register T6 bits (to calibrate RTC for 0.25ppm per bit when temprature is between 45 and 55 degree) */

/* RTC_CAL_T7 */
#define RTC_CAL_T7_CAL_T7                    (BITS(0,7))                                         /*!< RTC calibration register T7 bits (to calibrate RTC for 0.25ppm per bit when temprature is between 55 and 65 degree) */

/* RTC_CAL_T8 */
#define RTC_CAL_T8_CAL_T8                    (BITS(0,7))                                         /*!< RTC calibration register T8 bits (to calibrate RTC for 0.25ppm per bit when temprature is between 65 and 75 degree) */

/* RTC_CAL_T9 */
#define RTC_CAL_T9_CAL_T9                    (BITS(0,7))                                         /*!< RTC calibration register T9 bits (to calibrate RTC for 0.25ppm per bit when temprature is higher than 75 degree) */

/* RTC_TEMP2 */
#define RTC_TEMP2_TEMP2                      (BITS(0,11))                                        /*!< current chip temperature bits(TEMP[11] for sign, TEMP[10:4] for integer part,TEMP[3:0] for decimal part) */

/* RTC_MODE1 */
#define RTC_MODE1_MODE1                      (BITS(0,15))                                        /*!< temperature compensation mode seletion bits */

/* RTC_XT1 */
#define RTC_XT1_XT1                          (BITS(0,12))                                        /*!< RTC temperature curve vertex temperature bits */

/* RTC_ALPHA */
#define RTC_ALPHA_ALPHA                      (BITS(0,15))                                        /*!< temperature coefficient ALPHA config bits */

/* RTC_BETA */
#define RTC_BETA_BETA                        (BITS(0,14))                                        /*!< temperature coefficient BETA config bits */

/* RTC_GAMMA */
#define RTC_GAMMA_GAMMA                      (BITS(0,15))                                        /*!< temperature coefficient GAMMA config bits */

/* RTC_ZETA */
#define RTC_ZETA_ZETA                        (BITS(0,15))                                        /*!< temperature coefficient ZETA config bits */

/* RTC_TPS_START */
#define RTC_TPS_START_TPS_START              (BIT(0))                                            /*!< RTC temperature measure start bit */

/* RTC_TEMP_CAL */
#define RTC_TEMP_CAL_TEMP_CAL                (BITS(0,11))                                        /*!< RTC temperature register No.3 bits */

/* RTC_TEMPOS2 */
#define RTC_TEMPOS2_TEMPOS2                  (BITS(0,5))                                         /*!< low power mode temperature offset bits */
#endif

/* constants definitions */
/* RTC_CTRL_FOUT */
#define RTC_CTRL_FOUT_CFG(regval)  (RTC_CTRL_FOUT & ((uint32_t)(regval) << 0))
#define RTC_CTRL_FOUT_NUL                    (RTC_CTRL_FOUT_CFG(0))                              /*!< output forbidden */
#define RTC_CTRL_FOUT_1HZ                    (RTC_CTRL_FOUT_CFG(1))                              /*!< output PLL_1Hz when PLL_MODE=1,output LOSC_1Hz when PLL_MODE=0 */
#define RTC_CTRL_FOUT_1_30HZ                 (RTC_CTRL_FOUT_CFG(2))                              /*!< select output frequency of 1/30Hz */
#define RTC_CTRL_FOUT_32KHZ                  (RTC_CTRL_FOUT_CFG(3))                              /*!< select output frequency of 32768Hz */
#define RTC_CTRL_FOUT_16HZ                   (RTC_CTRL_FOUT_CFG(4))                              /*!< select output frequency of 16Hz */
#define RTC_CTRL_FOUT_8HZ                    (RTC_CTRL_FOUT_CFG(5))                              /*!< select output frequency of 8Hz */
#define RTC_CTRL_FOUT_4HZ                    (RTC_CTRL_FOUT_CFG(6))                              /*!< select output frequency of 4Hz */

/* RTC_CTRL_TCP */
#define RTC_CTRL_TCP_CFG(regval)  (RTC_CTRL_TCP & ((uint32_t)(regval) << 3))
#define RTC_CTRL_TCP_2S                      (RTC_CTRL_TCP_CFG(0))                               /*!< select temperature compensation period as 2 second */
#define RTC_CTRL_TCP_10S                     (RTC_CTRL_TCP_CFG(1))                               /*!< select temperature compensation period as 10 second */
#define RTC_CTRL_TCP_20S                     (RTC_CTRL_TCP_CFG(2))                               /*!< select temperature compensation period as 20 second */
#define RTC_CTRL_TCP_30S                     (RTC_CTRL_TCP_CFG(3))                               /*!< select temperature compensation period as 30 second */
#define RTC_CTRL_TCP_1MIN                    (RTC_CTRL_TCP_CFG(4))                               /*!< select temperature compensation period as 1 minute */
#define RTC_CTRL_TCP_2MIN                    (RTC_CTRL_TCP_CFG(5))                               /*!< select temperature compensation period as 2 minute */
#define RTC_CTRL_TCP_5MIN                    (RTC_CTRL_TCP_CFG(6))                               /*!< select temperature compensation period as 5 minute */
#define RTC_CTRL_TCP_10MIN                   (RTC_CTRL_TCP_CFG(7))                               /*!< select temperature compensation period as 10 minute */

/* RTC_CTRL_TSE */
#define RTC_CTRL_TSE_CFG(regval)  (RTC_CTRL_TSE & ((uint32_t)(regval) << 6))
#define RTC_CTRL_TSE_DIS                     (RTC_CTRL_TSE_CFG(0))                               /*!< disable automatic temperature compensation */
#define RTC_CTRL_TSE_AUTOEN                  (RTC_CTRL_TSE_CFG(1))                               /*!< enable automatic cyclic temperature compensation */
#define RTC_CTRL_TSE_USER0EN                 (RTC_CTRL_TSE_CFG(2))                               /*!< enable user mode 0, automatic temperature compensation triggered by setting temperature(temperature set by user) */
#define RTC_CTRL_TSE_USER1EN                 (RTC_CTRL_TSE_CFG(3))                               /*!< enable user mode 1, automatic temperature compensation triggered by setting temperature(temperature unchangeable) */

/* RTC_CTRL_WRTC */
#define RTC_CTRL_WRTC_DIS                    ((uint32_t)0x00000000U)                             /*!< RTC register set as read_only */
#define RTC_CTRL_WRTC_EN                     (RTC_CTRL_WRTC)                                     /*!< RTC register set as writable */

/* RTC_CNT1_PD */
#define RTC_CNT1_PD_ON                       ((uint32_t)0x00000000U)                             /*!< counter1 on (from perpetual calendar second interrupt) */
#define RTC_CNT1_PD_OFF                      (RTC_CNT1_PD)                                       /*!< counter1 off, reset the counter value and restart */

/* RTC_CNT2_PD */
#define RTC_CNT2_PD_ON                       ((uint32_t)0x00000000U)                             /*!< counter2 on(from internal 1/256 s interrupt) */
#define RTC_CNT2_PD_OFF                      (RTC_CNT2_PD)                                       /*!< counter2 off, reset the counter value */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* RTC_CALPS_CALPS */
#define RTC_CALPS_CALPS_ENABLE               ((uint32_t)0x000000A8U)                             /*!< enable write of RTC secondary calibration registers */
#define RTC_CALPS_CALPS_DISABLE              ((uint32_t)0x00000000U)                             /*!< RTC secondary calibration registers write disable */
#endif

#endif /* RN821X_RN721X_SOC_RTC_H */
/* r2525 */
