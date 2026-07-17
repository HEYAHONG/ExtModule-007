/**
 * @file    rn821x_rn721x_soc_flk.h
 * @brief   FLK definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_FLK_H
#define RN821X_RN721X_SOC_FLK_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* FLK_EN */
#define FLK_EN_EN                            (BIT(0))                                            /*!< Flicker module enable bit */

/* FLK_IE */
#define FLK_IE_IE                            (BIT(0))                                            /*!< Flicker module interrupt enable bit */

/* FLK_IF */
#define FLK_IF_IF                            (BIT(0))                                            /*!< Flicker module interrupt sign bit */

/* FLK_UA_600HZ */
#define FLK_UA_600HZ_UA_600HZ                (BITS(0,23))                                        /*!< UA channel instantaneous sampling value (600hz update) bits */

/* FLK_PASS */
#define FLK_PASS_PASS                        (BITS(0,15))                                        /*!< Flicker module password bits */

/* constants definitions */
/* FLK_PASS_PASS */
#define FLK_PASS_PASS_DIS                    ((uint32_t)0x00000000U)                             /*!< Flicker module password disable */
#define FLK_PASS_PASS_PASS                   ((uint32_t)0x00002025U)                             /*!< Flicker module password enable */
#endif

#endif /* RN821X_RN721X_SOC_FLK_H */
/* r1730 */
