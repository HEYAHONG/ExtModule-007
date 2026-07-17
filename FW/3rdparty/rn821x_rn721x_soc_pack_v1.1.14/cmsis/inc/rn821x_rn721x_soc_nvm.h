/**
 * @file    rn821x_rn721x_soc_nvm.h
 * @brief   NVM definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_NVM_H
#define RN821X_RN721X_SOC_NVM_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* NVM_IE */
#define NVM_IE_EIE                           (BIT(0))                                            /*!< NV end interrupt enable */
#define NVM_IE_EOIE                          (BIT(1))                                            /*!< NV end and overflow interrupt enable */
#define NVM_IE_LDO33RIE                      (BIT(2))                                            /*!< LDO33 reset interrupt enable */
#define NVM_IE_VREFRIE                       (BIT(3))                                            /*!< VREF reset interrupt enable */
#define NVM_IE_D2F0IE                        (BIT(4))                                            /*!< d2f0 pulse interrupt enable */
#define NVM_IE_D2F1IE                        (BIT(5))                                            /*!< d2f1 pulse interrupt enable */
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define NVM_IE_IAOIE                         (BIT(8))                                            /*!< ia d2f is done and overflow */
#define NVM_IE_IBOIE                         (BIT(9))                                            /*!< ib d2f is done and overflow */
#endif

/* NVM_IF */
#define NVM_IF_EIF                           (BIT(0))                                            /*!< NV end interrupt flag */
#define NVM_IF_EOIF                          (BIT(1))                                            /*!< NV end and overflow interrupt flag */
#define NVM_IF_LDO33RIF                      (BIT(2))                                            /*!< LDO33 reset interrupt flag */
#define NVM_IF_VREFRIF                       (BIT(3))                                            /*!< VREF reset interrupt flag */
#define NVM_IF_D2F0IF                        (BIT(4))                                            /*!< d2f0 impulse interrupt flag */
#define NVM_IF_D2F1IF                        (BIT(5))                                            /*!< d2f1 impulse interrupt flag */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define NVM_IF_AVDDOK                        (BIT(6))                                            /*!< avdd power ok */
#define NVM_IF_BGROK                         (BIT(7))                                            /*!< bgr power ok */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define NVM_IF_IAOIF                         (BIT(8))                                            /*!< ia d2f end and overflow flag */
#define NVM_IF_IBOIF                         (BIT(9))                                            /*!< ib d2f end and overflow flag */
#endif

/* NVM_LSCFG */
#define NVM_LSCFG_LSDC_EN                    (BIT(0))                                            /*!< automatic DC offset calibration enable */
#define NVM_LSCFG_HPFON_LS                   (BIT(1))                                            /*!< high pass filter enable */
#define NVM_LSCFG_NVMEN                      (BIT(2))                                            /*!< module enable */
#define NVM_LSCFG_SMMEN                      (BIT(3))                                            /*!< SMM enable */
#define NVM_LSCFG_D2F0_CF_EN                 (BIT(4))                                            /*!< SMM enable */
#define NVM_LSCFG_D2F1_CF_EN                 (BIT(5))                                            /*!< SMM enable */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define NVM_LSCFG_RMS_SP                     (BITS(6,7))                                         /*!< RMSL_IA and RMSL_IB output configuration */
#define NVM_LSCFG_RMS_DIV                    (BITS(8,10))                                        /*!< RMSL_IA and RMSL_IB div */
#define NVM_LSCFG_CIC_MODE                   (BIT(11))                                           /*!< cic mode */
#define NVM_LSCFG_ATMODE                     (BIT(12))                                           /*!< d2f auto mode */
#endif

/* NVM_LSDCOS */
#define NVM_LSDCOS_LSDCOS                    (BITS(0,23))                                        /*!< NV measurement DC offset. */

/* NVM_LSTHO */
#define NVM_LSTHO_LSTHO                      (BITS(0,23))                                        /*!< NV measurement threshold */

/* NVM_LSRMS */
#define NVM_LSRMS_LSRMS                      (BITS(0,23))                                        /*!< IA cyclic updated NV measurement RMS */

/* NVM_LSRMS1 */
#define NVM_LSRMS1_LSRMS1                    (BITS(0,23))                                        /*!< IA RMS_L1 will not change after calculation */

/* NVM_HFCONST */
#define NVM_HFCONST_HFCONST                  (BITS(0,15))                                        /*!< HF const value */

/* NVM_D2FP0 */
#define NVM_D2FP0_D2FP0                      (BITS(0,23))                                        /*!< D2F power 0 vaule */

/* NVM_D2FP1 */
#define NVM_D2FP1_D2FP1                      (BITS(0,23))                                        /*!< D2F power 1 vaule */

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* NVM_LSMODE */
#define NVM_LSMODE_NVM_MODE                  (BITS(0,15))                                        /*!< NVM MODE cfg bits */

/* NVM_LSDCOSIB */
#define NVM_LSDCOSIB_LSDCOSIB                (BITS(0,23))                                        /*!< IB dc offset bits */

/* NVM_LSTHOIB */
#define NVM_LSTHOIB_LSTHOIB                  (BITS(0,23))                                        /*!< IB DC threshold bits */

/* NVM_LSGSIA */
#define NVM_LSGSIA_LSGSIA                    (BITS(0,15))                                        /*!< IA rms gain bits */

/* NVM_LSGSIB */
#define NVM_LSGSIB_LSGSIB                    (BITS(0,15))                                        /*!< IB rms gain bits */

/* NVM_LSRMSIB */
#define NVM_LSRMSIB_LSRMSIB                  (BITS(0,23))                                        /*!< IB cyclic updated NV measurement RMS */

/* NVM_LSRMSIB1 */
#define NVM_LSRMSIB1_LSRMSIB1                (BITS(0,23))                                        /*!< IB RMS_L1 will not change after calculation */

/* NVM_LSADCINCFG */
#define NVM_LSADCINCFG_IA_INV_EN             (BIT(0))                                            /*!< IA invert enable bit */
#define NVM_LSADCINCFG_IB_INV_EN             (BIT(1))                                            /*!< IB invert enable bit */
#define NVM_LSADCINCFG_UA_INV_EN             (BIT(2))                                            /*!< UA invert enable bit */
#define NVM_LSADCINCFG_IA_SMP_SEL            (BIT(3))                                            /*!< IA sample edge select bit */
#define NVM_LSADCINCFG_IB_SMP_SEL            (BIT(4))                                            /*!< IB sample edge select bit */
#define NVM_LSADCINCFG_UA_SMP_SEL            (BIT(5))                                            /*!< UA sample edge select bit */
#define NVM_LSADCINCFG_WKEY                  (BITS(24,31))                                       /*!< register write password */

/* NVM_LSRMSUA */
#define NVM_LSRMSUA_LSRMSUA                  (BITS(0,23))                                        /*!< U user define rms bits */

/* NVM_LSPA */
#define NVM_LSPA_LSPA                        (BITS(0,23))                                        /*!< IA user define power bits */

/* NVM_LSPB */
#define NVM_LSPB_LSPB                        (BITS(0,23))                                        /*!< IB user define power bits */
#endif

/* constants definitions */
/* NVM_IE_EIE */
#define NVM_IE_EIE_DIS                       ((uint32_t)0x00000000U)                             /*!< do not generate interrupt when NV computation ends */
#define NVM_IE_EIE_EN                        (NVM_IE_EIE)                                        /*!< generate interrupt when NV computation ends */

/* NVM_IE_EOIE */
#define NVM_IE_EOIE_DIS                      ((uint32_t)0x00000000U)                             /*!< do not generate interrupt when NV computation ends and NV value beyond threshold */
#define NVM_IE_EOIE_EN                       (NVM_IE_EOIE)                                       /*!< generate interrupt when NV computation ends and NV value beyond threshold */

/* NVM_IE_LDO33RIE */
#define NVM_IE_LDO33RIE_DIS                  ((uint32_t)0x00000000U)                             /*!< do not generate interrupt when reset found in LDO33 power domain */
#define NVM_IE_LDO33RIE_EN                   (NVM_IE_LDO33RIE)                                   /*!< generate interrupt when reset found in LDO33 power domain */

/* NVM_IE_VREFRIE */
#define NVM_IE_VREFRIE_DIS                   ((uint32_t)0x00000000U)                             /*!< do not generate interrupt when VREF reset found */
#define NVM_IE_VREFRIE_EN                    (NVM_IE_VREFRIE)                                    /*!< generate interrupt when  VREF reset found */

/* NVM_IE_D2F0IE */
#define NVM_IE_D2F0IE_DIS                    ((uint32_t)0x00000000U)                             /*!< do not generate interrupt when d2f0 pulse is output */
#define NVM_IE_D2F0IE_EN                     (NVM_IE_D2F0IE)                                     /*!< generate interrupt when d2f0 pulse is output */

/* NVM_IE_D2F1IE */
#define NVM_IE_D2F1IE_DIS                    ((uint32_t)0x00000000U)                             /*!< do not generate interrupt when d2f1 pulse is output */
#define NVM_IE_D2F1IE_EN                     (NVM_IE_D2F1IE)                                     /*!< generate interrupt when d2f1 pulse is output */

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* NVM_IE_IAOIE */
#define NVM_IE_IAOIE_DIS                     ((uint32_t)0x00000000U)                             /*!< do not generate interrupt when d2f1 pulse is output */
#define NVM_IE_IAOIE_EN                      (NVM_IE_IAOIE)                                      /*!< generate interrupt when d2f1 pulse is output */

/* NVM_IE_IBOIE */
#define NVM_IE_IBOIE_DIS                     ((uint32_t)0x00000000U)                             /*!< do not generate interrupt when d2f1 pulse is output */
#define NVM_IE_IBOIE_EN                      (NVM_IE_IBOIE)                                      /*!< generate interrupt when d2f1 pulse is output */
#endif

/* NVM_IF_EIF */
#define NVM_IF_EIF_NULL                      ((uint32_t)0x00000000U)                             /*!< no pending event of NV computation ends and NV value beyond threshold */
#define NVM_IF_EIF_OCC                       (NVM_IF_EIF)                                        /*!< pending event of NV computation ends and NV value beyond threshold found */

/* NVM_IF_EOIF */
#define NVM_IF_EOIF_NULL                     ((uint32_t)0x00000000U)                             /*!< no pending event of NV computation ends and NV value beyond threshold */
#define NVM_IF_EOIF_OCC                      (NVM_IF_EOIF)                                       /*!< pending event of NV computation ends and NV value beyond threshold found */

/* NVM_IF_LDO33RIF */
#define NVM_IF_LDO33RIF_NULL                 ((uint32_t)0x00000000U)                             /*!< no pending event of LDO33 power domain reset */
#define NVM_IF_LDO33RIF_OCC                  (NVM_IF_LDO33RIF)                                   /*!< pending event of LDO33 power domain reset found */

/* NVM_IF_VREFRIF */
#define NVM_IF_VREFRIF_NULL                  ((uint32_t)0x00000000U)                             /*!< no pending event of VREF domain reset */
#define NVM_IF_VREFRIF_OCC                   (NVM_IF_VREFRIF)                                    /*!< pending event of VREF domain reset found */

/* NVM_IF_D2F0IF */
#define NVM_IF_D2F0IF_NULL                   ((uint32_t)0x00000000U)                             /*!< no pending event of d2f0 impulse */
#define NVM_IF_D2F0IF_OCC                    (NVM_IF_D2F0IF)                                     /*!< pending event of d2f0 impulse interrupt flag */

/* NVM_IF_D2F1IF */
#define NVM_IF_D2F1IF_NULL                   ((uint32_t)0x00000000U)                             /*!< no pending event of d2f1 impulse */
#define NVM_IF_D2F1IF_OCC                    (NVM_IF_D2F1IF)                                     /*!< pending event of d2f1 impulse interrupt flag */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* NVM_IF_AVDDOK */
#define NVM_IF_AVDDOK_NULL                   ((uint32_t)0x00000000U)                             /*!< power not ok */
#define NVM_IF_AVDDOK_OK                     (NVM_IF_AVDDOK)                                     /*!< power ok */

/* NVM_IF_BGROK */
#define NVM_IF_BGROK_NULL                    ((uint32_t)0x00000000U)                             /*!< power not ok */
#define NVM_IF_BGROK_OK                      (NVM_IF_BGROK)                                      /*!< power ok */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* NVM_IF_IAOIF */
#define NVM_IF_IAOIF_NULL                    ((uint32_t)0x00000000U)                             /*!< no pending event of d2f1 impulse */
#define NVM_IF_IAOIF_OCC                     (NVM_IF_IAOIF)                                      /*!< pending event of d2f1 impulse interrupt flag */

/* NVM_IF_IBOIF */
#define NVM_IF_IBOIF_NULL                    ((uint32_t)0x00000000U)                             /*!< no pending event of d2f1 impulse */
#define NVM_IF_IBOIF_OCC                     (NVM_IF_IBOIF)                                      /*!< pending event of d2f1 impulse interrupt flag */
#endif

/* NVM_LSCFG_LSDC_EN */
#define NVM_LSCFG_LSDC_EN_DIS                ((uint32_t)0x00000000U)                             /*!< disabled */
#define NVM_LSCFG_LSDC_EN_EN                 (NVM_LSCFG_LSDC_EN)                                 /*!< enabled */

/* NVM_LSCFG_HPFON_LS */
#define NVM_LSCFG_HPFON_LS_DIS               ((uint32_t)0x00000000U)                             /*!< disabled */
#define NVM_LSCFG_HPFON_LS_EN                (NVM_LSCFG_HPFON_LS)                                /*!< enabled */

/* NVM_LSCFG_NVMEN */
#define NVM_LSCFG_NVMEN_DIS                  ((uint32_t)0x00000000U)                             /*!< disabled */
#define NVM_LSCFG_NVMEN_EN                   (NVM_LSCFG_NVMEN)                                   /*!< enabled */

/* NVM_LSCFG_SMMEN */
#define NVM_LSCFG_SMMEN_DIS                  ((uint32_t)0x00000000U)                             /*!< RMS updated every 20ms */
#define NVM_LSCFG_SMMEN_EN                   (NVM_LSCFG_SMMEN)                                   /*!< RMS updated every 80ms */

/* NVM_LSCFG_D2F0_CF_EN */
#define NVM_LSCFG_D2F0_CF_EN_DIS             ((uint32_t)0x00000000U)                             /*!< DIS */
#define NVM_LSCFG_D2F0_CF_EN_EN              (NVM_LSCFG_D2F0_CF_EN)                              /*!< EN */

/* NVM_LSCFG_D2F1_CF_EN */
#define NVM_LSCFG_D2F1_CF_EN_DIS             ((uint32_t)0x00000000U)                             /*!< D2F1 pulse not output to io */
#define NVM_LSCFG_D2F1_CF_EN_EN              (NVM_LSCFG_D2F1_CF_EN)                              /*!< D2F1 pulse output to io */

#endif /* RN821X_RN721X_SOC_NVM_H */
/* r1190 */
