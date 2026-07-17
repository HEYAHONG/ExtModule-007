/**
 * @file    rn821x_rn721x_soc_dsp.h
 * @brief   DSP definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_DSP_H
#define RN821X_RN721X_SOC_DSP_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* DSP_MAC_CTL0 */
#define DSP_MAC_CTL0_MODE_SEL                (BITS(0,4))                                         /*!< MAC unit mode selection bits */
#define DSP_MAC_CTL0_MUL_IN_FM               (BIT(5))                                            /*!< FP_MUL(float multiplication) input data format selection bit */
#define DSP_MAC_CTL0_MUL_OUT_FM              (BIT(6))                                            /*!< FP_MUL(float multiplication) output data format selection bit */
#define DSP_MAC_CTL0_ROUND_MODE              (BITS(7,9))                                         /*!< rounding mode selection bits for float arithmetic */
#define DSP_MAC_CTL0_I2F_DIV                 (BITS(10,14))                                       /*!< int to float normalization factor configuration bits(result divide by 2^n ) */
#define DSP_MAC_CTL0_F2I_MUL                 (BITS(15,19))                                       /*!< float to int normalization factor configuration bits(result multiply by 2^n ) */
#define DSP_MAC_CTL0_FFT_TB_EN               (BIT(20))                                           /*!< fft parameter table enable bit(FFT uses a fixed parameter table, only 64 points and 128 points are valid) */
#define DSP_MAC_CTL0_I2F_PRE_EN              (BITS(21,22))                                       /*!< int to float preprocessing selection bits */

/* DSP_MAC_CTL1 */
#define DSP_MAC_CTL1_INTP_LAST_EN            (BIT(0))                                            /*!< interpolation mode using last data of last period enable bit */
#define DSP_MAC_CTL1_DMA_STEP                (BITS(1,3))                                         /*!< step of DMA read data from SRAM configuration bits (only available for IIR/FIR DMA mode ) */
#define DSP_MAC_CTL1_FIR_ORDER               (BITS(4,11))                                        /*!< filter order configuration bits */

/* DSP_MAC_CTL2 */
#define DSP_MAC_CTL2_DMA_EN                  (BIT(0))                                            /*!< DSP module DMA enable bit(All DMA-related operations of DSP module are started by configuring this bit to 1) */
#define DSP_MAC_CTL2_BTFY_ONCE_KICK          (BIT(1))                                            /*!< Butterfly operation unit one-shot mode start bit */
#define DSP_MAC_CTL2_DIV_KICK                (BIT(2))                                            /*!< The division unit start bit */

/* DSP_MAC_IN0 */
#define DSP_MAC_IN0_MAC_IN0                  (BITS(0,31))                                        /*!< MAC unit input register No.0 bits */

/* DSP_MAC_IN1 */
#define DSP_MAC_IN1_MAC_IN1                  (BITS(0,31))                                        /*!< MAC unit input register No.1 bits */

/* DSP_MAC_IN2 */
#define DSP_MAC_IN2_MAC_IN2                  (BITS(0,31))                                        /*!< MAC unit input register No.2 bits */

/* DSP_MAC_IN3 */
#define DSP_MAC_IN3_MAC_IN3                  (BITS(0,31))                                        /*!< MAC unit input register No.3 bits */

/* DSP_MAC_IN4 */
#define DSP_MAC_IN4_MAC_IN4                  (BITS(0,31))                                        /*!< MAC unit input register No.4 bits */

/* DSP_MAC_IN5 */
#define DSP_MAC_IN5_MAC_IN5                  (BITS(0,31))                                        /*!< MAC unit input register No.5 bits */

/* DSP_MAC_OUT0 */
#define DSP_MAC_OUT0_MAC_OUT0                (BITS(0,31))                                        /*!< MAC unit output register No. bits0 */

/* DSP_MAC_OUT1 */
#define DSP_MAC_OUT1_MAC_OUT1                (BITS(0,31))                                        /*!< MAC unit output register No.1 bits */

/* DSP_MAC_OUT2 */
#define DSP_MAC_OUT2_MAC_OUT2                (BITS(0,31))                                        /*!< MAC unit output register No.2 bits */

/* DSP_MAC_OUT3 */
#define DSP_MAC_OUT3_MAC_OUT3                (BITS(0,31))                                        /*!< MAC unit output register No.3 bits */

/* DSP_DIV_IN0 */
#define DSP_DIV_IN0_DIV_IN0                  (BITS(0,31))                                        /*!< Division input data register No.0 bits (dividend) */

/* DSP_DIV_IN1 */
#define DSP_DIV_IN1_DIV_IN1                  (BITS(0,31))                                        /*!< Division input data register No.1 bits (divisor) */

/* DSP_DIV_OUT0 */
#define DSP_DIV_OUT0_DIV_OUT0                (BITS(0,31))                                        /*!< Division output data register bits (quotient) */

/* DSP_DMA_SRBADR */
#define DSP_DMA_SRBADR_DMA_SRBADR            (BITS(0,14))                                        /*!< DMA source data Base address configuration bits (different use for different mode, for FFT/BTFY_DMA mode:real part base address) */

/* DSP_DMA_SIBADR */
#define DSP_DMA_SIBADR_DMA_SIBADR            (BITS(0,14))                                        /*!< DMA source data imaginary part Base address configuration bits (for FFT/BTFY_DMA mode) */

/* DSP_DMA_PRBADR */
#define DSP_DMA_PRBADR_DMA_PRBADR            (BITS(0,14))                                        /*!< DMA source data Base address configuration bits ( for FFT/BTFY_DMA mode:Base address of the twiddle factors table real part; for FIR DMA mode: parameter a Base address) */

/* DSP_DMA_PIBADR */
#define DSP_DMA_PIBADR_DMA_PIBADR            (BITS(0,14))                                        /*!< DMA source data Base address of the twiddle factors table imaginary part (for FFT/BTFY_DMA mode) */

/* DSP_DMA_TRBADR */
#define DSP_DMA_TRBADR_DMA_TRBADR            (BITS(0,14))                                        /*!< DMA target data Base address configuration bits (different use for different mode,for FFT/BTFY_DMA mode: DMA target data Base address of FFT real part) */

/* DSP_DMA_TIBADR */
#define DSP_DMA_TIBADR_DMA_TIBADR            (BITS(0,14))                                        /*!< DMA target data Base address configuration bits (for FFT/BTFY_DMA mode: DMA target data Base address of FFT imaginary part) */

/* DSP_DMA_LEN */
#define DSP_DMA_LEN_DMA_LEN                  (BITS(0,9))                                         /*!< DMA data length configuration bits (different support configuration range for different mode) */

/* DSP_IE */
#define DSP_IE_MAC_IE                        (BIT(0))                                            /*!< MAC unit interrupt enable bit */
#define DSP_IE_DMA_IE                        (BIT(1))                                            /*!< DMA done interrupt enable bit */
#define DSP_IE_DIV_IE                        (BIT(2))                                            /*!< Division interrupt enable bit */
#define DSP_IE_I2F_DMA_IE                    (BIT(3))                                            /*!< int to float interrupt enable bit */
#define DSP_IE_F2I_DMA_IE                    (BIT(4))                                            /*!< float to int interrupt enable bit */
#define DSP_IE_BTFY_ONCE_IE                  (BIT(5))                                            /*!< One time Butterfly interrupt enable bit */
#define DSP_IE_BTFY_DMA_IE                   (BIT(6))                                            /*!< Butterfly DMA interrupt enable bit */
#define DSP_IE_FFT_IE                        (BIT(7))                                            /*!< FFT Mode interrupt enable bit */
#define DSP_IE_BITREV_IE                     (BIT(8))                                            /*!< Bit-reverse mode interrupt enable bit */
#define DSP_IE_MULT_IE                       (BIT(9))                                            /*!< float multiplication interrupt enable bit */
#define DSP_IE_IIR_ONCE_IE                   (BIT(10))                                           /*!< One time IIR interrupt enable bit */
#define DSP_IE_IIR_DMA_IE                    (BIT(11))                                           /*!< IIR DMA interrupt enable bit */
#define DSP_IE_FIR_DMA_IE                    (BIT(12))                                           /*!< FIR DMA interrupt enable bit */
#define DSP_IE_LINE_DMA_IE                   (BIT(13))                                           /*!< linear interpolation interrupt enable bit */
#define DSP_IE_LAGR_DMA_IE                   (BIT(14))                                           /*!< Lagrange interpolation interrupt enable bit */

/* DSP_FLG */
#define DSP_FLG_MAC_DONE                     (BIT(0))                                            /*!< MAC unit interrupt flag */
#define DSP_FLG_DMA_DONE                     (BIT(1))                                            /*!< DMA done interrupt flag */
#define DSP_FLG_DIV_DONE                     (BIT(2))                                            /*!< Division interrupt flag */
#define DSP_FLG_I2F_DMA_DONE                 (BIT(3))                                            /*!< int to float interrupt flag */
#define DSP_FLG_F2I_DMA_DONE                 (BIT(4))                                            /*!< float to int interrupt flag */
#define DSP_FLG_BTFY_ONCE_DONE               (BIT(5))                                            /*!< One time Butterfly interrupt flag */
#define DSP_FLG_BTFY_DMA_DONE                (BIT(6))                                            /*!< Butterfly DMA interrupt flag */
#define DSP_FLG_FFT_DONE                     (BIT(7))                                            /*!< FFT Mode interrupt flag */
#define DSP_FLG_BITREV_DONE                  (BIT(8))                                            /*!< Bit-reverse mode interrupt flag */
#define DSP_FLG_MULT_DONE                    (BIT(9))                                            /*!< float multiplication interrupt flag */
#define DSP_FLG_IIR_ONCE_DONE                (BIT(10))                                           /*!< One time IIR interrupt flag */
#define DSP_FLG_IIR_DMA_DONE                 (BIT(11))                                           /*!< IIR DMA interrupt flag */
#define DSP_FLG_FIR_DMA_DONE                 (BIT(12))                                           /*!< FIR DMA interrupt flag */
#define DSP_FLG_LINE_DMA_DONE                (BIT(13))                                           /*!< linear interpolation interrupt flag */
#define DSP_FLG_LAGR_DMA_DONE                (BIT(14))                                           /*!< Lagrange interpolation interrupt flag */

/* DSP_ALU_STA0 */
#define DSP_ALU_STA0_ADDSUB0_OUT0            (BIT(0))                                            /*!< ADDSUB0 int or float output is zero */
#define DSP_ALU_STA0_ADDSUB0_INFINIT         (BIT(1))                                            /*!< ADDSUB0 float output is infinity */
#define DSP_ALU_STA0_ADDSUB0_INVALID         (BIT(2))                                            /*!< ADDSUB0 float operation is invalid or one input is NAN */
#define DSP_ALU_STA0_ADDSUB0_FLOAT_TOOLESS   (BIT(3))                                            /*!< ADDSUB0 float number less than minimum normalized number */
#define DSP_ALU_STA0_ADDSUB0_FLOAT_TOOBIG    (BIT(4))                                            /*!< ADDSUB0 float number greater than maximum normalized number */
#define DSP_ALU_STA0_ADDSUB0_NOT_PRECISE     (BIT(5))                                            /*!< ADDSUB0 int or float output is not equal to the infinitely precise result */
#define DSP_ALU_STA0_ADDSUB0_INT_TOOBIG      (BIT(6))                                            /*!< ADDSUB0 int result after rounding has a magnitude greater than the largest representable two'scomplement integer with the same sign */
#define DSP_ALU_STA0_ADDSUB1_OUT0            (BIT(8))                                            /*!< ADDSUB1 int or float output is zero */
#define DSP_ALU_STA0_ADDSUB1_INFINIT         (BIT(9))                                            /*!< ADDSUB1 float output is infinity */
#define DSP_ALU_STA0_ADDSUB1_INVALID         (BIT(10))                                           /*!< ADDSUB1 float operation is invalid or one input is NAN */
#define DSP_ALU_STA0_ADDSUB1_FLOAT_TOOLESS   (BIT(11))                                           /*!< ADDSUB1 float number less than minimum normalized number */
#define DSP_ALU_STA0_ADDSUB1_FLOAT_TOOBIG    (BIT(12))                                           /*!< ADDSUB1 float number greater than maximum normalized number */
#define DSP_ALU_STA0_ADDSUB1_NOT_PRECISE     (BIT(13))                                           /*!< ADDSUB1 int or float output is not equal to the infinitely precise result */
#define DSP_ALU_STA0_ADDSUB1_INT_TOOBIG      (BIT(14))                                           /*!< ADDSUB1 int result after rounding has a magnitude greater than the largest representable two'scomplement integer with the same sign */
#define DSP_ALU_STA0_I2F_OUT0                (BIT(16))                                           /*!< I2F int or float output is zero */
#define DSP_ALU_STA0_I2F_INFINIT             (BIT(17))                                           /*!< I2F float output is infinity */
#define DSP_ALU_STA0_I2F_INVALID             (BIT(18))                                           /*!< I2F float operation is invalid or one input is NAN */
#define DSP_ALU_STA0_I2F_FLOAT_TOOLESS       (BIT(19))                                           /*!< I2F float number less than minimum normalized number */
#define DSP_ALU_STA0_I2F_FLOAT_TOOBIG        (BIT(20))                                           /*!< I2F float number greater than maximum normalized number */
#define DSP_ALU_STA0_I2F_NOT_PRECISE         (BIT(21))                                           /*!< I2F int or float output is not equal to the infinitely precise result */
#define DSP_ALU_STA0_I2F_INT_TOOBIG          (BIT(22))                                           /*!< I2F int result after rounding has a magnitude greater than the largest representable two'scomplement integer with the same sign */
#define DSP_ALU_STA0_F2I_OUT0                (BIT(24))                                           /*!< F2I int or float output is zero */
#define DSP_ALU_STA0_F2I_INFINIT             (BIT(25))                                           /*!< F2I float output is infinity */
#define DSP_ALU_STA0_F2I_INVALID             (BIT(26))                                           /*!< F2I float operation is invalid or one input is NAN */
#define DSP_ALU_STA0_F2I_FLOAT_TOOLESS       (BIT(27))                                           /*!< F2I float number less than minimum normalized number */
#define DSP_ALU_STA0_F2I_FLOAT_TOOBIG        (BIT(28))                                           /*!< F2I float number greater than maximum normalized number */
#define DSP_ALU_STA0_F2I_NOT_PRECISE         (BIT(29))                                           /*!< F2I int or float output is not equal to the infinitely precise result */
#define DSP_ALU_STA0_F2I_INT_TOOBIG          (BIT(30))                                           /*!< F2I int result after rounding has a magnitude greater than the largest representable two'scomplement integer with the same sign */

/* DSP_ALU_STA1 */
#define DSP_ALU_STA1_MUL_OUT0                (BIT(0))                                            /*!< MUL int or float output is zero */
#define DSP_ALU_STA1_MUL_INFINIT             (BIT(1))                                            /*!< MUL float output is infinity */
#define DSP_ALU_STA1_MUL_INVALID             (BIT(2))                                            /*!< MUL float operation is invalid or one input is NAN */
#define DSP_ALU_STA1_MUL_FLOAT_TOOLESS       (BIT(3))                                            /*!< MUL float number less than minimum normalized number */
#define DSP_ALU_STA1_MUL_FLOAT_TOOBIG        (BIT(4))                                            /*!< MUL float number greater than maximum normalized number */
#define DSP_ALU_STA1_MUL_NOT_PRECISE         (BIT(5))                                            /*!< MUL int or float output is not equal to the infinitely precise result */
#define DSP_ALU_STA1_MUL_INT_TOOBIG          (BIT(6))                                            /*!< MUL int result after rounding has a magnitude greater than the largest representable two'scomplement integer with the same sign */
#define DSP_ALU_STA1_DIV_OUT0                (BIT(8))                                            /*!< DIV int or float output is zero */
#define DSP_ALU_STA1_DIV_INFINIT             (BIT(9))                                            /*!< DIV float output is infinity */
#define DSP_ALU_STA1_DIV_INVALID             (BIT(10))                                           /*!< DIV float operation is invalid or one input is NAN */
#define DSP_ALU_STA1_DIV_FLOAT_TOOLESS       (BIT(11))                                           /*!< DIV float number less than minimum normalized number */
#define DSP_ALU_STA1_DIV_FLOAT_TOOBIG        (BIT(12))                                           /*!< DIV float number greater than maximum normalized number */
#define DSP_ALU_STA1_DIV_NOT_PRECISE         (BIT(13))                                           /*!< DIV int or float output is not equal to the infinitely precise result */
#define DSP_ALU_STA1_DIV_INT_TOOBIG          (BIT(14))                                           /*!< DIV int result after rounding has a magnitude greater than the largest representable two'scomplement integer with the same sign */

/* DSP_CRD_CTL */
#define DSP_CRD_CTL_CRD_VEC_KICK             (BIT(0))                                            /*!< DSP cordic vector mode start bit */
#define DSP_CRD_CTL_CRD_ROT_KICK             (BIT(1))                                            /*!< DSP cordic rotation mode start bit */

/* DSP_CRD_XIN */
#define DSP_CRD_XIN_CRD_XIN                  (BITS(0,31))                                        /*!< Cordic Vector mode data x input */

/* DSP_CRD_YIN */
#define DSP_CRD_YIN_CRD_YIN                  (BITS(0,31))                                        /*!< Cordic Vector mode data y input */

/* DSP_CRD_AMP */
#define DSP_CRD_AMP_CRD_AMP                  (BITS(0,31))                                        /*!< Cordic Vector mode Amplitude Output */

/* DSP_CRD_PHASE */
#define DSP_CRD_PHASE_CRD_PHASE              (BITS(0,31))                                        /*!< Cordic Vector mode Phase Output */

/* DSP_CRD_ANGLE */
#define DSP_CRD_ANGLE_CRD_ANGLE              (BITS(0,31))                                        /*!< Cordic rotation mode input */

/* DSP_CRD_COS */
#define DSP_CRD_COS_CRD_COS                  (BITS(0,31))                                        /*!< Cordic Vector mode Cosine Output */

/* DSP_CRD_SIN */
#define DSP_CRD_SIN_CRD_SIN                  (BITS(0,31))                                        /*!< Cordic Vector mode Sine Output */

/* DSP_CRD_IE */
#define DSP_CRD_IE_CRD_VEC_IE                (BIT(0))                                            /*!< Cordic Vector Mode Completion Interrupt Enable */
#define DSP_CRD_IE_CRD_ROT_IE                (BIT(1))                                            /*!< Cordic Rotation Mode Completion Interrupt Enable */

/* DSP_CRD_FLG */
#define DSP_CRD_FLG_CRD_VEC_DONE             (BIT(0))                                            /*!< Cordic Vector operation Completion Flag */
#define DSP_CRD_FLG_CRD_ROT_DONE             (BIT(1))                                            /*!< Cordic Rotation operation Completion Flag */

/* DSP_INTP_LEN */
#define DSP_INTP_LEN_INTP_LEN                (BITS(0,12))                                        /*!< interpolation input data len configuration bits */

/* DSP_INTP_LOC */
#define DSP_INTP_LOC_INTP_LOC                (BITS(0,31))                                        /*!< current interpolation location configuration (float format) bits */

/* DSP_INTP_STEP */
#define DSP_INTP_STEP_INTP_STEP              (BITS(0,31))                                        /*!< interpolation step configuration (float format) bits */

/* constants definitions */
/* DSP_MAC_CTL0_MODE_SEL */
#define DSP_MAC_CTL0_MODE_SEL_CFG(regval)  (DSP_MAC_CTL0_MODE_SEL & ((uint32_t)(regval) << 0))
#define DSP_MAC_CTL0_MODE_SEL_DIS            (DSP_MAC_CTL0_MODE_SEL_CFG(0))                      /*!< disable all mode of MAC unit */
#define DSP_MAC_CTL0_MODE_SEL_I2F_ONCE       (DSP_MAC_CTL0_MODE_SEL_CFG(1))                      /*!< int to float conversion one-shot mode enable */
#define DSP_MAC_CTL0_MODE_SEL_I2F_DMA        (DSP_MAC_CTL0_MODE_SEL_CFG(2))                      /*!< int to float conversion DMA mode enable */
#define DSP_MAC_CTL0_MODE_SEL_F2I_ONCE       (DSP_MAC_CTL0_MODE_SEL_CFG(3))                      /*!< float to int conversion one-shot mode enable */
#define DSP_MAC_CTL0_MODE_SEL_F2I_DMA        (DSP_MAC_CTL0_MODE_SEL_CFG(4))                      /*!< float to int conversion DMA mode enable */
#define DSP_MAC_CTL0_MODE_SEL_FP_MUL         (DSP_MAC_CTL0_MODE_SEL_CFG(5))                      /*!< float multiply mode enable */
#define DSP_MAC_CTL0_MODE_SEL_FP_ADD         (DSP_MAC_CTL0_MODE_SEL_CFG(6))                      /*!< float addition mode enable */
#define DSP_MAC_CTL0_MODE_SEL_FP_SUB         (DSP_MAC_CTL0_MODE_SEL_CFG(7))                      /*!< float subtraction mode enable */
#define DSP_MAC_CTL0_MODE_SEL_FP_MLAD        (DSP_MAC_CTL0_MODE_SEL_CFG(8))                      /*!< float multiplication and addition mode enable */
#define DSP_MAC_CTL0_MODE_SEL_BTFY_ONCE      (DSP_MAC_CTL0_MODE_SEL_CFG(9))                      /*!< Butterfly operation unit one-shot mode enable */
#define DSP_MAC_CTL0_MODE_SEL_BTFY_DMA       (DSP_MAC_CTL0_MODE_SEL_CFG(10))                     /*!< Butterfly operation unit DMA mode enable */
#define DSP_MAC_CTL0_MODE_SEL_FFT            (DSP_MAC_CTL0_MODE_SEL_CFG(11))                     /*!< FFT mode enable */
#define DSP_MAC_CTL0_MODE_SEL_BIT_RV         (DSP_MAC_CTL0_MODE_SEL_CFG(12))                     /*!< bit reverse mode enable */
#define DSP_MAC_CTL0_MODE_SEL_IIR_ONCE       (DSP_MAC_CTL0_MODE_SEL_CFG(13))                     /*!< 2nd IIR filter one-shot mode enable */
#define DSP_MAC_CTL0_MODE_SEL_IIR_DMA        (DSP_MAC_CTL0_MODE_SEL_CFG(14))                     /*!< 2nd IIR filter DMA mode enable */
#define DSP_MAC_CTL0_MODE_SEL_FIR_DMA        (DSP_MAC_CTL0_MODE_SEL_CFG(15))                     /*!< FIR filter mode enable */
#define DSP_MAC_CTL0_MODE_SEL_LINE_INTP      (DSP_MAC_CTL0_MODE_SEL_CFG(16))                     /*!< linear interpolation mode enable */
#define DSP_MAC_CTL0_MODE_SEL_LAGR_INTP      (DSP_MAC_CTL0_MODE_SEL_CFG(17))                     /*!< Lagrange interpolation mode enable */

/* DSP_MAC_CTL0_MUL_IN_FM */
#define DSP_MAC_CTL0_MUL_IN_FM_FLOAT         ((uint32_t)0x00000000U)                             /*!< select float format */
#define DSP_MAC_CTL0_MUL_IN_FM_INT           (DSP_MAC_CTL0_MUL_IN_FM)                            /*!< select int   format */

/* DSP_MAC_CTL0_MUL_OUT_FM */
#define DSP_MAC_CTL0_MUL_OUT_FM_FLOAT        ((uint32_t)0x00000000U)                             /*!< select float format */
#define DSP_MAC_CTL0_MUL_OUT_FM_INT          (DSP_MAC_CTL0_MUL_OUT_FM)                           /*!< select int   format */

/* DSP_MAC_CTL0_ROUND_MODE */
#define DSP_MAC_CTL0_ROUND_MODE_CFG(regval)  (DSP_MAC_CTL0_ROUND_MODE & ((uint32_t)(regval) << 7))
#define DSP_MAC_CTL0_ROUND_MODE_NEARST       (DSP_MAC_CTL0_ROUND_MODE_CFG(0))                    /*!< float arithmetic rounding mode select as round to nearest */
#define DSP_MAC_CTL0_ROUND_MODE_ZERO         (DSP_MAC_CTL0_ROUND_MODE_CFG(1))                    /*!< float arithmetic rounding mode select as round toward zero */
#define DSP_MAC_CTL0_ROUND_MODE_P_INF        (DSP_MAC_CTL0_ROUND_MODE_CFG(2))                    /*!< float arithmetic rounding mode select as round to positive infinity */
#define DSP_MAC_CTL0_ROUND_MODE_N_INF        (DSP_MAC_CTL0_ROUND_MODE_CFG(3))                    /*!< float arithmetic rounding mode select as round to negative infiinity */
#define DSP_MAC_CTL0_ROUND_MODE_UP           (DSP_MAC_CTL0_ROUND_MODE_CFG(4))                    /*!< float arithmetic rounding mode select as round to nearst up */
#define DSP_MAC_CTL0_ROUND_MODE_AWAY         (DSP_MAC_CTL0_ROUND_MODE_CFG(5))                    /*!< float arithmetic rounding mode select as round away from zero */

/* DSP_MAC_CTL0_I2F_PRE_EN */
#define DSP_MAC_CTL0_I2F_PRE_EN_CFG(regval)  (DSP_MAC_CTL0_I2F_PRE_EN & ((uint32_t)(regval) << 21))
#define DSP_MAC_CTL0_I2F_PRE_EN_4BYTE        (DSP_MAC_CTL0_I2F_PRE_EN_CFG(0))                    /*!< I2F input data 4 byte available */
#define DSP_MAC_CTL0_I2F_PRE_EN_3BYTE        (DSP_MAC_CTL0_I2F_PRE_EN_CFG(1))                    /*!< I2F input data low 3 byte available */
#define DSP_MAC_CTL0_I2F_PRE_EN_2BYTE        (DSP_MAC_CTL0_I2F_PRE_EN_CFG(2))                    /*!< I2F input data low 2 byte available */
#define DSP_MAC_CTL0_I2F_PRE_EN_1BYTE        (DSP_MAC_CTL0_I2F_PRE_EN_CFG(3))                    /*!< I2F input data low 1 byte available */

/* DSP_MAC_CTL1_DMA_STEP */
#define DSP_MAC_CTL1_DMA_STEP_CFG(regval)  (DSP_MAC_CTL1_DMA_STEP & ((uint32_t)(regval) << 1))
#define DSP_MAC_CTL1_DMA_STEP_1              (DSP_MAC_CTL1_DMA_STEP_CFG(0))                      /*!< configuration DMA data transfer step as 1 (only available for IIR/FIR DMA mode) */
#define DSP_MAC_CTL1_DMA_STEP_2              (DSP_MAC_CTL1_DMA_STEP_CFG(1))                      /*!< configuration DMA data transfer step as 2 (only available for IIR/FIR DMA mode) */
#define DSP_MAC_CTL1_DMA_STEP_3              (DSP_MAC_CTL1_DMA_STEP_CFG(2))                      /*!< configuration DMA data transfer step as 3 (only available for IIR/FIR DMA mode) */
#define DSP_MAC_CTL1_DMA_STEP_4              (DSP_MAC_CTL1_DMA_STEP_CFG(3))                      /*!< configuration DMA data transfer step as 4 (only available for IIR/FIR DMA mode) */
#define DSP_MAC_CTL1_DMA_STEP_5              (DSP_MAC_CTL1_DMA_STEP_CFG(4))                      /*!< configuration DMA data transfer step as 5 (only available for IIR/FIR DMA mode) */
#define DSP_MAC_CTL1_DMA_STEP_6              (DSP_MAC_CTL1_DMA_STEP_CFG(5))                      /*!< configuration DMA data transfer step as 6 (only available for IIR/FIR DMA mode) */
#define DSP_MAC_CTL1_DMA_STEP_7              (DSP_MAC_CTL1_DMA_STEP_CFG(6))                      /*!< configuration DMA data transfer step as 7 (only available for IIR/FIR DMA mode) */
#define DSP_MAC_CTL1_DMA_STEP_8              (DSP_MAC_CTL1_DMA_STEP_CFG(7))                      /*!< configuration DMA data transfer step as 8 (only available for IIR/FIR DMA mode) */
#endif

#endif /* RN821X_RN721X_SOC_DSP_H */
/* r1190 */
