/**
 * @file    rn821x_rn721x_soc_emu_wave.h
 * @brief   EMU_WAVE definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_EMU_WAVE_H
#define RN821X_RN721X_SOC_EMU_WAVE_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* EMU_WAVE_WKEY */
#define EMU_WAVE_WKEY_WKEY                   (BITS(0,7))                                         /*!< synchronous sampling module write access register bits */

/* EMU_WAVE_WAVECFG */
#define EMU_WAVE_WAVECFG_WAVECFG             (BITS(0,3))                                         /*!< synchronous sampling module cfg register bits */

/* EMU_WAVE_WAVECFG2 */
#define EMU_WAVE_WAVECFG2_WAVECFG2           (BITS(0,9))                                         /*!< synchronous sampling module cfg register No.2 bits */

/* EMU_WAVE_EN */
#define EMU_WAVE_EN_EN                       (BIT(0))                                            /*!< synchronous sampling module enable register bits */

/* EMU_WAVE_WAVECNT */
#define EMU_WAVE_WAVECNT_WAVECNT             (BITS(0,9))                                         /*!< WAVECNT sample rate config register bits */

/* EMU_WAVE_DC_EN */
#define EMU_WAVE_DC_EN_DC_EN                 (BITS(0,2))                                         /*!< synchronous sampling AUTO DC enable register bits */

/* EMU_WAVE_PHSIA */
#define EMU_WAVE_PHSIA_PHSIA                 (BITS(0,6))                                         /*!< synchronous sampling channel IA phase gain cfg register bits */

/* EMU_WAVE_PHSIB */
#define EMU_WAVE_PHSIB_PHSIB                 (BITS(0,6))                                         /*!< synchronous sampling channel IB phase gain cfg register bits */

/* EMU_WAVE_PHSU */
#define EMU_WAVE_PHSU_PHSU                   (BITS(0,6))                                         /*!< synchronous sampling channel U phase gain cfg register bits */

/* EMU_WAVE_IAGAIN */
#define EMU_WAVE_IAGAIN_IAGAIN               (BITS(0,15))                                        /*!< synchronous sampling channel IA gain cfg register bits */

/* EMU_WAVE_IBGAIN */
#define EMU_WAVE_IBGAIN_IBGAIN               (BITS(0,15))                                        /*!< synchronous sampling channel IB gain cfg register bits */

/* EMU_WAVE_UGAIN */
#define EMU_WAVE_UGAIN_UGAIN                 (BITS(0,15))                                        /*!< synchronous sampling channel U gain cfg register bits */

/* EMU_WAVE_HW_RMSIA */
#define EMU_WAVE_HW_RMSIA_HW_RMSIA           (BITS(0,23))                                        /*!< IA channel half wave RMS register bits */

/* EMU_WAVE_HW_RMSIB */
#define EMU_WAVE_HW_RMSIB_HW_RMSIB           (BITS(0,23))                                        /*!< IB channel half wave RMS register bits */

/* EMU_WAVE_HW_RMSU */
#define EMU_WAVE_HW_RMSU_HW_RMSU             (BITS(0,23))                                        /*!< U channel half wave RMS register bits */

/* EMU_WAVE_HW_PA */
#define EMU_WAVE_HW_PA_HW_PA                 (BITS(0,31))                                        /*!< A channel half wave active power register bits */

/* EMU_WAVE_HW_PB */
#define EMU_WAVE_HW_PB_HW_PB                 (BITS(0,31))                                        /*!< B channel half wave active power register bits */
#endif

#endif /* RN821X_RN721X_SOC_EMU_WAVE_H */
/* r1190 */
