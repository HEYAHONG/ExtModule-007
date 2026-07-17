/**
 * @file    rn821x_rn721x_soc_lcd.h
 * @brief   LCD definitions for RN821X_RN721X_SOC
 * @version v1.1.2
 */
#ifndef RN821X_RN721X_SOC_LCD_H
#define RN821X_RN721X_SOC_LCD_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* LCD_CTRL */
#define LCD_CTRL_EN                          (BIT(0))                                            /*!< LCD module enable/disable bit */
#define LCD_CTRL_DUTY                        (BITS(1,3))                                         /*!< LCD duty cycle selection bits */
#define LCD_CTRL_BIAS                        (BIT(4))                                            /*!< LCD voltage bias control bit */
#define LCD_CTRL_BIASLVL                     (BITS(5,10))                                        /*!< LCD voltage Bias configuration bits */
#define LCD_CTRL_TYPE                        (BIT(11))                                           /*!< LCD drive type selection bit */
#define LCD_CTRL_PWD_PUMP                    (BIT(12))                                           /*!< LCD PUMP disable/enable bit */

/* LCD_STA */
#define LCD_STA_DON                          (BIT(0))                                            /*!< Display On Pending Bit */
#define LCD_STA_DOFF                         (BIT(1))                                            /*!< Display Off Pending Bit */
#define LCD_STA_IRQONEN                      (BIT(2))                                            /*!< Display On IRQ Enble Bit */
#define LCD_STA_IRQOFFEN                     (BIT(3))                                            /*!< Display Off IRQ Enble Bit */
#define LCD_STA_LCD_BUSY                     (BIT(6))                                            /*!< LCD Busy Bit */

/* LCD_CLKDIV */
#define LCD_CLKDIV_CLKDIV                    (BITS(0,7))                                         /*!< LCD clock divisor configuration bits */

/* LCD_BLINK */
#define LCD_BLINK_TON                        (BITS(0,8))                                         /*!< blink on duration configuration bits */
#define LCD_BLINK_TOFF                       (BITS(9,17))                                        /*!< blink off duration configuration bits */
#define LCD_BLINK_BLINK_TIME                 (BITS(18,25))                                       /*!< blink duration configuration bits */

/* LCD_PS */
#define LCD_PS_PS                            (BITS(0,15))                                        /*!< PUMP Set-up duration configuration bits,duration equal to 30.5us * (4 + PS) */

#if !defined(RN821x_RN721x_SOC_B)
/* LCD_RESCTL */
#define LCD_RESCTL_IRSN                      (BIT(0))                                            /*!< resistance divider mode selection bit */
#define LCD_RESCTL_RSM                       (BIT(1))                                            /*!< internal resistance divider mode signal selection bit */
#define LCD_RESCTL_RES_FT                    (BITS(2,3))                                         /*!< resistance divider mode driving times(one screen refresh cycle) configuration bits */
#define LCD_RESCTL_RES_DT                    (BITS(4,6))                                         /*!< resistance divider mode driving time (one screen refresh cycle) configuration bits */
#define LCD_RESCTL_RES_AO                    (BIT(7))                                            /*!< resistance divider mode driver control switch */
#define LCD_RESCTL_FCC                       (BIT(8))                                            /*!< fast charging control bit */
#define LCD_RESCTL_LDOS                      (BITS(9,12))                                        /*!< LDO output level selection bits */
#endif

/* LCD_BUF0 */
#define LCD_BUF0_BUF0                        (BITS(0,7))                                         /*!< Data bits of SEG(0)  COM[7:0] */

/* LCD_BUF1 */
#define LCD_BUF1_BUF1                        (BITS(0,7))                                         /*!< Data bits of SEG(1)  COM[7:0] */

/* LCD_BUF2 */
#define LCD_BUF2_BUF2                        (BITS(0,7))                                         /*!< Data bits of SEG(2)  COM[7:0] */

/* LCD_BUF3 */
#define LCD_BUF3_BUF3                        (BITS(0,7))                                         /*!< Data bits of SEG(3)  COM[7:0] */

/* LCD_BUF4 */
#define LCD_BUF4_BUF4                        (BITS(0,7))                                         /*!< Data bits of SEG(4)  COM[7:0] */

/* LCD_BUF5 */
#define LCD_BUF5_BUF5                        (BITS(0,7))                                         /*!< Data bits of SEG(5)  COM[7:0] */

/* LCD_BUF6 */
#define LCD_BUF6_BUF6                        (BITS(0,7))                                         /*!< Data bits of SEG(6)  COM[7:0] */

/* LCD_BUF7 */
#define LCD_BUF7_BUF7                        (BITS(0,7))                                         /*!< Data bits of SEG(7)  COM[7:0] */

/* LCD_BUF8 */
#define LCD_BUF8_BUF8                        (BITS(0,7))                                         /*!< Data bits of SEG(8)  COM[7:0] */

/* LCD_BUF9 */
#define LCD_BUF9_BUF9                        (BITS(0,7))                                         /*!< Data bits of SEG(9)  COM[7:0] */

/* LCD_BUF10 */
#define LCD_BUF10_BUF10                      (BITS(0,7))                                         /*!< Data bits of SEG(10) COM[7:0] */

/* LCD_BUF11 */
#define LCD_BUF11_BUF11                      (BITS(0,7))                                         /*!< Data bits of SEG(11) COM[7:0] */

/* LCD_BUF12 */
#define LCD_BUF12_BUF12                      (BITS(0,7))                                         /*!< Data bits of SEG(12) COM[7:0] */

/* LCD_BUF13 */
#define LCD_BUF13_BUF13                      (BITS(0,7))                                         /*!< Data bits of SEG(13) COM[7:0] */

/* LCD_BUF14 */
#define LCD_BUF14_BUF14                      (BITS(0,7))                                         /*!< Data bits of SEG(14) COM[7:0] */

/* LCD_BUF15 */
#define LCD_BUF15_BUF15                      (BITS(0,7))                                         /*!< Data bits of SEG(15) COM[7:0] */

/* LCD_BUF16 */
#define LCD_BUF16_BUF16                      (BITS(0,7))                                         /*!< Data bits of SEG(16) COM[7:0] */

/* LCD_BUF17 */
#define LCD_BUF17_BUF17                      (BITS(0,7))                                         /*!< Data bits of SEG(17) COM[7:0] */

/* LCD_BUF18 */
#define LCD_BUF18_BUF18                      (BITS(0,7))                                         /*!< Data bits of SEG(18) COM[7:0] */

/* LCD_BUF19 */
#define LCD_BUF19_BUF19                      (BITS(0,7))                                         /*!< Data bits of SEG(19) COM[7:0] */

/* LCD_BUF20 */
#define LCD_BUF20_BUF20                      (BITS(0,7))                                         /*!< Data bits of SEG(20) COM[7:0] */

/* LCD_BUF21 */
#define LCD_BUF21_BUF21                      (BITS(0,7))                                         /*!< Data bits of SEG(21) COM[7:0] */

/* LCD_BUF22 */
#define LCD_BUF22_BUF22                      (BITS(0,7))                                         /*!< Data bits of SEG(22) COM[7:0] */

/* LCD_BUF23 */
#define LCD_BUF23_BUF23                      (BITS(0,7))                                         /*!< Data bits of SEG(23) COM[7:0] */

/* LCD_BUF24 */
#define LCD_BUF24_BUF24                      (BITS(0,7))                                         /*!< Data bits of SEG(24) COM[7:0] */

/* LCD_BUF25 */
#define LCD_BUF25_BUF25                      (BITS(0,7))                                         /*!< Data bits of SEG(25) COM[7:0] */

/* LCD_BUF26 */
#define LCD_BUF26_BUF26                      (BITS(0,7))                                         /*!< Data bits of SEG(26) COM[7:0] */

/* LCD_BUF27 */
#define LCD_BUF27_BUF27                      (BITS(0,7))                                         /*!< Data bits of SEG(27) COM[7:0] */

/* LCD_BUF28 */
#define LCD_BUF28_BUF28                      (BITS(0,7))                                         /*!< Data bits of SEG(28) COM[7:0] */

/* LCD_BUF29 */
#define LCD_BUF29_BUF29                      (BITS(0,7))                                         /*!< Data bits of SEG(29) COM[7:0] */

/* LCD_BUF30 */
#define LCD_BUF30_BUF30                      (BITS(0,7))                                         /*!< Data bits of SEG(30) COM[7:0] */

/* LCD_BUF31 */
#define LCD_BUF31_BUF31                      (BITS(0,7))                                         /*!< Data bits of SEG(31) COM[7:0] */

#if !defined(RN821x_RN721x_SOC_C)
/* LCD_BUF32 */
#define LCD_BUF32_BUF32                      (BITS(0,7))                                         /*!< Data bits of SEG(32) COM[7:0] */

/* LCD_BUF33 */
#define LCD_BUF33_BUF33                      (BITS(0,7))                                         /*!< Data bits of SEG(33) COM[7:0] */

/* LCD_BUF34 */
#define LCD_BUF34_BUF34                      (BITS(0,7))                                         /*!< Data bits of SEG(34) COM[7:0] */

/* LCD_BUF35 */
#define LCD_BUF35_BUF35                      (BITS(0,7))                                         /*!< Data bits of SEG(35) COM[7:0] */

/* LCD_BUF36 */
#define LCD_BUF36_BUF36                      (BITS(0,7))                                         /*!< Data bits of SEG(36) COM[7:1] */

/* LCD_BUF37 */
#define LCD_BUF37_BUF37                      (BITS(0,7))                                         /*!< Data bits of SEG(37) COM[7:1] */
#endif

/* constants definitions */
/* LCD_CTRL_DUTY */
#define LCD_CTRL_DUTY_CFG(regval)  (LCD_CTRL_DUTY & ((uint32_t)(regval) << 1))
#define LCD_CTRL_DUTY_STA                    (LCD_CTRL_DUTY_CFG(0))                              /*!< static output (COM0) */
#define LCD_CTRL_DUTY_1_2                    (LCD_CTRL_DUTY_CFG(1))                              /*!< duty cycle = 1/2 (COM0~1) */
#define LCD_CTRL_DUTY_1_3                    (LCD_CTRL_DUTY_CFG(2))                              /*!< duty cycle = 1/3 (COM0~2) */
#define LCD_CTRL_DUTY_1_4                    (LCD_CTRL_DUTY_CFG(3))                              /*!< duty cycle = 1/4 (COM0~3) */
#define LCD_CTRL_DUTY_1_6                    (LCD_CTRL_DUTY_CFG(4))                              /*!< duty cycle = 1/6 (COM0~5) */
#define LCD_CTRL_DUTY_1_8                    (LCD_CTRL_DUTY_CFG(5))                              /*!< duty cycle = 1/8 (COM0~7) */

/* LCD_CTRL_BIAS */
#define LCD_CTRL_BIAS_1_3                    ((uint32_t)0x00000000U)                             /*!< select LCD bias as 1/3 voltage bias */
#define LCD_CTRL_BIAS_1_4                    (LCD_CTRL_BIAS)                                     /*!< select LCD bias as 1/3 voltage bias */

/* LCD_CTRL_TYPE */
#define LCD_CTRL_TYPE_A                      ((uint32_t)0x00000000U)                             /*!< select LCD drive type A as LCD drive type */
#define LCD_CTRL_TYPE_B                      (LCD_CTRL_TYPE)                                     /*!< select LCD drive type B as LCD drive type */

/* LCD_CTRL_PWD_PUMP */
#define LCD_CTRL_PWD_PUMP_EN                 ((uint32_t)0x00000000U)                             /*!< LCD PUMP enable */
#define LCD_CTRL_PWD_PUMP_DIS                (LCD_CTRL_PWD_PUMP)                                 /*!< LCD PUMP disable */

/* LCD_STA_DON */
#define LCD_STA_DON_NUL                      ((uint32_t)0x00000000U)                             /*!< LCD Display On did not occured */
#define LCD_STA_DON_OCC                      (LCD_STA_DON)                                       /*!< LCD Display On occured */

/* LCD_STA_DOFF */
#define LCD_STA_DOFF_NUL                     ((uint32_t)0x00000000U)                             /*!< LCD Display Off did not occured */
#define LCD_STA_DOFF_OCC                     (LCD_STA_DOFF)                                      /*!< LCD Display Off occured */

#if !defined(RN821x_RN721x_SOC_B)
/* LCD_RESCTL_IRSN */
#define LCD_RESCTL_IRSN_IR                   ((uint32_t)0x00000000U)                             /*!< select internal resistance divider mode */

/* LCD_RESCTL_RSM */
#define LCD_RESCTL_RSM_SO                    ((uint32_t)0x00000000U)                             /*!< 20k resistor time sharing connected, 200k resistor short circuited */
#define LCD_RESCTL_RSM_SL                    (LCD_RESCTL_RSM)                                    /*!< time sharing switching between 20k resistor and 200k resistor */

/* LCD_RESCTL_RES_FT */
#define LCD_RESCTL_RES_FT_CFG(regval)  (LCD_RESCTL_RES_FT & ((uint32_t)(regval) << 2))
#define LCD_RESCTL_RES_FT_1                  (LCD_RESCTL_RES_FT_CFG(0))                          /*!< driving once per cycle */
#define LCD_RESCTL_RES_FT_2                  (LCD_RESCTL_RES_FT_CFG(1))                          /*!< driving 2 times per cycle */
#define LCD_RESCTL_RES_FT_3                  (LCD_RESCTL_RES_FT_CFG(2))                          /*!< driving 3 times per cycle */
#define LCD_RESCTL_RES_FT_4                  (LCD_RESCTL_RES_FT_CFG(3))                          /*!< driving 4 times per cycle */

/* LCD_RESCTL_RES_AO */
#define LCD_RESCTL_RES_AO_ON                 ((uint32_t)0x00000000U)                             /*!< resistors is driven time-sharing */
#define LCD_RESCTL_RES_AO_OFF                (LCD_RESCTL_RES_AO)                                 /*!< resistors is always driven */

/* LCD_RESCTL_FCC */
#define LCD_RESCTL_FCC_OFF                   ((uint32_t)0x00000000U)                             /*!< Turn off fast charging function */
#define LCD_RESCTL_FCC_ON                    (LCD_RESCTL_FCC)                                    /*!< Turn on fast charging function */

/* LCD_RESCTL_LDOS */
#define LCD_RESCTL_LDOS_CFG(regval)  (LCD_RESCTL_LDOS & ((uint32_t)(regval) << 9))
#define LCD_RESCTL_LDOS_2P7                  (LCD_RESCTL_LDOS_CFG(0))                            /*!< select LDO 2.7 v as output level */
#define LCD_RESCTL_LDOS_2P76                 (LCD_RESCTL_LDOS_CFG(1))                            /*!< select LDO 2.76v as output level */
#define LCD_RESCTL_LDOS_2P82                 (LCD_RESCTL_LDOS_CFG(2))                            /*!< select LDO 2.82v as output level */
#define LCD_RESCTL_LDOS_2P88                 (LCD_RESCTL_LDOS_CFG(3))                            /*!< select LDO 2.88v as output level */
#define LCD_RESCTL_LDOS_2P94                 (LCD_RESCTL_LDOS_CFG(4))                            /*!< select LDO 2.94v as output level */
#define LCD_RESCTL_LDOS_3P0                  (LCD_RESCTL_LDOS_CFG(5))                            /*!< select LDO 3.0v  as output level */
#define LCD_RESCTL_LDOS_3P06                 (LCD_RESCTL_LDOS_CFG(6))                            /*!< select LDO 3.06v as output level */
#define LCD_RESCTL_LDOS_3P12                 (LCD_RESCTL_LDOS_CFG(7))                            /*!< select LDO 3.12v as output level */
#define LCD_RESCTL_LDOS_3P18                 (LCD_RESCTL_LDOS_CFG(8))                            /*!< select LDO 3.18v as output level */
#define LCD_RESCTL_LDOS_3P24                 (LCD_RESCTL_LDOS_CFG(9))                            /*!< select LDO 3.24v as output level */
#define LCD_RESCTL_LDOS_3P3                  (LCD_RESCTL_LDOS_CFG(10))                           /*!< select LDO 3.3v  as output level */
#define LCD_RESCTL_LDOS_3P36                 (LCD_RESCTL_LDOS_CFG(11))                           /*!< select LDO 3.36v as output level */
#define LCD_RESCTL_LDOS_3P42                 (LCD_RESCTL_LDOS_CFG(12))                           /*!< select LDO 3.42v as output level */
#define LCD_RESCTL_LDOS_3P48                 (LCD_RESCTL_LDOS_CFG(13))                           /*!< select LDO 3.48v as output level */
#define LCD_RESCTL_LDOS_3P54                 (LCD_RESCTL_LDOS_CFG(14))                           /*!< select LDO 3.54v as output level */
#define LCD_RESCTL_LDOS_3P6                  (LCD_RESCTL_LDOS_CFG(15))                           /*!< select LDO 3.6v  as output level */
#endif

#endif /* RN821X_RN721X_SOC_LCD_H */
/* r1730 */
