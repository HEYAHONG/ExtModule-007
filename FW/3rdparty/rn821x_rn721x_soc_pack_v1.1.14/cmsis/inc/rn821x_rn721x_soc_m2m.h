/**
 * @file    rn821x_rn721x_soc_m2m.h
 * @brief   M2M definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_M2M_H
#define RN821X_RN721X_SOC_M2M_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* M2M_MODE */
#define M2M_MODE_IVLD                        (BITS(0,3))                                         /*!< input Data valid byte configuration bits */
#define M2M_MODE_OVLD                        (BITS(4,7))                                         /*!< output Data valid byte configuration bits */
#define M2M_MODE_ORV_EN                      (BIT(8))                                            /*!< byte order reverse enable bit */
#define M2M_MODE_DUMMY_EN                    (BIT(9))                                            /*!< dummy byte enable bit */
#define M2M_MODE_ADDR_RVEN                   (BIT(10))                                           /*!< address order reverse enable bit */

/* M2M_CTL */
#define M2M_CTL_M2M_EN                       (BIT(0))                                            /*!< M2M enable bit */

/* M2M_DUMMY */
#define M2M_DUMMY_DUMMY                      (BITS(0,31))                                        /*!< M2M dummy register bits */

/* M2M_SADDR */
#define M2M_SADDR_SADDR                      (BITS(0,16))                                        /*!< M2M source address register bits */

/* M2M_DADDR */
#define M2M_DADDR_DADDR                      (BITS(0,16))                                        /*!< M2M done interrupt enable bit */

/* M2M_ILEN */
#define M2M_ILEN_ILEN                        (BITS(0,16))                                        /*!< M2M input length configuration bits */

/* M2M_IE */
#define M2M_IE_IE                            (BIT(0))                                            /*!< M2M interrupt enable bit */

/* M2M_IF */
#define M2M_IF_IF                            (BIT(0))                                            /*!< M2M interrupt flag */
#endif

#endif /* RN821X_RN721X_SOC_M2M_H */
/* r1192 */
