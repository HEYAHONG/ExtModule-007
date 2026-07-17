/**
 * @file    rn821x_rn721x_soc_simp_tc.h
 * @brief   SIMP_TC definitions for RN821X_RN721X_SOC
 * @version v1.0.1
 */
#ifndef RN821X_RN721X_SOC_SIMP_TC_H
#define RN821X_RN721X_SOC_SIMP_TC_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* SIMP_TC_CTRL */
#define SIMP_TC_CTRL_EN                      (BIT(0))                                            /*!< SIMP_TC enable bit */
#define SIMP_TC_CTRL_OV                      (BIT(1))                                            /*!< SIMP_TC overflow flag */
#define SIMP_TC_CTRL_MODE                    (BIT(2))                                            /*!< SIMP_TC count mode selection bit */
#define SIMP_TC_CTRL_IRQEN                   (BIT(3))                                            /*!< SIMP_TC interrupt enable bit */

/* SIMP_TC_LOAD */
#define SIMP_TC_LOAD_LOAD                    (BITS(0,31))                                        /*!< SIMP_TC target counting value setting bits */

/* SIMP_TC_VAL */
#define SIMP_TC_VAL_VAL                      (BITS(0,31))                                        /*!< SIMP_TC current count register bits */

/* constants definitions */
/* SIMP_TC_CTRL_MODE */
#define SIMP_TC_CTRL_MODE_SINGLE             ((uint32_t)0x00000000U)                             /*!< SIMP_TC select as single pulse mode */
#define SIMP_TC_CTRL_MODE_REPETITIVE         (SIMP_TC_CTRL_MODE)                                 /*!< SIMP_TC select as repetitive pulse mode */
#endif

#endif /* RN821X_RN721X_SOC_SIMP_TC_H */
/* r1134 */
