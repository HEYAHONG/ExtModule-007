/**
 * @file    rn821x_rn721x_soc_gpio.h
 * @brief   GPIO definitions for RN821X_RN721X_SOC
 * @version v1.1.2
 */
#ifndef RN821X_RN721X_SOC_GPIO_H
#define RN821X_RN721X_SOC_GPIO_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* GPIO_PMA */
#define GPIO_PMA_PM00                        (BIT(0))                                            /*!< P00 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM01                        (BIT(1))                                            /*!< P01 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM02                        (BIT(2))                                            /*!< P02 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM03                        (BIT(3))                                            /*!< P03 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM04                        (BIT(4))                                            /*!< P04 input(1)/output(0) mode selection bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PMA_PM05                        (BIT(5))                                            /*!< P05 input(1)/output(0) mode selection bit */
#endif
#define GPIO_PMA_PM10                        (BIT(8))                                            /*!< P10 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM11                        (BIT(9))                                            /*!< P11 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM12                        (BIT(10))                                           /*!< P12 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM13                        (BIT(11))                                           /*!< P13 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM14                        (BIT(12))                                           /*!< P14 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM15                        (BIT(13))                                           /*!< P15 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM16                        (BIT(14))                                           /*!< P16 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM17                        (BIT(15))                                           /*!< P17 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM20                        (BIT(16))                                           /*!< P20 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM21                        (BIT(17))                                           /*!< P21 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM22                        (BIT(18))                                           /*!< P22 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM23                        (BIT(19))                                           /*!< P23 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM24                        (BIT(20))                                           /*!< P24 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM25                        (BIT(21))                                           /*!< P25 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM26                        (BIT(22))                                           /*!< P26 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM27                        (BIT(23))                                           /*!< P27 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM30                        (BIT(24))                                           /*!< P30 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM31                        (BIT(25))                                           /*!< P31 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM32                        (BIT(26))                                           /*!< P32 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM33                        (BIT(27))                                           /*!< P33 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM34                        (BIT(28))                                           /*!< P34 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM35                        (BIT(29))                                           /*!< P35 input(1)/output(0) mode selection bit */
#define GPIO_PMA_PM36                        (BIT(30))                                           /*!< P36 input(1)/output(0) mode state bit */
#define GPIO_PMA_PM37                        (BIT(31))                                           /*!< P37 input(1)/output(0) mode state bi */

/* GPIO_PA */
#define GPIO_PA_P00                          (BIT(0))                                            /*!< port A P00 data bit */
#define GPIO_PA_P01                          (BIT(1))                                            /*!< port A P01 data bit */
#define GPIO_PA_P02                          (BIT(2))                                            /*!< port A P02 data bit */
#define GPIO_PA_P03                          (BIT(3))                                            /*!< port A P03 data bit */
#define GPIO_PA_P04                          (BIT(4))                                            /*!< port A P04 data bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PA_P05                          (BIT(5))                                            /*!< port A P05 data bit */
#endif
#define GPIO_PA_P10                          (BIT(8))                                            /*!< port A P10 data bit */
#define GPIO_PA_P11                          (BIT(9))                                            /*!< port A P11 data bit */
#define GPIO_PA_P12                          (BIT(10))                                           /*!< port A P12 data bit */
#define GPIO_PA_P13                          (BIT(11))                                           /*!< port A P13 data bit */
#define GPIO_PA_P14                          (BIT(12))                                           /*!< port A P14 data bit */
#define GPIO_PA_P15                          (BIT(13))                                           /*!< port A P15 data bit */
#define GPIO_PA_P16                          (BIT(14))                                           /*!< port A P16 data bit */
#define GPIO_PA_P17                          (BIT(15))                                           /*!< port A P17 data bit */
#define GPIO_PA_P20                          (BIT(16))                                           /*!< port A P20 data bit */
#define GPIO_PA_P21                          (BIT(17))                                           /*!< port A P21 data bit */
#define GPIO_PA_P22                          (BIT(18))                                           /*!< port A P22 data bit */
#define GPIO_PA_P23                          (BIT(19))                                           /*!< port A P23 data bit */
#define GPIO_PA_P24                          (BIT(20))                                           /*!< port A P24 data bit */
#define GPIO_PA_P25                          (BIT(21))                                           /*!< port A P25 data bit */
#define GPIO_PA_P26                          (BIT(22))                                           /*!< port A P26 data bit */
#define GPIO_PA_P27                          (BIT(23))                                           /*!< port A P27 data bit */
#define GPIO_PA_P30                          (BIT(24))                                           /*!< port A P30 data bit */
#define GPIO_PA_P31                          (BIT(25))                                           /*!< port A P31 data bit */
#define GPIO_PA_P32                          (BIT(26))                                           /*!< port A P32 data bit */
#define GPIO_PA_P33                          (BIT(27))                                           /*!< port A P33 data bit */
#define GPIO_PA_P34                          (BIT(28))                                           /*!< port A P34 data bit */
#define GPIO_PA_P35                          (BIT(29))                                           /*!< port A P35 data bit */
#define GPIO_PA_P36                          (BIT(30))                                           /*!< port A P36 data bit */
#define GPIO_PA_P37                          (BIT(31))                                           /*!< port A P37 data bit */

/* GPIO_PCA0 */
#define GPIO_PCA0_PC00_B0                    (BIT(0))                                            /*!< PC00 mode cfg bit0, detail info please read manual PCA0.PC00(PCA0[1:0]) */
#define GPIO_PCA0_PC00_B1                    (BIT(1))                                            /*!< PC00 mode cfg bit1, detail info please read manual PCA0.PC00(PCA0[1:0]) */
#define GPIO_PCA0_PC01_B0                    (BIT(2))                                            /*!< PC01 mode cfg bit0, detail info please read manual PCA0.PC01(PCA0[3:2]) */
#define GPIO_PCA0_PC01_B1                    (BIT(3))                                            /*!< PC01 mode cfg bit1, detail info please read manual PCA0.PC01(PCA0[3:2]) */
#define GPIO_PCA0_PC02_B0                    (BIT(4))                                            /*!< PC02 mode cfg bit0, detail info please read manual PCA0.PC02(PCA0[4]) */
#define GPIO_PCA0_PC03_B0                    (BIT(5))                                            /*!< PC03 mode cfg bit0, detail info please read manual PCA0.PC03(PCA0[5]) */
#define GPIO_PCA0_PC04_B0                    (BIT(6))                                            /*!< PC04 mode cfg bit0, detail info please read manual PCA0.PC04(PCA0[6]) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCA0_PC05_B0                    (BIT(7))                                            /*!< PC05 mode cfg bit0, detail info please read manual PCA0.PC05(PCA0[7]) */
#endif
#define GPIO_PCA0_PC04_B1                    (BIT(8))                                            /*!< PC04 mode cfg bit1, detail info please read manual PCA0.PC04(PCA0[6]) */
#define GPIO_PCA0_PC10_B0                    (BIT(9))                                            /*!< PC10 mode cfg bit0, detail info please read manual PCA0.PC10(PCA0[10:9]) */
#define GPIO_PCA0_PC10_B1                    (BIT(10))                                           /*!< PC10 mode cfg bit1, detail info please read manual PCA0.PC10(PCA0[10:9]) */
#define GPIO_PCA0_PC11_B0                    (BIT(11))                                           /*!< PC11 mode cfg bit0, detail info please read manual PCA0.PC11(PCA0[12:11]) */
#define GPIO_PCA0_PC11_B1                    (BIT(12))                                           /*!< PC11 mode cfg bit1, detail info please read manual PCA0.PC11(PCA0[12:11]) */
#if !defined(RN821x_RN721x_SOC_V3)
#define GPIO_PCA0_PC12_B0                    (BIT(13))                                           /*!< PC12 mode cfg bit0, detail info please read manual PCA0.PC12(PCA0[14:13]) */
#define GPIO_PCA0_PC12_B1                    (BIT(14))                                           /*!< PC12 mode cfg bit1, detail info please read manual PCA0.PC12(PCA0[14:13]) */
#define GPIO_PCA0_PC13_B0                    (BIT(15))                                           /*!< PC13 mode cfg bit0, detail info please read manual PCA0.PC13(PCA0[16:15]) */
#define GPIO_PCA0_PC13_B1                    (BIT(16))                                           /*!< PC13 mode cfg bit1, detail info please read manual PCA0.PC13(PCA0[16:15]) */
#define GPIO_PCA0_PC14_B0                    (BIT(17))                                           /*!< PC14 mode cfg bit0, detail info please read manual PCA0.PC14(PCA0[18:17]) */
#define GPIO_PCA0_PC14_B1                    (BIT(18))                                           /*!< PC14 mode cfg bit1, detail info please read manual PCA0.PC14(PCA0[18:17]) */
#define GPIO_PCA0_PC15_B0                    (BIT(19))                                           /*!< PC15 mode cfg bit0, detail info please read manual PCA0.PC15(PCA0[20:19]) */
#define GPIO_PCA0_PC15_B1                    (BIT(20))                                           /*!< PC15 mode cfg bit1, detail info please read manual PCA0.PC15(PCA0[20:19]) */
#define GPIO_PCA0_PC16_B0                    (BIT(21))                                           /*!< PC16 mode cfg bit0, detail info please read manual PCA0.PC16(PCA0[22:21]) */
#define GPIO_PCA0_PC16_B1                    (BIT(22))                                           /*!< PC16 mode cfg bit1, detail info please read manual PCA0.PC16(PCA0[22:21]) */
#define GPIO_PCA0_PC17_B0                    (BIT(23))                                           /*!< PC17 mode cfg bit0, detail info please read manual PCA0.PC17(PCA0[24:23]) */
#define GPIO_PCA0_PC17_B1                    (BIT(24))                                           /*!< PC17 mode cfg bit1, detail info please read manual PCA0.PC17(PCA0[24:23]) */
#endif
#define GPIO_PCA0_PC201                      (BIT(25))                                           /*!< P20 and P21 mode cfg bit */
#define GPIO_PCA0_PC223                      (BIT(26))                                           /*!< P22 and P23 mode cfg bit */
#define GPIO_PCA0_PC245                      (BIT(27))                                           /*!< P24 and P25 mode cfg bit */
#define GPIO_PCA0_PC267                      (BIT(28))                                           /*!< P26 and P27 mode cfg bit */
#define GPIO_PCA0_SWD_SEL                    (BIT(29))                                           /*!< SWD selection bit */
#if defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_C) || defined(RN821x_RN721x_SOC_B)
#define GPIO_PCA0_UART2_SEL                  (BIT(30))                                           /*!< UART2 selection bits */
#else
#define GPIO_PCA0_UART2_SEL                  (BITS(30,31))                                       /*!< UART2 selection bits */
#endif

/* GPIO_PCA1 */
#define GPIO_PCA1_PC30_B0                    (BIT(0))                                            /*!< PC30 mode cfg bit0, detail info please read manual PCA1.PC30(PCA1[1:0]) */
#define GPIO_PCA1_PC30_B1                    (BIT(1))                                            /*!< PC30 mode cfg bit1, detail info please read manual PCA1.PC30(PCA1[1:0]) */
#define GPIO_PCA1_PC31_B0                    (BIT(2))                                            /*!< PC31 mode cfg bit0, detail info please read manual PCA1.PC31(PCA1[3:2]) */
#define GPIO_PCA1_PC31_B1                    (BIT(3))                                            /*!< PC31 mode cfg bit1, detail info please read manual PCA1.PC31(PCA1[3:2]) */
#define GPIO_PCA1_PC32_B0                    (BIT(4))                                            /*!< PC32 mode cfg bit0, detail info please read manual PCA1.PC32(PCA1[5:4]) */
#define GPIO_PCA1_PC32_B1                    (BIT(5))                                            /*!< PC32 mode cfg bit1, detail info please read manual PCA1.PC32(PCA1[5:4]) */
#define GPIO_PCA1_PC33_B0                    (BIT(6))                                            /*!< PC33 mode cfg bit0, detail info please read manual PCA1.PC33(PCA1[7:6]) */
#define GPIO_PCA1_PC33_B1                    (BIT(7))                                            /*!< PC33 mode cfg bit1, detail info please read manual PCA1.PC33(PCA1[7:6]) */
#define GPIO_PCA1_PC34_B0                    (BIT(8))                                            /*!< PC34 mode cfg bit0, detail info please read manual PCA1.PC34(PCA1[9:8]) */
#define GPIO_PCA1_PC34_B1                    (BIT(9))                                            /*!< PC34 mode cfg bit1, detail info please read manual PCA1.PC34(PCA1[9:8]) */
#define GPIO_PCA1_PC35_B0                    (BIT(10))                                           /*!< PC35 mode cfg bit0, detail info please read manual PCA1.PC35(PCA1[11:10]) */
#define GPIO_PCA1_PC35_B1                    (BIT(11))                                           /*!< PC35 mode cfg bit1, detail info please read manual PCA1.PC35(PCA1[11:10]) */
#define GPIO_PCA1_PC36_B0                    (BIT(12))                                           /*!< PC36 mode cfg bit0, detail info please read manual PCA1.PC36(PCA1[13:12]) */
#define GPIO_PCA1_PC36_B1                    (BIT(13))                                           /*!< PC36 mode cfg bit1, detail info please read manual PCA1.PC36(PCA1[13:12]) */
#define GPIO_PCA1_PC37_B0                    (BIT(14))                                           /*!< PC37 mode cfg bit0, detail info please read manual PCA1.PC37(PCA1[15:14]) */
#define GPIO_PCA1_PC37_B1                    (BIT(15))                                           /*!< PC37 mode cfg bit1, detail info please read manual PCA1.PC37(PCA1[15:14]) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCA1_PC30_B2                    (BIT(16))                                           /*!< PC30 mode cfg bit2, detail info please read manual PCA1.PC30(PCA1[1:0]) */
#define GPIO_PCA1_PC30_B3                    (BIT(17))                                           /*!< PC30 mode cfg bit3, detail info please read manual PCA1.PC30(PCA1[1:0]) */
#define GPIO_PCA1_PC31_B2                    (BIT(18))                                           /*!< PC31 mode cfg bit2, detail info please read manual PCA1.PC31(PCA1[3:2]) */
#define GPIO_PCA1_PC31_B3                    (BIT(19))                                           /*!< PC31 mode cfg bit3, detail info please read manual PCA1.PC31(PCA1[3:2]) */
#define GPIO_PCA1_PC32_B2                    (BIT(20))                                           /*!< PC32 mode cfg bit2, detail info please read manual PCA1.PC32(PCA1[5:4]) */
#define GPIO_PCA1_PC32_B3                    (BIT(21))                                           /*!< PC32 mode cfg bit3, detail info please read manual PCA1.PC32(PCA1[5:4]) */
#define GPIO_PCA1_PC33_B2                    (BIT(22))                                           /*!< PC33 mode cfg bit2, detail info please read manual PCA1.PC33(PCA1[7:6]) */
#define GPIO_PCA1_PC33_B3                    (BIT(23))                                           /*!< PC33 mode cfg bit3, detail info please read manual PCA1.PC33(PCA1[7:6]) */
#define GPIO_PCA1_PC34_B2                    (BIT(24))                                           /*!< PC34 mode cfg bit2, detail info please read manual PCA1.PC34(PCA1[9:8]) */
#define GPIO_PCA1_PC34_B3                    (BIT(25))                                           /*!< PC34 mode cfg bit3, detail info please read manual PCA1.PC34(PCA1[9:8]) */
#define GPIO_PCA1_PC35_B2                    (BIT(26))                                           /*!< PC35 mode cfg bit2, detail info please read manual PCA1.PC35(PCA1[11:10]) */
#define GPIO_PCA1_PC35_B3                    (BIT(27))                                           /*!< PC35 mode cfg bit3, detail info please read manual PCA1.PC35(PCA1[11:10]) */
#define GPIO_PCA1_PC36_B2                    (BIT(28))                                           /*!< PC36 mode cfg bit2, detail info please read manual PCA1.PC36(PCA1[13:12]) */
#define GPIO_PCA1_PC36_B3                    (BIT(29))                                           /*!< PC36 mode cfg bit3, detail info please read manual PCA1.PC36(PCA1[13:12]) */
#define GPIO_PCA1_PC37_B2                    (BIT(30))                                           /*!< PC37 mode cfg bit2, detail info please read manual PCA1.PC37(PCA1[15:14]) */
#define GPIO_PCA1_PC37_B3                    (BIT(31))                                           /*!< PC37 mode cfg bit3, detail info please read manual PCA1.PC37(PCA1[15:14]) */
#endif

/* GPIO_PUA */
#define GPIO_PUA_PU00                        (BIT(0))                                            /*!< P00 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU01                        (BIT(1))                                            /*!< P01 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU02                        (BIT(2))                                            /*!< P02 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU03                        (BIT(3))                                            /*!< P03 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU04                        (BIT(4))                                            /*!< P04 pull up cfg bit (=0 do not pull up, =1 pull up) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PUA_PU05                        (BIT(5))                                            /*!< P05 pull up cfg bit (=0 do not pull up, =1 pull up) */
#endif
#define GPIO_PUA_PU10                        (BIT(8))                                            /*!< P10 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU11                        (BIT(9))                                            /*!< P11 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU12                        (BIT(10))                                           /*!< P12 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU13                        (BIT(11))                                           /*!< P13 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU14                        (BIT(12))                                           /*!< P14 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU15                        (BIT(13))                                           /*!< P15 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU16                        (BIT(14))                                           /*!< P16 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU17                        (BIT(15))                                           /*!< P17 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU20                        (BIT(16))                                           /*!< P20 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU21                        (BIT(17))                                           /*!< P21 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU22                        (BIT(18))                                           /*!< P22 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU23                        (BIT(19))                                           /*!< P23 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU24                        (BIT(20))                                           /*!< P24 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU25                        (BIT(21))                                           /*!< P25 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU26                        (BIT(22))                                           /*!< P26 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU27                        (BIT(23))                                           /*!< P27 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU30                        (BIT(24))                                           /*!< P30 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU31                        (BIT(25))                                           /*!< P31 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU32                        (BIT(26))                                           /*!< P32 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU33                        (BIT(27))                                           /*!< P33 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU34                        (BIT(28))                                           /*!< P34 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU35                        (BIT(29))                                           /*!< P35 pull up cfg bit (=0 do not pull up, =1 pull up) */
#if !defined(RN821x_RN721x_SOC_V3)
#define GPIO_PUA_PU36                        (BIT(30))                                           /*!< P36 pull up cfg bit (=0 do not pull up, =1 pull up) */
#define GPIO_PUA_PU37                        (BIT(31))                                           /*!< P37 pull up cfg bit (=0 do not pull up, =1 pull up) */
#else
#define GPIO_PUA_PU36                        (BIT(30))                                           /*!< P36 pull-down enable bit */
#define GPIO_PUA_PU37                        (BIT(31))                                           /*!< P37 pull-down enable bit */
#endif

/* GPIO_PIMA */
#define GPIO_PIMA_PID10                      (BIT(0))                                            /*!< P10 output mode cfg bit */
#define GPIO_PIMA_PID11                      (BIT(1))                                            /*!< P11 output mode cfg bit */
#define GPIO_PIMA_PID12                      (BIT(2))                                            /*!< P12 output mode cfg bit */
#define GPIO_PIMA_PID13                      (BIT(3))                                            /*!< P13 output mode cfg bit */
#define GPIO_PIMA_PID14                      (BIT(4))                                            /*!< P14 output mode cfg bit */
#define GPIO_PIMA_PID15                      (BIT(5))                                            /*!< P15 output mode cfg bit */
#define GPIO_PIMA_PID16                      (BIT(6))                                            /*!< P16 output mode cfg bit */
#define GPIO_PIMA_PID17                      (BIT(7))                                            /*!< P17 output mode cfg bit */
#define GPIO_PIMA_PID20                      (BIT(8))                                            /*!< P20 output mode cfg bit */
#define GPIO_PIMA_PID21                      (BIT(9))                                            /*!< P21 output mode cfg bit */
#define GPIO_PIMA_PID22                      (BIT(10))                                           /*!< P22 output mode cfg bit */
#define GPIO_PIMA_PID23                      (BIT(11))                                           /*!< P23 output mode cfg bit */
#define GPIO_PIMA_PID24                      (BIT(12))                                           /*!< P24 output mode cfg bit */
#define GPIO_PIMA_PID25                      (BIT(13))                                           /*!< P25 output mode cfg bit */
#define GPIO_PIMA_PID26                      (BIT(14))                                           /*!< P26 output mode cfg bit */
#define GPIO_PIMA_PID27                      (BIT(15))                                           /*!< P27 output mode cfg bit */
#define GPIO_PIMA_PIL10                      (BIT(16))                                           /*!< P10 input cfg bit */
#define GPIO_PIMA_PIL11                      (BIT(17))                                           /*!< P11 input cfg bit */
#define GPIO_PIMA_PIL12                      (BIT(18))                                           /*!< P12 input cfg bit */
#define GPIO_PIMA_PIL13                      (BIT(19))                                           /*!< P13 input cfg bit */
#define GPIO_PIMA_PIL14                      (BIT(20))                                           /*!< P14 input cfg bit */
#define GPIO_PIMA_PIL15                      (BIT(21))                                           /*!< P15 input cfg bit */
#define GPIO_PIMA_PIL16                      (BIT(22))                                           /*!< P16 input cfg bit */
#define GPIO_PIMA_PIL17                      (BIT(23))                                           /*!< P17 input cfg bit */
#define GPIO_PIMA_PIL20                      (BIT(24))                                           /*!< P20 input cfg bit */
#define GPIO_PIMA_PIL21                      (BIT(25))                                           /*!< P21 input cfg bit */
#define GPIO_PIMA_PIL22                      (BIT(26))                                           /*!< P22 input cfg bit */
#define GPIO_PIMA_PIL23                      (BIT(27))                                           /*!< P23 input cfg bit */
#define GPIO_PIMA_PIL24                      (BIT(28))                                           /*!< P24 input cfg bit */
#define GPIO_PIMA_PIL25                      (BIT(29))                                           /*!< P25 input cfg bit */
#define GPIO_PIMA_PIL26                      (BIT(30))                                           /*!< P26 input cfg bit */
#define GPIO_PIMA_PIL27                      (BIT(31))                                           /*!< P27 input cfg bit */

/* GPIO_PIEA */
#define GPIO_PIEA_PIE00                      (BIT(0))                                            /*!< P00 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE01                      (BIT(1))                                            /*!< P01 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE02                      (BIT(2))                                            /*!< P02 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE03                      (BIT(3))                                            /*!< P03 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE04                      (BIT(4))                                            /*!< P04 input disbale bit (=1 disable input, =0 enable input) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PIEA_PIE05                      (BIT(5))                                            /*!< P05 input disbale bit (=1 disable input, =0 enable input) */
#endif
#define GPIO_PIEA_PIE10                      (BIT(8))                                            /*!< P10 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE11                      (BIT(9))                                            /*!< P11 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE12                      (BIT(10))                                           /*!< P12 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE13                      (BIT(11))                                           /*!< P13 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE14                      (BIT(12))                                           /*!< P14 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE15                      (BIT(13))                                           /*!< P15 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE16                      (BIT(14))                                           /*!< P16 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE17                      (BIT(15))                                           /*!< P17 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE20                      (BIT(16))                                           /*!< P20 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE21                      (BIT(17))                                           /*!< P21 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE22                      (BIT(18))                                           /*!< P22 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE23                      (BIT(19))                                           /*!< P23 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE24                      (BIT(20))                                           /*!< P24 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE25                      (BIT(21))                                           /*!< P25 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE26                      (BIT(22))                                           /*!< P26 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE27                      (BIT(23))                                           /*!< P27 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE30                      (BIT(24))                                           /*!< P30 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE31                      (BIT(25))                                           /*!< P31 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE32                      (BIT(26))                                           /*!< P32 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE33                      (BIT(27))                                           /*!< P33 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE34                      (BIT(28))                                           /*!< P34 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE35                      (BIT(29))                                           /*!< P35 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE36                      (BIT(30))                                           /*!< P36 input disbale bit (=1 disable input, =0 enable input) */
#define GPIO_PIEA_PIE37                      (BIT(31))                                           /*!< P37 input disbale bit (=1 disable input, =0 enable input) */

/* GPIO_PMB */
#define GPIO_PMB_PM40                        (BIT(0))                                            /*!< P40 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM41                        (BIT(1))                                            /*!< P41 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM42                        (BIT(2))                                            /*!< P42 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM43                        (BIT(3))                                            /*!< P43 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM44                        (BIT(4))                                            /*!< P44 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM45                        (BIT(5))                                            /*!< P45 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM46                        (BIT(6))                                            /*!< P46 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM47                        (BIT(7))                                            /*!< P47 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM50                        (BIT(8))                                            /*!< P50 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM51                        (BIT(9))                                            /*!< P51 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM52                        (BIT(10))                                           /*!< P52 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM53                        (BIT(11))                                           /*!< P53 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM54                        (BIT(12))                                           /*!< P54 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM55                        (BIT(13))                                           /*!< P55 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM56                        (BIT(14))                                           /*!< P56 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM57                        (BIT(15))                                           /*!< P57 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM60                        (BIT(16))                                           /*!< P60 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM61                        (BIT(17))                                           /*!< P61 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM62                        (BIT(18))                                           /*!< P62 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM63                        (BIT(19))                                           /*!< P63 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM64                        (BIT(20))                                           /*!< P64 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM65                        (BIT(21))                                           /*!< P65 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM66                        (BIT(22))                                           /*!< P66 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM67                        (BIT(23))                                           /*!< P67 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM70                        (BIT(24))                                           /*!< P70 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM71                        (BIT(25))                                           /*!< P71 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM72                        (BIT(26))                                           /*!< P72 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM73                        (BIT(27))                                           /*!< P73 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM74                        (BIT(28))                                           /*!< P74 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM75                        (BIT(29))                                           /*!< P75 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM76                        (BIT(30))                                           /*!< P76 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMB_PM77                        (BIT(31))                                           /*!< P77 input/output cfg bit (=0 output mode, =1 input mode) */

/* GPIO_PB */
#define GPIO_PB_P40                          (BIT(0))                                            /*!< port B P40 data bit */
#define GPIO_PB_P41                          (BIT(1))                                            /*!< port B P41 data bit */
#define GPIO_PB_P42                          (BIT(2))                                            /*!< port B P42 data bit */
#define GPIO_PB_P43                          (BIT(3))                                            /*!< port B P43 data bit */
#define GPIO_PB_P44                          (BIT(4))                                            /*!< port B P44 data bit */
#define GPIO_PB_P45                          (BIT(5))                                            /*!< port B P45 data bit */
#define GPIO_PB_P46                          (BIT(6))                                            /*!< port B P46 data bit */
#define GPIO_PB_P47                          (BIT(7))                                            /*!< port B P47 data bit */
#define GPIO_PB_P50                          (BIT(8))                                            /*!< port B P50 data bit */
#define GPIO_PB_P51                          (BIT(9))                                            /*!< port B P51 data bit */
#define GPIO_PB_P52                          (BIT(10))                                           /*!< port B P52 data bit */
#define GPIO_PB_P53                          (BIT(11))                                           /*!< port B P53 data bit */
#define GPIO_PB_P54                          (BIT(12))                                           /*!< port B P54 data bit */
#define GPIO_PB_P55                          (BIT(13))                                           /*!< port B P55 data bit */
#define GPIO_PB_P56                          (BIT(14))                                           /*!< port B P56 data bit */
#define GPIO_PB_P57                          (BIT(15))                                           /*!< port B P57 data bit */
#define GPIO_PB_P60                          (BIT(16))                                           /*!< port B P60 data bit */
#define GPIO_PB_P61                          (BIT(17))                                           /*!< port B P61 data bit */
#define GPIO_PB_P62                          (BIT(18))                                           /*!< port B P62 data bit */
#define GPIO_PB_P63                          (BIT(19))                                           /*!< port B P63 data bit */
#define GPIO_PB_P64                          (BIT(20))                                           /*!< port B P64 data bit */
#define GPIO_PB_P65                          (BIT(21))                                           /*!< port B P65 data bit */
#define GPIO_PB_P66                          (BIT(22))                                           /*!< port B P66 data bit */
#define GPIO_PB_P67                          (BIT(23))                                           /*!< port B P67 data bit */
#define GPIO_PB_P70                          (BIT(24))                                           /*!< port B P70 data bit */
#define GPIO_PB_P71                          (BIT(25))                                           /*!< port B P71 data bit */
#define GPIO_PB_P72                          (BIT(26))                                           /*!< port B P72 data bit */
#define GPIO_PB_P73                          (BIT(27))                                           /*!< port B P73 data bit */
#define GPIO_PB_P74                          (BIT(28))                                           /*!< port B P74 data bit */
#define GPIO_PB_P75                          (BIT(29))                                           /*!< port B P75 data bit */
#define GPIO_PB_P76                          (BIT(30))                                           /*!< port B P76 data bit */
#define GPIO_PB_P77                          (BIT(31))                                           /*!< port B P77 data bit */

/* GPIO_PCB */
#define GPIO_PCB_PC40_B0                     (BIT(0))                                            /*!< PC40 mode cfg bit0, detail info please read manual PCB[0] */
#define GPIO_PCB_PC41_B0                     (BIT(1))                                            /*!< PC41 mode cfg bit0, detail info please read manual PCB[1] */
#define GPIO_PCB_PC42_B0                     (BIT(2))                                            /*!< PC42 mode cfg bit0, detail info please read manual PCB[2] */
#define GPIO_PCB_PC43_B0                     (BIT(3))                                            /*!< PC43 mode cfg bit0, detail info please read manual PCB[3] */
#define GPIO_PCB_PC44_B0                     (BIT(4))                                            /*!< PC44 mode cfg bit0, detail info please read manual PCB[4] */
#define GPIO_PCB_PC45_B0                     (BIT(5))                                            /*!< PC45 mode cfg bit0, detail info please read manual PCB[5] */
#define GPIO_PCB_PC46_B0                     (BIT(6))                                            /*!< PC46 mode cfg bit0, detail info please read manual PCB[6] */
#define GPIO_PCB_PC47_B0                     (BIT(7))                                            /*!< PC47 mode cfg bit0, detail info please read manual PCB[7] */
#define GPIO_PCB_PC50_B0                     (BIT(8))                                            /*!< PC50 mode cfg bit0, detail info please read manual PCB[8] */
#define GPIO_PCB_PC51_B0                     (BIT(9))                                            /*!< PC51 mode cfg bit0, detail info please read manual PCB[9] */
#define GPIO_PCB_PC52_B0                     (BIT(10))                                           /*!< PC52 mode cfg bit0, detail info please read manual PCB[10] */
#define GPIO_PCB_PC53_B0                     (BIT(11))                                           /*!< PC53 mode cfg bit0, detail info please read manual PCB[11] */
#define GPIO_PCB_PC54_B0                     (BIT(12))                                           /*!< PC54 mode cfg bit0, detail info please read manual PCB[12] */
#define GPIO_PCB_PC55_B0                     (BIT(13))                                           /*!< PC55 mode cfg bit0, detail info please read manual PCB[13] */
#define GPIO_PCB_PC56_B0                     (BIT(14))                                           /*!< PC56 mode cfg bit0, detail info please read manual PCB[14] */
#define GPIO_PCB_PC57_B0                     (BIT(15))                                           /*!< PC57 mode cfg bit0, detail info please read manual PCB[15] */
#define GPIO_PCB_PC60                        (BIT(16))                                           /*!< P60 mode cfg bit */
#define GPIO_PCB_PC61                        (BIT(17))                                           /*!< P61 mode cfg bit */
#define GPIO_PCB_PC62                        (BIT(18))                                           /*!< P62 mode cfg bit */
#define GPIO_PCB_PC63                        (BIT(19))                                           /*!< P63 mode cfg bit */
#define GPIO_PCB_PC64                        (BIT(20))                                           /*!< P64 mode cfg bit */
#define GPIO_PCB_PC65                        (BIT(21))                                           /*!< P65 mode cfg bit */
#define GPIO_PCB_PC66                        (BIT(22))                                           /*!< P66 mode cfg bit */
#define GPIO_PCB_PC67                        (BIT(23))                                           /*!< P67 mode cfg bit */
#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCB_PC70_B0                     (BIT(24))                                           /*!< P70 mode cfg bit0, detail info please read manual PCB[24] */
#define GPIO_PCB_PC71_B0                     (BIT(25))                                           /*!< P71 mode cfg bit0, detail info please read manual PCB[25] */
#define GPIO_PCB_PC72_B0                     (BIT(26))                                           /*!< P72 mode cfg bit0, detail info please read manual PCB[26] */
#define GPIO_PCB_PC73_B0                     (BIT(27))                                           /*!< P73 mode cfg bit0, detail info please read manual PCB[27] */
#else
#define GPIO_PCB_PC70                        (BIT(24))                                           /*!< P70 mode cfg bit */
#define GPIO_PCB_PC71                        (BIT(25))                                           /*!< P71 mode cfg bit */
#define GPIO_PCB_PC72                        (BIT(26))                                           /*!< P72 mode cfg bit */
#define GPIO_PCB_PC73                        (BIT(27))                                           /*!< P73 mode cfg bit */
#endif
#define GPIO_PCB_PC74                        (BIT(28))                                           /*!< P74 mode cfg bit */
#define GPIO_PCB_PC75                        (BIT(29))                                           /*!< P75 mode cfg bit */
#define GPIO_PCB_PC76                        (BIT(30))                                           /*!< P76 mode cfg bit */
#define GPIO_PCB_PC77                        (BIT(31))                                           /*!< P77 mode cfg bit */

/* GPIO_PUB */
#define GPIO_PUB_PU40                        (BIT(0))                                            /*!< P40 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU41                        (BIT(1))                                            /*!< P41 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU42                        (BIT(2))                                            /*!< P42 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU43                        (BIT(3))                                            /*!< P43 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU44                        (BIT(4))                                            /*!< P44 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU45                        (BIT(5))                                            /*!< P45 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU46                        (BIT(6))                                            /*!< P46 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU47                        (BIT(7))                                            /*!< P47 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU50                        (BIT(8))                                            /*!< P50 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU51                        (BIT(9))                                            /*!< P51 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU52                        (BIT(10))                                           /*!< P52 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU53                        (BIT(11))                                           /*!< P53 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU54                        (BIT(12))                                           /*!< P54 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU55                        (BIT(13))                                           /*!< P55 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU56                        (BIT(14))                                           /*!< P56 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU57                        (BIT(15))                                           /*!< P57 pull-up enable bit (=1 enable pull-up, =0 do not enable pull up) */
#define GPIO_PUB_PU60                        (BIT(16))                                           /*!< P60 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU61                        (BIT(17))                                           /*!< P61 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU62                        (BIT(18))                                           /*!< P62 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU63                        (BIT(19))                                           /*!< P63 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU64                        (BIT(20))                                           /*!< P64 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU65                        (BIT(21))                                           /*!< P65 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU66                        (BIT(22))                                           /*!< P66 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU67                        (BIT(23))                                           /*!< P67 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU70                        (BIT(24))                                           /*!< P70 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU71                        (BIT(25))                                           /*!< P71 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU72                        (BIT(26))                                           /*!< P72 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU73                        (BIT(27))                                           /*!< P73 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU74                        (BIT(28))                                           /*!< P74 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU75                        (BIT(29))                                           /*!< P75 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU76                        (BIT(30))                                           /*!< P76 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */
#define GPIO_PUB_PU77                        (BIT(31))                                           /*!< P77 pull-down enable bit (=1 enable pull-down, =0 do not enable pul down) */

/* GPIO_PIMB */
#define GPIO_PIMB_PID40                      (BIT(0))                                            /*!< P40 output mode cfg bit */
#define GPIO_PIMB_PID41                      (BIT(1))                                            /*!< P41 output mode cfg bit */
#define GPIO_PIMB_PID42                      (BIT(2))                                            /*!< P42 output mode cfg bit */
#define GPIO_PIMB_PID43                      (BIT(3))                                            /*!< P43 output mode cfg bit */
#define GPIO_PIMB_PID44                      (BIT(4))                                            /*!< P44 output mode cfg bit */
#define GPIO_PIMB_PID45                      (BIT(5))                                            /*!< P45 output mode cfg bit */
#define GPIO_PIMB_PID46                      (BIT(6))                                            /*!< P46 output mode cfg bit */
#define GPIO_PIMB_PID47                      (BIT(7))                                            /*!< P47 output mode cfg bit */
#define GPIO_PIMB_PID50                      (BIT(8))                                            /*!< P50 output mode cfg bit */
#define GPIO_PIMB_PID51                      (BIT(9))                                            /*!< P51 output mode cfg bit */
#define GPIO_PIMB_PID52                      (BIT(10))                                           /*!< P52 output mode cfg bit */
#define GPIO_PIMB_PID53                      (BIT(11))                                           /*!< P53 output mode cfg bit */
#define GPIO_PIMB_PID54                      (BIT(12))                                           /*!< P54 output mode cfg bit */
#define GPIO_PIMB_PID55                      (BIT(13))                                           /*!< P55 output mode cfg bit */
#define GPIO_PIMB_PID56                      (BIT(14))                                           /*!< P56 output mode cfg bit */
#define GPIO_PIMB_PID57                      (BIT(15))                                           /*!< P57 output mode cfg bit */
#define GPIO_PIMB_PIL40                      (BIT(16))                                           /*!< P40 input mode cfg bit */
#define GPIO_PIMB_PIL41                      (BIT(17))                                           /*!< P41 input mode cfg bit */
#define GPIO_PIMB_PIL42                      (BIT(18))                                           /*!< P42 input mode cfg bit */
#define GPIO_PIMB_PIL43                      (BIT(19))                                           /*!< P43 input mode cfg bit */
#define GPIO_PIMB_PIL44                      (BIT(20))                                           /*!< P44 input mode cfg bit */
#define GPIO_PIMB_PIL45                      (BIT(21))                                           /*!< P45 input mode cfg bit */
#define GPIO_PIMB_PIL46                      (BIT(22))                                           /*!< P46 input mode cfg bit */
#define GPIO_PIMB_PIL47                      (BIT(23))                                           /*!< P47 input mode cfg bit */
#define GPIO_PIMB_PIL50                      (BIT(24))                                           /*!< P50 input mode cfg bit */
#define GPIO_PIMB_PIL51                      (BIT(25))                                           /*!< P51 input mode cfg bit */
#define GPIO_PIMB_PIL52                      (BIT(26))                                           /*!< P52 input mode cfg bit */
#define GPIO_PIMB_PIL53                      (BIT(27))                                           /*!< P53 input mode cfg bit */
#define GPIO_PIMB_PIL54                      (BIT(28))                                           /*!< P54 input mode cfg bit */
#define GPIO_PIMB_PIL55                      (BIT(29))                                           /*!< P55 input mode cfg bit */
#define GPIO_PIMB_PIL56                      (BIT(30))                                           /*!< P56 input mode cfg bit */
#define GPIO_PIMB_PIL57                      (BIT(31))                                           /*!< P57 input mode cfg bit */

/* GPIO_PIEB */
#define GPIO_PIEB_PIE40                      (BIT(0))                                            /*!< P40 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE41                      (BIT(1))                                            /*!< P41 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE42                      (BIT(2))                                            /*!< P42 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE43                      (BIT(3))                                            /*!< P43 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE44                      (BIT(4))                                            /*!< P44 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE45                      (BIT(5))                                            /*!< P45 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE46                      (BIT(6))                                            /*!< P46 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE47                      (BIT(7))                                            /*!< P47 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE50                      (BIT(8))                                            /*!< P50 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE51                      (BIT(9))                                            /*!< P51 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE52                      (BIT(10))                                           /*!< P52 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE53                      (BIT(11))                                           /*!< P53 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE54                      (BIT(12))                                           /*!< P54 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE55                      (BIT(13))                                           /*!< P55 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE56                      (BIT(14))                                           /*!< P56 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE57                      (BIT(15))                                           /*!< P57 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE60                      (BIT(16))                                           /*!< P60 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE61                      (BIT(17))                                           /*!< P61 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE62                      (BIT(18))                                           /*!< P62 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE63                      (BIT(19))                                           /*!< P63 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE64                      (BIT(20))                                           /*!< P64 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE65                      (BIT(21))                                           /*!< P65 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE66                      (BIT(22))                                           /*!< P66 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE67                      (BIT(23))                                           /*!< P67 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE70                      (BIT(24))                                           /*!< P70 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE71                      (BIT(25))                                           /*!< P71 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE72                      (BIT(26))                                           /*!< P72 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE73                      (BIT(27))                                           /*!< P73 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE74                      (BIT(28))                                           /*!< P74 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE75                      (BIT(29))                                           /*!< P75 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE76                      (BIT(30))                                           /*!< P76 input disable bit (=1 disable input, =0 enable input) */
#define GPIO_PIEB_PIE77                      (BIT(31))                                           /*!< P77 input disable bit (=1 disable input, =0 enable input) */

/* GPIO_PMC */
#define GPIO_PMC_PM80                        (BIT(0))                                            /*!< P80  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM81                        (BIT(1))                                            /*!< P81  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM82                        (BIT(2))                                            /*!< P82  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM83                        (BIT(3))                                            /*!< P83  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM84                        (BIT(4))                                            /*!< P84  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM85                        (BIT(5))                                            /*!< P85  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM86                        (BIT(6))                                            /*!< P86  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM87                        (BIT(7))                                            /*!< P87  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM90                        (BIT(8))                                            /*!< P90  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM91                        (BIT(9))                                            /*!< P91  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM92                        (BIT(10))                                           /*!< P92  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM93                        (BIT(11))                                           /*!< P93  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM94                        (BIT(12))                                           /*!< P94  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM95                        (BIT(13))                                           /*!< P95  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM96                        (BIT(14))                                           /*!< P96  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM97                        (BIT(15))                                           /*!< P97  input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM100                       (BIT(16))                                           /*!< P100 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM101                       (BIT(17))                                           /*!< P101 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM102                       (BIT(18))                                           /*!< P102 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM103                       (BIT(19))                                           /*!< P103 input/output cfg bit (=0 output mode, =1 input mode) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PMC_PM104                       (BIT(20))                                           /*!< P104 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM105                       (BIT(21))                                           /*!< P105 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM106                       (BIT(22))                                           /*!< P106 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM107                       (BIT(23))                                           /*!< P107 input/output cfg bit (=0 output mode, =1 input mode) */
#endif
#define GPIO_PMC_PM110                       (BIT(24))                                           /*!< P110 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM111                       (BIT(25))                                           /*!< P111 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM112                       (BIT(26))                                           /*!< P112 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM113                       (BIT(27))                                           /*!< P113 input/output cfg bit (=0 output mode, =1 input mode) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PMC_PM114                       (BIT(28))                                           /*!< P114 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM115                       (BIT(29))                                           /*!< P115 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM116                       (BIT(30))                                           /*!< P116 input/output cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMC_PM117                       (BIT(31))                                           /*!< P117 input/output cfg bit (=0 output mode, =1 input mode) */
#endif

/* GPIO_PC */
#define GPIO_PC_P80                          (BIT(0))                                            /*!< port C P80  data bit */
#define GPIO_PC_P81                          (BIT(1))                                            /*!< port C P81  data bit */
#define GPIO_PC_P82                          (BIT(2))                                            /*!< port C P82  data bit */
#define GPIO_PC_P83                          (BIT(3))                                            /*!< port C P83  data bit */
#define GPIO_PC_P84                          (BIT(4))                                            /*!< port C P84  data bit */
#define GPIO_PC_P85                          (BIT(5))                                            /*!< port C P85  data bit */
#define GPIO_PC_P86                          (BIT(6))                                            /*!< port C P86  data bit */
#define GPIO_PC_P87                          (BIT(7))                                            /*!< port C P87  data bit */
#define GPIO_PC_P90                          (BIT(8))                                            /*!< port C P90  data bit */
#define GPIO_PC_P91                          (BIT(9))                                            /*!< port C P91  data bit */
#define GPIO_PC_P92                          (BIT(10))                                           /*!< port C P92  data bit */
#define GPIO_PC_P93                          (BIT(11))                                           /*!< port C P93  data bit */
#define GPIO_PC_P94                          (BIT(12))                                           /*!< port C P94  data bit */
#define GPIO_PC_P95                          (BIT(13))                                           /*!< port C P95  data bit */
#define GPIO_PC_P96                          (BIT(14))                                           /*!< port C P96  data bit */
#define GPIO_PC_P97                          (BIT(15))                                           /*!< port C P97  data bit */
#define GPIO_PC_P100                         (BIT(16))                                           /*!< port C P100 data bit */
#define GPIO_PC_P101                         (BIT(17))                                           /*!< port C P101 data bit */
#define GPIO_PC_P102                         (BIT(18))                                           /*!< port C P102 data bit */
#define GPIO_PC_P103                         (BIT(19))                                           /*!< port C P103 data bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PC_P104                         (BIT(20))                                           /*!< port C P104 data bit */
#define GPIO_PC_P105                         (BIT(21))                                           /*!< port C P105 data bit */
#define GPIO_PC_P106                         (BIT(22))                                           /*!< port C P106 data bit */
#define GPIO_PC_P107                         (BIT(23))                                           /*!< port C P107 data bit */
#endif
#define GPIO_PC_P110                         (BIT(24))                                           /*!< port C P110 data bit */
#define GPIO_PC_P111                         (BIT(25))                                           /*!< port C P111 data bit */
#define GPIO_PC_P112                         (BIT(26))                                           /*!< port C P112 data bit */
#define GPIO_PC_P113                         (BIT(27))                                           /*!< port C P113 data bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PC_P114                         (BIT(28))                                           /*!< port C P114 data bit */
#define GPIO_PC_P115                         (BIT(29))                                           /*!< port C P115 data bit */
#define GPIO_PC_P116                         (BIT(30))                                           /*!< port C P116 data bit */
#define GPIO_PC_P117                         (BIT(31))                                           /*!< port C P117 data bit */
#endif

/* GPIO_PCC */
#define GPIO_PCC_PC80_B0                     (BIT(0))                                            /*!< PC80  mode cfg bit0, detail info please read manual PCC[0] */
#define GPIO_PCC_PC81_B0                     (BIT(1))                                            /*!< PC81  mode cfg bit0, detail info please read manual PCC[1] */
#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCC_PC82_B0                     (BIT(2))                                            /*!< PC82  mode cfg bit0, detail info please read manual PCC[2] */
#else
#define GPIO_PCC_PC82                        (BIT(2))                                            /*!< PC82  mode cfg bit */
#endif
#define GPIO_PCC_PC83_B0                     (BIT(3))                                            /*!< PC83  mode cfg bit0, detail info please read manual PCC[3] */
#define GPIO_PCC_PC84_B0                     (BIT(4))                                            /*!< PC84  mode cfg bit0, detail info please read manual PCC[4] */
#define GPIO_PCC_PC85                        (BIT(5))                                            /*!< PC85  mode cfg bit */
#define GPIO_PCC_PC86                        (BIT(6))                                            /*!< PC86  mode cfg bit */
#define GPIO_PCC_PC87                        (BIT(7))                                            /*!< PC87  mode cfg bit */
#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCC_PC90_B0                     (BIT(8))                                            /*!< PC90 mode cfg bit0, detail info please read manual PCC[8] */
#define GPIO_PCC_PC91_B0                     (BIT(9))                                            /*!< PC91 mode cfg bit0, detail info please read manual PCC[9] */
#define GPIO_PCC_PC92_B0                     (BIT(10))                                           /*!< PC92 mode cfg bit0, detail info please read manual PCC[10] */
#define GPIO_PCC_PC93_B0                     (BIT(11))                                           /*!< PC93 mode cfg bit0, detail info please read manual PCC[11] */
#define GPIO_PCC_PC94_B0                     (BIT(12))                                           /*!< PC94 mode cfg bit0, detail info please read manual PCC[12] */
#define GPIO_PCC_PC95_B0                     (BIT(13))                                           /*!< PC95 mode cfg bit0, detail info please read manual PCC[13] */
#else
#define GPIO_PCC_PC90                        (BIT(8))                                            /*!< PC90  mode cfg bit */
#define GPIO_PCC_PC91                        (BIT(9))                                            /*!< PC91  mode cfg bit */
#define GPIO_PCC_PC92                        (BIT(10))                                           /*!< PC92  mode cfg bit */
#define GPIO_PCC_PC93                        (BIT(11))                                           /*!< PC93  mode cfg bit */
#define GPIO_PCC_PC94                        (BIT(12))                                           /*!< PC94  mode cfg bit */
#define GPIO_PCC_PC95                        (BIT(13))                                           /*!< PC95  mode cfg bit */
#endif
#if !defined(RN821x_RN721x_SOC_V3)
#define GPIO_PCC_PC96                        (BIT(14))                                           /*!< PC96  mode cfg bit */
#define GPIO_PCC_PC97                        (BIT(15))                                           /*!< PC97  mode cfg bit */
#define GPIO_PCC_PC100                       (BIT(16))                                           /*!< PC100 mode cfg bit */
#define GPIO_PCC_PC101                       (BIT(17))                                           /*!< PC101 mode cfg bit */
#define GPIO_PCC_PC102                       (BIT(18))                                           /*!< PC102 mode cfg bit */
#define GPIO_PCC_PC103                       (BIT(19))                                           /*!< PC103 mode cfg bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCC_PC104_B0                    (BIT(20))                                           /*!< PC104 mode cfg bit0, detail info please read manual PCC[20] */
#define GPIO_PCC_PC105_B0                    (BIT(21))                                           /*!< PC105 mode cfg bit0, detail info please read manual PCC[21] */
#define GPIO_PCC_PC106_B0                    (BIT(22))                                           /*!< PC106 mode cfg bit0, detail info please read manual PCC[22] */
#define GPIO_PCC_PC107_B0                    (BIT(23))                                           /*!< PC107 mode cfg bit0, detail info please read manual PCC[23] */
#endif
#if !defined(RN821x_RN721x_SOC_V3)
#define GPIO_PCC_PC110_B0                    (BIT(24))                                           /*!< PC110 mode cfg bit0, detail info please read manual PCC[24] */
#define GPIO_PCC_PC111_B0                    (BIT(25))                                           /*!< PC111 mode cfg bit0, detail info please read manual PCC[25] */
#define GPIO_PCC_PC112_B0                    (BIT(26))                                           /*!< PC112 mode cfg bit0, detail info please read manual PCC[26] */
#define GPIO_PCC_PC113_B0                    (BIT(27))                                           /*!< PC113 mode cfg bit0, detail info please read manual PCC[27] */
#endif
#define GPIO_PCC_SPI_MUX                     (BIT(28))                                           /*!< SPI0 pin defination bit */

/* GPIO_PUC */
#define GPIO_PUC_PU80                        (BIT(0))                                            /*!< P80  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU81                        (BIT(1))                                            /*!< P81  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU82                        (BIT(2))                                            /*!< P82  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU83                        (BIT(3))                                            /*!< P83  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU84                        (BIT(4))                                            /*!< P84  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU85                        (BIT(5))                                            /*!< P85  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU86                        (BIT(6))                                            /*!< P86  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU87                        (BIT(7))                                            /*!< P87  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU90                        (BIT(8))                                            /*!< P90  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU91                        (BIT(9))                                            /*!< P91  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU92                        (BIT(10))                                           /*!< P92  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU93                        (BIT(11))                                           /*!< P93  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU94                        (BIT(12))                                           /*!< P94  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU95                        (BIT(13))                                           /*!< P95  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU96                        (BIT(14))                                           /*!< P96  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU97                        (BIT(15))                                           /*!< P97  pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU100                       (BIT(16))                                           /*!< P100 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU101                       (BIT(17))                                           /*!< P101 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU102                       (BIT(18))                                           /*!< P102 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU103                       (BIT(19))                                           /*!< P103 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUC_PU110                       (BIT(24))                                           /*!< P110 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUC_PU111                       (BIT(25))                                           /*!< P111 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUC_PU112                       (BIT(26))                                           /*!< P112 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUC_PU113                       (BIT(27))                                           /*!< P113 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PUC_PU116                       (BIT(30))                                           /*!< P116 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUC_PU117                       (BIT(31))                                           /*!< P117 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#endif

/* GPIO_PIEC */
#define GPIO_PIEC_PIE80                      (BIT(0))                                            /*!< P80  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE81                      (BIT(1))                                            /*!< P81  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE82                      (BIT(2))                                            /*!< P82  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE83                      (BIT(3))                                            /*!< P83  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE84                      (BIT(4))                                            /*!< P84  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE85                      (BIT(5))                                            /*!< P85  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE86                      (BIT(6))                                            /*!< P86  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE87                      (BIT(7))                                            /*!< P87  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE90                      (BIT(8))                                            /*!< P90  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE91                      (BIT(9))                                            /*!< P91  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE92                      (BIT(10))                                           /*!< P92  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE93                      (BIT(11))                                           /*!< P93  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE94                      (BIT(12))                                           /*!< P94  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE95                      (BIT(13))                                           /*!< P95  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE96                      (BIT(14))                                           /*!< P96  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE97                      (BIT(15))                                           /*!< P97  input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE100                     (BIT(16))                                           /*!< P100 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE101                     (BIT(17))                                           /*!< P101 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE102                     (BIT(18))                                           /*!< P102 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE103                     (BIT(19))                                           /*!< P103 input disable bit(=1 disable input, =0 enable input) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PIEC_PIE104                     (BIT(20))                                           /*!< P104 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE105                     (BIT(21))                                           /*!< P105 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE106                     (BIT(22))                                           /*!< P106 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE107                     (BIT(23))                                           /*!< P107 input disable bit(=1 disable input, =0 enable input) */
#endif
#define GPIO_PIEC_PIE110                     (BIT(24))                                           /*!< P110 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE111                     (BIT(25))                                           /*!< P111 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE112                     (BIT(26))                                           /*!< P112 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE113                     (BIT(27))                                           /*!< P113 input disable bit(=1 disable input, =0 enable input) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PIEC_PIE114                     (BIT(28))                                           /*!< P114 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE115                     (BIT(29))                                           /*!< P115 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE116                     (BIT(30))                                           /*!< P116 input disable bit(=1 disable input, =0 enable input) */
#define GPIO_PIEC_PIE117                     (BIT(31))                                           /*!< P117 input disable bit(=1 disable input, =0 enable input) */
#endif

/* GPIO_PIMC */
#define GPIO_PIMC_PID110                     (BIT(0))                                            /*!< P110 output mode cfg bit */
#define GPIO_PIMC_PID111                     (BIT(1))                                            /*!< P111 output mode cfg bit */
#define GPIO_PIMC_PID112                     (BIT(2))                                            /*!< P112 output mode cfg bit */
#define GPIO_PIMC_PID113                     (BIT(3))                                            /*!< P113 output mode cfg bit */
#define GPIO_PIMC_PIL110                     (BIT(4))                                            /*!< P110 input mode cfg bit */
#define GPIO_PIMC_PIL111                     (BIT(5))                                            /*!< P111 input mode cfg bit */
#define GPIO_PIMC_PIL112                     (BIT(6))                                            /*!< P112 input mode cfg bit */
#define GPIO_PIMC_PIL113                     (BIT(7))                                            /*!< P113 input mode cfg bit */
#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PIMC_PIL104                     (BIT(8))                                            /*!< P104 input mode cfg bit */
#define GPIO_PIMC_PIL105                     (BIT(9))                                            /*!< P105 input mode cfg bit */
#define GPIO_PIMC_PIL106                     (BIT(10))                                           /*!< P106 input mode cfg bit */
#define GPIO_PIMC_PIL107                     (BIT(11))                                           /*!< P107 input mode cfg bit */
#define GPIO_PIMC_PIL114                     (BIT(12))                                           /*!< P114 input mode cfg bit */
#define GPIO_PIMC_PIL115                     (BIT(13))                                           /*!< P115 input mode cfg bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PIMC_PIL116                     (BIT(14))                                           /*!< P116 input mode cfg bit */
#define GPIO_PIMC_PIL117                     (BIT(15))                                           /*!< P117 input mode cfg bit */
#endif

/* GPIO_PCB2 */
#define GPIO_PCB2_PC40_B1                    (BIT(0))                                            /*!< PC40 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC40_B2                    (BIT(1))                                            /*!< PC40 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC41_B1                    (BIT(2))                                            /*!< PC41 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC41_B2                    (BIT(3))                                            /*!< PC41 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC42_B1                    (BIT(4))                                            /*!< PC42 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC42_B2                    (BIT(5))                                            /*!< PC42 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC43_B1                    (BIT(6))                                            /*!< PC43 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC43_B2                    (BIT(7))                                            /*!< PC43 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC44_B1                    (BIT(8))                                            /*!< PC44 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC44_B2                    (BIT(9))                                            /*!< PC44 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC45_B1                    (BIT(10))                                           /*!< PC45 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC45_B2                    (BIT(11))                                           /*!< PC45 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC46_B1                    (BIT(12))                                           /*!< PC46 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC46_B2                    (BIT(13))                                           /*!< PC46 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC47_B1                    (BIT(14))                                           /*!< PC47 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC47_B2                    (BIT(15))                                           /*!< PC47 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC50_B1                    (BIT(16))                                           /*!< PC50 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC50_B2                    (BIT(17))                                           /*!< PC50 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC51_B1                    (BIT(18))                                           /*!< PC51 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC51_B2                    (BIT(19))                                           /*!< PC51 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC52_B1                    (BIT(20))                                           /*!< PC52 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC52_B2                    (BIT(21))                                           /*!< PC52 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC53_B1                    (BIT(22))                                           /*!< PC53 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC53_B2                    (BIT(23))                                           /*!< PC53 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC54_B1                    (BIT(24))                                           /*!< PC54 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC54_B2                    (BIT(25))                                           /*!< PC54 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC55_B1                    (BIT(26))                                           /*!< PC55 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC55_B2                    (BIT(27))                                           /*!< PC55 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC56_B1                    (BIT(28))                                           /*!< PC56 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC56_B2                    (BIT(29))                                           /*!< PC56 mode cfg bit2, detail info please read manual */
#define GPIO_PCB2_PC57_B1                    (BIT(30))                                           /*!< PC57 mode cfg bit1, detail info please read manual */
#define GPIO_PCB2_PC57_B2                    (BIT(31))                                           /*!< PC57 mode cfg bit2, detail info please read manual */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PMD */
#define GPIO_PMD_PMD120                      (BIT(0))                                            /*!< P120 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD121                      (BIT(1))                                            /*!< P121 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD122                      (BIT(2))                                            /*!< P122 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD123                      (BIT(3))                                            /*!< P123 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD124                      (BIT(4))                                            /*!< P124 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD125                      (BIT(5))                                            /*!< P125 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD126                      (BIT(6))                                            /*!< P126 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD127                      (BIT(7))                                            /*!< P127 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD130                      (BIT(8))                                            /*!< P130 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD131                      (BIT(9))                                            /*!< P131 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD132                      (BIT(10))                                           /*!< P132 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD133                      (BIT(11))                                           /*!< P133 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD134                      (BIT(12))                                           /*!< P134 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD135                      (BIT(13))                                           /*!< P135 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD136                      (BIT(14))                                           /*!< P136 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD137                      (BIT(15))                                           /*!< P137 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD140                      (BIT(16))                                           /*!< P140 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD141                      (BIT(17))                                           /*!< P141 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD142                      (BIT(18))                                           /*!< P142 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD143                      (BIT(19))                                           /*!< P143 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD144                      (BIT(20))                                           /*!< P144 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD145                      (BIT(21))                                           /*!< P145 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD146                      (BIT(22))                                           /*!< P146 input/output mode cfg bit (=0 output mode, =1 input mode) */
#define GPIO_PMD_PMD147                      (BIT(23))                                           /*!< P147 input/output mode cfg bit (=0 output mode, =1 input mode) */

/* GPIO_PD */
#define GPIO_PD_P120                         (BIT(0))                                            /*!< port D P120 data bit */
#define GPIO_PD_P121                         (BIT(1))                                            /*!< port D P121 data bit */
#define GPIO_PD_P122                         (BIT(2))                                            /*!< port D P122 data bit */
#define GPIO_PD_P123                         (BIT(3))                                            /*!< port D P123 data bit */
#define GPIO_PD_P124                         (BIT(4))                                            /*!< port D P124 data bit */
#define GPIO_PD_P125                         (BIT(5))                                            /*!< port D P125 data bit */
#define GPIO_PD_P126                         (BIT(6))                                            /*!< port D P126 data bit */
#define GPIO_PD_P127                         (BIT(7))                                            /*!< port D P127 data bit */
#define GPIO_PD_P130                         (BIT(8))                                            /*!< port D P130 data bit */
#define GPIO_PD_P131                         (BIT(9))                                            /*!< port D P131 data bit */
#define GPIO_PD_P132                         (BIT(10))                                           /*!< port D P132 data bit */
#define GPIO_PD_P133                         (BIT(11))                                           /*!< port D P133 data bit */
#define GPIO_PD_P134                         (BIT(12))                                           /*!< port D P134 data bit */
#define GPIO_PD_P135                         (BIT(13))                                           /*!< port D P135 data bit */
#define GPIO_PD_P136                         (BIT(14))                                           /*!< port D P136 data bit */
#define GPIO_PD_P137                         (BIT(15))                                           /*!< port D P137 data bit */
#define GPIO_PD_P140                         (BIT(16))                                           /*!< port D P140 data bit */
#define GPIO_PD_P141                         (BIT(17))                                           /*!< port D P141 data bit */
#define GPIO_PD_P142                         (BIT(18))                                           /*!< port D P142 data bit */
#define GPIO_PD_P143                         (BIT(19))                                           /*!< port D P143 data bit */
#define GPIO_PD_P144                         (BIT(20))                                           /*!< port D P144 data bit */
#define GPIO_PD_P145                         (BIT(21))                                           /*!< port D P145 data bit */
#define GPIO_PD_P146                         (BIT(22))                                           /*!< port D P146 data bit */
#define GPIO_PD_P147                         (BIT(23))                                           /*!< port D P147 data bit */

/* GPIO_PCD */
#define GPIO_PCD_PC120                       (BIT(0))                                            /*!< P120 mode cfg bit */
#define GPIO_PCD_PC121                       (BIT(1))                                            /*!< P121 mode cfg bit */
#define GPIO_PCD_PC122                       (BIT(2))                                            /*!< P122 mode cfg bit */
#define GPIO_PCD_PC123                       (BIT(3))                                            /*!< P123 mode cfg bit */
#define GPIO_PCD_PC124                       (BIT(4))                                            /*!< P124 mode cfg bit */
#define GPIO_PCD_PC125                       (BIT(5))                                            /*!< P125 mode cfg bit */
#define GPIO_PCD_PC126                       (BIT(6))                                            /*!< P126 mode cfg bit */
#define GPIO_PCD_PC127                       (BIT(7))                                            /*!< P127 mode cfg bit */
#define GPIO_PCD_PC130                       (BIT(8))                                            /*!< P130 mode cfg bit */
#define GPIO_PCD_PC131                       (BIT(9))                                            /*!< P131 mode cfg bit */
#define GPIO_PCD_PC132                       (BIT(10))                                           /*!< P132 mode cfg bit */
#define GPIO_PCD_PC133                       (BIT(11))                                           /*!< P133 mode cfg bit (=0 select as IO, =1 reserved) */
#define GPIO_PCD_PC134                       (BIT(12))                                           /*!< P134 mode cfg bit */
#define GPIO_PCD_PC135                       (BIT(13))                                           /*!< P135 mode cfg bit */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCD_PC136                       (BIT(14))                                           /*!< P136 mode cfg bit */
#define GPIO_PCD_PC137                       (BIT(15))                                           /*!< P137 mode cfg bit (=0 select as IO, =1 reserved) */
#endif

/* GPIO_PUD */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PUD_PU120                       (BIT(0))                                            /*!< P120 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU121                       (BIT(1))                                            /*!< P121 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU122                       (BIT(2))                                            /*!< P122 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU123                       (BIT(3))                                            /*!< P123 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU124                       (BIT(4))                                            /*!< P124 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU125                       (BIT(5))                                            /*!< P125 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU126                       (BIT(6))                                            /*!< P126 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU127                       (BIT(7))                                            /*!< P127 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU130                       (BIT(8))                                            /*!< P130 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU131                       (BIT(9))                                            /*!< P131 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU132                       (BIT(10))                                           /*!< P132 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU133                       (BIT(11))                                           /*!< P133 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU134                       (BIT(12))                                           /*!< P134 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU135                       (BIT(13))                                           /*!< P135 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU136                       (BIT(14))                                           /*!< P136 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU137                       (BIT(15))                                           /*!< P137 pull down enable bit(=1 enable pull-down ,=0 do not enable pull-down) */
#define GPIO_PUD_PU140                       (BIT(16))                                           /*!< P140 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUD_PU141                       (BIT(17))                                           /*!< P141 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUD_PU142                       (BIT(18))                                           /*!< P142 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUD_PU143                       (BIT(19))                                           /*!< P143 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUD_PU144                       (BIT(20))                                           /*!< P144 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PUD_PU145                       (BIT(21))                                           /*!< P145 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#elif defined(RN821x_RN721x_SOC_V3)
#define GPIO_PUD_PU145                       (BIT(21))                                           /*!< P145 pull down enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PUD_PU146                       (BIT(22))                                           /*!< P146 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#define GPIO_PUD_PU147                       (BIT(23))                                           /*!< P147 pull up enable bit(=1 enable pull-up ,=0 do not enable pull-up) */
#endif

/* GPIO_PCE */
#define GPIO_PCE_SEG0_COM4                   (BIT(0))                                            /*!< SEG0_COM4 mode selection bit */
#define GPIO_PCE_SEG1_COM5                   (BIT(1))                                            /*!< SEG1_COM5 mode selection bit */
#define GPIO_PCE_SEG2_COM6                   (BIT(2))                                            /*!< SEG2_COM6 mode selection bit */
#define GPIO_PCE_SEG3_COM7                   (BIT(3))                                            /*!< SEG3_COM7 mode selection bit */

/* GPIO_PASET */
#define GPIO_PASET_P00                       (BIT(0))                                            /*!< PA P00 state set bit */
#define GPIO_PASET_P01                       (BIT(1))                                            /*!< PA P01 state set bit */
#define GPIO_PASET_P02                       (BIT(2))                                            /*!< PA P02 state set bit */
#define GPIO_PASET_P03                       (BIT(3))                                            /*!< PA P03 state set bit */
#define GPIO_PASET_P04                       (BIT(4))                                            /*!< PA P04 state set bit */
#define GPIO_PASET_P10                       (BIT(8))                                            /*!< PA P10 state set bit */
#define GPIO_PASET_P11                       (BIT(9))                                            /*!< PA P11 state set bit */
#define GPIO_PASET_P12                       (BIT(10))                                           /*!< PA P12 state set bit */
#define GPIO_PASET_P13                       (BIT(11))                                           /*!< PA P13 state set bit */
#define GPIO_PASET_P14                       (BIT(12))                                           /*!< PA P14 state set bit */
#define GPIO_PASET_P15                       (BIT(13))                                           /*!< PA P15 state set bit */
#define GPIO_PASET_P16                       (BIT(14))                                           /*!< PA P16 state set bit */
#define GPIO_PASET_P17                       (BIT(15))                                           /*!< PA P17 state set bit */
#define GPIO_PASET_P20                       (BIT(16))                                           /*!< PA P20 state set bit */
#define GPIO_PASET_P21                       (BIT(17))                                           /*!< PA P21 state set bit */
#define GPIO_PASET_P22                       (BIT(18))                                           /*!< PA P22 state set bit */
#define GPIO_PASET_P23                       (BIT(19))                                           /*!< PA P23 state set bit */
#define GPIO_PASET_P24                       (BIT(20))                                           /*!< PA P24 state set bit */
#define GPIO_PASET_P25                       (BIT(21))                                           /*!< PA P25 state set bit */
#define GPIO_PASET_P26                       (BIT(22))                                           /*!< PA P26 state set bit */
#define GPIO_PASET_P27                       (BIT(23))                                           /*!< PA P27 state set bit */
#define GPIO_PASET_P30                       (BIT(24))                                           /*!< PA P30 state set bit */
#define GPIO_PASET_P31                       (BIT(25))                                           /*!< PA P31 state set bit */
#define GPIO_PASET_P32                       (BIT(26))                                           /*!< PA P32 state set bit */
#define GPIO_PASET_P33                       (BIT(27))                                           /*!< PA P33 state set bit */
#define GPIO_PASET_P34                       (BIT(28))                                           /*!< PA P34 state set bit */
#define GPIO_PASET_P35                       (BIT(29))                                           /*!< PA P35 state set bit */
#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PASET_P36                       (BIT(30))                                           /*!< PA P36 state set bit */
#define GPIO_PASET_P37                       (BIT(31))                                           /*!< PA P37 state set bit */
#endif

/* GPIO_PACLR */
#define GPIO_PACLR_P00                       (BIT(0))                                            /*!< PA P00 state clean bit */
#define GPIO_PACLR_P01                       (BIT(1))                                            /*!< PA P01 state clean bit */
#define GPIO_PACLR_P02                       (BIT(2))                                            /*!< PA P02 state clean bit */
#define GPIO_PACLR_P03                       (BIT(3))                                            /*!< PA P03 state clean bit */
#define GPIO_PACLR_P04                       (BIT(4))                                            /*!< PA P04 state clean bit */
#define GPIO_PACLR_P10                       (BIT(8))                                            /*!< PA P10 state clean bit */
#define GPIO_PACLR_P11                       (BIT(9))                                            /*!< PA P11 state clean bit */
#define GPIO_PACLR_P12                       (BIT(10))                                           /*!< PA P12 state clean bit */
#define GPIO_PACLR_P13                       (BIT(11))                                           /*!< PA P13 state clean bit */
#define GPIO_PACLR_P14                       (BIT(12))                                           /*!< PA P14 state clean bit */
#define GPIO_PACLR_P15                       (BIT(13))                                           /*!< PA P15 state clean bit */
#define GPIO_PACLR_P16                       (BIT(14))                                           /*!< PA P16 state clean bit */
#define GPIO_PACLR_P17                       (BIT(15))                                           /*!< PA P17 state clean bit */
#define GPIO_PACLR_P20                       (BIT(16))                                           /*!< PA P20 state clean bit */
#define GPIO_PACLR_P21                       (BIT(17))                                           /*!< PA P21 state clean bit */
#define GPIO_PACLR_P22                       (BIT(18))                                           /*!< PA P22 state clean bit */
#define GPIO_PACLR_P23                       (BIT(19))                                           /*!< PA P23 state clean bit */
#define GPIO_PACLR_P24                       (BIT(20))                                           /*!< PA P24 state clean bit */
#define GPIO_PACLR_P25                       (BIT(21))                                           /*!< PA P25 state clean bit */
#define GPIO_PACLR_P26                       (BIT(22))                                           /*!< PA P26 state clean bit */
#define GPIO_PACLR_P27                       (BIT(23))                                           /*!< PA P27 state clean bit */
#define GPIO_PACLR_P30                       (BIT(24))                                           /*!< PA P30 state clean bit */
#define GPIO_PACLR_P31                       (BIT(25))                                           /*!< PA P31 state clean bit */
#define GPIO_PACLR_P32                       (BIT(26))                                           /*!< PA P32 state clean bit */
#define GPIO_PACLR_P33                       (BIT(27))                                           /*!< PA P33 state clean bit */
#define GPIO_PACLR_P34                       (BIT(28))                                           /*!< PA P34 state clean bit */
#define GPIO_PACLR_P35                       (BIT(29))                                           /*!< PA P35 state clean bit */
#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PACLR_P36                       (BIT(30))                                           /*!< PA P36 state clean bit */
#define GPIO_PACLR_P37                       (BIT(31))                                           /*!< PA P37 state clean bit */
#endif


/* GPIO_PBSET */
#define GPIO_PBSET_P40                       (BIT(0))                                            /*!< PB P40 state set bit */
#define GPIO_PBSET_P41                       (BIT(1))                                            /*!< PB P41 state set bit */
#define GPIO_PBSET_P42                       (BIT(2))                                            /*!< PB P42 state set bit */
#define GPIO_PBSET_P43                       (BIT(3))                                            /*!< PB P43 state set bit */
#define GPIO_PBSET_P44                       (BIT(4))                                            /*!< PB P44 state set bit */
#define GPIO_PBSET_P45                       (BIT(5))                                            /*!< PB P45 state set bit */
#define GPIO_PBSET_P46                       (BIT(6))                                            /*!< PB P46 state set bit */
#define GPIO_PBSET_P47                       (BIT(7))                                            /*!< PB P47 state set bit */
#define GPIO_PBSET_P50                       (BIT(8))                                            /*!< PB P50 state set bit */
#define GPIO_PBSET_P51                       (BIT(9))                                            /*!< PB P51 state set bit */
#define GPIO_PBSET_P52                       (BIT(10))                                           /*!< PB P52 state set bit */
#define GPIO_PBSET_P53                       (BIT(11))                                           /*!< PB P53 state set bit */
#define GPIO_PBSET_P54                       (BIT(12))                                           /*!< PB P54 state set bit */
#define GPIO_PBSET_P55                       (BIT(13))                                           /*!< PB P55 state set bit */
#define GPIO_PBSET_P56                       (BIT(14))                                           /*!< PB P56 state set bit */
#define GPIO_PBSET_P57                       (BIT(15))                                           /*!< PB P57 state set bit */
#define GPIO_PBSET_P60                       (BIT(16))                                           /*!< PB P60 state set bit */
#define GPIO_PBSET_P61                       (BIT(17))                                           /*!< PB P61 state set bit */
#define GPIO_PBSET_P62                       (BIT(18))                                           /*!< PB P62 state set bit */
#define GPIO_PBSET_P63                       (BIT(19))                                           /*!< PB P63 state set bit */
#define GPIO_PBSET_P64                       (BIT(20))                                           /*!< PB P64 state set bit */
#define GPIO_PBSET_P65                       (BIT(21))                                           /*!< PB P65 state set bit */
#define GPIO_PBSET_P66                       (BIT(22))                                           /*!< PB P66 state set bit */
#define GPIO_PBSET_P67                       (BIT(23))                                           /*!< PB P67 state set bit */
#define GPIO_PBSET_P70                       (BIT(24))                                           /*!< PB P70 state set bit */
#define GPIO_PBSET_P71                       (BIT(25))                                           /*!< PB P71 state set bit */
#define GPIO_PBSET_P72                       (BIT(26))                                           /*!< PB P72 state set bit */
#define GPIO_PBSET_P73                       (BIT(27))                                           /*!< PB P73 state set bit */
#define GPIO_PBSET_P74                       (BIT(28))                                           /*!< PB P74 state set bit */
#define GPIO_PBSET_P75                       (BIT(29))                                           /*!< PB P75 state set bit */
#define GPIO_PBSET_P76                       (BIT(30))                                           /*!< PB P76 state set bit */
#define GPIO_PBSET_P77                       (BIT(31))                                           /*!< PB P77 state set bit */

/* GPIO_PBCLR */
#define GPIO_PBCLR_P40                       (BIT(0))                                            /*!< PB P40 state clean bit */
#define GPIO_PBCLR_P41                       (BIT(1))                                            /*!< PB P41 state clean bit */
#define GPIO_PBCLR_P42                       (BIT(2))                                            /*!< PB P42 state clean bit */
#define GPIO_PBCLR_P43                       (BIT(3))                                            /*!< PB P43 state clean bit */
#define GPIO_PBCLR_P44                       (BIT(4))                                            /*!< PB P44 state clean bit */
#define GPIO_PBCLR_P45                       (BIT(5))                                            /*!< PB P45 state clean bit */
#define GPIO_PBCLR_P46                       (BIT(6))                                            /*!< PB P46 state clean bit */
#define GPIO_PBCLR_P47                       (BIT(7))                                            /*!< PB P47 state clean bit */
#define GPIO_PBCLR_P50                       (BIT(8))                                            /*!< PB P50 state clean bit */
#define GPIO_PBCLR_P51                       (BIT(9))                                            /*!< PB P51 state clean bit */
#define GPIO_PBCLR_P52                       (BIT(10))                                           /*!< PB P52 state clean bit */
#define GPIO_PBCLR_P53                       (BIT(11))                                           /*!< PB P53 state clean bit */
#define GPIO_PBCLR_P54                       (BIT(12))                                           /*!< PB P54 state clean bit */
#define GPIO_PBCLR_P55                       (BIT(13))                                           /*!< PB P55 state clean bit */
#define GPIO_PBCLR_P56                       (BIT(14))                                           /*!< PB P56 state clean bit */
#define GPIO_PBCLR_P57                       (BIT(15))                                           /*!< PB P57 state clean bit */
#define GPIO_PBCLR_P60                       (BIT(16))                                           /*!< PB P60 state clean bit */
#define GPIO_PBCLR_P61                       (BIT(17))                                           /*!< PB P61 state clean bit */
#define GPIO_PBCLR_P62                       (BIT(18))                                           /*!< PB P62 state clean bit */
#define GPIO_PBCLR_P63                       (BIT(19))                                           /*!< PB P63 state clean bit */
#define GPIO_PBCLR_P64                       (BIT(20))                                           /*!< PB P64 state clean bit */
#define GPIO_PBCLR_P65                       (BIT(21))                                           /*!< PB P65 state clean bit */
#define GPIO_PBCLR_P66                       (BIT(22))                                           /*!< PB P66 state clean bit */
#define GPIO_PBCLR_P67                       (BIT(23))                                           /*!< PB P67 state clean bit */
#define GPIO_PBCLR_P70                       (BIT(24))                                           /*!< PB P70 state clean bit */
#define GPIO_PBCLR_P71                       (BIT(25))                                           /*!< PB P71 state clean bit */
#define GPIO_PBCLR_P72                       (BIT(26))                                           /*!< PB P72 state clean bit */
#define GPIO_PBCLR_P73                       (BIT(27))                                           /*!< PB P73 state clean bit */
#define GPIO_PBCLR_P74                       (BIT(28))                                           /*!< PB P74 state clean bit */
#define GPIO_PBCLR_P75                       (BIT(29))                                           /*!< PB P75 state clean bit */
#define GPIO_PBCLR_P76                       (BIT(30))                                           /*!< PB P76 state clean bit */
#define GPIO_PBCLR_P77                       (BIT(31))                                           /*!< PB P77 state clean bit */

/* GPIO_PCSET */
#define GPIO_PCSET_P80                       (BIT(0))                                            /*!< PC P80  state set bit */
#define GPIO_PCSET_P81                       (BIT(1))                                            /*!< PC P81  state set bit */
#define GPIO_PCSET_P82                       (BIT(2))                                            /*!< PC P82  state set bit */
#define GPIO_PCSET_P83                       (BIT(3))                                            /*!< PC P83  state set bit */
#define GPIO_PCSET_P84                       (BIT(4))                                            /*!< PC P84  state set bit */
#define GPIO_PCSET_P85                       (BIT(5))                                            /*!< PC P85  state set bit */
#define GPIO_PCSET_P86                       (BIT(6))                                            /*!< PC P86  state set bit */
#define GPIO_PCSET_P87                       (BIT(7))                                            /*!< PC P87  state set bit */
#define GPIO_PCSET_P90                       (BIT(8))                                            /*!< PC P90  state set bit */
#define GPIO_PCSET_P91                       (BIT(9))                                            /*!< PC P91  state set bit */
#define GPIO_PCSET_P92                       (BIT(10))                                           /*!< PC P92  state set bit */
#define GPIO_PCSET_P93                       (BIT(11))                                           /*!< PC P93  state set bit */
#define GPIO_PCSET_P94                       (BIT(12))                                           /*!< PC P94  state set bit */
#define GPIO_PCSET_P95                       (BIT(13))                                           /*!< PC P95  state set bit */
#define GPIO_PCSET_P96                       (BIT(14))                                           /*!< PC P96  state set bit */
#define GPIO_PCSET_P97                       (BIT(15))                                           /*!< PC P97  state set bit */
#define GPIO_PCSET_P100                      (BIT(16))                                           /*!< PC P100 state set bit */
#define GPIO_PCSET_P101                      (BIT(17))                                           /*!< PC P101 state set bit */
#define GPIO_PCSET_P102                      (BIT(18))                                           /*!< PC P102 state set bit */
#define GPIO_PCSET_P103                      (BIT(19))                                           /*!< PC P103 state set bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCSET_P104                      (BIT(20))                                           /*!< PC P104 state set bit */
#define GPIO_PCSET_P105                      (BIT(21))                                           /*!< PC P105 state set bit */
#define GPIO_PCSET_P106                      (BIT(22))                                           /*!< PC P106 state set bit */
#define GPIO_PCSET_P107                      (BIT(23))                                           /*!< PC P107 state set bit */
#endif
#define GPIO_PCSET_P110                      (BIT(24))                                           /*!< PC P110 state set bit */
#define GPIO_PCSET_P111                      (BIT(25))                                           /*!< PC P111 state set bit */
#define GPIO_PCSET_P112                      (BIT(26))                                           /*!< PC P112 state set bit */
#define GPIO_PCSET_P113                      (BIT(27))                                           /*!< PC P113 state set bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCSET_P114                      (BIT(28))                                           /*!< PC P114 state set bit */
#define GPIO_PCSET_P115                      (BIT(29))                                           /*!< PC P115 state set bit */
#define GPIO_PCSET_P116                      (BIT(30))                                           /*!< PC P116 state set bit */
#define GPIO_PCSET_P117                      (BIT(31))                                           /*!< PC P117 state set bit */
#endif

/* GPIO_PCCLR */
#define GPIO_PCCLR_P80                       (BIT(0))                                            /*!< PC P80  state clean bit */
#define GPIO_PCCLR_P81                       (BIT(1))                                            /*!< PC P81  state clean bit */
#define GPIO_PCCLR_P82                       (BIT(2))                                            /*!< PC P82  state clean bit */
#define GPIO_PCCLR_P83                       (BIT(3))                                            /*!< PC P83  state clean bit */
#define GPIO_PCCLR_P84                       (BIT(4))                                            /*!< PC P84  state clean bit */
#define GPIO_PCCLR_P85                       (BIT(5))                                            /*!< PC P85  state clean bit */
#define GPIO_PCCLR_P86                       (BIT(6))                                            /*!< PC P86  state clean bit */
#define GPIO_PCCLR_P87                       (BIT(7))                                            /*!< PC P87  state clean bit */
#define GPIO_PCCLR_P90                       (BIT(8))                                            /*!< PC P90  state clean bit */
#define GPIO_PCCLR_P91                       (BIT(9))                                            /*!< PC P91  state clean bit */
#define GPIO_PCCLR_P92                       (BIT(10))                                           /*!< PC P92  state clean bit */
#define GPIO_PCCLR_P93                       (BIT(11))                                           /*!< PC P93  state clean bit */
#define GPIO_PCCLR_P94                       (BIT(12))                                           /*!< PC P94  state clean bit */
#define GPIO_PCCLR_P95                       (BIT(13))                                           /*!< PC P95  state clean bit */
#define GPIO_PCCLR_P96                       (BIT(14))                                           /*!< PC P96  state clean bit */
#define GPIO_PCCLR_P97                       (BIT(15))                                           /*!< PC P97  state clean bit */
#define GPIO_PCCLR_P100                      (BIT(16))                                           /*!< PC P100 state clean bit */
#define GPIO_PCCLR_P101                      (BIT(17))                                           /*!< PC P101 state clean bit */
#define GPIO_PCCLR_P102                      (BIT(18))                                           /*!< PC P102 state clean bit */
#define GPIO_PCCLR_P103                      (BIT(19))                                           /*!< PC P103 state clean bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCCLR_P104                      (BIT(20))                                           /*!< PC P104 state clean bit */
#define GPIO_PCCLR_P105                      (BIT(21))                                           /*!< PC P105 state clean bit */
#define GPIO_PCCLR_P106                      (BIT(22))                                           /*!< PC P106 state clean bit */
#define GPIO_PCCLR_P107                      (BIT(23))                                           /*!< PC P107 state clean bit */
#endif
#define GPIO_PCCLR_P110                      (BIT(24))                                           /*!< PC P110 state clean bit */
#define GPIO_PCCLR_P111                      (BIT(25))                                           /*!< PC P111 state clean bit */
#define GPIO_PCCLR_P112                      (BIT(26))                                           /*!< PC P112 state clean bit */
#define GPIO_PCCLR_P113                      (BIT(27))                                           /*!< PC P113 state clean bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCCLR_P114                      (BIT(28))                                           /*!< PC P114 state clean bit */
#define GPIO_PCCLR_P115                      (BIT(29))                                           /*!< PC P115 state clean bit */
#define GPIO_PCCLR_P116                      (BIT(30))                                           /*!< PC P116 state clean bit */
#define GPIO_PCCLR_P117                      (BIT(31))                                           /*!< PC P117 state clean bit */

/* GPIO_PDSET */
#define GPIO_PDSET_P120                      (BIT(0))                                            /*!< PD P120 state set bit */
#define GPIO_PDSET_P121                      (BIT(1))                                            /*!< PD P121 state set bit */
#define GPIO_PDSET_P122                      (BIT(2))                                            /*!< PD P122 state set bit */
#define GPIO_PDSET_P123                      (BIT(3))                                            /*!< PD P123 state set bit */
#define GPIO_PDSET_P124                      (BIT(4))                                            /*!< PD P124 state set bit */
#define GPIO_PDSET_P125                      (BIT(5))                                            /*!< PD P125 state set bit */
#define GPIO_PDSET_P126                      (BIT(6))                                            /*!< PD P126 state set bit */
#define GPIO_PDSET_P127                      (BIT(7))                                            /*!< PD P127 state set bit */
#define GPIO_PDSET_P130                      (BIT(8))                                            /*!< PD P130 state set bit */
#define GPIO_PDSET_P131                      (BIT(9))                                            /*!< PD P131 state set bit */
#define GPIO_PDSET_P132                      (BIT(10))                                           /*!< PD P132 state set bit */
#define GPIO_PDSET_P133                      (BIT(11))                                           /*!< PD P133 state set bit */
#define GPIO_PDSET_P134                      (BIT(12))                                           /*!< PD P134 state set bit */
#define GPIO_PDSET_P135                      (BIT(13))                                           /*!< PD P135 state set bit */
#define GPIO_PDSET_P136                      (BIT(14))                                           /*!< PD P136 state set bit */
#define GPIO_PDSET_P137                      (BIT(15))                                           /*!< PD P137 state set bit */
#define GPIO_PDSET_P140                      (BIT(16))                                           /*!< PD P140 state set bit */
#define GPIO_PDSET_P141                      (BIT(17))                                           /*!< PD P141 state set bit */
#define GPIO_PDSET_P142                      (BIT(18))                                           /*!< PD P142 state set bit */
#define GPIO_PDSET_P143                      (BIT(19))                                           /*!< PD P143 state set bit */
#define GPIO_PDSET_P144                      (BIT(20))                                           /*!< PD P144 state set bit */
#define GPIO_PDSET_P145                      (BIT(21))                                           /*!< PD P145 state set bit */
#define GPIO_PDSET_P146                      (BIT(22))                                           /*!< PD P146 state set bit */
#define GPIO_PDSET_P147                      (BIT(23))                                           /*!< PD P147 state set bit */

/* GPIO_PDCLR */
#define GPIO_PDCLR_P120                      (BIT(0))                                            /*!< PD P120 state clean bit */
#define GPIO_PDCLR_P121                      (BIT(1))                                            /*!< PD P121 state clean bit */
#define GPIO_PDCLR_P122                      (BIT(2))                                            /*!< PD P122 state clean bit */
#define GPIO_PDCLR_P123                      (BIT(3))                                            /*!< PD P123 state clean bit */
#define GPIO_PDCLR_P124                      (BIT(4))                                            /*!< PD P124 state clean bit */
#define GPIO_PDCLR_P125                      (BIT(5))                                            /*!< PD P125 state clean bit */
#define GPIO_PDCLR_P126                      (BIT(6))                                            /*!< PD P126 state clean bit */
#define GPIO_PDCLR_P127                      (BIT(7))                                            /*!< PD P127 state clean bit */
#define GPIO_PDCLR_P130                      (BIT(8))                                            /*!< PD P130 state clean bit */
#define GPIO_PDCLR_P131                      (BIT(9))                                            /*!< PD P131 state clean bit */
#define GPIO_PDCLR_P132                      (BIT(10))                                           /*!< PD P132 state clean bit */
#define GPIO_PDCLR_P133                      (BIT(11))                                           /*!< PD P133 state clean bit */
#define GPIO_PDCLR_P134                      (BIT(12))                                           /*!< PD P134 state clean bit */
#define GPIO_PDCLR_P135                      (BIT(13))                                           /*!< PD P135 state clean bit */
#define GPIO_PDCLR_P136                      (BIT(14))                                           /*!< PD P136 state clean bit */
#define GPIO_PDCLR_P137                      (BIT(15))                                           /*!< PD P137 state clean bit */
#define GPIO_PDCLR_P140                      (BIT(16))                                           /*!< PD P140 state clean bit */
#define GPIO_PDCLR_P141                      (BIT(17))                                           /*!< PD P141 state clean bit */
#define GPIO_PDCLR_P142                      (BIT(18))                                           /*!< PD P142 state clean bit */
#define GPIO_PDCLR_P143                      (BIT(19))                                           /*!< PD P143 state clean bit */
#define GPIO_PDCLR_P144                      (BIT(20))                                           /*!< PD P144 state clean bit */
#define GPIO_PDCLR_P145                      (BIT(21))                                           /*!< PD P145 state clean bit */
#define GPIO_PDCLR_P146                      (BIT(22))                                           /*!< PD P146 state clean bit */
#define GPIO_PDCLR_P147                      (BIT(23))                                           /*!< PD P147 state clean bit */

/* GPIO_PIED */
#define GPIO_PIED_PIE120                     (BIT(0))                                            /*!< P120 input disable bit */
#define GPIO_PIED_PIE121                     (BIT(1))                                            /*!< P121 input disable bit */
#define GPIO_PIED_PIE122                     (BIT(2))                                            /*!< P122 input disable bit */
#define GPIO_PIED_PIE123                     (BIT(3))                                            /*!< P123 input disable bit */
#define GPIO_PIED_PIE124                     (BIT(4))                                            /*!< P124 input disable bit */
#define GPIO_PIED_PIE125                     (BIT(5))                                            /*!< P125 input disable bit */
#define GPIO_PIED_PIE126                     (BIT(6))                                            /*!< P126 input disable bit */
#define GPIO_PIED_PIE127                     (BIT(7))                                            /*!< P127 input disable bit */
#define GPIO_PIED_PIE130                     (BIT(8))                                            /*!< P130 input disable bit */
#define GPIO_PIED_PIE131                     (BIT(9))                                            /*!< P131 input disable bit */
#define GPIO_PIED_PIE132                     (BIT(10))                                           /*!< P132 input disable bit */
#define GPIO_PIED_PIE133                     (BIT(11))                                           /*!< P133 input disable bit */
#define GPIO_PIED_PIE134                     (BIT(12))                                           /*!< P134 input disable bit */
#define GPIO_PIED_PIE135                     (BIT(13))                                           /*!< P135 input disable bit */
#define GPIO_PIED_PIE136                     (BIT(14))                                           /*!< P136 input disable bit */
#define GPIO_PIED_PIE137                     (BIT(15))                                           /*!< P137 input disable bit */
#define GPIO_PIED_PIE140                     (BIT(16))                                           /*!< P140 input disable bit */
#define GPIO_PIED_PIE141                     (BIT(17))                                           /*!< P141 input disable bit */
#define GPIO_PIED_PIE142                     (BIT(18))                                           /*!< P142 input disable bit */
#define GPIO_PIED_PIE143                     (BIT(19))                                           /*!< P143 input disable bit */
#define GPIO_PIED_PIE144                     (BIT(20))                                           /*!< P144 input disable bit */
#define GPIO_PIED_PIE145                     (BIT(21))                                           /*!< P145 input disable bit */
#define GPIO_PIED_PIE146                     (BIT(22))                                           /*!< P146 input disable bit */
#define GPIO_PIED_PIE147                     (BIT(23))                                           /*!< P147 input disable bit */

/* GPIO_PIMD */
#define GPIO_PIMD_PID140                     (BIT(0))                                            /*!< P140 output mode cfg bit */
#define GPIO_PIMD_PID141                     (BIT(1))                                            /*!< P141 output mode cfg bit */
#define GPIO_PIMD_PID142                     (BIT(2))                                            /*!< P142 output mode cfg bit */
#define GPIO_PIMD_PID143                     (BIT(3))                                            /*!< P143 output mode cfg bit */
#define GPIO_PIMD_PIL140                     (BIT(4))                                            /*!< P140 input mode cfg bit */
#define GPIO_PIMD_PIL141                     (BIT(5))                                            /*!< P141 input mode cfg bit */
#define GPIO_PIMD_PIL142                     (BIT(6))                                            /*!< P142 input mode cfg bit */
#define GPIO_PIMD_PIL143                     (BIT(7))                                            /*!< P143 input mode cfg bit */
#define GPIO_PIMD_PID144                     (BIT(8))                                            /*!< P144 output mode cfg bit */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PIMD_PID145                     (BIT(9))                                            /*!< P145 output mode cfg bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PIMD_PID146                     (BIT(10))                                           /*!< P146 output mode cfg bit */
#define GPIO_PIMD_PID147                     (BIT(11))                                           /*!< P147 output mode cfg bit */
#define GPIO_PIMD_PIL144                     (BIT(12))                                           /*!< P144 input mode cfg bit */
#define GPIO_PIMD_PIL145                     (BIT(13))                                           /*!< P145 input mode cfg bit */
#define GPIO_PIMD_PIL146                     (BIT(14))                                           /*!< P146 input mode cfg bit */
#define GPIO_PIMD_PIL147                     (BIT(15))                                           /*!< P147 input mode cfg bit */

/* GPIO_PCA2 */
#define GPIO_PCA2_PC00_B2                    (BIT(0))                                            /*!< PC00 mode cfg bit2, detail info please read manual PCA0.PC00(PCA0[1:0]) */
#define GPIO_PCA2_PC00_B3                    (BIT(1))                                            /*!< PC00 mode cfg bit3, detail info please read manual PCA0.PC00(PCA0[1:0]) */
#define GPIO_PCA2_PC01_B2                    (BIT(2))                                            /*!< PC01 mode cfg bit2, detail info please read manual PCA0.PC01(PCA0[3:2]) */
#define GPIO_PCA2_PC01_B3                    (BIT(3))                                            /*!< PC01 mode cfg bit3, detail info please read manual PCA0.PC01(PCA0[3:2]) */
#define GPIO_PCA2_PC02_B1                    (BIT(4))                                            /*!< PC02 mode cfg bit1, detail info please read manual PCA0.PC02(PCA0[4]) */
#define GPIO_PCA2_PC02_B2                    (BIT(5))                                            /*!< PC02 mode cfg bit2, detail info please read manual PCA0.PC02(PCA0[4]) */
#define GPIO_PCA2_PC02_B3                    (BIT(6))                                            /*!< PC02 mode cfg bit3, detail info please read manual PCA0.PC02(PCA0[4]) */
#define GPIO_PCA2_PC03_B1                    (BIT(7))                                            /*!< PC03 mode cfg bit1, detail info please read manual PCA0.PC03(PCA0[5]) */
#define GPIO_PCA2_PC03_B2                    (BIT(8))                                            /*!< PC03 mode cfg bit2, detail info please read manual PCA0.PC03(PCA0[5]) */
#define GPIO_PCA2_PC03_B3                    (BIT(9))                                            /*!< PC03 mode cfg bit3, detail info please read manual PCA0.PC03(PCA0[5]) */
#define GPIO_PCA2_PC04_B2                    (BIT(10))                                           /*!< PC04 mode cfg bit2, detail info please read manual PCA0.PC04(PCA0[6]) */
#define GPIO_PCA2_PC04_B3                    (BIT(11))                                           /*!< PC04 mode cfg bit3, detail info please read manual PCA0.PC04(PCA0[6]) */
#define GPIO_PCA2_PC05_B1                    (BIT(12))                                           /*!< PC05 mode cfg bit1, detail info please read manual PCA0.PC05(PCA0[7]) */
#define GPIO_PCA2_PC05_B2                    (BIT(13))                                           /*!< PC05 mode cfg bit2, detail info please read manual PCA0.PC05(PCA0[7]) */
#define GPIO_PCA2_PC05_B3                    (BIT(14))                                           /*!< PC05 mode cfg bit3, detail info please read manual PCA0.PC05(PCA0[7]) */
#define GPIO_PCA2_PC10_B2                    (BIT(15))                                           /*!< PC10 mode cfg bit2, detail info please read manual PCA0.PC10(PCA0[10:9]) */
#define GPIO_PCA2_PC10_B3                    (BIT(16))                                           /*!< PC10 mode cfg bit3, detail info please read manual PCA0.PC10(PCA0[10:9]) */
#define GPIO_PCA2_PC11_B2                    (BIT(17))                                           /*!< PC11 mode cfg bit2, detail info please read manual PCA0.PC11(PCA0[12:11]) */
#define GPIO_PCA2_PC11_B3                    (BIT(18))                                           /*!< PC11 mode cfg bit3, detail info please read manual PCA0.PC11(PCA0[12:11]) */
#define GPIO_PCA2_PC12_B2                    (BIT(19))                                           /*!< PC12 mode cfg bit2, detail info please read manual PCA0.PC12(PCA0[14:13]) */
#define GPIO_PCA2_PC12_B3                    (BIT(20))                                           /*!< PC12 mode cfg bit3, detail info please read manual PCA0.PC12(PCA0[14:13]) */
#define GPIO_PCA2_PC13_B2                    (BIT(21))                                           /*!< PC13 mode cfg bit2, detail info please read manual PCA0.PC13(PCA0[16:15]) */
#define GPIO_PCA2_PC13_B3                    (BIT(22))                                           /*!< PC13 mode cfg bit3, detail info please read manual PCA0.PC13(PCA0[16:15]) */
#define GPIO_PCA2_PC14_B2                    (BIT(23))                                           /*!< PC14 mode cfg bit2, detail info please read manual PCA0.PC14(PCA0[18:17]) */
#define GPIO_PCA2_PC14_B3                    (BIT(24))                                           /*!< PC14 mode cfg bit3, detail info please read manual PCA0.PC14(PCA0[18:17]) */
#define GPIO_PCA2_PC15_B2                    (BIT(25))                                           /*!< PC15 mode cfg bit2, detail info please read manual PCA0.PC15(PCA0[20:19]) */
#define GPIO_PCA2_PC15_B3                    (BIT(26))                                           /*!< PC15 mode cfg bit3, detail info please read manual PCA0.PC15(PCA0[20:19]) */
#define GPIO_PCA2_PC16_B2                    (BIT(27))                                           /*!< PC16 mode cfg bit2, detail info please read manual PCA0.PC16(PCA0[22:21]) */
#define GPIO_PCA2_PC16_B3                    (BIT(28))                                           /*!< PC16 mode cfg bit3, detail info please read manual PCA0.PC16(PCA0[22:21]) */
#define GPIO_PCA2_PC17_B2                    (BIT(29))                                           /*!< PC17 mode cfg bit2, detail info please read manual PCA0.PC17(PCA0[24:23]) */
#define GPIO_PCA2_PC17_B3                    (BIT(30))                                           /*!< PC17 mode cfg bit3, detail info please read manual PCA0.PC17(PCA0[24:23]) */

/* GPIO_PCA3 */
#define GPIO_PCA3_PC20                       (BITS(0,2))                                         /*!< PC20 second mode cfg bits */
#define GPIO_PCA3_PC21                       (BITS(3,5))                                         /*!< PC21 second mode cfg bits */
#define GPIO_PCA3_PC201                      (BIT(6))                                            /*!< PC201 second mode cfg bit */
#define GPIO_PCA3_PC22                       (BITS(7,9))                                         /*!< PC22 second mode cfg bits */
#define GPIO_PCA3_PC23                       (BITS(10,12))                                       /*!< PC23 second mode cfg bits */
#define GPIO_PCA3_PC223                      (BIT(13))                                           /*!< PC223 second mode cfg bit */
#define GPIO_PCA3_PC24                       (BITS(14,16))                                       /*!< PC24 second mode cfg bits */
#define GPIO_PCA3_PC25                       (BITS(17,19))                                       /*!< PC25 second mode cfg bits */
#define GPIO_PCA3_PC245                      (BIT(20))                                           /*!< PC245 second mode cfg bit */
#define GPIO_PCA3_PC26                       (BITS(21,23))                                       /*!< PC26 second mode cfg bits */
#define GPIO_PCA3_PC27                       (BITS(24,26))                                       /*!< PC27 second mode cfg bits */
#define GPIO_PCA3_PC267                      (BIT(27))                                           /*!< PC267 second mode cfg bit */
#define GPIO_PCA3_UART2_SEL_2                (BIT(28))                                           /*!< UART2 second selection bit, detail info please read manual PCA0[31:30] */

/* GPIO_PCB3 */
#define GPIO_PCB3_PC40_B3                    (BIT(0))                                            /*!< PC40 mode cfg bit3, detail info please read manual PC40[0] */
#define GPIO_PCB3_PC41_B3                    (BIT(1))                                            /*!< PC41 mode cfg bit3, detail info please read manual PC41[1] */
#define GPIO_PCB3_PC42_B3                    (BIT(2))                                            /*!< PC42 mode cfg bit3, detail info please read manual PC42[2] */
#define GPIO_PCB3_PC43_B3                    (BIT(3))                                            /*!< PC43 mode cfg bit3, detail info please read manual PC43[3] */
#define GPIO_PCB3_PC44_B3                    (BIT(4))                                            /*!< PC44 mode cfg bit3, detail info please read manual PC44[4] */
#define GPIO_PCB3_PC45_B3                    (BIT(5))                                            /*!< PC45 mode cfg bit3, detail info please read manual PC45[5] */
#define GPIO_PCB3_PC46_B3                    (BIT(6))                                            /*!< PC46 mode cfg bit3, detail info please read manual PC46[6] */
#define GPIO_PCB3_PC47_B3                    (BIT(7))                                            /*!< PC47 mode cfg bit3, detail info please read manual PC47[7] */
#define GPIO_PCB3_PC50_B3                    (BIT(8))                                            /*!< PC50 mode cfg bit3, detail info please read manual PC50[8] */
#define GPIO_PCB3_PC51_B3                    (BIT(9))                                            /*!< PC51 mode cfg bit3, detail info please read manual PC51[9] */
#define GPIO_PCB3_PC52_B3                    (BIT(10))                                           /*!< PC52 mode cfg bit3, detail info please read manual PC52[10] */
#define GPIO_PCB3_PC53_B3                    (BIT(11))                                           /*!< PC53 mode cfg bit3, detail info please read manual PC53[11] */
#define GPIO_PCB3_PC54_B3                    (BIT(12))                                           /*!< PC54 mode cfg bit3, detail info please read manual PC54[12] */
#define GPIO_PCB3_PC55_B3                    (BIT(13))                                           /*!< PC55 mode cfg bit3, detail info please read manual PC55[13] */
#define GPIO_PCB3_PC56_B3                    (BIT(14))                                           /*!< PC56 mode cfg bit3, detail info please read manual PC56[14] */
#define GPIO_PCB3_PC57_B3                    (BIT(15))                                           /*!< PC57 mode cfg bit3, detail info please read manual PC57[15] */

/* GPIO_PCC2 */
#define GPIO_PCC2_PC104_B1                   (BIT(12))                                           /*!< PC104 mode cfg bit1, detail info please read manual PCC[20] */
#define GPIO_PCC2_PC104_B2                   (BIT(13))                                           /*!< PC104 mode cfg bit2, detail info please read manual PCC[20] */
#define GPIO_PCC2_PC104_B3                   (BIT(14))                                           /*!< PC104 mode cfg bit3, detail info please read manual PCC[20] */
#define GPIO_PCC2_PC105_B1                   (BIT(15))                                           /*!< PC105 mode cfg bit1, detail info please read manual PCC[21] */
#define GPIO_PCC2_PC105_B2                   (BIT(16))                                           /*!< PC105 mode cfg bit2, detail info please read manual PCC[21] */
#define GPIO_PCC2_PC105_B3                   (BIT(17))                                           /*!< PC105 mode cfg bit3, detail info please read manual PCC[21] */
#define GPIO_PCC2_PC106_B1                   (BIT(18))                                           /*!< PC106 mode cfg bit1, detail info please read manual PCC[22] */
#define GPIO_PCC2_PC106_B2                   (BIT(19))                                           /*!< PC106 mode cfg bit2, detail info please read manual PCC[22] */
#define GPIO_PCC2_PC106_B3                   (BIT(20))                                           /*!< PC106 mode cfg bit3, detail info please read manual PCC[22] */
#define GPIO_PCC2_PC107_B1                   (BIT(21))                                           /*!< PC107 mode cfg bit1, detail info please read manual PCC[23] */
#define GPIO_PCC2_PC107_B2                   (BIT(22))                                           /*!< PC107 mode cfg bit2, detail info please read manual PCC[23] */
#define GPIO_PCC2_PC107_B3                   (BIT(23))                                           /*!< PC107 mode cfg bit3, detail info please read manual PCC[23] */

/* GPIO_PCC3 */
#define GPIO_PCC3_PC110_B1                   (BIT(0))                                            /*!< PC110 mode cfg bit1, detail info please read manual PCC[24] */
#define GPIO_PCC3_PC110_B2                   (BIT(1))                                            /*!< PC110 mode cfg bit2, detail info please read manual PCC[24] */
#define GPIO_PCC3_PC110_B3                   (BIT(2))                                            /*!< PC110 mode cfg bit3, detail info please read manual PCC[24] */
#define GPIO_PCC3_PC111_B1                   (BIT(3))                                            /*!< PC111 mode cfg bit1, detail info please read manual PCC[25] */
#define GPIO_PCC3_PC111_B2                   (BIT(4))                                            /*!< PC111 mode cfg bit2, detail info please read manual PCC[25] */
#define GPIO_PCC3_PC111_B3                   (BIT(5))                                            /*!< PC111 mode cfg bit3, detail info please read manual PCC[25] */
#define GPIO_PCC3_PC112_B1                   (BIT(6))                                            /*!< PC112 mode cfg bit1, detail info please read manual PCC[26] */
#define GPIO_PCC3_PC112_B2                   (BIT(7))                                            /*!< PC112 mode cfg bit2, detail info please read manual PCC[26] */
#define GPIO_PCC3_PC112_B3                   (BIT(8))                                            /*!< PC112 mode cfg bit3, detail info please read manual PCC[26] */
#define GPIO_PCC3_PC113_B1                   (BIT(9))                                            /*!< PC113 mode cfg bit1, detail info please read manual PCC[27] */
#define GPIO_PCC3_PC113_B2                   (BIT(10))                                           /*!< PC113 mode cfg bit2, detail info please read manual PCC[27] */
#define GPIO_PCC3_PC113_B3                   (BIT(11))                                           /*!< PC113 mode cfg bit3, detail info please read manual PCC[27] */
#define GPIO_PCC3_PC114                      (BITS(12,15))                                       /*!< PC114 mode cfg bits */
#define GPIO_PCC3_PC115                      (BITS(16,19))                                       /*!< PC115 mode cfg bits */
#define GPIO_PCC3_PC116                      (BITS(20,23))                                       /*!< PC116 mode cfg bits */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCC3_PC117                      (BITS(24,27))                                       /*!< PC117 mode cfg bits */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PCC4 */
#define GPIO_PCC4_PC80_B1                    (BIT(0))                                            /*!< PC80 mode cfg bit1, detail info please read manual PCC[0] */
#define GPIO_PCC4_PC80_B2                    (BIT(1))                                            /*!< PC80 mode cfg bit2, detail info please read manual PCC[0] */
#define GPIO_PCC4_PC80_B3                    (BIT(2))                                            /*!< PC80 mode cfg bit3, detail info please read manual PCC[0] */
#define GPIO_PCC4_PC81_B1                    (BIT(3))                                            /*!< PC81 mode cfg bit1, detail info please read manual PCC[1] */
#define GPIO_PCC4_PC81_B2                    (BIT(4))                                            /*!< PC81 mode cfg bit2, detail info please read manual PCC[1] */
#define GPIO_PCC4_PC81_B3                    (BIT(5))                                            /*!< PC81 mode cfg bit3, detail info please read manual PCC[1] */
#endif
#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCC4_PC82_B1                    (BIT(6))                                            /*!< PC82 mode cfg bit1, detail info please read manual PCC[2] */
#define GPIO_PCC4_PC82_B2                    (BIT(7))                                            /*!< PC82 mode cfg bit2, detail info please read manual PCC[2] */
#define GPIO_PCC4_PC82_B3                    (BIT(8))                                            /*!< PC82 mode cfg bit3, detail info please read manual PCC[2] */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)

#define GPIO_PCC4_PC83_B1                    (BIT(9))                                            /*!< PC83 mode cfg bit1, detail info please read manual PCC[3] */
#define GPIO_PCC4_PC83_B2                    (BIT(10))                                           /*!< PC83 mode cfg bit2, detail info please read manual PCC[3] */
#define GPIO_PCC4_PC83_B3                    (BIT(11))                                           /*!< PC83 mode cfg bit3, detail info please read manual PCC[3] */
#define GPIO_PCC4_PC84_B1                    (BIT(12))                                           /*!< PC84 mode cfg bit1, detail info please read manual PCC[4] */
#define GPIO_PCC4_PC84_B2                    (BIT(13))                                           /*!< PC84 mode cfg bit2, detail info please read manual PCC[4] */
#define GPIO_PCC4_PC84_B3                    (BIT(14))                                           /*!< PC84 mode cfg bit3, detail info please read manual PCC[4] */
#endif

#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PCC5 */
#define GPIO_PCC5_PC90_B1                    (BIT(0))                                            /*!< PC90 mode cfg bit1, detail info please read manual PCC[8] */
#define GPIO_PCC5_PC90_B2                    (BIT(1))                                            /*!< PC90 mode cfg bit2, detail info please read manual PCC[8] */
#define GPIO_PCC5_PC90_B3                    (BIT(2))                                            /*!< PC90 mode cfg bit3, detail info please read manual PCC[8] */
#define GPIO_PCC5_PC91_B1                    (BIT(3))                                            /*!< PC91 mode cfg bit1, detail info please read manual PCC[9] */
#define GPIO_PCC5_PC91_B2                    (BIT(4))                                            /*!< PC91 mode cfg bit2, detail info please read manual PCC[9] */
#define GPIO_PCC5_PC91_B3                    (BIT(5))                                            /*!< PC91 mode cfg bit3, detail info please read manual PCC[9] */
#define GPIO_PCC5_PC92_B1                    (BIT(6))                                            /*!< PC92 mode cfg bit1, detail info please read manual PCC[10] */
#define GPIO_PCC5_PC92_B2                    (BIT(7))                                            /*!< PC92 mode cfg bit2, detail info please read manual PCC[10] */
#define GPIO_PCC5_PC92_B3                    (BIT(8))                                            /*!< PC92 mode cfg bit3, detail info please read manual PCC[10] */
#define GPIO_PCC5_PC93_B1                    (BIT(9))                                            /*!< PC93 mode cfg bit1, detail info please read manual PCC[11] */
#define GPIO_PCC5_PC93_B2                    (BIT(10))                                           /*!< PC93 mode cfg bit2, detail info please read manual PCC[11] */
#define GPIO_PCC5_PC93_B3                    (BIT(11))                                           /*!< PC93 mode cfg bit3, detail info please read manual PCC[11] */
#define GPIO_PCC5_PC94_B1                    (BIT(12))                                           /*!< PC94 mode cfg bit1, detail info please read manual PCC[12] */
#define GPIO_PCC5_PC94_B2                    (BIT(13))                                           /*!< PC94 mode cfg bit2, detail info please read manual PCC[12] */
#define GPIO_PCC5_PC94_B3                    (BIT(14))                                           /*!< PC94 mode cfg bit3, detail info please read manual PCC[12] */
#define GPIO_PCC5_PC95_B1                    (BIT(15))                                           /*!< PC95 mode cfg bit1, detail info please read manual PCC[13] */
#define GPIO_PCC5_PC95_B2                    (BIT(16))                                           /*!< PC95 mode cfg bit2, detail info please read manual PCC[13] */
#define GPIO_PCC5_PC95_B3                    (BIT(17))                                           /*!< PC95 mode cfg bit3, detail info please read manual PCC[13] */
#endif

/* GPIO_PCD2 */
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCD2_PC140                      (BITS(0,3))                                         /*!< PC140 mode cfg bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCD2_PC141                      (BITS(4,7))                                         /*!< PC141 mode cfg bits */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCD2_PC142                      (BITS(8,11))                                        /*!< PC142 mode cfg bits */
#define GPIO_PCD2_PC143                      (BITS(12,15))                                       /*!< PC143 mode cfg bits */
#define GPIO_PCD2_PC144                      (BITS(16,19))                                       /*!< PC144 mode cfg bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCD2_PC145                      (BITS(20,23))                                       /*!< PC145 mode cfg bits */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCD2_PC146                      (BITS(24,27))                                       /*!< PC146 mode cfg bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_PCD2_PC147                      (BITS(28,31))                                       /*!< PC147 mode cfg bits */

/* GPIO_PIMA2 */
#define GPIO_PIMA2_PID30                     (BIT(0))                                            /*!< P30 output mode cfg bit */
#define GPIO_PIMA2_PID31                     (BIT(1))                                            /*!< P31 output mode cfg bit */
#define GPIO_PIMA2_PID32                     (BIT(2))                                            /*!< P32 output mode cfg bit */
#define GPIO_PIMA2_PID33                     (BIT(3))                                            /*!< P33 output mode cfg bit */
#define GPIO_PIMA2_PID34                     (BIT(4))                                            /*!< P34 output mode cfg bit */
#define GPIO_PIMA2_PID35                     (BIT(5))                                            /*!< P35 output mode cfg bit */
#define GPIO_PIMA2_PID36                     (BIT(6))                                            /*!< P36 output mode cfg bit */
#define GPIO_PIMA2_PID37                     (BIT(7))                                            /*!< P37 output mode cfg bit */
#define GPIO_PIMA2_PIL30                     (BIT(8))                                            /*!< P30 input mode cfg bit */
#define GPIO_PIMA2_PIL31                     (BIT(9))                                            /*!< P31 input mode cfg bit */
#define GPIO_PIMA2_PIL32                     (BIT(10))                                           /*!< P32 input mode cfg bit */
#define GPIO_PIMA2_PIL33                     (BIT(11))                                           /*!< P33 input mode cfg bit */
#define GPIO_PIMA2_PIL34                     (BIT(12))                                           /*!< P34 input mode cfg bit */
#define GPIO_PIMA2_PIL35                     (BIT(13))                                           /*!< P35 input mode cfg bit */
#define GPIO_PIMA2_PIL36                     (BIT(14))                                           /*!< P36 input mode cfg bit */
#define GPIO_PIMA2_PIL37                     (BIT(15))                                           /*!< P37 input mode cfg bit */
#endif

#if defined(RN821x_RN721x_SOC_V3)
/* GPIO_PCB5 */
#define GPIO_PCB5_PC70_B1                    (BIT(0))                                            /*!< P70 mode cfg bit1, detail info please read manual PCB[24] */
#define GPIO_PCB5_PC70_B2                    (BIT(1))                                            /*!< P70 mode cfg bit2, detail info please read manual PCB[24] */
#define GPIO_PCB5_PC70_B3                    (BIT(2))                                            /*!< P70 mode cfg bit3, detail info please read manual PCB[24] */
#define GPIO_PCB5_PC71_B1                    (BIT(3))                                            /*!< P71 mode cfg bit1, detail info please read manual PCB[25] */
#define GPIO_PCB5_PC71_B2                    (BIT(4))                                            /*!< P71 mode cfg bit2, detail info please read manual PCB[25] */
#define GPIO_PCB5_PC71_B3                    (BIT(5))                                            /*!< P71 mode cfg bit3, detail info please read manual PCB[25] */
#define GPIO_PCB5_PC72_B1                    (BIT(6))                                            /*!< P72 mode cfg bit1, detail info please read manual PCB[26] */
#define GPIO_PCB5_PC72_B2                    (BIT(7))                                            /*!< P72 mode cfg bit2, detail info please read manual PCB[26] */
#define GPIO_PCB5_PC72_B3                    (BIT(8))                                            /*!< P72 mode cfg bit3, detail info please read manual PCB[26] */
#define GPIO_PCB5_PC73_B1                    (BIT(9))                                            /*!< P73 mode cfg bit1, detail info please read manual PCB[27] */
#define GPIO_PCB5_PC73_B2                    (BIT(10))                                           /*!< P73 mode cfg bit2, detail info please read manual PCB[27] */
#define GPIO_PCB5_PC73_B3                    (BIT(11))                                           /*!< P73 mode cfg bit3, detail info please read manual PCB[27] */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_LURT_CFG */
#define GPIO_LURT_CFG_LURT_CFG               (BITS(0,2))                                         /*!< LPUART and UARTx IO cfg bits */

/* GPIO_IOCFG */
#define GPIO_IOCFG_P14                       (BIT(0))                                            /*!< P14 IO driving capability select bit */
#define GPIO_IOCFG_P15                       (BIT(1))                                            /*!< P15 IO driving capability select bit */
#define GPIO_IOCFG_P16                       (BIT(2))                                            /*!< P16 IO driving capability select bit */
#define GPIO_IOCFG_P17                       (BIT(3))                                            /*!< P17 IO driving capability select bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_IOCFG_P20                       (BIT(4))                                            /*!< P20 IO driving capability select bit */
#define GPIO_IOCFG_P21                       (BIT(5))                                            /*!< P21 IO driving capability select bit */
#define GPIO_IOCFG_P22                       (BIT(6))                                            /*!< P22 IO driving capability select bit */
#define GPIO_IOCFG_P23                       (BIT(7))                                            /*!< P23 IO driving capability select bit */
#define GPIO_IOCFG_P40                       (BIT(8))                                            /*!< P40 IO driving capability select bit */
#define GPIO_IOCFG_P41                       (BIT(9))                                            /*!< P41 IO driving capability select bit */
#define GPIO_IOCFG_P42                       (BIT(10))                                           /*!< P42 IO driving capability select bit */
#define GPIO_IOCFG_P43                       (BIT(11))                                           /*!< P43 IO driving capability select bit */
#define GPIO_IOCFG_P44                       (BIT(12))                                           /*!< P44 IO driving capability select bit */
#define GPIO_IOCFG_P45                       (BIT(13))                                           /*!< P45 IO driving capability select bit */
#define GPIO_IOCFG_P46                       (BIT(14))                                           /*!< P46 IO driving capability select bit */
#define GPIO_IOCFG_P47                       (BIT(15))                                           /*!< P47 IO driving capability select bit */
#define GPIO_IOCFG_P52                       (BIT(16))                                           /*!< P52 IO driving capability select bit */
#define GPIO_IOCFG_P53                       (BIT(17))                                           /*!< P53 IO driving capability select bit */
#define GPIO_IOCFG_P54                       (BIT(18))                                           /*!< P54 IO driving capability select bit */
#define GPIO_IOCFG_P55                       (BIT(19))                                           /*!< P55 IO driving capability select bit */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define GPIO_IOCFG_P110                      (BIT(20))                                           /*!< P110 IO driving capability select bit */
#define GPIO_IOCFG_P111                      (BIT(21))                                           /*!< P111 IO driving capability select bit */
#define GPIO_IOCFG_P112                      (BIT(22))                                           /*!< P112 IO driving capability select bit */
#define GPIO_IOCFG_P113                      (BIT(23))                                           /*!< P113 IO driving capability select bit */
#define GPIO_IOCFG_P143                      (BIT(24))                                           /*!< P143 IO driving capability select bit */
#define GPIO_IOCFG_P144                      (BIT(25))                                           /*!< P144 IO driving capability select bit */
#define GPIO_IOCFG_P145                      (BIT(26))                                           /*!< P145 IO driving capability select bit */
#define GPIO_IOCFG_P146                      (BIT(27))                                           /*!< P146 IO driving capability select bit */
#endif

/* constants definitions */
#if defined(RN821x_RN721x_SOC_V2) || defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_C) || defined(RN821x_RN721x_SOC_B)
/* GPIO_PCA0_PC201 */
#define GPIO_PCA0_PC201_IO                   ((uint32_t)0x00000000U)                             /*!< P20 and P21 use as general IO, available when PCA3.PC201(PCA3[6]) = 0 */
#define GPIO_PCA0_PC201_UART0                (GPIO_PCA0_PC201)                                   /*!< P20(RX0) and P21(TX0) use as UART0, available when PCA3.PC201(PCA3[6]) = 0 */

/* GPIO_PCA0_PC223 */
#define GPIO_PCA0_PC223_IO                   ((uint32_t)0x00000000U)                             /*!< P22 and P23 use as general IO, available when PCA3.PC223(PCA3[13]) = 0 */
#define GPIO_PCA0_PC223_UART1                (GPIO_PCA0_PC223)                                   /*!< P22(RX1) and P23(TX1) use as UART1, available when PCA3.PC223(PCA3[13]) = 0 */

/* GPIO_PCA0_PC245 */
#define GPIO_PCA0_PC245_IO                   ((uint32_t)0x00000000U)                             /*!< P24 and P25 use as general IO, available when PCA3.PC245(PCA3[20]) = 0 and PCA0.SWD_SEL(PCA0[29]) =0 */
#define GPIO_PCA0_PC245_UART2                (GPIO_PCA0_PC245)                                   /*!< P24(RX2) and P25(TX2) use as UART2, available when PCA3.PC245(PCA3[20]) = 0 and PCA0.SWD_SEL(PCA0[29]) =0 */

/* GPIO_PCA0_PC267 */
#define GPIO_PCA0_PC267_IO                   ((uint32_t)0x00000000U)                             /*!< P26 and P27 use as general IO, available when PCA3.PC267(PCA3[27]) = 0 */
#define GPIO_PCA0_PC267_UART3                (GPIO_PCA0_PC267)                                   /*!< P26(RX3) and P27(TX3) use as UART3, available when PCA3.PC267(PCA3[27]) = 0 */

/* GPIO_PCA0_SWD_SEL */
#define GPIO_PCA0_SWD_SEL_OTH                ((uint32_t)0x00000000U)                             /*!< when PCA3.PC245(PCA3[20]) = 0, P24 P25 function define by PCA0.PCA0_PC245 */
#define GPIO_PCA0_SWD_SEL_P245               (GPIO_PCA0_SWD_SEL)                                 /*!< when PCA3.PC245(PCA3[20]) = 0, use P24 as SWDCLK and P25 as SWDIO */
#endif

/* GPIO_PCA0_UART2_SEL */
#if defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_C) || defined(RN821x_RN721x_SOC_B)
#define GPIO_PCA0_UART2_SEL_PC245            ((uint32_t)0x00000000U)                             /*!< select P24/P25 as UART2, when P24/P25 PC245 properly cfg as UART2 */
#define GPIO_PCA0_UART2_SEL_PC0_1            (GPIO_PCA0_UART2_SEL)                               /*!< select P00/P01 as UART2, when P00/P01 PC00 PC01 properly cfg as UART2 */
#elif defined(RN821x_RN721x_SOC_V2)
#define GPIO_PCA0_UART2_SEL_CFG(regval)  (GPIO_PCA0_UART2_SEL & ((uint32_t)(regval) << 30))
#define GPIO_PCA0_UART2_SEL_PC245            (GPIO_PCA0_UART2_SEL_CFG(0))                        /*!< select P24/P25 as UART2, when P24/P25 PC245 properly cfg as UART2 */
#define GPIO_PCA0_UART2_SEL_PC0_1            (GPIO_PCA0_UART2_SEL_CFG(1))                        /*!< select P00/P01 as UART2, when P00/P01 PC00 PC01 properly cfg as UART2 */
#define GPIO_PCA0_UART2_SEL_PC223            (GPIO_PCA0_UART2_SEL_CFG(2))                        /*!< select P22/P23 as UART2, when P22/P23 PC223 properly cfg as UART2 */
#define GPIO_PCA0_UART2_SEL_PC267            (GPIO_PCA0_UART2_SEL_CFG(3))                        /*!< select P26/P27 as UART2, when P26/P27 PC267 properly cfg as UART2 */
#endif

/* GPIO_PIMA_PID10 */
#define GPIO_PIMA_PID10_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID10_NCH                  (GPIO_PIMA_PID10)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID11 */
#define GPIO_PIMA_PID11_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID11_NCH                  (GPIO_PIMA_PID11)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID12 */
#define GPIO_PIMA_PID12_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID12_NCH                  (GPIO_PIMA_PID12)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID13 */
#define GPIO_PIMA_PID13_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID13_NCH                  (GPIO_PIMA_PID13)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID14 */
#define GPIO_PIMA_PID14_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID14_NCH                  (GPIO_PIMA_PID14)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID15 */
#define GPIO_PIMA_PID15_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID15_NCH                  (GPIO_PIMA_PID15)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID16 */
#define GPIO_PIMA_PID16_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID16_NCH                  (GPIO_PIMA_PID16)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID17 */
#define GPIO_PIMA_PID17_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID17_NCH                  (GPIO_PIMA_PID17)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID20 */
#define GPIO_PIMA_PID20_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID20_NCH                  (GPIO_PIMA_PID20)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID21 */
#define GPIO_PIMA_PID21_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID21_NCH                  (GPIO_PIMA_PID21)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID22 */
#define GPIO_PIMA_PID22_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID22_NCH                  (GPIO_PIMA_PID22)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID23 */
#define GPIO_PIMA_PID23_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID23_NCH                  (GPIO_PIMA_PID23)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID24 */
#define GPIO_PIMA_PID24_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID24_NCH                  (GPIO_PIMA_PID24)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID25 */
#define GPIO_PIMA_PID25_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID25_NCH                  (GPIO_PIMA_PID25)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID26 */
#define GPIO_PIMA_PID26_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID26_NCH                  (GPIO_PIMA_PID26)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PID27 */
#define GPIO_PIMA_PID27_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA_PID27_NCH                  (GPIO_PIMA_PID27)                                   /*!< select as N channel open drain output */

/* GPIO_PIMA_PIL10 */
#define GPIO_PIMA_PIL10_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL10_TTL                  (GPIO_PIMA_PIL10)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL11 */
#define GPIO_PIMA_PIL11_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL11_TTL                  (GPIO_PIMA_PIL11)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL12 */
#define GPIO_PIMA_PIL12_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL12_TTL                  (GPIO_PIMA_PIL12)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL13 */
#define GPIO_PIMA_PIL13_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL13_TTL                  (GPIO_PIMA_PIL13)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL14 */
#define GPIO_PIMA_PIL14_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL14_TTL                  (GPIO_PIMA_PIL14)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL15 */
#define GPIO_PIMA_PIL15_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL15_TTL                  (GPIO_PIMA_PIL15)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL16 */
#define GPIO_PIMA_PIL16_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL16_TTL                  (GPIO_PIMA_PIL16)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL17 */
#define GPIO_PIMA_PIL17_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL17_TTL                  (GPIO_PIMA_PIL17)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL20 */
#define GPIO_PIMA_PIL20_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL20_TTL                  (GPIO_PIMA_PIL20)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL21 */
#define GPIO_PIMA_PIL21_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL21_TTL                  (GPIO_PIMA_PIL21)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL22 */
#define GPIO_PIMA_PIL22_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL22_TTL                  (GPIO_PIMA_PIL22)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL23 */
#define GPIO_PIMA_PIL23_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL23_TTL                  (GPIO_PIMA_PIL23)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL24 */
#define GPIO_PIMA_PIL24_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL24_TTL                  (GPIO_PIMA_PIL24)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL25 */
#define GPIO_PIMA_PIL25_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL25_TTL                  (GPIO_PIMA_PIL25)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL26 */
#define GPIO_PIMA_PIL26_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL26_TTL                  (GPIO_PIMA_PIL26)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA_PIL27 */
#define GPIO_PIMA_PIL27_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA_PIL27_TTL                  (GPIO_PIMA_PIL27)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

#if defined(RN821x_RN721x_SOC_V2) || defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_C) || defined(RN821x_RN721x_SOC_B)
/* GPIO_PCB_PC60 */
#define GPIO_PCB_PC60_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC60_LCD                    (GPIO_PCB_PC60)                                     /*!< use as LCD */

/* GPIO_PCB_PC61 */
#define GPIO_PCB_PC61_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC61_LCD                    (GPIO_PCB_PC61)                                     /*!< use as LCD */

/* GPIO_PCB_PC62 */
#define GPIO_PCB_PC62_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC62_LCD                    (GPIO_PCB_PC62)                                     /*!< use as LCD */

/* GPIO_PCB_PC63 */
#define GPIO_PCB_PC63_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC63_LCD                    (GPIO_PCB_PC63)                                     /*!< use as LCD */

/* GPIO_PCB_PC64 */
#define GPIO_PCB_PC64_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC64_LCD                    (GPIO_PCB_PC64)                                     /*!< use as LCD */

/* GPIO_PCB_PC65 */
#define GPIO_PCB_PC65_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC65_LCD                    (GPIO_PCB_PC65)                                     /*!< use as LCD */

/* GPIO_PCB_PC66 */
#define GPIO_PCB_PC66_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC66_LCD                    (GPIO_PCB_PC66)                                     /*!< use as LCD */

/* GPIO_PCB_PC67 */
#define GPIO_PCB_PC67_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC67_LCD                    (GPIO_PCB_PC67)                                     /*!< use as LCD */

/* GPIO_PCB_PC70 */
#define GPIO_PCB_PC70_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC70_LCD                    (GPIO_PCB_PC70)                                     /*!< use as LCD */

/* GPIO_PCB_PC71 */
#define GPIO_PCB_PC71_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC71_LCD                    (GPIO_PCB_PC71)                                     /*!< use as LCD */

/* GPIO_PCB_PC72 */
#define GPIO_PCB_PC72_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC72_LCD                    (GPIO_PCB_PC72)                                     /*!< use as LCD */

/* GPIO_PCB_PC73 */
#define GPIO_PCB_PC73_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC73_LCD                    (GPIO_PCB_PC73)                                     /*!< use as LCD */

/* GPIO_PCB_PC74 */
#define GPIO_PCB_PC74_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC74_LCD                    (GPIO_PCB_PC74)                                     /*!< use as LCD */

/* GPIO_PCB_PC75 */
#define GPIO_PCB_PC75_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC75_LCD                    (GPIO_PCB_PC75)                                     /*!< use as LCD */

/* GPIO_PCB_PC76 */
#define GPIO_PCB_PC76_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC76_LCD                    (GPIO_PCB_PC76)                                     /*!< use as LCD */

/* GPIO_PCB_PC77 */
#define GPIO_PCB_PC77_IO                     ((uint32_t)0x00000000U)                             /*!< use as general IO */
#define GPIO_PCB_PC77_LCD                    (GPIO_PCB_PC77)                                     /*!< use as LCD */
#endif

/* GPIO_PIMB_PID40 */
#define GPIO_PIMB_PID40_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID40_NCH                  (GPIO_PIMB_PID40)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID41 */
#define GPIO_PIMB_PID41_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID41_NCH                  (GPIO_PIMB_PID41)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID42 */
#define GPIO_PIMB_PID42_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID42_NCH                  (GPIO_PIMB_PID42)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID43 */
#define GPIO_PIMB_PID43_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID43_NCH                  (GPIO_PIMB_PID43)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID44 */
#define GPIO_PIMB_PID44_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID44_NCH                  (GPIO_PIMB_PID44)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID45 */
#define GPIO_PIMB_PID45_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID45_NCH                  (GPIO_PIMB_PID45)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID46 */
#define GPIO_PIMB_PID46_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID46_NCH                  (GPIO_PIMB_PID46)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID47 */
#define GPIO_PIMB_PID47_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID47_NCH                  (GPIO_PIMB_PID47)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID50 */
#define GPIO_PIMB_PID50_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID50_NCH                  (GPIO_PIMB_PID50)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID51 */
#define GPIO_PIMB_PID51_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID51_NCH                  (GPIO_PIMB_PID51)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID52 */
#define GPIO_PIMB_PID52_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID52_NCH                  (GPIO_PIMB_PID52)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID53 */
#define GPIO_PIMB_PID53_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID53_NCH                  (GPIO_PIMB_PID53)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID54 */
#define GPIO_PIMB_PID54_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID54_NCH                  (GPIO_PIMB_PID54)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID55 */
#define GPIO_PIMB_PID55_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID55_NCH                  (GPIO_PIMB_PID55)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID56 */
#define GPIO_PIMB_PID56_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID56_NCH                  (GPIO_PIMB_PID56)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PID57 */
#define GPIO_PIMB_PID57_NORM                 ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMB_PID57_NCH                  (GPIO_PIMB_PID57)                                   /*!< select as N channel open drain output */

/* GPIO_PIMB_PIL40 */
#define GPIO_PIMB_PIL40_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL40_TTL                  (GPIO_PIMB_PIL40)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL41 */
#define GPIO_PIMB_PIL41_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL41_TTL                  (GPIO_PIMB_PIL41)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL42 */
#define GPIO_PIMB_PIL42_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL42_TTL                  (GPIO_PIMB_PIL42)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL43 */
#define GPIO_PIMB_PIL43_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL43_TTL                  (GPIO_PIMB_PIL43)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL44 */
#define GPIO_PIMB_PIL44_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL44_TTL                  (GPIO_PIMB_PIL44)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL45 */
#define GPIO_PIMB_PIL45_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL45_TTL                  (GPIO_PIMB_PIL45)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL46 */
#define GPIO_PIMB_PIL46_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL46_TTL                  (GPIO_PIMB_PIL46)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL47 */
#define GPIO_PIMB_PIL47_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL47_TTL                  (GPIO_PIMB_PIL47)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL50 */
#define GPIO_PIMB_PIL50_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL50_TTL                  (GPIO_PIMB_PIL50)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL51 */
#define GPIO_PIMB_PIL51_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL51_TTL                  (GPIO_PIMB_PIL51)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL52 */
#define GPIO_PIMB_PIL52_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL52_TTL                  (GPIO_PIMB_PIL52)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL53 */
#define GPIO_PIMB_PIL53_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL53_TTL                  (GPIO_PIMB_PIL53)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL54 */
#define GPIO_PIMB_PIL54_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL54_TTL                  (GPIO_PIMB_PIL54)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL55 */
#define GPIO_PIMB_PIL55_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL55_TTL                  (GPIO_PIMB_PIL55)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL56 */
#define GPIO_PIMB_PIL56_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL56_TTL                  (GPIO_PIMB_PIL56)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMB_PIL57 */
#define GPIO_PIMB_PIL57_CMOS                 ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMB_PIL57_TTL                  (GPIO_PIMB_PIL57)                                   /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

#if defined(RN821x_RN721x_SOC_V2) || defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_C) || defined(RN821x_RN721x_SOC_B)
/* GPIO_PCC_PC82 */
#define GPIO_PCC_PC82_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC82_LCD                    (GPIO_PCC_PC82)                                     /*!< select as LCD */

/* GPIO_PCC_PC85 */
#define GPIO_PCC_PC85_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC85_LCD                    (GPIO_PCC_PC85)                                     /*!< select as LCD */

/* GPIO_PCC_PC86 */
#define GPIO_PCC_PC86_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC86_LCD                    (GPIO_PCC_PC86)                                     /*!< select as LCD */

/* GPIO_PCC_PC87 */
#define GPIO_PCC_PC87_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC87_LCD                    (GPIO_PCC_PC87)                                     /*!< select as LCD */

/* GPIO_PCC_PC90 */
#define GPIO_PCC_PC90_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC90_LCD                    (GPIO_PCC_PC90)                                     /*!< select as LCD */

/* GPIO_PCC_PC91 */
#define GPIO_PCC_PC91_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC91_LCD                    (GPIO_PCC_PC91)                                     /*!< select as LCD */

/* GPIO_PCC_PC92 */
#define GPIO_PCC_PC92_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC92_LCD                    (GPIO_PCC_PC92)                                     /*!< select as LCD */

/* GPIO_PCC_PC93 */
#define GPIO_PCC_PC93_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC93_LCD                    (GPIO_PCC_PC93)                                     /*!< select as LCD */

/* GPIO_PCC_PC94 */
#define GPIO_PCC_PC94_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC94_LCD                    (GPIO_PCC_PC94)                                     /*!< select as LCD */

/* GPIO_PCC_PC95 */
#define GPIO_PCC_PC95_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC95_LCD                    (GPIO_PCC_PC95)                                     /*!< select as LCD */

/* GPIO_PCC_PC96 */
#define GPIO_PCC_PC96_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC96_LCD                    (GPIO_PCC_PC96)                                     /*!< select as LCD */

/* GPIO_PCC_PC97 */
#define GPIO_PCC_PC97_IO                     ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC97_LCD                    (GPIO_PCC_PC97)                                     /*!< select as LCD */

/* GPIO_PCC_PC100 */
#define GPIO_PCC_PC100_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC100_LCD                   (GPIO_PCC_PC100)                                    /*!< select as LCD */

/* GPIO_PCC_PC101 */
#define GPIO_PCC_PC101_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC101_LCD                   (GPIO_PCC_PC101)                                    /*!< select as LCD */

/* GPIO_PCC_PC102 */
#define GPIO_PCC_PC102_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC102_LCD                   (GPIO_PCC_PC102)                                    /*!< select as LCD */

/* GPIO_PCC_PC103 */
#define GPIO_PCC_PC103_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC_PC103_LCD                   (GPIO_PCC_PC103)                                    /*!< select as LCD */

/* GPIO_PCC_SPI_MUX */
#define GPIO_PCC_SPI_MUX_P4                  ((uint32_t)0x00000000U)                             /*!< select P50/P51/P46/P47 as SPI0 */
#define GPIO_PCC_SPI_MUX_P11                 (GPIO_PCC_SPI_MUX)                                  /*!< select P110/P111/P112/P113 as SPI0 */
#endif

/* GPIO_PIMC_PID110 */
#define GPIO_PIMC_PID110_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMC_PID110_NCH                 (GPIO_PIMC_PID110)                                  /*!< select as N channel open drain output */

/* GPIO_PIMC_PID111 */
#define GPIO_PIMC_PID111_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMC_PID111_NCH                 (GPIO_PIMC_PID111)                                  /*!< select as N channel open drain output */

/* GPIO_PIMC_PID112 */
#define GPIO_PIMC_PID112_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMC_PID112_NCH                 (GPIO_PIMC_PID112)                                  /*!< select as N channel open drain output */

/* GPIO_PIMC_PID113 */
#define GPIO_PIMC_PID113_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMC_PID113_NCH                 (GPIO_PIMC_PID113)                                  /*!< select as N channel open drain output */

/* GPIO_PIMC_PIL110 */
#define GPIO_PIMC_PIL110_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL110_TTL                 (GPIO_PIMC_PIL110)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL111 */
#define GPIO_PIMC_PIL111_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL111_TTL                 (GPIO_PIMC_PIL111)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL112 */
#define GPIO_PIMC_PIL112_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL112_TTL                 (GPIO_PIMC_PIL112)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL113 */
#define GPIO_PIMC_PIL113_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL113_TTL                 (GPIO_PIMC_PIL113)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PIMC_PIL104 */
#define GPIO_PIMC_PIL104_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL104_TTL                 (GPIO_PIMC_PIL104)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL105 */
#define GPIO_PIMC_PIL105_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL105_TTL                 (GPIO_PIMC_PIL105)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL106 */
#define GPIO_PIMC_PIL106_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL106_TTL                 (GPIO_PIMC_PIL106)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL107 */
#define GPIO_PIMC_PIL107_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL107_TTL                 (GPIO_PIMC_PIL107)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL114 */
#define GPIO_PIMC_PIL114_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL114_TTL                 (GPIO_PIMC_PIL114)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL115 */
#define GPIO_PIMC_PIL115_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL115_TTL                 (GPIO_PIMC_PIL115)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PIMC_PIL116 */
#define GPIO_PIMC_PIL116_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL116_TTL                 (GPIO_PIMC_PIL116)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMC_PIL117 */
#define GPIO_PIMC_PIL117_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMC_PIL117_TTL                 (GPIO_PIMC_PIL117)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PCD_PC120 */
#define GPIO_PCD_PC120_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC120_LCD                   (GPIO_PCD_PC120)                                    /*!< select as LCD */

/* GPIO_PCD_PC121 */
#define GPIO_PCD_PC121_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC121_LCD                   (GPIO_PCD_PC121)                                    /*!< select as LCD */

/* GPIO_PCD_PC122 */
#define GPIO_PCD_PC122_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC122_LCD                   (GPIO_PCD_PC122)                                    /*!< select as LCD */

/* GPIO_PCD_PC123 */
#define GPIO_PCD_PC123_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC123_LCD                   (GPIO_PCD_PC123)                                    /*!< select as LCD */

/* GPIO_PCD_PC124 */
#define GPIO_PCD_PC124_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC124_LCD                   (GPIO_PCD_PC124)                                    /*!< select as LCD */

/* GPIO_PCD_PC125 */
#define GPIO_PCD_PC125_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC125_LCD                   (GPIO_PCD_PC125)                                    /*!< select as LCD */

/* GPIO_PCD_PC126 */
#define GPIO_PCD_PC126_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC126_LCD                   (GPIO_PCD_PC126)                                    /*!< select as LCD */

/* GPIO_PCD_PC127 */
#define GPIO_PCD_PC127_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC127_LCD                   (GPIO_PCD_PC127)                                    /*!< select as LCD */

/* GPIO_PCD_PC130 */
#define GPIO_PCD_PC130_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC130_LCDVA                 (GPIO_PCD_PC130)                                    /*!< select as LCDVA */

/* GPIO_PCD_PC131 */
#define GPIO_PCD_PC131_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC131_LCDVB                 (GPIO_PCD_PC131)                                    /*!< select as LCDVB */

/* GPIO_PCD_PC132 */
#define GPIO_PCD_PC132_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC132_LCDVC                 (GPIO_PCD_PC132)                                    /*!< select as LCDVC */

/* GPIO_PCD_PC134 */
#define GPIO_PCD_PC134_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC134_LCDVP1                (GPIO_PCD_PC134)                                    /*!< select as LCDVP1 */

/* GPIO_PCD_PC135 */
#define GPIO_PCD_PC135_IO                    ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD_PC135_LCDVP2                (GPIO_PCD_PC135)                                    /*!< select as LCDVP2 */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PIMD_PID140 */
#define GPIO_PIMD_PID140_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMD_PID140_NCH                 (GPIO_PIMD_PID140)                                  /*!< select as N channel open drain output */

/* GPIO_PIMD_PID141 */
#define GPIO_PIMD_PID141_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMD_PID141_NCH                 (GPIO_PIMD_PID141)                                  /*!< select as N channel open drain output */

/* GPIO_PIMD_PID142 */
#define GPIO_PIMD_PID142_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMD_PID142_NCH                 (GPIO_PIMD_PID142)                                  /*!< select as N channel open drain output */

/* GPIO_PIMD_PID143 */
#define GPIO_PIMD_PID143_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */

/* GPIO_PIMD_PIL140 */
#define GPIO_PIMD_PIL140_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMD_PIL140_TTL                 (GPIO_PIMD_PIL140)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMD_PIL141 */
#define GPIO_PIMD_PIL141_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMD_PIL141_TTL                 (GPIO_PIMD_PIL141)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMD_PIL142 */
#define GPIO_PIMD_PIL142_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMD_PIL142_TTL                 (GPIO_PIMD_PIL142)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PCC3_PC114 */
#define GPIO_PCC3_PC114_IO                   ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC3_PC114_IA_IN                (GPIO_PCC3_PC114)                                   /*!< select as IA_IN */

/* GPIO_PCC3_PC115 */
#define GPIO_PCC3_PC115_IO                   ((uint32_t)0x00000000U)                             /*!< select as general IO(only input) */
#define GPIO_PCC3_PC115_IA_IN                ((uint32_t)0x00020000U)                             /*!< select as IA_IN */

/* GPIO_PCC3_PC116 */
#define GPIO_PCC3_PC116_IO                   ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC3_PC116_AIN6                 (GPIO_PCC3_PC116)                                   /*!< select as analog input AIN6 */

/* GPIO_PCC3_PC117 */
#define GPIO_PCC3_PC117_IO                   ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCC3_PC117_RTC1S                (GPIO_PCC3_PC117)                                   /*!< select as perpetual calendar second output */

/* GPIO_PCD2_PC140 */
#define GPIO_PCD2_PC140_CFG(regval)  (GPIO_PCD2_PC140 & ((uint32_t)(regval) << 0))
#define GPIO_PCD2_PC140_IO                   (GPIO_PCD2_PC140_CFG(0))                            /*!< select as general IO */
#define GPIO_PCD2_PC140_ADC_CLKO             (GPIO_PCD2_PC140_CFG(1))                            /*!< select as ADC_CLKO */
#define GPIO_PCD2_PC140_TRIG_OUT             (GPIO_PCD2_PC140_CFG(2))                            /*!< select as TRIG_OUT */
#define GPIO_PCD2_PC140_RTC1S                (GPIO_PCD2_PC140_CFG(3))                            /*!< select as perpetual calendar second output */

/* GPIO_PCD2_PC141 */
#define GPIO_PCD2_PC141_CFG(regval)  (GPIO_PCD2_PC141 & ((uint32_t)(regval) << 4))
#define GPIO_PCD2_PC141_IO                   (GPIO_PCD2_PC141_CFG(0))                            /*!< select as general IO */
#define GPIO_PCD2_PC141_ADC_CLKO             (GPIO_PCD2_PC141_CFG(1))                            /*!< select as ADC_CLKO */
#define GPIO_PCD2_PC141_TRIG_OUT             (GPIO_PCD2_PC141_CFG(2))                            /*!< select as TRIG_OUT */
#define GPIO_PCD2_PC141_RTC1S                (GPIO_PCD2_PC141_CFG(3))                            /*!< select as perpetual calendar second output */

/* GPIO_PCD2_PC142 */
#define GPIO_PCD2_PC142_CFG(regval)  (GPIO_PCD2_PC142 & ((uint32_t)(regval) << 8))
#define GPIO_PCD2_PC142_IO                   (GPIO_PCD2_PC142_CFG(0))                            /*!< select as general IO */
#define GPIO_PCD2_PC142_ADC_CLKO             (GPIO_PCD2_PC142_CFG(1))                            /*!< select as ADC_CLKO */
#define GPIO_PCD2_PC142_TRIG_OUT             (GPIO_PCD2_PC142_CFG(2))                            /*!< select as TRIG_OUT */
#define GPIO_PCD2_PC142_RTC1S                (GPIO_PCD2_PC142_CFG(3))                            /*!< select as perpetual calendar second output */

/* GPIO_PCD2_PC143 */
#define GPIO_PCD2_PC143_CFG(regval)  (GPIO_PCD2_PC143 & ((uint32_t)(regval) << 12))
#define GPIO_PCD2_PC143_IO                   (GPIO_PCD2_PC143_CFG(0))                            /*!< select as general IO */
#define GPIO_PCD2_PC143_ADC_CLKO             (GPIO_PCD2_PC143_CFG(1))                            /*!< select as ADC_CLKO */
#define GPIO_PCD2_PC143_TRIG_OUT             (GPIO_PCD2_PC143_CFG(2))                            /*!< select as TRIG_OUT */
#define GPIO_PCD2_PC143_SPI2_SCSN            (GPIO_PCD2_PC143_CFG(3))                            /*!< select as SPI2_SCSN */

/* GPIO_PCD2_PC144 */
#define GPIO_PCD2_PC144_CFG(regval)  (GPIO_PCD2_PC144 & ((uint32_t)(regval) << 16))
#define GPIO_PCD2_PC144_IO                   (GPIO_PCD2_PC144_CFG(0))                            /*!< select as general IO */
#define GPIO_PCD2_PC144_ADC_CLKO             (GPIO_PCD2_PC144_CFG(1))                            /*!< select as ADC_CLKO */
#define GPIO_PCD2_PC144_TRIG_OUT             (GPIO_PCD2_PC144_CFG(2))                            /*!< select as TRIG_OUT */
#define GPIO_PCD2_PC144_SPI2_SCLK            (GPIO_PCD2_PC144_CFG(3))                            /*!< select as SPI2_SCLK */

/* GPIO_PCD2_PC145 */
#define GPIO_PCD2_PC145_CFG(regval)  (GPIO_PCD2_PC145 & ((uint32_t)(regval) << 20))
#define GPIO_PCD2_PC145_IO                   (GPIO_PCD2_PC145_CFG(0))                            /*!< select as general IO */
#define GPIO_PCD2_PC145_ADC_CLKO             (GPIO_PCD2_PC145_CFG(1))                            /*!< select as ADC_CLKO */
#define GPIO_PCD2_PC145_TRIG_OUT             (GPIO_PCD2_PC145_CFG(2))                            /*!< select as TRIG_OUT */
#define GPIO_PCD2_PC145_SPI2_MISO            (GPIO_PCD2_PC145_CFG(3))                            /*!< select as SPI2_MISO */

/* GPIO_PCD2_PC146 */
#define GPIO_PCD2_PC146_CFG(regval)  (GPIO_PCD2_PC146 & ((uint32_t)(regval) << 24))
#define GPIO_PCD2_PC146_IO                   (GPIO_PCD2_PC146_CFG(0))                            /*!< select as general IO */
#define GPIO_PCD2_PC146_ADC_CLKO             (GPIO_PCD2_PC146_CFG(1))                            /*!< select as ADC_CLKO */
#define GPIO_PCD2_PC146_TRIG_OUT             (GPIO_PCD2_PC146_CFG(2))                            /*!< select as TRIG_OUT */
#define GPIO_PCD2_PC146_SPI2_MOSI            (GPIO_PCD2_PC146_CFG(3))                            /*!< select as SPI2_MOSI */

/* GPIO_PCD2_PC147 */
#define GPIO_PCD2_PC147_IO                   ((uint32_t)0x00000000U)                             /*!< select as general IO */
#define GPIO_PCD2_PC147_RTC1S                (GPIO_PCD2_PC147)                                   /*!< select as perpetual calendar second output */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_PIMA2_PID30 */
#define GPIO_PIMA2_PID30_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA2_PID30_NCH                 (GPIO_PIMA2_PID30)                                  /*!< select as N channel open drain output */

/* GPIO_PIMA2_PID31 */
#define GPIO_PIMA2_PID31_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA2_PID31_NCH                 (GPIO_PIMA2_PID31)                                  /*!< select as N channel open drain output */

/* GPIO_PIMA2_PID32 */
#define GPIO_PIMA2_PID32_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA2_PID32_NCH                 (GPIO_PIMA2_PID32)                                  /*!< select as N channel open drain output */

/* GPIO_PIMA2_PID33 */
#define GPIO_PIMA2_PID33_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA2_PID33_NCH                 (GPIO_PIMA2_PID33)                                  /*!< select as N channel open drain output */

/* GPIO_PIMA2_PID34 */
#define GPIO_PIMA2_PID34_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA2_PID34_NCH                 (GPIO_PIMA2_PID34)                                  /*!< select as N channel open drain output */

/* GPIO_PIMA2_PID35 */
#define GPIO_PIMA2_PID35_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA2_PID35_NCH                 (GPIO_PIMA2_PID35)                                  /*!< select as N channel open drain output */

/* GPIO_PIMA2_PID36 */
#define GPIO_PIMA2_PID36_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA2_PID36_NCH                 (GPIO_PIMA2_PID36)                                  /*!< select as N channel open drain output */

/* GPIO_PIMA2_PID37 */
#define GPIO_PIMA2_PID37_NORM                ((uint32_t)0x00000000U)                             /*!< select as normal output mode */
#define GPIO_PIMA2_PID37_NCH                 (GPIO_PIMA2_PID37)                                  /*!< select as N channel open drain output */

/* GPIO_PIMA2_PIL30 */
#define GPIO_PIMA2_PIL30_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA2_PIL30_TTL                 (GPIO_PIMA2_PIL30)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA2_PIL31 */
#define GPIO_PIMA2_PIL31_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA2_PIL31_TTL                 (GPIO_PIMA2_PIL31)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA2_PIL32 */
#define GPIO_PIMA2_PIL32_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA2_PIL32_TTL                 (GPIO_PIMA2_PIL32)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA2_PIL33 */
#define GPIO_PIMA2_PIL33_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA2_PIL33_TTL                 (GPIO_PIMA2_PIL33)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA2_PIL34 */
#define GPIO_PIMA2_PIL34_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA2_PIL34_TTL                 (GPIO_PIMA2_PIL34)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA2_PIL35 */
#define GPIO_PIMA2_PIL35_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA2_PIL35_TTL                 (GPIO_PIMA2_PIL35)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA2_PIL36 */
#define GPIO_PIMA2_PIL36_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA2_PIL36_TTL                 (GPIO_PIMA2_PIL36)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */

/* GPIO_PIMA2_PIL37 */
#define GPIO_PIMA2_PIL37_CMOS                ((uint32_t)0x00000000U)                             /*!< select as CMOS input mode, Vil=0.3VCC Vih = 0.7VCC */
#define GPIO_PIMA2_PIL37_TTL                 (GPIO_PIMA2_PIL37)                                  /*!< select as TTL input mode, Vil=0.16VCC Vih = 0.4VCC */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* GPIO_LURT_CFG_LURT_CFG */
#define GPIO_LURT_CFG_LURT_CFG_CFG(regval)  (GPIO_LURT_CFG_LURT_CFG & ((uint32_t)(regval) << 0))
#define GPIO_LURT_CFG_LURT_CFG_NUL           (GPIO_LURT_CFG_LURT_CFG_CFG(0))                     /*!< do not use LPUART */
#define GPIO_LURT_CFG_LURT_CFG_UART0         (GPIO_LURT_CFG_LURT_CFG_CFG(1))                     /*!< LPUART use UART0 IO */
#define GPIO_LURT_CFG_LURT_CFG_UART1         (GPIO_LURT_CFG_LURT_CFG_CFG(2))                     /*!< LPUART use UART1 IO */
#define GPIO_LURT_CFG_LURT_CFG_UART2         (GPIO_LURT_CFG_LURT_CFG_CFG(3))                     /*!< LPUART use UART2 IO */
#define GPIO_LURT_CFG_LURT_CFG_UART3         (GPIO_LURT_CFG_LURT_CFG_CFG(4))                     /*!< LPUART use UART3 IO */
#define GPIO_LURT_CFG_LURT_CFG_UART4         (GPIO_LURT_CFG_LURT_CFG_CFG(5))                     /*!< LPUART use UART4 IO */
#define GPIO_LURT_CFG_LURT_CFG_UART5         (GPIO_LURT_CFG_LURT_CFG_CFG(6))                     /*!< LPUART use UART5 IO */

/* GPIO_IOCFG_P14 */
#define GPIO_IOCFG_P14_FAST                  (GPIO_IOCFG_P14)                                    /*!< select as slew rate fast mode, have driving capability of 3mA */
#define GPIO_IOCFG_P14_SLOW                  ((uint32_t)0x00000000U)                             /*!< select as slew rate slow mode, have driving capability of 1.5mA */
#endif

#endif /* RN821X_RN721X_SOC_GPIO_H */
/* r1730 */
