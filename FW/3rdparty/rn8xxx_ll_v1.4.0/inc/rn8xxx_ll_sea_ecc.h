/******************************************************************************
 * @file        rn8xxx_ll_sea_ecc.h
 * @brief       public interface for ECC
 * @author      Renergy Technology
 *
 * @note
 * Copyright (C) , Renergy Technology Inc. All rights reserved.
 *****************************************************************************/
#ifndef ECC_CYPHER_H_
#define ECC_CYPHER_H_

#include "rn8xxx_ll_sea_common.h"

/**
 * @brief ECC curve definition
 */
typedef struct {
    uint8_t  num_words; /*ECC curve bit width is rounded up in words          */
    uint8_t  num_bytes; /*ECC curve bit width is rounded up in bytes          */
    uint16_t num_bits;  /*ECC curve bit width                                 */
    uint32_t p[17];     /*ECC curve modulus                                   */
    uint32_t n[17];     /*ECC curve rank                                      */
    uint32_t a[17];     /*ECC curve Weierstrass Equation coefficient a        */
    uint32_t b[17];     /*ECC curve Weierstrass Equation coefficient b        */
    uint32_t G[34];     /*ECC curve base point                                */
}uECC_Curve_t;

extern const uECC_Curve_t Curve_NIST_P192     ;
extern const uECC_Curve_t Curve_NIST_P224     ;
extern const uECC_Curve_t Curve_NIST_P256     ;
extern const uECC_Curve_t Curve_NIST_P384     ;
extern const uECC_Curve_t Curve_NIST_P521     ;
extern const uECC_Curve_t Curve_Brainpool_256 ;
extern const uECC_Curve_t Curve_Brainpool_384 ;
extern const uECC_Curve_t Curve_Brainpool_512 ;

extern ErrStatus LL_ECC_keygen(const uECC_Curve_t *curve, eccData_t *_Q, eccData_t *_pkey);
extern ErrStatus LL_ECC_public_keygen(const uECC_Curve_t *curve, eccData_t *_Q, const eccData_t *_pkey);
extern ErrStatus LL_ECC_public_keygen_uncompressed(const uECC_Curve_t *curve, eccData_t *_Q, const eccData_t *_pkey);
extern ErrStatus LL_ECC_keyver(const uECC_Curve_t *curve, const eccData_t *_Q, PassFlag *ver_flag);
extern ErrStatus LL_ECC_DHkeygen(const uECC_Curve_t *curve, const eccData_t *_Q, const eccData_t *_pkey, eccData_t *_DHkey);
extern ErrStatus LL_ECC_DHkeygen_x(const uECC_Curve_t *curve, const eccData_t *_Q, const eccData_t *_pkey, eccData_t *_DHkey);

extern ErrStatus LL_ECC_sign_gen(const uECC_Curve_t *curve, const eccData_t *_Hm, const uint32_t Hm_len, eccData_t *_Q, eccData_t *_pkey, eccData_t *_r, eccData_t *_s);
extern ErrStatus LL_ECC_specify_pkey_sign_gen(const uECC_Curve_t *curve, const eccData_t *_Hm, const uint32_t Hm_len, eccData_t *_Q, eccData_t *_pkey, eccData_t *_r, eccData_t *_s);
extern ErrStatus LL_ECC_sign_ver(const uECC_Curve_t *curve, const eccData_t *_Hm, const uint32_t Hm_len, const eccData_t *_Q, const eccData_t *_r, const eccData_t *_s, PassFlag *ver_flag);
#endif
/* r2894 */
