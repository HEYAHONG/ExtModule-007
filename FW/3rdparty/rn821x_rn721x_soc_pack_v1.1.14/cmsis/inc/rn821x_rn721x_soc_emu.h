/**
 * @file    rn821x_rn721x_soc_emu.h
 * @brief   EMU definitions for RN821X_RN721X_SOC
 * @version v1.1.3
 */
#ifndef RN821X_RN721X_SOC_EMU_H
#define RN821X_RN721X_SOC_EMU_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* EMU_EMUCON */
#define EMU_EMUCON_PRUN                      (BIT(0))                                            /*!< active power accumulation and PF pulse output */
#define EMU_EMUCON_QRUN                      (BIT(1))                                            /*!< reactive power accumulation and QF pulse output */
#define EMU_EMUCON_SRUN                      (BIT(2))                                            /*!< reactive power accumulation and SF pulse output */
#define EMU_EMUCON_CFSU                      (BITS(3,4))                                         /*!< PF/QF output acceleration rate */
#define EMU_EMUCON_CFSUEN                    (BIT(5))                                            /*!< PF/QF output acceleration enable */
#define EMU_EMUCON_HPFUOFF                   (BIT(6))                                            /*!< U-channel digital high-pass filters enable */
#define EMU_EMUCON_HPFIAOFF                  (BIT(7))                                            /*!< IA-channel digital high-pass filters enable */
#define EMU_EMUCON_HPFIBOFF                  (BIT(8))                                            /*!< IB-channel digital high-pass filters enable */
#define EMU_EMUCON_ENERGY_CLR                (BIT(9))                                            /*!< all register clear as 0 after reading */
#define EMU_EMUCON_ZXD0                      (BIT(10))                                           /*!< zero-crossing point selection */
#define EMU_EMUCON_ZXD1                      (BIT(11))                                           /*!< ZX output mode */
#define EMU_EMUCON_PMOD                      (BITS(12,13))                                       /*!< active power accumulation mode */
#define EMU_EMUCON_QMOD                      (BITS(14,15))                                       /*!< reactive power accumulation mode */
#define EMU_EMUCON_U_START                   (BIT(16))                                           /*!< apparent power U-channel selection */
#define EMU_EMUCON_CF3_CFG                   (BIT(17))                                           /*!< PIN SF redefine */
#define EMU_EMUCON_P2RUN                     (BIT(18))                                           /*!< enable active power register 2 accumulate */
#define EMU_EMUCON_Q2RUN                     (BIT(19))                                           /*!< enable reactive power register 2 accumulate */
#define EMU_EMUCON_S2RUN                     (BIT(20))                                           /*!< enable apparent power register 2 accumulate */
#define EMU_EMUCON_SAG_FREQ_SEL              (BIT(21))                                           /*!< sag frequency selector */
#define EMU_EMUCON_CF1_CFG2                  (BIT(22))                                           /*!< PF pad configuration(with EMUCON2.CF1_CFG) */
#define EMU_EMUCON_CF2_CFG2                  (BIT(23))                                           /*!< QF pad configuration(with EMUCON2.CF2_CFG) */

/* EMU_EMUCON2 */
#define EMU_EMUCON2_IA_DC_EN                 (BIT(0))                                            /*!< IA channel DC offset enable */
#define EMU_EMUCON2_IB_DC_EN                 (BIT(1))                                            /*!< IB channel DC offset enable */
#define EMU_EMUCON2_U_DC_EN                  (BIT(2))                                            /*!< U channel DC offset enable */
#define EMU_EMUCON2_USAG_CFG                 (BITS(3,10))                                        /*!< voltage sag half cycle count */
#define EMU_EMUCON2_CF1_CFG                  (BITS(11,12))                                       /*!< PF pin switch over config */
#define EMU_EMUCON2_CF2_CFG                  (BITS(13,14))                                       /*!< QF pin switch over config */
#define EMU_EMUCON2_PADD                     (BITS(15,17))                                       /*!< PF addition mode */
#define EMU_EMUCON2_QADD                     (BITS(18,20))                                       /*!< QF addition mode */
#define EMU_EMUCON2_SADD                     (BITS(21,23))                                       /*!< SF addition mode */

/* EMU_HFCONST */
#define EMU_HFCONST_HFCONST                  (BITS(0,15))                                        /*!< high frequency impulse constant bits */

/* EMU_PSTART */
#define EMU_PSTART_PSTART                    (BITS(0,15))                                        /*!< active power starting threshold bits */

/* EMU_QSTART */
#define EMU_QSTART_QSTART                    (BITS(0,15))                                        /*!< reactive power starting threshold bits */

/* EMU_GPQA */
#define EMU_GPQA_GPQA                        (BITS(0,15))                                        /*!< IA Channel power gain,used for active(reactive) power gain calibration of IA Channel and U channel bits */

/* EMU_GPQB */
#define EMU_GPQB_GPQB                        (BITS(0,15))                                        /*!< IB Channel power gain,used for active(reactive) power gain calibration of IB Channel and U channel bits */

/* EMU_PHSA */
#define EMU_PHSA_PHSA                        (BITS(0,8))                                         /*!< phase adjustment for IA Channel and U channel */

/* EMU_PHSB */
#define EMU_PHSB_PHSB                        (BITS(0,8))                                         /*!< phase adjustment for IB Channel and U channel */

/* EMU_QPHSCAL */
#define EMU_QPHSCAL_QPHSCAL                  (BITS(0,15))                                        /*!< reactive power phase Calibration */

/* EMU_APOSA */
#define EMU_APOSA_APOSA                      (BITS(0,15))                                        /*!< IA channel active power offset */

/* EMU_APOSB */
#define EMU_APOSB_APOSB                      (BITS(0,15))                                        /*!< IA channel reactive power offset calibration */

/* EMU_RPOSA */
#define EMU_RPOSA_RPOSA                      (BITS(0,15))                                        /*!< IB channel reactive power offset calibration */

/* EMU_RPOSB */
#define EMU_RPOSB_RPOSB                      (BITS(0,15))                                        /*!< IB channel reactive power offset calibration */

/* EMU_IARMSOS */
#define EMU_IARMSOS_IARMSOS                  (BITS(0,15))                                        /*!< IA channel RMS offset calibration */

/* EMU_IBRMSOS */
#define EMU_IBRMSOS_IBRMSOS                  (BITS(0,15))                                        /*!< IB channel RMS offset calibration */

/* EMU_URMSOS */
#define EMU_URMSOS_URMSOS                    (BITS(0,15))                                        /*!< U channel RMS offset calibration */

/* EMU_IAGAIN */
#define EMU_IAGAIN_IAGAIN                    (BITS(0,15))                                        /*!< IA channel gain for channel coherence calibration */

/* EMU_IBGAIN */
#define EMU_IBGAIN_IBGAIN                    (BITS(0,15))                                        /*!< IB channel gain for channel coherence calibration */

/* EMU_UGAIN */
#define EMU_UGAIN_UGAIN                      (BITS(0,15))                                        /*!< U channel gain for channel coherence calibration */

/* EMU_IADCOS */
#define EMU_IADCOS_IADCOS                    (BITS(0,23))                                        /*!< IA channel direct current offset calibration */

/* EMU_IBDCOS */
#define EMU_IBDCOS_IBDCOS                    (BITS(0,23))                                        /*!< IB channel direct current offset calibration */

/* EMU_UDCOS */
#define EMU_UDCOS_UDCOS                      (BITS(0,23))                                        /*!< U channel direct current offset calibration */

/* EMU_UADD */
#define EMU_UADD_UADD                        (BITS(0,23))                                        /*!< U channel bias */

/* EMU_USAG */
#define EMU_USAG_USAG                        (BITS(0,15))                                        /*!< U channel sag threshold */

/* EMU_IAPEAK */
#define EMU_IAPEAK_IAPEAK                    (BITS(0,15))                                        /*!< IA channel peak detection threshold */

/* EMU_IBPEAK */
#define EMU_IBPEAK_IBPEAK                    (BITS(0,15))                                        /*!< IB channel peak detection threshold */

/* EMU_UPEAK */
#define EMU_UPEAK_UPEAK                      (BITS(0,15))                                        /*!< U channel peak detection threshold */

/* EMU_D2FP */
#define EMU_D2FP_D2FP                        (BITS(0,31))                                        /*!< User-defined Power Register */

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_EMUCON3 */
#define EMU_EMUCON3_EMUCON3                  (BITS(0,17))                                        /*!< Control3 */

/* EMU_EMUCON4 */
#define EMU_EMUCON4_EMUCON4                  (BITS(0,15))                                        /*!< Control4 */

/* EMU_EMUCON5 */
#define EMU_EMUCON5_EMUCON5                  (BITS(0,11))                                        /*!< Control5 */

/* EMU_CF_CFG */
#define EMU_CF_CFG_CF_CFG                    (BITS(0,19))                                        /*!< CF configuration */

/* EMU_HWRMS_CFG */
#define EMU_HWRMS_CFG_HWRMS_CFG              (BITS(0,14))                                        /*!< half-wave rms configuration */

/* EMU_HWP_CFG */
#define EMU_HWP_CFG_HWP_CFG                  (BITS(0,13))                                        /*!< half-wave power configuration */

/* EMU_HWFP_CFG */
#define EMU_HWFP_CFG_HWFP_CFG                (BITS(0,12))                                        /*!< half-wave fundamental power configuration */

/* EMU_HWQ_CFG */
#define EMU_HWQ_CFG_HWQ_CFG                  (BITS(0,14))                                        /*!< half-wave reactive power configuration */

/* EMU_HFCONST2 */
#define EMU_HFCONST2_HFCONST2                (BITS(0,15))                                        /*!< high frequency impulse constant2 */

/* EMU_HFCONST3 */
#define EMU_HFCONST3_HFCONST3                (BITS(0,15))                                        /*!< high frequency impulse constant3 */

/* EMU_NEG1BIT_EN */
#define EMU_NEG1BIT_EN_NEG1BIT_EN            (BITS(0,31))                                        /*!< one-bit input invert configuration */

/* EMU_EMUMODE */
#define EMU_EMUMODE_EMUMODE                  (BITS(0,31))                                        /*!< EMU mode configuration */

/* EMU_ATCHOP_CFG */
#define EMU_ATCHOP_CFG_ATCHOP_CFG            (BITS(0,9))                                         /*!< auto chop configuration */

/* EMU_FGAIN */
#define EMU_FGAIN_FGAIN                      (BITS(0,15))                                        /*!< fundamental gain for channel coherence calibration */

/* EMU_APOSFA */
#define EMU_APOSFA_APOSFA                    (BITS(0,15))                                        /*!< IA channel fundamental active power offset */

/* EMU_APOSFB */
#define EMU_APOSFB_APOSFB                    (BITS(0,15))                                        /*!< IB channel fundamental active power offset */

/* EMU_IAHWRMSOS */
#define EMU_IAHWRMSOS_IAHWRMSOS              (BITS(0,15))                                        /*!< IA channel half-wave rms offset calibration */

/* EMU_IBHWRMSOS */
#define EMU_IBHWRMSOS_IBHWRMSOS              (BITS(0,15))                                        /*!< IB channel half-wave rms offset calibration */

/* EMU_UHWRMSOS */
#define EMU_UHWRMSOS_UHWRMSOS                (BITS(0,15))                                        /*!< U channel half-wave rms offset calibration */
#endif

#if defined(RN821x_RN721x_SOC_V3)
/* EMU_ADCIN_CFG */
#define EMU_ADCIN_CFG_ADCIN_CFG              (BITS(0,31))                                        /*!< adc input config register bits */
#endif

/* EMU_PF2CNT */
#define EMU_PF2CNT_PF2CNT                    (BITS(0,15))                                        /*!< active power counter */

/* EMU_QF2CNT */
#define EMU_QF2CNT_QF2CNT                    (BITS(0,15))                                        /*!< reactive power counter */

/* EMU_SF2CNT */
#define EMU_SF2CNT_SF2CNT                    (BITS(0,15))                                        /*!< apparent  power counter */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_PF2CNT2 */
#define EMU_PF2CNT2_PF2CNT2                  (BITS(0,15))                                        /*!< IB active power counter2 */

/* EMU_QF2CNT2 */
#define EMU_QF2CNT2_QF2CNT2                  (BITS(0,15))                                        /*!< IB reactive power counter2 */

/* EMU_PF2CNT3 */
#define EMU_PF2CNT3_PF2CNT3                  (BITS(0,15))                                        /*!< IB active power counter3 */

/* EMU_QF2CNT3 */
#define EMU_QF2CNT3_QF2CNT3                  (BITS(0,15))                                        /*!< IB reactive power counter3 */

/* EMU_PFCNT2 */
#define EMU_PFCNT2_PFCNT2                    (BITS(0,15))                                        /*!< IA active power counter2 */

/* EMU_QFCNT2 */
#define EMU_QFCNT2_QFCNT2                    (BITS(0,15))                                        /*!< IA reactive power counter2 */

/* EMU_PFCNT3 */
#define EMU_PFCNT3_PFCNT3                    (BITS(0,15))                                        /*!< IA active power counter3 */

/* EMU_QFCNT3 */
#define EMU_QFCNT3_QFCNT3                    (BITS(0,15))                                        /*!< IA reactive power counter3 */
#endif

/* EMU_PFCNT */
#define EMU_PFCNT_PFCNT                      (BITS(0,15))                                        /*!< active power counter */

/* EMU_QFCNT */
#define EMU_QFCNT_QFCNT                      (BITS(0,15))                                        /*!< reactive power counter */

/* EMU_SFCNT */
#define EMU_SFCNT_SFCNT                      (BITS(0,15))                                        /*!< apparent power counter */

/* EMU_IARMS */
#define EMU_IARMS_IARMS                      (BITS(0,23))                                        /*!< IA RMS */

/* EMU_IBRMS */
#define EMU_IBRMS_IBRMS                      (BITS(0,23))                                        /*!< IB RMS */

/* EMU_URMS */
#define EMU_URMS_URMS                        (BITS(0,23))                                        /*!< U RMS */

/* EMU_UFREQ */
#define EMU_UFREQ_UFREQ                      (BITS(0,15))                                        /*!< voltage frequency */

/* EMU_POWERPA */
#define EMU_POWERPA_POWERPA                  (BITS(0,31))                                        /*!< active power in binary complement format,with MSB as sign,which is average active power of IA and U channel */

/* EMU_POWERPB */
#define EMU_POWERPB_POWERPB                  (BITS(0,31))                                        /*!< active power in binary complement format,with MSB as sign,which is average active power of IB and U channel */

/* EMU_POWERQA */
#define EMU_POWERQA_POWERQA                  (BITS(0,31))                                        /*!< reactive power in binary complement format,with MSB as sign,which is average reactive power of IA and U channel */

/* EMU_POWERQB */
#define EMU_POWERQB_POWERQB                  (BITS(0,31))                                        /*!< reactive power in binary complement format,with MSB as sign,which is average reactive power of IB and U channel */

/* EMU_POWERSA */
#define EMU_POWERSA_POWERSA                  (BITS(0,31))                                        /*!< apparent power in binary complement format,with MSB as sign,which is average apparent power of IA and U channel */

/* EMU_POWERSB */
#define EMU_POWERSB_POWERSB                  (BITS(0,31))                                        /*!< apparent power in binary complement format,with MSB as sign,which is average apparent power of IB and U channel */

/* EMU_ENERGYP */
#define EMU_ENERGYP_ENERGYP                  (BITS(0,23))                                        /*!< active energy */

/* EMU_ENERGYP2 */
#define EMU_ENERGYP2_ENERGYP2                (BITS(0,23))                                        /*!< active energy2 */

/* EMU_ENERGYQ */
#define EMU_ENERGYQ_ENERGYQ                  (BITS(0,23))                                        /*!< reactive energy */

/* EMU_ENERGYQ2 */
#define EMU_ENERGYQ2_ENERGYQ2                (BITS(0,23))                                        /*!< reactive energy2 */

/* EMU_ENERGYS */
#define EMU_ENERGYS_ENERGYS                  (BITS(0,23))                                        /*!< apperant energy */

/* EMU_PFA */
#define EMU_PFA_PFA                          (BITS(0,23))                                        /*!< IA channel power factor */

/* EMU_PFB */
#define EMU_PFB_PFB                          (BITS(0,23))                                        /*!< IB channel power factor */

/* EMU_ANGLEA */
#define EMU_ANGLEA_ANGLEA                    (BITS(0,15))                                        /*!< angel of IA and U channel */

/* EMU_ANGLEB */
#define EMU_ANGLEB_ANGLEB                    (BITS(0,15))                                        /*!< angel of IB and U channel */

/* EMU_EMUSTATUS */
#define EMU_EMUSTATUS_CHKSUM1                (BITS(0,23))                                        /*!< checksum of all meter parameter registers */
#define EMU_EMUSTATUS_CKSUM1BUSY             (BIT(24))                                           /*!< checksum calculation */
#define EMU_EMUSTATUS_REVP                   (BIT(25))                                           /*!< indication active power reversion */
#define EMU_EMUSTATUS_REVQ                   (BIT(26))                                           /*!< indication reactive power reversion */
#define EMU_EMUSTATUS_NOPLD                  (BIT(27))                                           /*!< active power too small flag */
#define EMU_EMUSTATUS_NOQLD                  (BIT(28))                                           /*!< reactive power too small flag */
#define EMU_EMUSTATUS_CHNSEL                 (BIT(29))                                           /*!< current channel selection */
#define EMU_EMUSTATUS_WREN                   (BIT(30))                                           /*!< write enable */
#define EMU_EMUSTATUS_NOSLD                  (BIT(31))                                           /*!< Apparent power and start-up power status register */

/* EMU_SPL_IA */
#define EMU_SPL_IA_SPL_IA                    (BITS(0,23))                                        /*!< sample value of current channel A ,for whick refresh rate is 7.2KHz. */

/* EMU_SPL_IB */
#define EMU_SPL_IB_SPL_IB                    (BITS(0,23))                                        /*!< sample value of current channel B ,whose refresh rate is 7.2KHz. */

/* EMU_SPL_U */
#define EMU_SPL_U_SPL_U                      (BITS(0,23))                                        /*!< sample value of voltage channel ,for whick refresh rate is 7.2KHz. */

/* EMU_POWERPA2 */
#define EMU_POWERPA2_POWERPA2                (BITS(0,31))                                        /*!< Active power A,whose refresh rate is 13.67Hz and stabilization time is about 300ms. */

/* EMU_POWERPB2 */
#define EMU_POWERPB2_POWERPB2                (BITS(0,31))                                        /*!< Active power B,whose refresh rate is 13.67Hz and stabilization time is about 300ms. */

/* EMU_ENERGYS2 */
#define EMU_ENERGYS2_ENERGYS2                (BITS(0,23))                                        /*!< Apparent Energy of channel 2, which can be configured as clear-after-read or not-clear-after-read.Default is clear-after-read. */

/* EMU_SPL_PA */
#define EMU_SPL_PA_SPL_PA                    (BITS(0,31))                                        /*!< instantaneous active power of channel A, whose refresh rate is 7.2KHz. */

/* EMU_SPL_PB */
#define EMU_SPL_PB_SPL_PB                    (BITS(0,31))                                        /*!< instantaneous active power of channel B, whose refresh rate is 7.2KHz. */

/* EMU_SPL_QA */
#define EMU_SPL_QA_SPL_QA                    (BITS(0,31))                                        /*!< instantaneous reactive power of channel A, whose refresh rate is 7.2KHz. */

/* EMU_SPL_QB */
#define EMU_SPL_QB_SPL_QB                    (BITS(0,31))                                        /*!< instantaneous reactive power of channel B, whose refresh rate is 7.2KHz. */

/* EMU_EMUSTATUS2 */
#define EMU_EMUSTATUS2_REVP                  (BIT(0))                                            /*!< indication of reverse active power. */
#define EMU_EMUSTATUS2_REVQ                  (BIT(1))                                            /*!< indication of reverse reactive power */
#define EMU_EMUSTATUS2_NOPLD                 (BIT(2))                                            /*!< active power and starting power status register */
#define EMU_EMUSTATUS2_NOQLD                 (BIT(3))                                            /*!< reactive power and starting power status register */
#define EMU_EMUSTATUS2_CHENSEL               (BIT(4))                                            /*!< indicaion of selected current channel.Default is 0. */
#define EMU_EMUSTATUS2_WREN                  (BIT(5))                                            /*!< write enable flag. */
#define EMU_EMUSTATUS2_NOSLD                 (BIT(6))                                            /*!< apparent power adn starting power status register */
#define EMU_EMUSTATUS2_LDO_FLAG              (BIT(7))                                            /*!< indicaion of LDO. */
#define EMU_EMUSTATUS2_VREF_FLAG             (BIT(8))                                            /*!< indicaion of Vref. */
#define EMU_EMUSTATUS2_REVP2                 (BIT(9))                                            /*!< indication of reverse active power 2. */
#define EMU_EMUSTATUS2_REVQ2                 (BIT(10))                                           /*!< indication of reverse reactive power 2. */
#define EMU_EMUSTATUS2_NOP2LD                (BIT(11))                                           /*!< active power 2 and starting power status register */
#define EMU_EMUSTATUS2_NOQ2LD                (BIT(12))                                           /*!< reactive power and starting power status register */
#define EMU_EMUSTATUS2_NOS2LD                (BIT(13))                                           /*!< apparent power and starting power status register */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define EMU_EMUSTATUS2_SNEGS_FLAG            (BIT(14))                                           /*!< adc input reverse flag */
#endif

/* EMU_IE */
#define EMU_IE_DUPDIE                        (BIT(0))                                            /*!< data update interrupt enable */
#define EMU_IE_PFIE                          (BIT(1))                                            /*!< PF interrupt enable */
#define EMU_IE_QFIE                          (BIT(2))                                            /*!< QF interrupt enable */
#define EMU_IE_PEOIE                         (BIT(3))                                            /*!< active energy overflow interrupt enable */
#define EMU_IE_QEOIE                         (BIT(4))                                            /*!< reactive energy overflow interrupt enable */
#define EMU_IE_ZXIE                          (BIT(5))                                            /*!< zero crossing interrupt enable */
#define EMU_IE_IBPEAKIE                      (BIT(6))                                            /*!< IB channel overload interrupt enable */
#define EMU_IE_IAPEAKIE                      (BIT(7))                                            /*!< IA channel overload interrupt enable */
#define EMU_IE_UPEAKIE                       (BIT(8))                                            /*!< U channel overload interrupt enable */
#define EMU_IE_USAGIE                        (BIT(9))                                            /*!< U channel sag interrupt enable */
#define EMU_IE_SPLIE                         (BIT(10))                                           /*!< ADC sampling interrupt enable */
#define EMU_IE_LDOIE                         (BIT(11))                                           /*!< LDO reset interrupt enable */
#define EMU_IE_VREFIE                        (BIT(12))                                           /*!< VREF reset interrupt enable */
#define EMU_IE_SEOIE                         (BIT(13))                                           /*!< apperant energy overflow interrupt enable */
#define EMU_IE_SFIE                          (BIT(14))                                           /*!< SFIE */
#define EMU_IE_PF2IE                         (BIT(15))                                           /*!< SFIE */
#define EMU_IE_QF2IE                         (BIT(16))                                           /*!< SFIE */
#define EMU_IE_SF2IE                         (BIT(17))                                           /*!< SFIE */
#define EMU_IE_P2EOIE                        (BIT(18))                                           /*!< P2EOIE */
#define EMU_IE_Q2EOIE                        (BIT(19))                                           /*!< Q2EOIE */
#define EMU_IE_S2EOIE                        (BIT(20))                                           /*!< S2EOIE */
#define EMU_IE_UZXIE                         (BIT(21))                                           /*!< I1ZXIE */
#define EMU_IE_I1ZXIE                        (BIT(22))                                           /*!< I1ZXIE */
#define EMU_IE_I2ZXIE                        (BIT(23))                                           /*!< I2ZXIE */

/* EMU_IF */
#define EMU_IF_DUPDIF                        (BIT(0))                                            /*!< data update interrupt flag */
#define EMU_IF_PFIF                          (BIT(1))                                            /*!< PF interrupt flag */
#define EMU_IF_QFIF                          (BIT(2))                                            /*!< QF interrupt flag */
#define EMU_IF_PEOIF                         (BIT(3))                                            /*!< active energy overflow interrupt flag */
#define EMU_IF_QEOIF                         (BIT(4))                                            /*!< reactive energy overflow interrupt flag */
#define EMU_IF_ZXIF                          (BIT(5))                                            /*!< zero crossing interrupt flag */
#define EMU_IF_IBPEAKIF                      (BIT(6))                                            /*!< IB channel overload interrupt flag */
#define EMU_IF_IAPEAKIF                      (BIT(7))                                            /*!< IA channel overload interrupt flag */
#define EMU_IF_UPEAKIF                       (BIT(8))                                            /*!< U channel overload interrupt flag */
#define EMU_IF_USAGIF                        (BIT(9))                                            /*!< U channel sag interrupt flag */
#define EMU_IF_SPLIF                         (BIT(10))                                           /*!< ADC sampling interrupt flag */
#define EMU_IF_LDOIF                         (BIT(11))                                           /*!< LDO reset interrupt flag */
#define EMU_IF_VREFIF                        (BIT(12))                                           /*!< VREF reset interrupt flag */
#define EMU_IF_SEOIF                         (BIT(13))                                           /*!< apparent energy interrupt flag */
#define EMU_IF_SFIF                          (BIT(14))                                           /*!< SF interrupt flag */
#define EMU_IF_PF2IF                         (BIT(15))                                           /*!< apperant energy overflow interrupt flag */
#define EMU_IF_QF2IF                         (BIT(16))                                           /*!< SF pulse output flag */
#define EMU_IF_SF2IF                         (BIT(17))                                           /*!< SF2 pulse output flag */
#define EMU_IF_P2EOIF                        (BIT(18))                                           /*!< overflow flag */
#define EMU_IF_Q2EOIF                        (BIT(19))                                           /*!< overflow flag */
#define EMU_IF_S2EOIF                        (BIT(20))                                           /*!< overflow flag */
#define EMU_IF_UZXIF                         (BIT(21))                                           /*!< zero-crossing interrupt flag */
#define EMU_IF_I1ZXIF                        (BIT(22))                                           /*!< zero-crossing interrupt flag */
#define EMU_IF_I2ZXIF                        (BIT(23))                                           /*!< zero-crossing interrupt flag */

/* EMU_DMAEN */
#define EMU_DMAEN_DMAEN                      (BIT(0))                                            /*!< None */

/* EMU_RDATA */
#define EMU_RDATA_RDATA                      (BITS(0,31))                                        /*!< last read data */

/* EMU_WDATA */
#define EMU_WDATA_WDATA                      (BITS(0,31))                                        /*!< last written data */

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_IE2 */
#define EMU_IE2_IE2                          (BITS(0,15))                                        /*!< interrupt2 enable */

/* EMU_IF2 */
#define EMU_IF2_IF2                          (BITS(0,15))                                        /*!< interrupt2 flag */
#endif

/* EMU_SPCMD */
#define EMU_SPCMD_SPCMD                      (BITS(0,7))                                         /*!< Only as the value is 0xe5 ,the EMU register can be written.Only as the value is 0xdc ,the EMU register can not be written.Only when the value is 0x5a ,channel A is set to calculate energy.Only the value is 0xa5 ,channel B is set to calculate energy. */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_EMUSTATUS3 */
#define EMU_EMUSTATUS3_EMUSTATUS3            (BITS(0,24))                                        /*!< EMU status register3 */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_IE3 */
#define EMU_IE3_IE3                          (BITS(0,8))                                         /*!< None */

/* EMU_IF3 */
#define EMU_IF3_IF3                          (BITS(0,8))                                         /*!< None */
#endif
#if defined(RN821x_RN721x_SOC_V3)
/* EMU_IE3 */
#define EMU_IE3_IE3                          (BITS(0,7))                                         /*!< None */

/* EMU_IF3 */
#define EMU_IF3_IF3                          (BITS(0,7))                                         /*!< None */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_HW_RMSIA */
#define EMU_HW_RMSIA_HW_RMSIA                (BITS(0,23))                                        /*!< IA channel fundamental rms for half-wave updates */

/* EMU_HW_RMSIB */
#define EMU_HW_RMSIB_HW_RMSIB                (BITS(0,23))                                        /*!< IB channel fundamental rms for half-wave updates */

/* EMU_HW_RMSU */
#define EMU_HW_RMSU_HW_RMSU                  (BITS(0,23))                                        /*!< U channel fundamental rms for half-wave updates */

/* EMU_HW_FPA */
#define EMU_HW_FPA_HW_FPA                    (BITS(0,31))                                        /*!< IA channel fundamental active power for half-wave updates */

/* EMU_HW_FPB */
#define EMU_HW_FPB_HW_FPB                    (BITS(0,31))                                        /*!< IB channel fundamental active power for half-wave updates */

/* EMU_SPL_IA2 */
#define EMU_SPL_IA2_SPL_IA2                  (BITS(0,23))                                        /*!< sample value of current channel A before HPF ,for whick refresh rate is 14.4KHz. */

/* EMU_SPL_IB2 */
#define EMU_SPL_IB2_SPL_IB2                  (BITS(0,23))                                        /*!< sample value of current channel B before HPF ,for whick refresh rate is 14.4KHz. */

/* EMU_SPL_U2 */
#define EMU_SPL_U2_SPL_U2                    (BITS(0,23))                                        /*!< sample value of current channel U before HPF ,for whick refresh rate is 7.2KHz. */

/* EMU_SPL_FIA */
#define EMU_SPL_FIA_SPL_FIA                  (BITS(0,23))                                        /*!< sample value of current channel A fundamental before HPF ,for whick refresh rate is 7.2KHz. */

/* EMU_SPL_FIB */
#define EMU_SPL_FIB_SPL_FIB                  (BITS(0,23))                                        /*!< sample value of current channel B fundamental before HPF ,for whick refresh rate is 7.2KHz. */

/* EMU_SPL_FU */
#define EMU_SPL_FU_SPL_FU                    (BITS(0,23))                                        /*!< sample value of current channel U fundamental before HPF ,for whick refresh rate is 7.2KHz. */

/* EMU_ENERGYP_2 */
#define EMU_ENERGYP_2_ENERGYP_2              (BITS(0,23))                                        /*!< A active energy register2 */

/* EMU_ENERGYP2_2 */
#define EMU_ENERGYP2_2_ENERGYP2_2            (BITS(0,23))                                        /*!< B active energy register2 */

/* EMU_ENERGYQ_2 */
#define EMU_ENERGYQ_2_ENERGYQ_2              (BITS(0,23))                                        /*!< A reactive energy register2 */

/* EMU_ENERGYQ2_2 */
#define EMU_ENERGYQ2_2_ENERGYQ2_2            (BITS(0,23))                                        /*!< B reactive energy register2 */

/* EMU_ENERGYP_3 */
#define EMU_ENERGYP_3_ENERGYP_3              (BITS(0,23))                                        /*!< A active energy register3 */

/* EMU_ENERGYP2_3 */
#define EMU_ENERGYP2_3_ENERGYP2_3            (BITS(0,23))                                        /*!< B active energy register3 */

/* EMU_ENERGYQ_3 */
#define EMU_ENERGYQ_3_ENERGYQ_3              (BITS(0,23))                                        /*!< A reactive energy register3 */

/* EMU_ENERGYQ2_3 */
#define EMU_ENERGYQ2_3_ENERGYQ2_3            (BITS(0,23))                                        /*!< B reactive energy register3 */

/* EMU_IADCOS_CALC */
#define EMU_IADCOS_CALC_IADCOS_CALC          (BITS(0,23))                                        /*!< IA channel auto direct current offset calibration */

/* EMU_IBDCOS_CALC */
#define EMU_IBDCOS_CALC_IBDCOS_CALC          (BITS(0,23))                                        /*!< IB channel auto direct current offset calibration */

/* EMU_UDCOS_CALC */
#define EMU_UDCOS_CALC_UDCOS_CALC            (BITS(0,23))                                        /*!< U channel auto direct current offset calibration */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_ZXOTCFG */
#define EMU_ZXOTCFG_ZXOTCFG                  (BITS(0,4))                                         /*!< zero crossing configuration */
#endif

#if defined(RN821x_RN721x_SOC_V3)
/* EMU_ZXOTCFG */
#define EMU_ZXOTCFG_ZXOTCFG                  (BIT(1))                                            /*!< zero crossing configuration */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_ZXOTI */
#define EMU_ZXOTI_ZXOTI                      (BITS(0,15))                                        /*!< I channel zero crossing configuration */

/* EMU_ZXOTU */
#define EMU_ZXOTU_ZXOTU                      (BITS(0,15))                                        /*!< U channel zero crossing configuration */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_ROS_CTRL */
#define EMU_ROS_CTRL_ROS_CTRL                (BITS(0,1))                                         /*!< ROS configuration */

/* EMU_ROS_DCATTC */
#define EMU_ROS_DCATTC_ROS_DCATTC            (BITS(0,15))                                        /*!< ROS attenuation coefficient configuration */

/* EMU_ROS_TRAN_K */
#define EMU_ROS_TRAN_K_ROS_TRAN_K            (BITS(0,15))                                        /*!< ROS transfer coefficient configuration */

/* EMU_PQSRUN */
#define EMU_PQSRUN_PQSRUN                    (BITS(0,23))                                        /*!< power accumulation configuration */

/* EMU_ECT_EN */
#define EMU_ECT_EN_ECT_EN                    (BITS(0,31))                                        /*!< ECT enable */

/* EMU_ECT_IAGAIN */
#define EMU_ECT_IAGAIN_ECT_IAGAIN            (BITS(0,15))                                        /*!< IA channel ECT gain */

/* EMU_ECT_IBGAIN */
#define EMU_ECT_IBGAIN_ECT_IBGAIN            (BITS(0,15))                                        /*!< IB channel ECT gain */

/* EMU_ECT_UGAIN */
#define EMU_ECT_UGAIN_ECT_UGAIN              (BITS(0,15))                                        /*!< U channel ECT gain */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_DMA_WAVE_CFG */
#define EMU_DMA_WAVE_CFG_DMA_WAVE_CFG        (BITS(0,14))                                        /*!< dma wave configuration */

/* EMU_DMA_BUF_CTRL */
#define EMU_DMA_BUF_CTRL_DMA_BUF_CTRL        (BIT(0))                                            /*!< dma buffer configuration */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_DMA_BUF_BADDR */
#define EMU_DMA_BUF_BADDR_DMA_BUF_BADDR      (BITS(0,14))                                        /*!< dma buffer base address configuration */

/* EMU_DMA_BUF_DEPTH */
#define EMU_DMA_BUF_DEPTH_DMA_BUF_DEPTH      (BITS(0,14))                                        /*!< dma buffer depth configuration */
#endif

#if !defined(RN821x_RN721x_SOC_V2) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_DMA_BUF_BADDR */
#define EMU_DMA_BUF_BADDR_DMA_BUF_BADDR      (BITS(0,12))                                        /*!< dma buffer base address configuration */

/* EMU_DMA_BUF_DEPTH */
#define EMU_DMA_BUF_DEPTH_DMA_BUF_DEPTH      (BITS(0,12))                                        /*!< dma buffer depth configuration */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_DMA_GAP_CFG */
#define EMU_DMA_GAP_CFG_DMA_GAP_CFG          (BITS(0,17))                                        /*!< dma gap configuration */

/* EMU_DMA_BUFF_ADDR */
#define EMU_DMA_BUFF_ADDR_DMA_BUFF_ADDR      (BITS(0,13))                                        /*!< dma buffer current address */

/* EMU_DMA_ERR_ADDR */
#define EMU_DMA_ERR_ADDR_DMA_ERR_ADDR        (BITS(0,13))                                        /*!< dma buffer error address */

/* EMU_DMA_CHECKSUM */
#define EMU_DMA_CHECKSUM_DMA_CHECKSUM        (BITS(0,31))                                        /*!< dma checksum */
#endif

/* EMU_DMA_RCD_CFG */
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define EMU_DMA_RCD_CFG_DMA_RCD_CFG          (BITS(0,13))                                        /*!< dma RCD configuration */
#elif defined(RN821x_RN721x_SOC_V3)
#define EMU_DMA_RCD_CFG_DMA_RCD_CFG          (BITS(0,12))                                        /*!< dma RCD configuration */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_DMA_BUF_RCD_CTRL */
#define EMU_DMA_BUF_RCD_CTRL_DMA_BUF_RCD_CTRL  (BIT(0))                                            /*!< dma buffer RCD configuration */

/* EMU_DMA_BUF_RCD_BADDR */
#define EMU_DMA_BUF_RCD_BADDR_DMA_BUF_RCD_BADDR  (BITS(0,14))                                        /*!< dma buffer RCD base address configuration */

/* EMU_DMA_BUF_RCD_DEPTH */
#define EMU_DMA_BUF_RCD_DEPTH_DMA_BUF_RCD_DEPTH  (BITS(0,8))                                         /*!< dma buffer RCD depth configuration */

/* EMU_DMA_RCD_GAP_DEPTH */
#define EMU_DMA_RCD_GAP_DEPTH_DMA_RCD_GAP_DEPTH  (BITS(0,14))                                        /*!< dma gap RCD configuration */

/* EMU_DMA_BUF_RCD_ADDR */
#define EMU_DMA_BUF_RCD_ADDR_DMA_BUF_RCD_ADDR  (BITS(0,14))                                        /*!< dma buffer RCD current address */

/* EMU_DMA_BUF_RCD_ERR_ADDR */
#define EMU_DMA_BUF_RCD_ERR_ADDR_DMA_BUF_RCD_ERR_ADDR  (BITS(0,14))                                        /*!< dma buffer RCD error address */

/* EMU_RCD_CTRL */
#define EMU_RCD_CTRL_RCD_CTRL                (BITS(0,19))                                        /*!< RCD configuration */

/* EMU_RCD_EN */
#define EMU_RCD_EN_RCD_EN                    (BIT(0))                                            /*!< RCD enable */

/* EMU_RCD_ISTH */
#define EMU_RCD_ISTH_RCD_ISTH                (BITS(0,31))                                        /*!< RCD input threshold configuration */

/* EMU_RCD_INTCFGA */
#define EMU_RCD_INTCFGA_RCD_INTCFGA          (BITS(0,31))                                        /*!< RCD A threshold configuration */

/* EMU_RCD_INTCFGB */
#define EMU_RCD_INTCFGB_RCD_INTCFGB          (BITS(0,7))                                         /*!< RCD B threshold configuration */

/* EMU_RCD_INTRESA */
#define EMU_RCD_INTRESA_RCD_INTRESA          (BITS(0,15))                                        /*!< RCD A result configuration */

/* EMU_RCD_INTRESB */
#define EMU_RCD_INTRESB_RCD_INTRESB          (BITS(0,7))                                         /*!< RCD B result configuration */

/* EMU_RCD_IE */
#define EMU_RCD_IE_RCD_IE                    (BITS(0,3))                                         /*!< RCD interrupt enable */

/* EMU_RCD_IF */
#define EMU_RCD_IF_RCD_IF                    (BITS(0,3))                                         /*!< RCD interrupt status */

/* EMU_RCD_STA */
#define EMU_RCD_STA_RCD_STA                  (BITS(0,3))                                         /*!< RCD status */

/* EMU_TRIG_CTRL */
#define EMU_TRIG_CTRL_TRIG_CTRL              (BITS(0,5))                                         /*!< TRIG configuration */

/* EMU_TIRG_EN */
#define EMU_TIRG_EN_TIRG_EN                  (BIT(0))                                            /*!< TRIG enable */

/* EMU_TRIG_STOP */
#define EMU_TRIG_STOP_TRIG_STOP              (BITS(0,1))                                         /*!< TRIG stop */

/* EMU_TRIG_LEN */
#define EMU_TRIG_LEN_TRIG_LEN                (BITS(0,17))                                        /*!< TRIG length */

/* EMU_TRIG_DLY */
#define EMU_TRIG_DLY_TRIG_DLY                (BITS(0,15))                                        /*!< TRIG delay */

/* EMU_TRIG_STA */
#define EMU_TRIG_STA_TRIG_STA                (BITS(0,21))                                        /*!< TRIG status */

/* EMU_TRIG_LEN2 */
#define EMU_TRIG_LEN2_TRIG_LEN2              (BITS(0,17))                                        /*!< TRIG length2 */

/* EMU_TRIG_STA2 */
#define EMU_TRIG_STA2_TRIG_STA2              (BITS(0,21))                                        /*!< TRIG status2 */
#endif

/* constants definitions */
/* EMU_EMUCON_PRUN */
#define EMU_EMUCON_PRUN_DIS                  ((uint32_t)0x00000000U)                             /*!< stop accumulating active power and outputing PF pulse */
#define EMU_EMUCON_PRUN_EN                   (EMU_EMUCON_PRUN)                                   /*!< start accumulating active power and outputing PF pulse */

/* EMU_EMUCON_QRUN */
#define EMU_EMUCON_QRUN_DIS                  ((uint32_t)0x00000000U)                             /*!< stop accumulating reactive power and outputing QF pulse */
#define EMU_EMUCON_QRUN_EN                   (EMU_EMUCON_QRUN)                                   /*!< start accumulating reactive power and outputing QF pulse */

/* EMU_EMUCON_SRUN */
#define EMU_EMUCON_SRUN_DIS                  ((uint32_t)0x00000000U)                             /*!< stop accumulating reactive power and outputing SF pulse */
#define EMU_EMUCON_SRUN_EN                   (EMU_EMUCON_SRUN)                                   /*!< start accumulating reactive power and outputing SF pulse */

/* EMU_EMUCON_CFSU */
#define EMU_EMUCON_CFSU_CFG(regval)  (EMU_EMUCON_CFSU & ((uint32_t)(regval) << 3))
#define EMU_EMUCON_CFSU_2                    (EMU_EMUCON_CFSU_CFG(0))                            /*!< PF/QF output rate accelerated at x2 */
#define EMU_EMUCON_CFSU_4                    (EMU_EMUCON_CFSU_CFG(1))                            /*!< PF/QF output rate accelerated at x4 */
#define EMU_EMUCON_CFSU_8                    (EMU_EMUCON_CFSU_CFG(2))                            /*!< PF/QF output rate accelerated at x8 */
#define EMU_EMUCON_CFSU_16                   (EMU_EMUCON_CFSU_CFG(3))                            /*!< PF/QF output rate accelerated at x16 */

/* EMU_EMUCON_CFSUEN */
#define EMU_EMUCON_CFSUEN_DIS                ((uint32_t)0x00000000U)                             /*!< PF/QF output rate set as normal */
#define EMU_EMUCON_CFSUEN_EN                 (EMU_EMUCON_CFSUEN)                                 /*!< accelerating PF/QF output rate defined as CFSU */

/* EMU_EMUCON_HPFUOFF */
#define EMU_EMUCON_HPFUOFF_EN                ((uint32_t)0x00000000U)                             /*!< enable DHPF in U-channel */
#define EMU_EMUCON_HPFUOFF_DIS               (EMU_EMUCON_HPFUOFF)                                /*!< disable DHPF in U-channel */

/* EMU_EMUCON_HPFIAOFF */
#define EMU_EMUCON_HPFIAOFF_EN               ((uint32_t)0x00000000U)                             /*!< enable DHPF in IA-channel */
#define EMU_EMUCON_HPFIAOFF_DIS              (EMU_EMUCON_HPFIAOFF)                               /*!< disable DHPF in IA-channel */

/* EMU_EMUCON_HPFIBOFF */
#define EMU_EMUCON_HPFIBOFF_EN               ((uint32_t)0x00000000U)                             /*!< enable DHPF in IB-channel */
#define EMU_EMUCON_HPFIBOFF_DIS              (EMU_EMUCON_HPFIBOFF)                               /*!< disable DHPF in IB-channel */

/* EMU_EMUCON_ENERGY_CLR */
#define EMU_EMUCON_ENERGY_CLR_CLEAR          ((uint32_t)0x00000000U)                             /*!< all register clear as 0 after reading */
#define EMU_EMUCON_ENERGY_CLR_HOLD           (EMU_EMUCON_ENERGY_CLR)                             /*!< all register hold on after reading */

/* EMU_EMUCON_ZXD0 */
#define EMU_EMUCON_ZXD0_POS                  ((uint32_t)0x00000000U)                             /*!< select positive zero-crossing point */
#define EMU_EMUCON_ZXD0_NEG                  (EMU_EMUCON_ZXD0)                                   /*!< select negative zero-crossing point */

/* EMU_EMUCON_ZXD1 */
#define EMU_EMUCON_ZXD1_DIS                  ((uint32_t)0x00000000U)                             /*!< toggle ZX only at zero crossing point defined by ZXD0 */
#define EMU_EMUCON_ZXD1_EN                   (EMU_EMUCON_ZXD1)                                   /*!< toggle ZX only at both positive and negative zero crossing point */

/* EMU_EMUCON_PMOD */
#define EMU_EMUCON_PMOD_CFG(regval)  (EMU_EMUCON_PMOD & ((uint32_t)(regval) << 12))
#define EMU_EMUCON_PMOD_POSNEG               (EMU_EMUCON_PMOD_CFG(0))                            /*!< accumulating both positive and negative power,keeping sign to negative power */
#define EMU_EMUCON_PMOD_POS                  (EMU_EMUCON_PMOD_CFG(1))                            /*!< accumulating only positive */
#define EMU_EMUCON_PMOD_ABS                  (EMU_EMUCON_PMOD_CFG(2))                            /*!< accumulating absolute value of both positive and negative power */
#define EMU_EMUCON_PMOD_NEG                  (EMU_EMUCON_PMOD_CFG(3))                            /*!< do not use */

/* EMU_EMUCON_QMOD */
#define EMU_EMUCON_QMOD_CFG(regval)  (EMU_EMUCON_QMOD & ((uint32_t)(regval) << 14))
#define EMU_EMUCON_QMOD_POSNEG               (EMU_EMUCON_QMOD_CFG(0))                            /*!< accumulating both positive and negative power,keeping sign to negative power */
#define EMU_EMUCON_QMOD_POS                  (EMU_EMUCON_QMOD_CFG(1))                            /*!< accumulating only positive */
#define EMU_EMUCON_QMOD_ABS                  (EMU_EMUCON_QMOD_CFG(2))                            /*!< accumulating absolute value of both positive and negative power */
#define EMU_EMUCON_QMOD_NEG                  (EMU_EMUCON_QMOD_CFG(3))                            /*!< do not use */

/* EMU_EMUCON_U_START */
#define EMU_EMUCON_U_START_DIS               ((uint32_t)0x00000000U)                             /*!< count U-channel when calculate apparent power */
#define EMU_EMUCON_U_START_EN                (EMU_EMUCON_U_START)                                /*!< ignore U-channel when calculate apparent power */

/* EMU_EMUCON_CF3_CFG */
#define EMU_EMUCON_CF3_CFG_SF1               ((uint32_t)0x00000000U)                             /*!< redefine SF as SF1 */
#define EMU_EMUCON_CF3_CFG_SF2               (EMU_EMUCON_CF3_CFG)                                /*!< redefine SF as SF2 */

/* EMU_EMUCON_P2RUN */
#define EMU_EMUCON_P2RUN_DIS                 ((uint32_t)0x00000000U)                             /*!< disable active power register 2 accumulate */
#define EMU_EMUCON_P2RUN_EN                  (EMU_EMUCON_P2RUN)                                  /*!< enable active power register 2 accumulate */

/* EMU_EMUCON_Q2RUN */
#define EMU_EMUCON_Q2RUN_DIS                 ((uint32_t)0x00000000U)                             /*!< disable reactive power register 2 accumulate */
#define EMU_EMUCON_Q2RUN_EN                  (EMU_EMUCON_Q2RUN)                                  /*!< enable reactive power register 2 accumulate */

/* EMU_EMUCON_S2RUN */
#define EMU_EMUCON_S2RUN_DIS                 ((uint32_t)0x00000000U)                             /*!< disable apparent power register 2 accumulate */
#define EMU_EMUCON_S2RUN_EN                  (EMU_EMUCON_S2RUN)                                  /*!< enable apparent power register 2 accumulate */

/* EMU_EMUCON2_IA_DC_EN */
#define EMU_EMUCON2_IA_DC_EN_DIS             ((uint32_t)0x00000000U)                             /*!< disable IA channel DC offset correction */
#define EMU_EMUCON2_IA_DC_EN_EN              (EMU_EMUCON2_IA_DC_EN)                              /*!< enable IA channel DC offset correction */

/* EMU_EMUCON2_IB_DC_EN */
#define EMU_EMUCON2_IB_DC_EN_DIS             ((uint32_t)0x00000000U)                             /*!< disable IB channel DC offset correction */
#define EMU_EMUCON2_IB_DC_EN_EN              (EMU_EMUCON2_IB_DC_EN)                              /*!< enable IB channel DC offset correction */

/* EMU_EMUCON2_U_DC_EN */
#define EMU_EMUCON2_U_DC_EN_DIS              ((uint32_t)0x00000000U)                             /*!< disable U channel DC offset correction */
#define EMU_EMUCON2_U_DC_EN_EN               (EMU_EMUCON2_U_DC_EN)                               /*!< enable U channel DC offset correction */

/* EMU_EMUSTATUS_CKSUM1BUSY */
#define EMU_EMUSTATUS_CKSUM1BUSY_DONE        ((uint32_t)0x00000000U)                             /*!< calibration data checksum calculation has been completed */
#define EMU_EMUSTATUS_CKSUM1BUSY_BUSY        (EMU_EMUSTATUS_CKSUM1BUSY)                          /*!< calibration data checksum during calculation */

/* EMU_EMUSTATUS_REVP */
#define EMU_EMUSTATUS_REVP_POS               ((uint32_t)0x00000000U)                             /*!< active power change from negative to postive */
#define EMU_EMUSTATUS_REVP_NEG               (EMU_EMUSTATUS_REVP)                                /*!< active power change from postive to negative */

/* EMU_EMUSTATUS_REVQ */
#define EMU_EMUSTATUS_REVQ_POS               ((uint32_t)0x00000000U)                             /*!< reactive power change from negative to postive */
#define EMU_EMUSTATUS_REVQ_NEG               (EMU_EMUSTATUS_REVQ)                                /*!< reactive power change from postive to negative */

/* EMU_EMUSTATUS_NOPLD */
#define EMU_EMUSTATUS_NOPLD_BIG              ((uint32_t)0x00000000U)                             /*!< active power greater than or equal with starting power */
#define EMU_EMUSTATUS_NOPLD_SMALL            (EMU_EMUSTATUS_NOPLD)                               /*!< active power less than starting power */

/* EMU_EMUSTATUS_NOQLD */
#define EMU_EMUSTATUS_NOQLD_BIG              ((uint32_t)0x00000000U)                             /*!< reactive power greater than or equal with starting power */
#define EMU_EMUSTATUS_NOQLD_SMALL            (EMU_EMUSTATUS_NOQLD)                               /*!< reactive power less than starting power */

/* EMU_EMUSTATUS_CHNSEL */
#define EMU_EMUSTATUS_CHNSEL_A               ((uint32_t)0x00000000U)                             /*!< IA channel used to calculate active(reactive) power */
#define EMU_EMUSTATUS_CHNSEL_B               (EMU_EMUSTATUS_CHNSEL)                              /*!< IB channel used to calculate active(reactive) power */

/* EMU_EMUSTATUS_WREN */
#define EMU_EMUSTATUS_WREN_DIS               ((uint32_t)0x00000000U)                             /*!< disable write to protected registers */
#define EMU_EMUSTATUS_WREN_EN                (EMU_EMUSTATUS_WREN)                                /*!< enable write to protected registers */

/* EMU_EMUSTATUS_NOSLD */
#define EMU_EMUSTATUS_NOSLD_NOSLD            ((uint32_t)0x00000000U)                             /*!< when apparent power is more than or equal start-up power ,NoSld is 0. */
#define EMU_EMUSTATUS_NOSLD_SLD              (EMU_EMUSTATUS_NOSLD)                               /*!< when apparent power is less than start-up power ,NoSld is set to 1. */

/* EMU_EMUSTATUS2_REVP */
#define EMU_EMUSTATUS2_REVP_0                ((uint32_t)0x00000000U)                             /*!< when the next detecting result is positive active power ,clear the bit as 0 . */
#define EMU_EMUSTATUS2_REVP_1                (EMU_EMUSTATUS2_REVP)                               /*!< when negative active power is detected ,set the bit as 1. */

/* EMU_EMUSTATUS2_REVQ */
#define EMU_EMUSTATUS2_REVQ_0                ((uint32_t)0x00000000U)                             /*!< when the next detecting result is positive reactive power ,clear the bit as 0 . */
#define EMU_EMUSTATUS2_REVQ_1                (EMU_EMUSTATUS2_REVQ)                               /*!< when negative reactive power is detected ,set the bit as 1. */

/* EMU_EMUSTATUS2_NOPLD */
#define EMU_EMUSTATUS2_NOPLD_0               ((uint32_t)0x00000000U)                             /*!< When active power is more than or equal to starting power ,Nopld is clear to 0. */
#define EMU_EMUSTATUS2_NOPLD_1               (EMU_EMUSTATUS2_NOPLD)                              /*!< when active power is less than starting power ,Nopld is set to 1. */

/* EMU_EMUSTATUS2_NOQLD */
#define EMU_EMUSTATUS2_NOQLD_0               ((uint32_t)0x00000000U)                             /*!< When reactive power is more than or equal to starting power ,Noqld is clear to 0. */
#define EMU_EMUSTATUS2_NOQLD_1               (EMU_EMUSTATUS2_NOQLD)                              /*!< when reactive power is less than starting power ,Noqld is set to 1. */

/* EMU_EMUSTATUS2_CHENSEL */
#define EMU_EMUSTATUS2_CHENSEL_0             ((uint32_t)0x00000000U)                             /*!< 0:the current channel for caculating active/reactive energy is A. */
#define EMU_EMUSTATUS2_CHENSEL_1             (EMU_EMUSTATUS2_CHENSEL)                            /*!< 1:the current channel for caculating active/reactive energy is B. */

/* EMU_EMUSTATUS2_WREN */
#define EMU_EMUSTATUS2_WREN_0                ((uint32_t)0x00000000U)                             /*!< 0:disable to write the protected register. */
#define EMU_EMUSTATUS2_WREN_1                (EMU_EMUSTATUS2_WREN)                               /*!< 1:enable to write the protected register. */

/* EMU_EMUSTATUS2_NOSLD */
#define EMU_EMUSTATUS2_NOSLD_0               ((uint32_t)0x00000000U)                             /*!< When apparent power is more than or equal to starting power ,Nosld is clear to 0. */
#define EMU_EMUSTATUS2_NOSLD_1               (EMU_EMUSTATUS2_NOSLD)                              /*!< when apparent power is less than starting power ,Nosld is set to 1. */

/* EMU_EMUSTATUS2_LDO_FLAG */
#define EMU_EMUSTATUS2_LDO_FLAG_0            ((uint32_t)0x00000000U)                             /*!< 0:LDO value is less than threshold voltage. */
#define EMU_EMUSTATUS2_LDO_FLAG_1            (EMU_EMUSTATUS2_LDO_FLAG)                           /*!< 1:LDO is normal. */

/* EMU_EMUSTATUS2_VREF_FLAG */
#define EMU_EMUSTATUS2_VREF_FLAG_0           ((uint32_t)0x00000000U)                             /*!< 0:Vref value is less than threshold voltage. */
#define EMU_EMUSTATUS2_VREF_FLAG_1           (EMU_EMUSTATUS2_VREF_FLAG)                          /*!< 1:Vref is normal. */

/* EMU_EMUSTATUS2_REVP2 */
#define EMU_EMUSTATUS2_REVP2_0               ((uint32_t)0x00000000U)                             /*!< when the next detecting result is positive active power ,clear the bit as 0 . */
#define EMU_EMUSTATUS2_REVP2_1               (EMU_EMUSTATUS2_REVP2)                              /*!< when negative active power is detected ,set the bit as 1. */

/* EMU_EMUSTATUS2_REVQ2 */
#define EMU_EMUSTATUS2_REVQ2_0               ((uint32_t)0x00000000U)                             /*!< when the next detecting result is positive reactive power ,clear the bit as 0. */
#define EMU_EMUSTATUS2_REVQ2_1               (EMU_EMUSTATUS2_REVQ2)                              /*!< when negative reactive power is detected ,set the bit as 1. */

/* EMU_EMUSTATUS2_NOP2LD */
#define EMU_EMUSTATUS2_NOP2LD_0              ((uint32_t)0x00000000U)                             /*!< When active power 2 is more than or equal to starting power ,Nopld is clear to 0. */
#define EMU_EMUSTATUS2_NOP2LD_1              (EMU_EMUSTATUS2_NOP2LD)                             /*!< when active power 2 is less than starting power ,Nopld is set to 1. */

/* EMU_EMUSTATUS2_NOQ2LD */
#define EMU_EMUSTATUS2_NOQ2LD_0              ((uint32_t)0x00000000U)                             /*!< When reactive power 2 is more than or equal to starting power ,Nopld is clear to 0. */
#define EMU_EMUSTATUS2_NOQ2LD_1              (EMU_EMUSTATUS2_NOQ2LD)                             /*!< when reactive power 2 is less than starting power ,Nopld is set to 1. */

/* EMU_EMUSTATUS2_NOS2LD */
#define EMU_EMUSTATUS2_NOS2LD_0              ((uint32_t)0x00000000U)                             /*!< When apparent power 2 is more than or equal to starting power ,Nosld is clear to 0. */
#define EMU_EMUSTATUS2_NOS2LD_1              (EMU_EMUSTATUS2_NOS2LD)                             /*!< when apparent power 2 is less than starting power ,Nosld is set to 1. */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* EMU_EMUSTATUS2_SNEGS_FLAG */
#define EMU_EMUSTATUS2_SNEGS_FLAG_0          ((uint32_t)0x00000000U)                             /*!< postive adc input */
#define EMU_EMUSTATUS2_SNEGS_FLAG_1          (EMU_EMUSTATUS2_SNEGS_FLAG)                         /*!< negative adc input */
#endif

/* EMU_IE_DUPDIE */
#define EMU_IE_DUPDIE_DIS                    ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request when update found on PowerPA,PowerPB,PowerQ,IARMS,IBRMS and URMS */
#define EMU_IE_DUPDIE_EN                     (EMU_IE_DUPDIE)                                     /*!< generate interrupt request when update found on PowerPA,PowerPB,PowerQ,IARMS,IBRMS and URMS */

/* EMU_IE_PFIE */
#define EMU_IE_PFIE_DIS                      ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on PF event */
#define EMU_IE_PFIE_EN                       (EMU_IE_PFIE)                                       /*!< generate interrupt request on PF event */

/* EMU_IE_QFIE */
#define EMU_IE_QFIE_DIS                      ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on QF event */
#define EMU_IE_QFIE_EN                       (EMU_IE_QFIE)                                       /*!< generate interrupt request on QF event */

/* EMU_IE_PEOIE */
#define EMU_IE_PEOIE_DIS                     ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on active energy overflow event */
#define EMU_IE_PEOIE_EN                      (EMU_IE_PEOIE)                                      /*!< generate interrupt request on active energy overflow event */

/* EMU_IE_QEOIE */
#define EMU_IE_QEOIE_DIS                     ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on reactive energy overflow event */
#define EMU_IE_QEOIE_EN                      (EMU_IE_QEOIE)                                      /*!< generate interrupt request on active reenergy overflow event */

/* EMU_IE_ZXIE */
#define EMU_IE_ZXIE_DIS                      ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on zero crossing event */
#define EMU_IE_ZXIE_EN                       (EMU_IE_ZXIE)                                       /*!< generate interrupt request on zero crossing event */

/* EMU_IE_IBPEAKIE */
#define EMU_IE_IBPEAKIE_DIS                  ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on IB channel overload event */
#define EMU_IE_IBPEAKIE_EN                   (EMU_IE_IBPEAKIE)                                   /*!< generate interrupt request on IB channel overload event */

/* EMU_IE_IAPEAKIE */
#define EMU_IE_IAPEAKIE_DIS                  ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on IA channel overload event */
#define EMU_IE_IAPEAKIE_EN                   (EMU_IE_IAPEAKIE)                                   /*!< generate interrupt request on IA channel overload event */

/* EMU_IE_UPEAKIE */
#define EMU_IE_UPEAKIE_DIS                   ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on U channel overload event */
#define EMU_IE_UPEAKIE_EN                    (EMU_IE_UPEAKIE)                                    /*!< generate interrupt request on U channel overload event */

/* EMU_IE_USAGIE */
#define EMU_IE_USAGIE_DIS                    ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on U channel sag event */
#define EMU_IE_USAGIE_EN                     (EMU_IE_USAGIE)                                     /*!< generate interrupt request on U channel sag event */

/* EMU_IE_SPLIE */
#define EMU_IE_SPLIE_DIS                     ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on ADC sampling event */
#define EMU_IE_SPLIE_EN                      (EMU_IE_SPLIE)                                      /*!< generate interrupt request on ADC sampling event */

/* EMU_IE_LDOIE */
#define EMU_IE_LDOIE_DIS                     ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on LDO reset event */
#define EMU_IE_LDOIE_EN                      (EMU_IE_LDOIE)                                      /*!< generate interrupt request on LDO reset event */

/* EMU_IE_VREFIE */
#define EMU_IE_VREFIE_DIS                    ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on VREF reset event */
#define EMU_IE_VREFIE_EN                     (EMU_IE_VREFIE)                                     /*!< generate interrupt request on VREF reset event */

/* EMU_IE_SEOIE */
#define EMU_IE_SEOIE_DIS                     ((uint32_t)0x00000000U)                             /*!< do not generate interrupt request on apperant energy overflow event */
#define EMU_IE_SEOIE_EN                      (EMU_IE_SEOIE)                                      /*!< generate interrupt request on apperant energy overflow event */

/* EMU_IE_SFIE */
#define EMU_IE_SFIE_CLOSE                    ((uint32_t)0x00000000U)                             /*!< colse SF interrupt */
#define EMU_IE_SFIE_OPEN                     (EMU_IE_SFIE)                                       /*!< open SF interrupt */

/* EMU_IE_PF2IE */
#define EMU_IE_PF2IE_DIS                     ((uint32_t)0x00000000U)                             /*!< disable PF2 interrupt */
#define EMU_IE_PF2IE_EN                      (EMU_IE_PF2IE)                                      /*!< enable PF2 interrupt */

/* EMU_IE_QF2IE */
#define EMU_IE_QF2IE_DIS                     ((uint32_t)0x00000000U)                             /*!< disable QF2 interrupt */
#define EMU_IE_QF2IE_EN                      (EMU_IE_QF2IE)                                      /*!< enable QF2 interrupt */

/* EMU_IE_SF2IE */
#define EMU_IE_SF2IE_DIS                     ((uint32_t)0x00000000U)                             /*!< disable SF2 interrupt */
#define EMU_IE_SF2IE_EN                      (EMU_IE_SF2IE)                                      /*!< enable SF2 interrupt */

/* EMU_IE_P2EOIE */
#define EMU_IE_P2EOIE_DIS                    ((uint32_t)0x00000000U)                             /*!< disable overflow interrupt of active energy register */
#define EMU_IE_P2EOIE_EN                     (EMU_IE_P2EOIE)                                     /*!< enable overflow interrupt of active energy registe */

/* EMU_IE_Q2EOIE */
#define EMU_IE_Q2EOIE_DIS                    ((uint32_t)0x00000000U)                             /*!< disable overflow interrupt of reactive energy register */
#define EMU_IE_Q2EOIE_EN                     (EMU_IE_Q2EOIE)                                     /*!< enable overflow interrupt of reactive energy registe */

/* EMU_IE_S2EOIE */
#define EMU_IE_S2EOIE_DIS                    ((uint32_t)0x00000000U)                             /*!< disable overflow interrupt of apparent  energy register */
#define EMU_IE_S2EOIE_EN                     (EMU_IE_S2EOIE)                                     /*!< enable overflow interrupt of apparent  energy registe */

/* EMU_IE_UZXIE */
#define EMU_IE_UZXIE_DIS                     ((uint32_t)0x00000000U)                             /*!< disable zero-crossing interrupt of voltage channel */
#define EMU_IE_UZXIE_EN                      (EMU_IE_UZXIE)                                      /*!< enable zero-crossing interrupt of voltage channel */

/* EMU_IE_I1ZXIE */
#define EMU_IE_I1ZXIE_DIS                    ((uint32_t)0x00000000U)                             /*!< disable zero-crossing interrupt of current channel 1 */
#define EMU_IE_I1ZXIE_EN                     (EMU_IE_I1ZXIE)                                     /*!< enable zero-crossing interrupt of current channel 1 */

/* EMU_IE_I2ZXIE */
#define EMU_IE_I2ZXIE_DIS                    ((uint32_t)0x00000000U)                             /*!< disable zero-crossing interrupt of current channel 2 */
#define EMU_IE_I2ZXIE_EN                     (EMU_IE_I2ZXIE)                                     /*!< enable zero-crossing interrupt of current channel 2 */

/* EMU_IF_DUPDIF */
#define EMU_IF_DUPDIF_NUL                    ((uint32_t)0x00000000U)                             /*!< not any update found on PowerPA,PowerPB,PowerQ,IARMS,IBRMS and URMS */
#define EMU_IF_DUPDIF_OCC                    (EMU_IF_DUPDIF)                                     /*!< update found on PowerPA,PowerPB,PowerQ,IARMS,IBRMS and URMS */

/* EMU_IF_PFIF */
#define EMU_IF_PFIF_NUL                      ((uint32_t)0x00000000U)                             /*!< no pending PF event */
#define EMU_IF_PFIF_OCC                      (EMU_IF_PFIF)                                       /*!< found pending PF event */

/* EMU_IF_QFIF */
#define EMU_IF_QFIF_NUL                      ((uint32_t)0x00000000U)                             /*!< no pending QF event */
#define EMU_IF_QFIF_OCC                      (EMU_IF_QFIF)                                       /*!< found pending QF event */

/* EMU_IF_PEOIF */
#define EMU_IF_PEOIF_NUL                     ((uint32_t)0x00000000U)                             /*!< no pending active energy overflow event */
#define EMU_IF_PEOIF_OCC                     (EMU_IF_PEOIF)                                      /*!< found pending active energy overflow event */

/* EMU_IF_QEOIF */
#define EMU_IF_QEOIF_NUL                     ((uint32_t)0x00000000U)                             /*!< no pending reactive energy overflow event */
#define EMU_IF_QEOIF_OCC                     (EMU_IF_QEOIF)                                      /*!< found pending active reenergy overflow event */

/* EMU_IF_ZXIF */
#define EMU_IF_ZXIF_NUL                      ((uint32_t)0x00000000U)                             /*!< no pending zero crossing event */
#define EMU_IF_ZXIF_OCC                      (EMU_IF_ZXIF)                                       /*!< found pending zero crossing event */

/* EMU_IF_IBPEAKIF */
#define EMU_IF_IBPEAKIF_NUL                  ((uint32_t)0x00000000U)                             /*!< no pending IB channel overload event */
#define EMU_IF_IBPEAKIF_OCC                  (EMU_IF_IBPEAKIF)                                   /*!< found pending IB channel overload event */

/* EMU_IF_IAPEAKIF */
#define EMU_IF_IAPEAKIF_NUL                  ((uint32_t)0x00000000U)                             /*!< no pending IA channel overload event */
#define EMU_IF_IAPEAKIF_OCC                  (EMU_IF_IAPEAKIF)                                   /*!< found pending IA channel overload event */

/* EMU_IF_UPEAKIF */
#define EMU_IF_UPEAKIF_NUL                   ((uint32_t)0x00000000U)                             /*!< no pending U channel overload event */
#define EMU_IF_UPEAKIF_OCC                   (EMU_IF_UPEAKIF)                                    /*!< found pending  U channel overload event */

/* EMU_IF_USAGIF */
#define EMU_IF_USAGIF_NUL                    ((uint32_t)0x00000000U)                             /*!< no pending U channel sag event */
#define EMU_IF_USAGIF_OCC                    (EMU_IF_USAGIF)                                     /*!< found pending U channel sag event */

/* EMU_IF_SPLIF */
#define EMU_IF_SPLIF_NUL                     ((uint32_t)0x00000000U)                             /*!< no pending ADC sampling event */
#define EMU_IF_SPLIF_OCC                     (EMU_IF_SPLIF)                                      /*!< found pending ADC sampling event */

/* EMU_IF_LDOIF */
#define EMU_IF_LDOIF_NUL                     ((uint32_t)0x00000000U)                             /*!< no pending LDO reset event */
#define EMU_IF_LDOIF_OCC                     (EMU_IF_LDOIF)                                      /*!< found pending LDO reset event */

/* EMU_IF_VREFIF */
#define EMU_IF_VREFIF_NUL                    ((uint32_t)0x00000000U)                             /*!< no pending VREF reset event */
#define EMU_IF_VREFIF_OCC                    (EMU_IF_VREFIF)                                     /*!< found pending VREF reset event */

/* EMU_IF_SEOIF */
#define EMU_IF_SEOIF_NUL                     ((uint32_t)0x00000000U)                             /*!< no pending apparent energy overflow */
#define EMU_IF_SEOIF_OCC                     (EMU_IF_SEOIF)                                      /*!< found pending apparent energy overflow */

/* EMU_IF_SFIF */
#define EMU_IF_SFIF_NUL                      ((uint32_t)0x00000000U)                             /*!< no pending SF event */
#define EMU_IF_SFIF_OCC                      (EMU_IF_SFIF)                                       /*!< found pending SF event */

/* EMU_IF_PF2IF */
#define EMU_IF_PF2IF_NUL                     ((uint32_t)0x00000000U)                             /*!< no pending SF event */
#define EMU_IF_PF2IF_OCC                     (EMU_IF_PF2IF)                                      /*!< found pending SF event */

/* EMU_IF_QF2IF */
#define EMU_IF_QF2IF_NUL                     ((uint32_t)0x00000000U)                             /*!< no pending QF2 event */
#define EMU_IF_QF2IF_OCC                     (EMU_IF_QF2IF)                                      /*!< found pending QF2 event */

/* EMU_IF_SF2IF */
#define EMU_IF_SF2IF_NUL                     ((uint32_t)0x00000000U)                             /*!< no pending SF2 event */
#define EMU_IF_SF2IF_OCC                     (EMU_IF_SF2IF)                                      /*!< found pending SF2 event */

/* EMU_IF_P2EOIF */
#define EMU_IF_P2EOIF_NUL                    ((uint32_t)0x00000000U)                             /*!< active energy register 2  isn't overflow */
#define EMU_IF_P2EOIF_OCC                    (EMU_IF_P2EOIF)                                     /*!< active energy register 2 overflow */

/* EMU_IF_Q2EOIF */
#define EMU_IF_Q2EOIF_NUL                    ((uint32_t)0x00000000U)                             /*!< reactive energy register 2  isn't overflow */
#define EMU_IF_Q2EOIF_OCC                    (EMU_IF_Q2EOIF)                                     /*!< reactive energy register 2 overflow */

/* EMU_IF_S2EOIF */
#define EMU_IF_S2EOIF_NUL                    ((uint32_t)0x00000000U)                             /*!< apparent energy register 2  isn't overflow */
#define EMU_IF_S2EOIF_OCC                    (EMU_IF_S2EOIF)                                     /*!< apparent energy register 2 is overflow */

/* EMU_IF_UZXIF */
#define EMU_IF_UZXIF_NUL                     ((uint32_t)0x00000000U)                             /*!< zero-crossing interrupt of voltage channel didn't occur. */
#define EMU_IF_UZXIF_OCC                     (EMU_IF_UZXIF)                                      /*!< zero-crossing interrupt of voltage channel occured. */

/* EMU_IF_I1ZXIF */
#define EMU_IF_I1ZXIF_NUL                    ((uint32_t)0x00000000U)                             /*!< zero-crossing interrupt of current channel 1 didn't occur. */
#define EMU_IF_I1ZXIF_OCC                    (EMU_IF_I1ZXIF)                                     /*!< zero-crossing interrupt of current channel 1 occured. */

/* EMU_IF_I2ZXIF */
#define EMU_IF_I2ZXIF_NUL                    ((uint32_t)0x00000000U)                             /*!< zero-crossing interrupt of current channel 2 didn't occur. */
#define EMU_IF_I2ZXIF_OCC                    (EMU_IF_I2ZXIF)                                     /*!< zero-crossing interrupt of current channel 2 occured. */

#endif /* RN821X_RN721X_SOC_EMU_H */
/* r1974 */
