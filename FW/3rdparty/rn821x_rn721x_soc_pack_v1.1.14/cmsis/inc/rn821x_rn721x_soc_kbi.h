/**
 * @file    rn821x_rn721x_soc_kbi.h
 * @brief   KBI definitions for RN821X_RN721X_SOC
 * @version v1.0.1
 */
#ifndef RN821X_RN721X_SOC_KBI_H
#define RN821X_RN721X_SOC_KBI_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* KBI_CTRL */
#define KBI_CTRL_KEY0                        (BIT(0))                                            /*!< KBI KEY0 enable/disable bit */
#define KBI_CTRL_KEY1                        (BIT(1))                                            /*!< KBI KEY1 enable/disable bit */
#define KBI_CTRL_KEY2                        (BIT(2))                                            /*!< KBI KEY2 enable/disable bit */
#define KBI_CTRL_KEY3                        (BIT(3))                                            /*!< KBI KEY3 enable/disable bit */
#define KBI_CTRL_KEY4                        (BIT(4))                                            /*!< KBI KEY4 enable/disable bit */
#define KBI_CTRL_KEY5                        (BIT(5))                                            /*!< KBI KEY5 enable/disable bit */
#define KBI_CTRL_KEY6                        (BIT(6))                                            /*!< KBI KEY6 enable/disable bit */
#define KBI_CTRL_KEY7                        (BIT(7))                                            /*!< KBI KEY7 enable/disable bit */

/* KBI_SEL */
#define KBI_SEL_KEY0                         (BIT(0))                                            /*!< KBI KEY0 posedge/negedge selection bit */
#define KBI_SEL_KEY1                         (BIT(1))                                            /*!< KBI KEY1 posedge/negedge selection bit */
#define KBI_SEL_KEY2                         (BIT(2))                                            /*!< KBI KEY2 posedge/negedge selection bit */
#define KBI_SEL_KEY3                         (BIT(3))                                            /*!< KBI KEY3 posedge/negedge selection bit */
#define KBI_SEL_KEY4                         (BIT(4))                                            /*!< KBI KEY4 posedge/negedge selection bit */
#define KBI_SEL_KEY5                         (BIT(5))                                            /*!< KBI KEY5 posedge/negedge selection bit */
#define KBI_SEL_KEY6                         (BIT(6))                                            /*!< KBI KEY6 posedge/negedge selection bit */
#define KBI_SEL_KEY7                         (BIT(7))                                            /*!< KBI KEY7 posedge/negedge selection bit */

/* KBI_DATA */
#define KBI_DATA_KEY0                        (BIT(0))                                            /*!< KBI KEY0 data bit indicate key pressed or not */
#define KBI_DATA_KEY1                        (BIT(1))                                            /*!< KBI KEY1 data bit indicate key pressed or not */
#define KBI_DATA_KEY2                        (BIT(2))                                            /*!< KBI KEY2 data bit indicate key pressed or not */
#define KBI_DATA_KEY3                        (BIT(3))                                            /*!< KBI KEY3 data bit indicate key pressed or not */
#define KBI_DATA_KEY4                        (BIT(4))                                            /*!< KBI KEY4 data bit indicate key pressed or not */
#define KBI_DATA_KEY5                        (BIT(5))                                            /*!< KBI KEY5 data bit indicate key pressed or not */
#define KBI_DATA_KEY6                        (BIT(6))                                            /*!< KBI KEY6 data bit indicate key pressed or not */
#define KBI_DATA_KEY7                        (BIT(7))                                            /*!< KBI KEY7 data bit indicate key pressed or not */

/* KBI_MASK */
#define KBI_MASK_KEY0_IE                     (BIT(0))                                            /*!< KBI KEY0 interrupt enable/disable bit */
#define KBI_MASK_KEY1_IE                     (BIT(1))                                            /*!< KBI KEY1 interrupt enable/disable bit */
#define KBI_MASK_KEY2_IE                     (BIT(2))                                            /*!< KBI KEY2 interrupt enable/disable bit */
#define KBI_MASK_KEY3_IE                     (BIT(3))                                            /*!< KBI KEY3 interrupt enable/disable bit */
#define KBI_MASK_KEY4_IE                     (BIT(4))                                            /*!< KBI KEY4 interrupt enable/disable bit */
#define KBI_MASK_KEY5_IE                     (BIT(5))                                            /*!< KBI KEY5 interrupt enable/disable bit */
#define KBI_MASK_KEY6_IE                     (BIT(6))                                            /*!< KBI KEY6 interrupt enable/disable bit */
#define KBI_MASK_KEY7_IE                     (BIT(7))                                            /*!< KBI KEY7 interrupt enable/disable bit */

/* constants definitions */
/* KBI_CTRL_KEY0 */
#define KBI_CTRL_KEY0_EN                     (KBI_CTRL_KEY0)                                     /*!< KBI KEY0 enable */
#define KBI_CTRL_KEY0_DIS                    ((uint32_t)0x00000000U)                             /*!< KBI KEY0 disable */

/* KBI_CTRL_KEY1 */
#define KBI_CTRL_KEY1_EN                     (KBI_CTRL_KEY1)                                     /*!< KBI KEY1 enable */
#define KBI_CTRL_KEY1_DIS                    ((uint32_t)0x00000000U)                             /*!< KBI KEY1 disable */

/* KBI_CTRL_KEY2 */
#define KBI_CTRL_KEY2_EN                     (KBI_CTRL_KEY2)                                     /*!< KBI KEY2 enable */
#define KBI_CTRL_KEY2_DIS                    ((uint32_t)0x00000000U)                             /*!< KBI KEY2 disable */

/* KBI_CTRL_KEY3 */
#define KBI_CTRL_KEY3_EN                     (KBI_CTRL_KEY3)                                     /*!< KBI KEY3 enable */
#define KBI_CTRL_KEY3_DIS                    ((uint32_t)0x00000000U)                             /*!< KBI KEY3 disable */

/* KBI_CTRL_KEY4 */
#define KBI_CTRL_KEY4_EN                     (KBI_CTRL_KEY4)                                     /*!< KBI KEY4 enable */
#define KBI_CTRL_KEY4_DIS                    ((uint32_t)0x00000000U)                             /*!< KBI KEY4 disable */

/* KBI_CTRL_KEY5 */
#define KBI_CTRL_KEY5_EN                     (KBI_CTRL_KEY5)                                     /*!< KBI KEY5 enable */
#define KBI_CTRL_KEY5_DIS                    ((uint32_t)0x00000000U)                             /*!< KBI KEY5 disable */

/* KBI_CTRL_KEY6 */
#define KBI_CTRL_KEY6_EN                     (KBI_CTRL_KEY6)                                     /*!< KBI KEY6 enable */
#define KBI_CTRL_KEY6_DIS                    ((uint32_t)0x00000000U)                             /*!< KBI KEY6 disable */

/* KBI_CTRL_KEY7 */
#define KBI_CTRL_KEY7_EN                     (KBI_CTRL_KEY7)                                     /*!< KBI KEY7 enable */
#define KBI_CTRL_KEY7_DIS                    ((uint32_t)0x00000000U)                             /*!< KBI KEY7 disable */

/* KBI_SEL_KEY0 */
#define KBI_SEL_KEY0_PE                      ((uint32_t)0x00000000U)                             /*!< KBI select posedge sampling */
#define KBI_SEL_KEY0_NE                      (KBI_SEL_KEY0)                                      /*!< KBI select negedge sampling */

/* KBI_SEL_KEY1 */
#define KBI_SEL_KEY1_PE                      ((uint32_t)0x00000000U)                             /*!< KBI select posedge sampling */
#define KBI_SEL_KEY1_NE                      (KBI_SEL_KEY1)                                      /*!< KBI select negedge sampling */

/* KBI_SEL_KEY2 */
#define KBI_SEL_KEY2_PE                      ((uint32_t)0x00000000U)                             /*!< KBI select posedge sampling */
#define KBI_SEL_KEY2_NE                      (KBI_SEL_KEY2)                                      /*!< KBI select negedge sampling */

/* KBI_SEL_KEY3 */
#define KBI_SEL_KEY3_PE                      ((uint32_t)0x00000000U)                             /*!< KBI select posedge sampling */
#define KBI_SEL_KEY3_NE                      (KBI_SEL_KEY3)                                      /*!< KBI select negedge sampling */

/* KBI_SEL_KEY4 */
#define KBI_SEL_KEY4_PE                      ((uint32_t)0x00000000U)                             /*!< KBI select posedge sampling */
#define KBI_SEL_KEY4_NE                      (KBI_SEL_KEY4)                                      /*!< KBI select negedge sampling */

/* KBI_SEL_KEY5 */
#define KBI_SEL_KEY5_PE                      ((uint32_t)0x00000000U)                             /*!< KBI select posedge sampling */
#define KBI_SEL_KEY5_NE                      (KBI_SEL_KEY5)                                      /*!< KBI select negedge sampling */

/* KBI_SEL_KEY6 */
#define KBI_SEL_KEY6_PE                      ((uint32_t)0x00000000U)                             /*!< KBI select posedge sampling */
#define KBI_SEL_KEY6_NE                      (KBI_SEL_KEY6)                                      /*!< KBI select negedge sampling */

/* KBI_SEL_KEY7 */
#define KBI_SEL_KEY7_PE                      ((uint32_t)0x00000000U)                             /*!< KBI select posedge sampling */
#define KBI_SEL_KEY7_NE                      (KBI_SEL_KEY7)                                      /*!< KBI select negedge sampling */

/* KBI_DATA_KEY0 */
#define KBI_DATA_KEY0_PD                     (KBI_DATA_KEY0)                                     /*!< KEY pressed */
#define KBI_DATA_KEY0_NUL                    ((uint32_t)0x00000000U)                             /*!< KEY not be pressed */

/* KBI_DATA_KEY1 */
#define KBI_DATA_KEY1_PD                     (KBI_DATA_KEY1)                                     /*!< KEY pressed */
#define KBI_DATA_KEY1_NUL                    ((uint32_t)0x00000000U)                             /*!< KEY not be pressed */

/* KBI_DATA_KEY2 */
#define KBI_DATA_KEY2_PD                     (KBI_DATA_KEY2)                                     /*!< KEY pressed */
#define KBI_DATA_KEY2_NUL                    ((uint32_t)0x00000000U)                             /*!< KEY not be pressed */

/* KBI_DATA_KEY3 */
#define KBI_DATA_KEY3_PD                     (KBI_DATA_KEY3)                                     /*!< KEY pressed */
#define KBI_DATA_KEY3_NUL                    ((uint32_t)0x00000000U)                             /*!< KEY not be pressed */

/* KBI_DATA_KEY4 */
#define KBI_DATA_KEY4_PD                     (KBI_DATA_KEY4)                                     /*!< KEY pressed */
#define KBI_DATA_KEY4_NUL                    ((uint32_t)0x00000000U)                             /*!< KEY not be pressed */

/* KBI_DATA_KEY5 */
#define KBI_DATA_KEY5_PD                     (KBI_DATA_KEY5)                                     /*!< KEY pressed */
#define KBI_DATA_KEY5_NUL                    ((uint32_t)0x00000000U)                             /*!< KEY not be pressed */

/* KBI_DATA_KEY6 */
#define KBI_DATA_KEY6_PD                     (KBI_DATA_KEY6)                                     /*!< KEY pressed */
#define KBI_DATA_KEY6_NUL                    ((uint32_t)0x00000000U)                             /*!< KEY not be pressed */

/* KBI_DATA_KEY7 */
#define KBI_DATA_KEY7_PD                     (KBI_DATA_KEY7)                                     /*!< KEY pressed */
#define KBI_DATA_KEY7_NUL                    ((uint32_t)0x00000000U)                             /*!< KEY not be pressed */

#endif /* RN821X_RN721X_SOC_KBI_H */
/* r1134 */
