/**
 * @file    rn821x_rn721x_soc_tc.h
 * @brief   TC definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_TC_H
#define RN821X_RN721X_SOC_TC_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* TC_CNT */
#define TC_CNT_CNT                           (BITS(0,31))                                        /*!< current Timer counter value bits */

/* TC_PS */
#define TC_PS_PS                             (BITS(0,15))                                        /*!< prescaler value bits of the counter clock */

/* TC_DN */
#define TC_DN_DN                             (BITS(0,31))                                        /*!< target counting value bits */

/* TC_CCD0 */
#define TC_CCD0_CCD0                         (BITS(0,31))                                        /*!< capture(compare) channel No.0 data bits */

/* TC_CCD1 */
#define TC_CCD1_CCD1                         (BITS(0,31))                                        /*!< capture(compare) channel No.1 data bits */

/* TC_CCFG */
#define TC_CCFG_CM                           (BIT(0))                                            /*!< clock mode selection bit */
#define TC_CCFG_FLTEN                        (BIT(1))                                            /*!< external clock source filter enable bit */
#define TC_CCFG_CS                           (BITS(8,12))                                        /*!< external clock source selection bits */
#define TC_CCFG_ECLKMODE                     (BITS(13,14))                                       /*!< external clock mode selection bits */
#define TC_CCFG_FLTOPT                       (BITS(16,23))                                       /*!< external clock source filter clock cycles set bits */

/* TC_CTRL */
#define TC_CTRL_START                        (BIT(0))                                            /*!< timer start bit */
#define TC_CTRL_SLVEN                        (BIT(2))                                            /*!< slave mode enable */
#define TC_CTRL_SLVFLTEN                     (BIT(3))                                            /*!< slave mode input filter enable */
#define TC_CTRL_OPS                          (BIT(4))                                            /*!< one pulse mode selection bit */
#define TC_CTRL_SLVCHANSSEL                  (BITS(5,9))                                         /*!< slave mode input selection bits */
#define TC_CTRL_SLVTRGMODE                   (BITS(10,11))                                       /*!< slave mode polarity control selection bits */
#define TC_CTRL_SLVFLTOPT                    (BITS(12,19))                                       /*!< slave mode input filter parameter configuration bits */
#define TC_CTRL_SLVGATELVL                   (BIT(20))                                           /*!< slave mode gating level control bit */
#define TC_CTRL_DBGSTBDIS                    (BIT(28))                                           /*!< debugger halt standby enable/disable bit */

/* TC_CM0 */
#define TC_CM0_ENABLE                        (BIT(0))                                            /*!< channel enable bit */
#define TC_CM0_CCM                           (BIT(1))                                            /*!< capture(compare) selection bit */
#define TC_CM0_DIEN                          (BIT(2))                                            /*!< compare dead zone insertion enable bit (only for PWM1/PWM2) */
#define TC_CM0_DL                            (BITS(3,8))                                         /*!< compare dead zone length configuration bits (only for PWM1/PWM2) */
#define TC_CM0_CPOL                          (BITS(9,10))                                        /*!< capture polarity selection bits */
#define TC_CM0_FLTOPT                        (BITS(11,18))                                       /*!< capture filter parameter set bits */
#define TC_CM0_FLTEN                         (BIT(19))                                           /*!< capture filter enable bit */
#define TC_CM0_CS                            (BITS(20,24))                                       /*!< capture channel selection bits */
#define TC_CM0_OM                            (BITS(25,27))                                       /*!< compare output mode cfg bits */
#define TC_CM0_EFELVL                        (BIT(28))                                           /*!< compare valid output level set bit */
#define TC_CM0_DFTLVL                        (BIT(29))                                           /*!< compare valid default level set bit */

/* TC_CM1 */
#define TC_CM1_ENABLE                        (BIT(0))                                            /*!< channel enable bit */
#define TC_CM1_CCM                           (BIT(1))                                            /*!< capture(compare) selection bit */
#define TC_CM1_DIEN                          (BIT(2))                                            /*!< compare dead zone insertion enable bit (only for PWM1/PWM2) */
#define TC_CM1_DL                            (BITS(3,8))                                         /*!< compare dead zone length configuration bits (only for PWM1/PWM2) */
#define TC_CM1_CPOL                          (BITS(9,10))                                        /*!< capture polarity selection bits */
#define TC_CM1_FLTOPT                        (BITS(11,18))                                       /*!< capture filter parameter set bits */
#define TC_CM1_FLTEN                         (BIT(19))                                           /*!< capture filter enable bit */
#define TC_CM1_CS                            (BITS(20,24))                                       /*!< capture channel selection bits */
#define TC_CM1_OM                            (BITS(25,27))                                       /*!< compare output mode cfg bits */
#define TC_CM1_EFELVL                        (BIT(28))                                           /*!< compare valid output level set bit */
#define TC_CM1_DFTLVL                        (BIT(29))                                           /*!< compare valid default level set bit */

/* TC_IE */
#define TC_IE_OVIE                           (BIT(0))                                            /*!< overflow interrupt enable */
#define TC_IE_CC0IE                          (BIT(1))                                            /*!< compare(caputure) channel No.0 interrupt enable */
#define TC_IE_CC1IE                          (BIT(2))                                            /*!< compare(caputure) channel No.1 interrupt enable */
#define TC_IE_SLVIE                          (BIT(3))                                            /*!< slave interrupt enable */

/* TC_STA */
#define TC_STA_OVF                           (BIT(0))                                            /*!< overflow interrupt flag */
#define TC_STA_CC0F                          (BIT(1))                                            /*!< compare(capture) channel No.0 flag */
#define TC_STA_CC1F                          (BIT(2))                                            /*!< compare(capture) channel No.1 flag */
#define TC_STA_SLVF                          (BIT(3))                                            /*!< slave event flag */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* TC_PWM_CFG */
#define TC_PWM_CFG_DONEIE                    (BIT(0))                                            /*!< PWM output done interrupt enable bit */
#define TC_PWM_CFG_DATERRIE                  (BIT(1))                                            /*!< data error interrupt enable bit */
#define TC_PWM_CFG_BUFVLDIE                  (BIT(2))                                            /*!< PWM buffer empty interrupt enable bit (only soft mode available) */
#define TC_PWM_CFG_CYCDONEIE                 (BIT(3))                                            /*!< output cycle done interrupt enable bit */
#define TC_PWM_CFG_CMS                       (BIT(4))                                            /*!< PWM control mode selection bit */
#define TC_PWM_CFG_CSS                       (BIT(5))                                            /*!< PWM complete signal selection bit */
#define TC_PWM_CFG_ORV                       (BIT(6))                                            /*!< PWM output remain period mode selection bit */
#define TC_PWM_CFG_WL                        (BITS(7,16))                                        /*!< PWM wave length config bits (available when ORV=0) */

/* TC_PWM_CTRL */
#define TC_PWM_CTRL_EN                       (BIT(0))                                            /*!< PWM enable bit */

/* TC_PWM_STA */
#define TC_PWM_STA_BUSY                      (BIT(0))                                            /*!< PWM output busy flag */
#define TC_PWM_STA_DONE                      (BIT(1))                                            /*!< PWM output done interrupt flag */
#define TC_PWM_STA_DATERR                    (BIT(2))                                            /*!< PWM data error interrupt flag */
#define TC_PWM_STA_BUFVLD                    (BIT(3))                                            /*!< PWM buffer empty interrupt flag */
#define TC_PWM_STA_CYCDONE                   (BIT(4))                                            /*!< PWM output cycle done interrupt flag */

/* TC_PWM_CNT */
#define TC_PWM_CNT_N_PWM                     (BITS(0,15))                                        /*!< PWM cycle Timer counter value bits */

/* TC_PWM_DMA_BADR */
#define TC_PWM_DMA_BADR_BADR                 (BITS(0,14))                                        /*!< DMA begin addr configuration bits */

/* TC_PWM_DMA_LEN */
#define TC_PWM_DMA_LEN_LEN                   (BITS(0,14))                                        /*!< DMA length configuration bits */

/* TC_PWM_DMA_ADR */
#define TC_PWM_DMA_ADR_ADR                   (BITS(0,14))                                        /*!< current DMA addr bits */
#endif

/* constants definitions */
/* TC_CCFG_CM */
#define TC_CCFG_CM_INT                       ((uint32_t)0x00000000U)                             /*!< using on-chip system clock as input counting clock */
#define TC_CCFG_CM_EXT                       (TC_CCFG_CM)                                        /*!< using external clock(to the timer) as input counting clock(refer to bitfield CS of register TC_CCFG for clock selection) */

/* TC_CCFG_CS */
#define TC_CCFG_CS_CFG(regval)  (TC_CCFG_CS & ((uint32_t)(regval) << 8))
#define TC_CCFG_CS_UART0_RXD                 (TC_CCFG_CS_CFG(0))                                 /*!< select UART0 RXD */
#define TC_CCFG_CS_UART1_RXD                 (TC_CCFG_CS_CFG(1))                                 /*!< select UART1 RXD */
#define TC_CCFG_CS_UART2_RXD                 (TC_CCFG_CS_CFG(2))                                 /*!< select UART2 RXD */
#define TC_CCFG_CS_UART3_RXD                 (TC_CCFG_CS_CFG(3))                                 /*!< select UART3 RXD */
#define TC_CCFG_CS_OTHTC_OUTN0               (TC_CCFG_CS_CFG(4))                                 /*!< select negative output of channel 0 of the other TC (TC1/TC0) */
#define TC_CCFG_CS_OTHTC_OUTP0               (TC_CCFG_CS_CFG(5))                                 /*!< select positive output of channel 0 of the other TC (TC1/TC0) */
#define TC_CCFG_CS_OTHTC_OUTN1               (TC_CCFG_CS_CFG(6))                                 /*!< select negative output of channel 1 of the other TC (TC1/TC0) */
#define TC_CCFG_CS_OTHTC_OUTP1               (TC_CCFG_CS_CFG(7))                                 /*!< select positive output of channel 1 of the other TC (TC1/TC0) */
#define TC_CCFG_CS_UART4_RXD                 (TC_CCFG_CS_CFG(8))                                 /*!< select UART4_RXD */
#define TC_CCFG_CS_UART5_RXD                 (TC_CCFG_CS_CFG(9))                                 /*!< select UART5_RXD */
#define TC_CCFG_CS_78160_P41                 (TC_CCFG_CS_CFG(10))                                /*!< select iso7816 channel No.0 input(P41) */
#define TC_CCFG_CS_78161_P42                 (TC_CCFG_CS_CFG(11))                                /*!< select iso7816 channel No.1 dual-direction input(P42) */
#define TC_CCFG_CS_78161_P43                 (TC_CCFG_CS_CFG(12))                                /*!< select iso7816 channel No.1 single-direction input(P43) */
#define TC_CCFG_CS_SF_OUT                    (TC_CCFG_CS_CFG(16))                                /*!< select apparent power pulse output */
#define TC_CCFG_CS_QF_OUT                    (TC_CCFG_CS_CFG(17))                                /*!< select reactive power pulse output */
#define TC_CCFG_CS_PF_OUT                    (TC_CCFG_CS_CFG(18))                                /*!< select active power pulse output */
#define TC_CCFG_CS_RTC_OUT                   (TC_CCFG_CS_CFG(19))                                /*!< select rtc output */
#define TC_CCFG_CS_P10                       (TC_CCFG_CS_CFG(20))                                /*!< select P1[0] */
#define TC_CCFG_CS_P11                       (TC_CCFG_CS_CFG(21))                                /*!< select P1[1] */
#define TC_CCFG_CS_P12_P52                   (TC_CCFG_CS_CFG(22))                                /*!< select P1[2] or P5[2] */
#define TC_CCFG_CS_P13_P53                   (TC_CCFG_CS_CFG(23))                                /*!< select P1[3] or P5[3] */
#define TC_CCFG_CS_P14_P54                   (TC_CCFG_CS_CFG(24))                                /*!< select P1[4] or P5[4] */
#define TC_CCFG_CS_P15_P55                   (TC_CCFG_CS_CFG(25))                                /*!< select P1[5] or P5[5] */
#define TC_CCFG_CS_P16_P56                   (TC_CCFG_CS_CFG(26))                                /*!< select P1[6] or P5[6] */
#define TC_CCFG_CS_P17_P57                   (TC_CCFG_CS_CFG(27))                                /*!< select P1[7] or P5[7] */
#define TC_CCFG_CS_P30                       (TC_CCFG_CS_CFG(28))                                /*!< select P3[0] */
#define TC_CCFG_CS_P31                       (TC_CCFG_CS_CFG(29))                                /*!< select P3[1] */
#define TC_CCFG_CS_P33                       (TC_CCFG_CS_CFG(30))                                /*!< select P3[3] */
#define TC_CCFG_CS_P35                       (TC_CCFG_CS_CFG(31))                                /*!< select P3[5] */

/* TC_CCFG_ECLKMODE */
#define TC_CCFG_ECLKMODE_CFG(regval)  (TC_CCFG_ECLKMODE & ((uint32_t)(regval) << 13))
#define TC_CCFG_ECLKMODE_PE                  (TC_CCFG_ECLKMODE_CFG(0))                           /*!< every posedge found on input recognized as a couting event */
#define TC_CCFG_ECLKMODE_NE                  (TC_CCFG_ECLKMODE_CFG(1))                           /*!< every negedge found on input recognized as a couting event */
#define TC_CCFG_ECLKMODE_BE                  (TC_CCFG_ECLKMODE_CFG(2))                           /*!< both posedge and negedge found on input recognized as a as a couting event */

/* TC_CTRL_OPS */
#define TC_CTRL_OPS_DIS                      ((uint32_t)0x00000000U)                             /*!< one pulse mode disabled(timer continue counting when overflow) */
#define TC_CTRL_OPS_EN                       (TC_CTRL_OPS)                                       /*!< one pulse mode enabled(timer stop counting when overflow) */

/* TC_CTRL_SLVCHANSSEL */
#define TC_CTRL_SLVCHANSSEL_CFG(regval)  (TC_CTRL_SLVCHANSSEL & ((uint32_t)(regval) << 5))
#define TC_CTRL_SLVCHANSSEL_UART0_RXD        (TC_CTRL_SLVCHANSSEL_CFG(0))                        /*!< select UART0 RXD */
#define TC_CTRL_SLVCHANSSEL_UART1_RXD        (TC_CTRL_SLVCHANSSEL_CFG(1))                        /*!< select UART1 RXD */
#define TC_CTRL_SLVCHANSSEL_UART2_RXD        (TC_CTRL_SLVCHANSSEL_CFG(2))                        /*!< select UART2 RXD */
#define TC_CTRL_SLVCHANSSEL_UART3_RXD        (TC_CTRL_SLVCHANSSEL_CFG(3))                        /*!< select UART3 RXD */
#define TC_CTRL_SLVCHANSSEL_OTHTC_OUTN0      (TC_CTRL_SLVCHANSSEL_CFG(4))                        /*!< select negative output of channel 0 of the other TC (TC1/TC0) */
#define TC_CTRL_SLVCHANSSEL_OTHTC_OUTP0      (TC_CTRL_SLVCHANSSEL_CFG(5))                        /*!< select positive output of channel 0 of the other TC (TC1/TC0) */
#define TC_CTRL_SLVCHANSSEL_OTHTC_OUTN1      (TC_CTRL_SLVCHANSSEL_CFG(6))                        /*!< select negative output of channel 1 of the other TC (TC1/TC0) */
#define TC_CTRL_SLVCHANSSEL_OTHTC_OUTP1      (TC_CTRL_SLVCHANSSEL_CFG(7))                        /*!< select positive output of channel 1 of the other TC (TC1/TC0) */
#define TC_CTRL_SLVCHANSSEL_UART4_RXD        (TC_CTRL_SLVCHANSSEL_CFG(8))                        /*!< select UART4_RXD */
#define TC_CTRL_SLVCHANSSEL_UART5_RXD        (TC_CTRL_SLVCHANSSEL_CFG(9))                        /*!< select UART5_RXD */
#define TC_CTRL_SLVCHANSSEL_78160_P41        (TC_CTRL_SLVCHANSSEL_CFG(10))                       /*!< select iso7816 channel No.0 input(P41) */
#define TC_CTRL_SLVCHANSSEL_78161_P42        (TC_CTRL_SLVCHANSSEL_CFG(11))                       /*!< select iso7816 channel No.1 dual-direction input(P42) */
#define TC_CTRL_SLVCHANSSEL_78161_P43        (TC_CTRL_SLVCHANSSEL_CFG(12))                       /*!< select iso7816 channel No.1 single-direction input(P43) */
#define TC_CTRL_SLVCHANSSEL_SF_OUT           (TC_CTRL_SLVCHANSSEL_CFG(16))                       /*!< select apparent power pulse output */
#define TC_CTRL_SLVCHANSSEL_QF_OUT           (TC_CTRL_SLVCHANSSEL_CFG(17))                       /*!< select reactive power pulse output */
#define TC_CTRL_SLVCHANSSEL_PF_OUT           (TC_CTRL_SLVCHANSSEL_CFG(18))                       /*!< select active power pulse output */
#define TC_CTRL_SLVCHANSSEL_RTC_OUT          (TC_CTRL_SLVCHANSSEL_CFG(19))                       /*!< select rtc output */
#define TC_CTRL_SLVCHANSSEL_P10              (TC_CTRL_SLVCHANSSEL_CFG(20))                       /*!< select P1[0] */
#define TC_CTRL_SLVCHANSSEL_P11              (TC_CTRL_SLVCHANSSEL_CFG(21))                       /*!< select P1[1] */
#define TC_CTRL_SLVCHANSSEL_P12_P52          (TC_CTRL_SLVCHANSSEL_CFG(22))                       /*!< select P1[2] or P5[2] */
#define TC_CTRL_SLVCHANSSEL_P13_P53          (TC_CTRL_SLVCHANSSEL_CFG(23))                       /*!< select P1[3] or P5[3] */
#define TC_CTRL_SLVCHANSSEL_P14_P54          (TC_CTRL_SLVCHANSSEL_CFG(24))                       /*!< select P1[4] or P5[4] */
#define TC_CTRL_SLVCHANSSEL_P15_P55          (TC_CTRL_SLVCHANSSEL_CFG(25))                       /*!< select P1[5] or P5[5] */
#define TC_CTRL_SLVCHANSSEL_P16_P56          (TC_CTRL_SLVCHANSSEL_CFG(26))                       /*!< select P1[6] or P5[6] */
#define TC_CTRL_SLVCHANSSEL_P17_P57          (TC_CTRL_SLVCHANSSEL_CFG(27))                       /*!< select P1[7] or P5[7] */
#define TC_CTRL_SLVCHANSSEL_P30              (TC_CTRL_SLVCHANSSEL_CFG(28))                       /*!< select P3[0] */
#define TC_CTRL_SLVCHANSSEL_P31              (TC_CTRL_SLVCHANSSEL_CFG(29))                       /*!< select P3[1] */
#define TC_CTRL_SLVCHANSSEL_P33              (TC_CTRL_SLVCHANSSEL_CFG(30))                       /*!< select P3[3] */
#define TC_CTRL_SLVCHANSSEL_P35              (TC_CTRL_SLVCHANSSEL_CFG(31))                       /*!< select P3[5] */

/* TC_CTRL_SLVTRGMODE */
#define TC_CTRL_SLVTRGMODE_CFG(regval)  (TC_CTRL_SLVTRGMODE & ((uint32_t)(regval) << 10))
#define TC_CTRL_SLVTRGMODE_PE                (TC_CTRL_SLVTRGMODE_CFG(0))                         /*!< clean internal counter at posedge */
#define TC_CTRL_SLVTRGMODE_NE                (TC_CTRL_SLVTRGMODE_CFG(1))                         /*!< clean internal counter at negedge */
#define TC_CTRL_SLVTRGMODE_BE                (TC_CTRL_SLVTRGMODE_CFG(2))                         /*!< clean internal counter at both posedge and negedge */
#define TC_CTRL_SLVTRGMODE_GM                (TC_CTRL_SLVTRGMODE_CFG(3))                         /*!< level sensitive gate control */

/* TC_CTRL_SLVGATELVL */
#define TC_CTRL_SLVGATELVL_LOW               ((uint32_t)0x00000000U)                             /*!< select low level sensitive gate */
#define TC_CTRL_SLVGATELVL_HIGH              (TC_CTRL_SLVGATELVL)                                /*!< select high level sensitive gate */

/* TC_CTRL_DBGSTBDIS */
#define TC_CTRL_DBGSTBDIS_DIS                ((uint32_t)0x00000000U)                             /*!< halt counting when SoC halted by debugger */
#define TC_CTRL_DBGSTBDIS_EN                 (TC_CTRL_DBGSTBDIS)                                 /*!< keep counting when SoC halted by debugger */

/* TC_CM0_CPOL */
#define TC_CM0_CPOL_CFG(regval)  (TC_CM0_CPOL & ((uint32_t)(regval) << 9))
#define TC_CM0_CPOL_PE                       (TC_CM0_CPOL_CFG(0))                                /*!< capture on posedge */
#define TC_CM0_CPOL_NE                       (TC_CM0_CPOL_CFG(1))                                /*!< capture on negedge */
#define TC_CM0_CPOL_BE                       (TC_CM0_CPOL_CFG(2))                                /*!< capture on both posedge and negedge */

/* TC_CM0_CS */
#define TC_CM0_CS_CFG(regval)  (TC_CM0_CS & ((uint32_t)(regval) << 20))
#define TC_CM0_CS_UART0_RXD                  (TC_CM0_CS_CFG(0))                                  /*!< select UART0 RXD */
#define TC_CM0_CS_UART1_RXD                  (TC_CM0_CS_CFG(1))                                  /*!< select UART1 RXD */
#define TC_CM0_CS_UART2_RXD                  (TC_CM0_CS_CFG(2))                                  /*!< select UART2 RXD */
#define TC_CM0_CS_UART3_RXD                  (TC_CM0_CS_CFG(3))                                  /*!< select UART3 RXD */
#define TC_CM0_CS_OTHTC_OUTN0                (TC_CM0_CS_CFG(4))                                  /*!< select negative output of channel 0 of the other TC (TC1/TC0) */
#define TC_CM0_CS_OTHTC_OUTP0                (TC_CM0_CS_CFG(5))                                  /*!< select positive output of channel 0 of the other TC (TC1/TC0) */
#define TC_CM0_CS_OTHTC_OUTN1                (TC_CM0_CS_CFG(6))                                  /*!< select negative output of channel 1 of the other TC (TC1/TC0) */
#define TC_CM0_CS_OTHTC_OUTP1                (TC_CM0_CS_CFG(7))                                  /*!< select positive output of channel 1 of the other TC (TC1/TC0) */
#define TC_CM0_CS_UART4_RXD                  (TC_CM0_CS_CFG(8))                                  /*!< select UART4_RXD */
#define TC_CM0_CS_UART5_RXD                  (TC_CM0_CS_CFG(9))                                  /*!< select UART5_RXD */
#define TC_CM0_CS_78160_P41                  (TC_CM0_CS_CFG(10))                                 /*!< select iso7816 channel No.0 input(P41) */
#define TC_CM0_CS_78161_P42                  (TC_CM0_CS_CFG(11))                                 /*!< select iso7816 channel No.1 dual-direction input(P42) */
#define TC_CM0_CS_78161_P43                  (TC_CM0_CS_CFG(12))                                 /*!< select iso7816 channel No.1 single-direction input(P43) */
#define TC_CM0_CS_SF_OUT                     (TC_CM0_CS_CFG(16))                                 /*!< select apparent power pulse output */
#define TC_CM0_CS_QF_OUT                     (TC_CM0_CS_CFG(17))                                 /*!< select reactive power pulse output */
#define TC_CM0_CS_PF_OUT                     (TC_CM0_CS_CFG(18))                                 /*!< select active power pulse output */
#define TC_CM0_CS_RTC_OUT                    (TC_CM0_CS_CFG(19))                                 /*!< select rtc output */
#define TC_CM0_CS_P10                        (TC_CM0_CS_CFG(20))                                 /*!< select P1[0] */
#define TC_CM0_CS_P11                        (TC_CM0_CS_CFG(21))                                 /*!< select P1[1] */
#define TC_CM0_CS_P12_P52                    (TC_CM0_CS_CFG(22))                                 /*!< select P1[2] or P5[2] */
#define TC_CM0_CS_P13_P53                    (TC_CM0_CS_CFG(23))                                 /*!< select P1[3] or P5[3] */
#define TC_CM0_CS_P14_P54                    (TC_CM0_CS_CFG(24))                                 /*!< select P1[4] or P5[4] */
#define TC_CM0_CS_P15_P55                    (TC_CM0_CS_CFG(25))                                 /*!< select P1[5] or P5[5] */
#define TC_CM0_CS_P16_P56                    (TC_CM0_CS_CFG(26))                                 /*!< select P1[6] or P5[6] */
#define TC_CM0_CS_P17_P57                    (TC_CM0_CS_CFG(27))                                 /*!< select P1[7] or P5[7] */
#define TC_CM0_CS_P30                        (TC_CM0_CS_CFG(28))                                 /*!< select P3[0] */
#define TC_CM0_CS_P31                        (TC_CM0_CS_CFG(29))                                 /*!< select P3[1] */
#define TC_CM0_CS_P33                        (TC_CM0_CS_CFG(30))                                 /*!< select P3[3] */
#define TC_CM0_CS_P35                        (TC_CM0_CS_CFG(31))                                 /*!< select P3[5] */

/* TC_CM0_OM */
#define TC_CM0_OM_CFG(regval)  (TC_CM0_OM & ((uint32_t)(regval) << 25))
#define TC_CM0_OM_NUL                        (TC_CM0_OM_CFG(0))                                  /*!< no output generated */
#define TC_CM0_OM_VL                         (TC_CM0_OM_CFG(1))                                  /*!< set as valid level */
#define TC_CM0_OM_INVL                       (TC_CM0_OM_CFG(2))                                  /*!< set as invalid level */
#define TC_CM0_OM_TOG                        (TC_CM0_OM_CFG(3))                                  /*!< toggle output */
#define TC_CM0_OM_FVL                        (TC_CM0_OM_CFG(4))                                  /*!< force as valid level */
#define TC_CM0_OM_FINVL                      (TC_CM0_OM_CFG(5))                                  /*!< force as invalid level */
#define TC_CM0_OM_PWM1                       (TC_CM0_OM_CFG(6))                                  /*!< when tc_cnt less than tc_ccdx, set output as valid level */
#define TC_CM0_OM_PWM2                       (TC_CM0_OM_CFG(7))                                  /*!< when tc_cnt greater than tc_ccdx, set output as valid level */

/* TC_CM1_CPOL */
#define TC_CM1_CPOL_CFG(regval)  (TC_CM1_CPOL & ((uint32_t)(regval) << 9))
#define TC_CM1_CPOL_PE                       (TC_CM1_CPOL_CFG(0))                                /*!< capture on posedge */
#define TC_CM1_CPOL_NE                       (TC_CM1_CPOL_CFG(1))                                /*!< capture on negedge */
#define TC_CM1_CPOL_BE                       (TC_CM1_CPOL_CFG(2))                                /*!< capture on both posedge and negedge */

/* TC_CM1_CS */
#define TC_CM1_CS_CFG(regval)  (TC_CM1_CS & ((uint32_t)(regval) << 20))
#define TC_CM1_CS_UART0_RXD                  (TC_CM1_CS_CFG(0))                                  /*!< select UART0 RXD */
#define TC_CM1_CS_UART1_RXD                  (TC_CM1_CS_CFG(1))                                  /*!< select UART1 RXD */
#define TC_CM1_CS_UART2_RXD                  (TC_CM1_CS_CFG(2))                                  /*!< select UART2 RXD */
#define TC_CM1_CS_UART3_RXD                  (TC_CM1_CS_CFG(3))                                  /*!< select UART3 RXD */
#define TC_CM1_CS_OTHTC_OUTN0                (TC_CM1_CS_CFG(4))                                  /*!< select negative output of channel 0 of the other TC (TC1/TC0) */
#define TC_CM1_CS_OTHTC_OUTP0                (TC_CM1_CS_CFG(5))                                  /*!< select positive output of channel 0 of the other TC (TC1/TC0) */
#define TC_CM1_CS_OTHTC_OUTN1                (TC_CM1_CS_CFG(6))                                  /*!< select negative output of channel 1 of the other TC (TC1/TC0) */
#define TC_CM1_CS_OTHTC_OUTP1                (TC_CM1_CS_CFG(7))                                  /*!< select positive output of channel 1 of the other TC (TC1/TC0) */
#define TC_CM1_CS_UART4_RXD                  (TC_CM1_CS_CFG(8))                                  /*!< select UART4_RXD */
#define TC_CM1_CS_UART5_RXD                  (TC_CM1_CS_CFG(9))                                  /*!< select UART5_RXD */
#define TC_CM1_CS_78160_P41                  (TC_CM1_CS_CFG(10))                                 /*!< select iso7816 channel No.0 input(P41) */
#define TC_CM1_CS_78161_P42                  (TC_CM1_CS_CFG(11))                                 /*!< select iso7816 channel No.1 dual-direction input(P42) */
#define TC_CM1_CS_78161_P43                  (TC_CM1_CS_CFG(12))                                 /*!< select iso7816 channel No.1 single-direction input(P43) */
#define TC_CM1_CS_SF_OUT                     (TC_CM1_CS_CFG(16))                                 /*!< select apparent power pulse output */
#define TC_CM1_CS_QF_OUT                     (TC_CM1_CS_CFG(17))                                 /*!< select reactive power pulse output */
#define TC_CM1_CS_PF_OUT                     (TC_CM1_CS_CFG(18))                                 /*!< select active power pulse output */
#define TC_CM1_CS_RTC_OUT                    (TC_CM1_CS_CFG(19))                                 /*!< select rtc output */
#define TC_CM1_CS_P10                        (TC_CM1_CS_CFG(20))                                 /*!< select P1[0] */
#define TC_CM1_CS_P11                        (TC_CM1_CS_CFG(21))                                 /*!< select P1[1] */
#define TC_CM1_CS_P12_P52                    (TC_CM1_CS_CFG(22))                                 /*!< select P1[2] or P5[2] */
#define TC_CM1_CS_P13_P53                    (TC_CM1_CS_CFG(23))                                 /*!< select P1[3] or P5[3] */
#define TC_CM1_CS_P14_P54                    (TC_CM1_CS_CFG(24))                                 /*!< select P1[4] or P5[4] */
#define TC_CM1_CS_P15_P55                    (TC_CM1_CS_CFG(25))                                 /*!< select P1[5] or P5[5] */
#define TC_CM1_CS_P16_P56                    (TC_CM1_CS_CFG(26))                                 /*!< select P1[6] or P5[6] */
#define TC_CM1_CS_P17_P57                    (TC_CM1_CS_CFG(27))                                 /*!< select P1[7] or P5[7] */
#define TC_CM1_CS_P30                        (TC_CM1_CS_CFG(28))                                 /*!< select P3[0] */
#define TC_CM1_CS_P31                        (TC_CM1_CS_CFG(29))                                 /*!< select P3[1] */
#define TC_CM1_CS_P33                        (TC_CM1_CS_CFG(30))                                 /*!< select P3[3] */
#define TC_CM1_CS_P35                        (TC_CM1_CS_CFG(31))                                 /*!< select P3[5] */

/* TC_CM1_OM */
#define TC_CM1_OM_CFG(regval)  (TC_CM1_OM & ((uint32_t)(regval) << 25))
#define TC_CM1_OM_NUL                        (TC_CM1_OM_CFG(0))                                  /*!< no output generated */
#define TC_CM1_OM_VL                         (TC_CM1_OM_CFG(1))                                  /*!< set as valid level */
#define TC_CM1_OM_INVL                       (TC_CM1_OM_CFG(2))                                  /*!< set as invalid level */
#define TC_CM1_OM_TOG                        (TC_CM1_OM_CFG(3))                                  /*!< toggle output */
#define TC_CM1_OM_FVL                        (TC_CM1_OM_CFG(4))                                  /*!< force as valid level */
#define TC_CM1_OM_FINVL                      (TC_CM1_OM_CFG(5))                                  /*!< force as invalid level */
#define TC_CM1_OM_PWM1                       (TC_CM1_OM_CFG(6))                                  /*!< when tc_cnt less than tc_ccdx, set output as valid level */
#define TC_CM1_OM_PWM2                       (TC_CM1_OM_CFG(7))                                  /*!< when tc_cnt greater than tc_ccdx, set output as valid level */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* TC_PWM_CFG_DONEIE */
#define TC_PWM_CFG_DONEIE_DIS                ((uint32_t)0x00000000U)                             /*!< disable */
#define TC_PWM_CFG_DONEIE_EN                 (TC_PWM_CFG_DONEIE)                                 /*!< enable */

/* TC_PWM_CFG_DATERRIE */
#define TC_PWM_CFG_DATERRIE_DIS              ((uint32_t)0x00000000U)                             /*!< disable */
#define TC_PWM_CFG_DATERRIE_EN               (TC_PWM_CFG_DATERRIE)                               /*!< enable */

/* TC_PWM_CFG_BUFVLDIE */
#define TC_PWM_CFG_BUFVLDIE_DIS              ((uint32_t)0x00000000U)                             /*!< disable */
#define TC_PWM_CFG_BUFVLDIE_EN               (TC_PWM_CFG_BUFVLDIE)                               /*!< enable */

/* TC_PWM_CFG_CYCDONEIE */
#define TC_PWM_CFG_CYCDONEIE_DIS             ((uint32_t)0x00000000U)                             /*!< disable */
#define TC_PWM_CFG_CYCDONEIE_EN              (TC_PWM_CFG_CYCDONEIE)                              /*!< enable */

/* TC_PWM_CFG_CMS */
#define TC_PWM_CFG_CMS_DMA                   ((uint32_t)0x00000000U)                             /*!< select as DMA mode */
#define TC_PWM_CFG_CMS_SOFT                  (TC_PWM_CFG_CMS)                                    /*!< select as soft control mode */

/* TC_PWM_CFG_CSS */
#define TC_PWM_CFG_CSS_CS                    ((uint32_t)0x00000000U)                             /*!< select to finish output last complete signal while module disabled */
#define TC_PWM_CFG_CSS_BS                    (TC_PWM_CFG_CSS)                                    /*!< select to break output signal while module disabled */

/* TC_PWM_CFG_ORV */
#define TC_PWM_CFG_ORV_WLC                   ((uint32_t)0x00000000U)                             /*!< wave length configurable */
#define TC_PWM_CFG_ORV_ORV                   (TC_PWM_CFG_ORV)                                    /*!< output remain valid */
#endif

#endif /* RN821X_RN721X_SOC_TC_H */
/* r1190 */
