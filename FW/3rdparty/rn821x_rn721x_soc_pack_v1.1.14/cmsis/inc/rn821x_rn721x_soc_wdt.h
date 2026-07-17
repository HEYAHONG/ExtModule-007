/**
 * @file    rn821x_rn721x_soc_wdt.h
 * @brief   WDT definitions for RN821X_RN721X_SOC
 * @version v1.1.5
 */
#ifndef RN821X_RN721X_SOC_WDT_H
#define RN821X_RN721X_SOC_WDT_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* WDT_EN */
#define WDT_EN_WDTE                          (BITS(0,7))                                         /*!< WDT enable bits */
#define WDT_EN_WR_BUSY                       (BIT(8))                                            /*!< WDT write busy flag */

/* WDT_CTRL */
#define WDT_CTRL_WDCS                        (BITS(1,3))                                         /*!< WDT overflow time config */
#define WDT_CTRL_WINDOW                      (BITS(5,6))                                         /*!< WDT Window Open Period */
#define WDT_CTRL_WDTINT                      (BIT(7))                                            /*!< WDT Timer Interval Interrupt */

/* WDT_PASS */
#define WDT_PASS_L                           (BITS(0,3))                                         /*!< WDT low part password */
#define WDT_PASS_H                           (BITS(4,7))                                         /*!< WDT high part password */

/* WDT_HALT */
#define WDT_HALT_EN                          (BITS(0,15))                                        /*!< HALT_EN config bits */

/* WDT_STBY */
#define WDT_STBY_EN                          (BITS(0,15))                                        /*!< STBY_EN config bits */

/* constants definitions */
/* WDT_EN_WDTE */
#define WDT_EN_WDTE_RESTART                  ((uint32_t)0x000000BBU)                             /*!< clear WDT counter and restart WDT(write value) */
#define WDT_EN_WDTE_DIS_DFLT                 ((uint32_t)0x00000055U)                             /*!< WDTE default value */

#endif /* RN821X_RN721X_SOC_WDT_H */
/* r2454 */
