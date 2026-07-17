/**
 * @file    rn821x_rn721x_soc_ect.h
 * @brief   ECT definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_ECT_H
#define RN821X_RN721X_SOC_ECT_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* ECT_WREN */
#define ECT_WREN_WREN                        (BITS(0,7))                                         /*!< write enable bits */

/* ECT_CTRL */
#define ECT_CTRL_CTRL                        (BITS(0,7))                                         /*!< configuration bits */

/* ECT_EN */
#define ECT_EN_EN                            (BITS(0,15))                                        /*!< enable bits */

/* ECT_STATUS */
#define ECT_STATUS_STATUS                    (BITS(0,10))                                        /*!< status bits */

/* ECT_IE */
#define ECT_IE_IE                            (BITS(0,5))                                         /*!< interrupt enable bits */

/* ECT_LT_SET */
#define ECT_LT_SET_LT_SET                    (BITS(0,25))                                        /*!< low part temperature threshold set bits */

/* ECT_HT_SET */
#define ECT_HT_SET_HT_SET                    (BITS(0,25))                                        /*!< high part temperature threshold set bits */

/* ECT_TIMER_SET */
#define ECT_TIMER_SET_TIMER_SET              (BITS(0,7))                                         /*!< cycling period set bits */

/* ECT_PROT_TEMP */
#define ECT_PROT_TEMP_PROT_TEMP              (BITS(0,9))                                         /*!< 25 degree protect threshold bits */

/* ECT_PROT_IAGAIN */
#define ECT_PROT_IAGAIN_PROT_IAGAIN          (BITS(0,15))                                        /*!< IA error protect threshold bits */

/* ECT_PROT_IBGAIN */
#define ECT_PROT_IBGAIN_PROT_IBGAIN          (BITS(0,15))                                        /*!< IB error protect threshold bits */

/* ECT_PROT_UGAIN */
#define ECT_PROT_UGAIN_PROT_UGAIN            (BITS(0,15))                                        /*!< U error protect threshold bits */

/* ECT_LT_KIA */
#define ECT_LT_KIA_LT_KIA                    (BITS(0,16))                                        /*!< IA low part temperature K coefficient bits */

/* ECT_LT_KIB */
#define ECT_LT_KIB_LT_KIB                    (BITS(0,16))                                        /*!< IB low part temperature K coefficient bits */

/* ECT_LT_KU */
#define ECT_LT_KU_LT_KU                      (BITS(0,16))                                        /*!< U low part temperature K coefficient bits */

/* ECT_HT_KIA */
#define ECT_HT_KIA_HT_KIA                    (BITS(0,16))                                        /*!< IA high part temperature K coefficient bits */

/* ECT_HT_KIB */
#define ECT_HT_KIB_HT_KIB                    (BITS(0,16))                                        /*!< IB high part temperature K coefficient bits */

/* ECT_HT_KU */
#define ECT_HT_KU_HT_KU                      (BITS(0,16))                                        /*!< U high part temperature K coefficient bits */

/* ECT_TEMP */
#define ECT_TEMP_TEMP                        (BITS(0,9))                                         /*!< current temperature bits */

/* ECT_IAGAIN */
#define ECT_IAGAIN_IAGAIN                    (BITS(0,15))                                        /*!< IA gain bits */

/* ECT_IBGAIN */
#define ECT_IBGAIN_IBGAIN                    (BITS(0,15))                                        /*!< IB gain bits */

/* ECT_UGAIN */
#define ECT_UGAIN_UGAIN                      (BITS(0,15))                                        /*!< U gain bits */

/* ECT_TEMP_UD */
#define ECT_TEMP_UD_TEMP_UD                  (BITS(0,9))                                         /*!< current compensation temperature bits */
#endif

/* constants definitions */
#endif /* RN821X_RN721X_SOC_ECT_H */
/* r1190 */
