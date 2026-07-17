/**
 * @file    rn821x_rn721x_soc_intc.h
 * @brief   INTC definitions for RN821X_RN721X_SOC
 * @version v1.0.1
 */
#ifndef RN821X_RN721X_SOC_INTC_H
#define RN821X_RN721X_SOC_INTC_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* INTC_CTRL */
#define INTC_CTRL_EN_INT0                    (BIT(0))                                            /*!< external interrupt INT0 module enable bit */
#define INTC_CTRL_EN_INT1                    (BIT(1))                                            /*!< external interrupt INT1 module enable bit */
#define INTC_CTRL_EN_INT2                    (BIT(2))                                            /*!< external interrupt INT2 module enable bit */
#define INTC_CTRL_EN_INT3                    (BIT(3))                                            /*!< external interrupt INT3 module enable bit */
#define INTC_CTRL_EN_INT4                    (BIT(4))                                            /*!< external interrupt INT4 module enable bit */
#define INTC_CTRL_EN_INT5                    (BIT(5))                                            /*!< external interrupt INT5 module enable bit */
#define INTC_CTRL_EN_INT6                    (BIT(6))                                            /*!< external interrupt INT6 module enable bit */
#define INTC_CTRL_EN_INT7                    (BIT(7))                                            /*!< external interrupt INT7 module enable bit */
#define INTC_CTRL_IRQ_CTRL                   (BIT(8))                                            /*!< external interrupt mode selection bit */

/* INTC_MODE */
#define INTC_MODE_INT0                       (BITS(0,1))                                         /*!< external interrupt INT0 mode selection bit */
#define INTC_MODE_INT1                       (BITS(2,3))                                         /*!< external interrupt INT1 mode selection bit */
#define INTC_MODE_INT2                       (BITS(4,5))                                         /*!< external interrupt INT2 mode selection bit */
#define INTC_MODE_INT3                       (BITS(6,7))                                         /*!< external interrupt INT3 mode selection bit */
#define INTC_MODE_INT4                       (BITS(8,9))                                         /*!< external interrupt INT4 mode selection bit */
#define INTC_MODE_INT5                       (BITS(10,11))                                       /*!< external interrupt INT5 mode selection bit */
#define INTC_MODE_INT6                       (BITS(12,13))                                       /*!< external interrupt INT6 mode selection bit */
#define INTC_MODE_INT7                       (BITS(14,15))                                       /*!< external interrupt INT7 mode selection bit */

/* INTC_MASK */
#define INTC_MASK_INT0                       (BIT(0))                                            /*!< external interrupt INT0 interrupt enable/disable bit */
#define INTC_MASK_INT1                       (BIT(1))                                            /*!< external interrupt INT1 interrupt enable/disable bit */
#define INTC_MASK_INT2                       (BIT(2))                                            /*!< external interrupt INT2 interrupt enable/disable bit */
#define INTC_MASK_INT3                       (BIT(3))                                            /*!< external interrupt INT3 interrupt enable/disable bit */
#define INTC_MASK_INT4                       (BIT(4))                                            /*!< external interrupt INT4 interrupt enable/disable bit */
#define INTC_MASK_INT5                       (BIT(5))                                            /*!< external interrupt INT5 interrupt enable/disable bit */
#define INTC_MASK_INT6                       (BIT(6))                                            /*!< external interrupt INT6 interrupt enable/disable bit */
#define INTC_MASK_INT7                       (BIT(7))                                            /*!< external interrupt INT7 interrupt enable/disable bit */

/* INTC_STA */
#define INTC_STA_INT0                        (BIT(0))                                            /*!< external interrupt INT0 status bit */
#define INTC_STA_INT1                        (BIT(1))                                            /*!< external interrupt INT1 status bit */
#define INTC_STA_INT2                        (BIT(2))                                            /*!< external interrupt INT2 status bit */
#define INTC_STA_INT3                        (BIT(3))                                            /*!< external interrupt INT3 status bit */
#define INTC_STA_INT4                        (BIT(4))                                            /*!< external interrupt INT4 status bit */
#define INTC_STA_INT5                        (BIT(5))                                            /*!< external interrupt INT5 status bit */
#define INTC_STA_INT6                        (BIT(6))                                            /*!< external interrupt INT6 status bit */
#define INTC_STA_INT7                        (BIT(7))                                            /*!< external interrupt INT7 status bit */

/* constants definitions */
/* INTC_CTRL_IRQ_CTRL */
#define INTC_CTRL_IRQ_CTRL_INDEP             ((uint32_t)0x00000000U)                             /*!< INT0~INT7 independent control by INTC_CTRL[7:0] */
#define INTC_CTRL_IRQ_CTRL_EXT0              (INTC_CTRL_IRQ_CTRL)                                /*!< INT0~INT7 share EXT0 IRQ vector, check STA while interrupt occured */

/* INTC_MODE_INT0 */
#define INTC_MODE_INT0_CFG(regval)  (INTC_MODE_INT0 & ((uint32_t)(regval) << 0))
#define INTC_MODE_INT0_PE                    (INTC_MODE_INT0_CFG(0))                             /*!< external interrupt INT0 mode selection as posedge mode */
#define INTC_MODE_INT0_NE                    (INTC_MODE_INT0_CFG(1))                             /*!< external interrupt INT0 mode selection as negedge mode */
#define INTC_MODE_INT0_BE                    (INTC_MODE_INT0_CFG(2))                             /*!< external interrupt INT0 mode selection as both edge mode */

/* INTC_MODE_INT1 */
#define INTC_MODE_INT1_CFG(regval)  (INTC_MODE_INT1 & ((uint32_t)(regval) << 2))
#define INTC_MODE_INT1_PE                    (INTC_MODE_INT1_CFG(0))                             /*!< external interrupt INT1 mode selection as posedge mode */
#define INTC_MODE_INT1_NE                    (INTC_MODE_INT1_CFG(1))                             /*!< external interrupt INT1 mode selection as negedge mode */
#define INTC_MODE_INT1_BE                    (INTC_MODE_INT1_CFG(2))                             /*!< external interrupt INT1 mode selection as both edge mode */

/* INTC_MODE_INT2 */
#define INTC_MODE_INT2_CFG(regval)  (INTC_MODE_INT2 & ((uint32_t)(regval) << 4))
#define INTC_MODE_INT2_PE                    (INTC_MODE_INT2_CFG(0))                             /*!< external interrupt INT2 mode selection as posedge mode */
#define INTC_MODE_INT2_NE                    (INTC_MODE_INT2_CFG(1))                             /*!< external interrupt INT2 mode selection as negedge mode */
#define INTC_MODE_INT2_BE                    (INTC_MODE_INT2_CFG(2))                             /*!< external interrupt INT2 mode selection as both edge mode */

/* INTC_MODE_INT3 */
#define INTC_MODE_INT3_CFG(regval)  (INTC_MODE_INT3 & ((uint32_t)(regval) << 6))
#define INTC_MODE_INT3_PE                    (INTC_MODE_INT3_CFG(0))                             /*!< external interrupt INT3 mode selection as posedge mode */
#define INTC_MODE_INT3_NE                    (INTC_MODE_INT3_CFG(1))                             /*!< external interrupt INT3 mode selection as negedge mode */
#define INTC_MODE_INT3_BE                    (INTC_MODE_INT3_CFG(2))                             /*!< external interrupt INT3 mode selection as both edge mode */

/* INTC_MODE_INT4 */
#define INTC_MODE_INT4_CFG(regval)  (INTC_MODE_INT4 & ((uint32_t)(regval) << 8))
#define INTC_MODE_INT4_PE                    (INTC_MODE_INT4_CFG(0))                             /*!< external interrupt INT4 mode selection as posedge mode */
#define INTC_MODE_INT4_NE                    (INTC_MODE_INT4_CFG(1))                             /*!< external interrupt INT4 mode selection as negedge mode */
#define INTC_MODE_INT4_BE                    (INTC_MODE_INT4_CFG(2))                             /*!< external interrupt INT4 mode selection as both edge mode */

/* INTC_MODE_INT5 */
#define INTC_MODE_INT5_CFG(regval)  (INTC_MODE_INT5 & ((uint32_t)(regval) << 10))
#define INTC_MODE_INT5_PE                    (INTC_MODE_INT5_CFG(0))                             /*!< external interrupt INT5 mode selection as posedge mode */
#define INTC_MODE_INT5_NE                    (INTC_MODE_INT5_CFG(1))                             /*!< external interrupt INT5 mode selection as negedge mode */
#define INTC_MODE_INT5_BE                    (INTC_MODE_INT5_CFG(2))                             /*!< external interrupt INT5 mode selection as both edge mode */

/* INTC_MODE_INT6 */
#define INTC_MODE_INT6_CFG(regval)  (INTC_MODE_INT6 & ((uint32_t)(regval) << 12))
#define INTC_MODE_INT6_PE                    (INTC_MODE_INT6_CFG(0))                             /*!< external interrupt INT6 mode selection as posedge mode */
#define INTC_MODE_INT6_NE                    (INTC_MODE_INT6_CFG(1))                             /*!< external interrupt INT6 mode selection as negedge mode */
#define INTC_MODE_INT6_BE                    (INTC_MODE_INT6_CFG(2))                             /*!< external interrupt INT6 mode selection as both edge mode */

/* INTC_MODE_INT7 */
#define INTC_MODE_INT7_CFG(regval)  (INTC_MODE_INT7 & ((uint32_t)(regval) << 14))
#define INTC_MODE_INT7_PE                    (INTC_MODE_INT7_CFG(0))                             /*!< external interrupt INT7 mode selection as posedge mode */
#define INTC_MODE_INT7_NE                    (INTC_MODE_INT7_CFG(1))                             /*!< external interrupt INT7 mode selection as negedge mode */
#define INTC_MODE_INT7_BE                    (INTC_MODE_INT7_CFG(2))                             /*!< external interrupt INT7 mode selection as both edge mode */

/* INTC_MASK_INT0 */
#define INTC_MASK_INT0_DIS                   ((uint32_t)0x00000000U)                             /*!< external interrupt INT0 interrupt disable */
#define INTC_MASK_INT0_EN                    (INTC_MASK_INT0)                                    /*!< external interrupt INT0 interrupt enable */

/* INTC_MASK_INT1 */
#define INTC_MASK_INT1_DIS                   ((uint32_t)0x00000000U)                             /*!< external interrupt INT1 interrupt disable */
#define INTC_MASK_INT1_EN                    (INTC_MASK_INT1)                                    /*!< external interrupt INT1 interrupt enable */

/* INTC_MASK_INT2 */
#define INTC_MASK_INT2_DIS                   ((uint32_t)0x00000000U)                             /*!< external interrupt INT2 interrupt disable */
#define INTC_MASK_INT2_EN                    (INTC_MASK_INT2)                                    /*!< external interrupt INT2 interrupt enable */

/* INTC_MASK_INT3 */
#define INTC_MASK_INT3_DIS                   ((uint32_t)0x00000000U)                             /*!< external interrupt INT3 interrupt disable */
#define INTC_MASK_INT3_EN                    (INTC_MASK_INT3)                                    /*!< external interrupt INT3 interrupt enable */

/* INTC_MASK_INT4 */
#define INTC_MASK_INT4_DIS                   ((uint32_t)0x00000000U)                             /*!< external interrupt INT4 interrupt disable */
#define INTC_MASK_INT4_EN                    (INTC_MASK_INT4)                                    /*!< external interrupt INT4 interrupt enable */

/* INTC_MASK_INT5 */
#define INTC_MASK_INT5_DIS                   ((uint32_t)0x00000000U)                             /*!< external interrupt INT5 interrupt disable */
#define INTC_MASK_INT5_EN                    (INTC_MASK_INT5)                                    /*!< external interrupt INT5 interrupt enable */

/* INTC_MASK_INT6 */
#define INTC_MASK_INT6_DIS                   ((uint32_t)0x00000000U)                             /*!< external interrupt INT6 interrupt disable */
#define INTC_MASK_INT6_EN                    (INTC_MASK_INT6)                                    /*!< external interrupt INT6 interrupt enable */

/* INTC_MASK_INT7 */
#define INTC_MASK_INT7_DIS                   ((uint32_t)0x00000000U)                             /*!< external interrupt INT7 interrupt disable */
#define INTC_MASK_INT7_EN                    (INTC_MASK_INT7)                                    /*!< external interrupt INT7 interrupt enable */

/* INTC_STA_INT0 */
#define INTC_STA_INT0_NUL                    ((uint32_t)0x00000000U)                             /*!< external interrupt event not occured */
#define INTC_STA_INT0_OCC                    (INTC_STA_INT0)                                     /*!< external interrupt event occured */

/* INTC_STA_INT1 */
#define INTC_STA_INT1_NUL                    ((uint32_t)0x00000000U)                             /*!< external interrupt event not occured */
#define INTC_STA_INT1_OCC                    (INTC_STA_INT1)                                     /*!< external interrupt event occured */

/* INTC_STA_INT2 */
#define INTC_STA_INT2_NUL                    ((uint32_t)0x00000000U)                             /*!< external interrupt event not occured */
#define INTC_STA_INT2_OCC                    (INTC_STA_INT2)                                     /*!< external interrupt event occured */

/* INTC_STA_INT3 */
#define INTC_STA_INT3_NUL                    ((uint32_t)0x00000000U)                             /*!< external interrupt event not occured */
#define INTC_STA_INT3_OCC                    (INTC_STA_INT3)                                     /*!< external interrupt event occured */

/* INTC_STA_INT4 */
#define INTC_STA_INT4_NUL                    ((uint32_t)0x00000000U)                             /*!< external interrupt event not occured */
#define INTC_STA_INT4_OCC                    (INTC_STA_INT4)                                     /*!< external interrupt event occured */

/* INTC_STA_INT5 */
#define INTC_STA_INT5_NUL                    ((uint32_t)0x00000000U)                             /*!< external interrupt event not occured */
#define INTC_STA_INT5_OCC                    (INTC_STA_INT5)                                     /*!< external interrupt event occured */

/* INTC_STA_INT6 */
#define INTC_STA_INT6_NUL                    ((uint32_t)0x00000000U)                             /*!< external interrupt event not occured */
#define INTC_STA_INT6_OCC                    (INTC_STA_INT6)                                     /*!< external interrupt event occured */

/* INTC_STA_INT7 */
#define INTC_STA_INT7_NUL                    ((uint32_t)0x00000000U)                             /*!< external interrupt event not occured */
#define INTC_STA_INT7_OCC                    (INTC_STA_INT7)                                     /*!< external interrupt event occured */

#endif /* RN821X_RN721X_SOC_INTC_H */
/* r1134 */
