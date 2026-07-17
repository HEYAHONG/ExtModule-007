/******************************************************************************
 * @file        rn8xxx_ll_sea_def.h
 * @brief       paramters for the SEA Engine
 * @author      Renergy Technology
 *
 * @note
 * Copyright (C) , Renergy Technology Inc. All rights reserved.
 *****************************************************************************/
#ifndef SEA_CYPHER_PARAMETERS_H_
#define SEA_CYPHER_PARAMETERS_H_

#include "renergy_chip_config.h"

#include <stdint.h>
#include <string.h>

/*
 * Arm Compiler 4/5
 */
#if   defined ( __CC_ARM )
      #include "cmsis_armcc.h"
/*
 * IAR Compiler
 */
#elif defined ( __ICCARM__ )
      #if 0
      #include "cmsis_iar.h"
      #else
      #include "cmsis_iccarm.h"
      #endif
/*
 * GNU Compiler
 */
#elif defined ( __GNUC__ )
  #include "cmsis_gcc.h"
#else
    #include "cmsis_compiler.h"  /* CMSIS compiler specific defines */
#endif

#define AES_CRYPT_ITEMS_IN_BYTES
#define HASH_CRYPT_ITEMS_IN_BYTES
#define ECC_CRYPT_ITEMS_IN_BYTES

/******************************************************************************
 * support hash PRCESS Latch & Recover
 *****************************************************************************/
#define HASH_PROCESS_LATCH_RECOVER_SUPPORT

/******************************************************************************
 * support AES PRCESS Latch & Recover
 *****************************************************************************/
#define AES_PROCESS_LATCH_RECOVER_SUPPORT

/******************************************************************************
 * support AES GCM GMAC ONLY
 *****************************************************************************/
#define AES_DECRYPT_GCM_SPECIAL_MOD_TYPE 0

#define NB    4U
/* Number of 32-bit words comprising the cypher key */
#define NK_AES128    4U
#define NK_AES192    6U
#define NK_AES256    8U

/* Number of bytes comprising the cypher key */
#define AES128_KEYSIZE    ((unsigned char)(4U*NK_AES128))
#define AES192_KEYSIZE    ((unsigned char)(4U*NK_AES192))
#define AES256_KEYSIZE    ((unsigned char)(4U*NK_AES256))

/* input and output buffer blocks processed every turn */
#define AES_PLAIN_BSIZE            (4U*NB)
#define AES_CRYPT_BSIZE            (4U*NB)
#define AES_BLOCK_BSIZE            (4U*NB)
#define AES_BLOCK_BSHIFT           (4U)

/******************************************************************************
 * State columns
 * fixed for all allowed configurations
 * HASH
 *****************************************************************************/
/* SHA  MOD NUMBER */
#define NMOD_SHA          (5U)

/* SHA  OUTPUT */
#define NOUT_SHA_1        (5U)
#define NOUT_SHA_224      (7U)
#define NOUT_SHA_256      (8U)
#define NOUT_SHA_384      (12U)
#define NOUT_SHA_512      (16U)

#define NOUT_SHA_MAX      (NOUT_SHA_512)

/* SHA  IV */
#define NIV_SHA_160        (5U)
#define NIV_SHA_224_256    (8U)
#define NIV_SHA_384_256    (16U)

#define HASH_SHA_160_256_IV_BSIZE    (16U*NB)
#define HASH_SHA_384_512_IV_BSIZE    (32U*NB)

/* SHA Number of 32-bit words comprising the block data */
#define NBLOCK_DATA_SHA_160_256    (16U)
#define NBLOCK_DATA_SHA_384_512    (32U)

/* SHA BLOCK SHIFT */
/* SHA Number of byte comprising the block data shift */
#define BSHIFT_BLOCK_DATA_SHA_160_256    (6U)
#define BSHIFT_BLOCK_DATA_SHA_384_512    (7U)

#define NBLOCK_DATA_SHA_MAX     (uint8_t)(NBLOCK_DATA_SHA_384_512)

/******************************************************************************
 * size of the cypher items in bytes/32bit words
 *****************************************************************************/
#ifdef AES_CRYPT_ITEMS_IN_BYTES
/* input/output items are in bytes */
typedef uint8_t  plainData_t;
typedef uint8_t  cryptData_t;
typedef uint8_t  add_t;
typedef uint8_t  ghashData_t;
typedef uint8_t  iv_t;
#define AES_REGS_DIV_DATA_ITEM    16U
#else
/* input/output items are in words */
typedef uint32_t plainData_t;
typedef uint32_t cryptData_t;
typedef uint32_t add_t;
typedef uint32_t ghashData_t;
typedef uint32_t iv_t;
#define AES_REGS_DIV_DATA_ITEM    4U
#endif

#ifdef HASH_CRYPT_ITEMS_IN_BYTES
/* input/output items are in bytes */
typedef uint8_t  hashData_t;
#else
typedef uint32_t hashData_t ;
#endif

typedef uint32_t regData_t;

/* key is specified in bytes */
typedef uint8_t  aesKey_t;

/* tag is specified in bytes */
typedef uint8_t  tag_t;

#ifdef ECC_CRYPT_ITEMS_IN_BYTES
typedef uint8_t eccData_t;
#else
typedef uint32_t eccData_t;
#endif

typedef enum {
    SEA_MSG_BIG_ENDIAN    = 0x0,
    SEA_MSG_LITTLE_ENDIAN = 0x1,
} SEA_ENDIAN_MOD;

typedef enum {
    CypherDatasNotTheLast     = 0x0,
    CypherDatasIsTheLast      = 0x1,
} CYPHER_DATA_STA;

typedef enum {
    AES_PLAIN_ONLY           = 0x0,
    AES_IV_ONLY              = 0x1,
    AES_IV_PLAIN3            = 0x2,
    AES_PLAIN_IV3            = 0x3,
} SEA_AES_CRYPT_STRC;

typedef struct {
    regData_t  h_y0[4]            ;
    regData_t  h_iv[4]            ;
    regData_t  h_add[4]           ;
    regData_t  h_predata[4]       ;
    regData_t  h_default[4]       ;
    regData_t  iv[4]              ;
    regData_t  cypher_predata[4]  ;
    regData_t  key[NK_AES256]     ;
    uint32_t   C_SIZE             ;
} SEA_AES_G_PARAS;

typedef struct {
    uint32_t   datas[NBLOCK_DATA_SHA_MAX];
    uint8_t    size_last   ;
    uint8_t    reserved[3] ;
} SEA_HASH_DATAIN_MANAGE;

typedef struct {
    regData_t               DATA[NOUT_SHA_MAX];
    SEA_HASH_DATAIN_MANAGE  datain;
}SEA_HASH_G_PARAS;

typedef struct {
    SEA_AES_G_PARAS   aes_buf  ;
    SEA_HASH_G_PARAS  hash_buf ;
} SEA_G_PARAS;

typedef struct {
    uint8_t   data8[0x20000]    ;
}SEA_REGS_BYTEMSK;

typedef struct {
    uint16_t  data16[0x10000]   ;
}SEA_REGS_hWordMSK;

typedef struct {
    uint32_t  data32[0x8000]   ;
}SEA_REGS_WordMSK;

/******************************************************************************
 * State columns
 * fixed for all allowed configurations
 * AES
 *****************************************************************************/
typedef enum {
    AES_SPC_NONE               = 0x0 ,
    AES_SPC_GCM_VERIFY_ONLY    = 0x1 , /*AES GCM decrypt_verify func, then  only VERIFY*/
    AES_SPC_GMAC_CryptData     = 0x2 , /*AES GCM GMAC,input data is crypt datas。*/
} AES_SPECIAL_MOD;

typedef enum {
    SEA_AES_128,
    SEA_AES_192,
    SEA_AES_256
} SEA_AES_LEN_MODE;

typedef enum {
   SEA_AES_ECB             = 0 ,
   SEA_AES_CBC             = 1 ,
   SEA_AES_CTR             = 2 ,
   SEA_AES_CFB128          = 3 ,
   SEA_AES_OFB             = 4 ,
} SEA_AES_CRYPT_MODE;

/******************************************************************************
 * internal parameters, donot care it
 *****************************************************************************/
typedef struct {
    SEA_AES_CRYPT_MODE        cryptMode              ;
    uint8_t                   reserved0[3]           ;
    uint32_t                  cryptSize              ;
    uint32_t                  aadSize                ;
    uint8_t                   crypt_ir               ;
    uint8_t                   is_start_ghash         ;
    uint8_t                   is_start_cryptKernel   ;
    uint8_t                   is_start_crypt         ;
    SEA_AES_CRYPT_STRC        crypt_kernelMode       ;
    uint8_t                   reserved1[3]           ;
    uint32_t                  mem_limit;
} aesEngineParameters;

 /******************************************************************************
 * Configuration of the algorithm type
 * Allowed values:
 *     - AES_128 for a 128 bit key
 *     - AES_192 for a 192 bit key
 *     - AES_256 for a 256 bit key
 *****************************************************************************/
typedef enum {
    AES_enCrypt,   /*crypt*/
    AES_deCrypt,   /*decrypt*/
} AES_ENCRYPT_SEL;

typedef enum {
    AES_128,
    AES_192,
    AES_256
} AES_BITWIDE_MODE;

typedef enum {
    AES_ECB             = 0 ,
    AES_CBC             = 1 ,
    AES_CTR             = 2 ,
    AES_CFB128          = 3 ,
    AES_OFB             = 4 ,
    AES_GCM             = 5 ,
} AES_CRYPT_MODE;

typedef enum {
    AES_VERIFY_SUCCESS    = 0x0 , /*tag verify success*/
    AES_VERIFY_FAIL       = 0x1 , /*tag verigy error*/
} AES_VERIFY_STA;

typedef enum {
    AES_KW_MODE_KW,   /* key wrap using RFC-3394 */
    AES_KW_MODE_KWP,  /* key wrap with padding using RFC-5649 */
} AES_KW_MODE;

typedef struct {
    AES_ENCRYPT_SEL       encrypt_sel;  /*AES_enCrypt_sel or AES_deCrypt_sel*/
    AES_BITWIDE_MODE      bitWideMode;  /*AES_128;AES_192;AES_256*/
    AES_CRYPT_MODE        cryptMode  ;  /*AES_ECB;AES_GCM*/
    AES_KW_MODE           keyWarpMode;  /* AES_KW_MODE_KW/AES_KW_MODE_KWP */
    aesKey_t*                keyLocation;  /*pointer to  aes key location. specified in words align*/
    uint32_t              keySize;      /*size of the key in bytes; GCM only*/
    iv_t*                 ivLocation ;  /*pointer to Initialization vector location. specified in words align. valid on (CBC,CTR,CFB128,AES_OFB,GCM), except ECB*/
    uint32_t              ivSize ;      /*size of the Initialization vector in bytes; GCM only*/
    /*----the under paras is for GCM ONLY-----*/
    add_t*                addLocation  ; /*pointer to add message location. specified in words align.*/
    uint32_t              addSize      ; /*size of the add message in bytes; GCM only*/
   /*---tagSignBuf---*/
   /*when crypt and Sign, pointer to the buffer for tag out*/
   /*when decrypt and verify, pointer to the tag location, for tag verify*/
    tag_t*                tagSignBuf   ;
    uint32_t              tagSize      ; /*size of the key in bytes; valid by Sign & Verify*/
    tag_t*                tagVerifyBuf ; /*when decrypt and verify, pointer to the buffer for verify tag out*/
    /*---tagVerifySta---*/
   /*when decrypt and verify, pointer to the verify result flag*/
   /*return : = 0verify success;=1:verify error*/
    AES_VERIFY_STA*       tagVerifySta ;
    AES_SPECIAL_MOD       specialMode  ;
#ifdef  RN821x_RN721x_SOC_V3
    uint32_t       aesBlockRam ;
#endif
    uint8_t reserved[3];
    uint32_t              mem_limit;
} aesCypherConfigStr;

/******************************************************************************
 *aes process parameters
 *****************************************************************************/
typedef struct  {
    aesCypherConfigStr      config      ;
    aesEngineParameters     engine      ;
    SEA_AES_G_PARAS         proc        ;
} aesProcessParameters;

typedef enum {
    SEA_SHA_1    = 0  ,
    SEA_SHA_224  = 1  ,
    SEA_SHA_256  = 2  ,
    SEA_SHA_NC3  = 3  ,
    SEA_SHA_384  = 4  ,
    SEA_SHA_512  = 5  ,
} SEA_SHA_MODE;

/******************************************************************************
 * size of the messages  in bytes
 *****************************************************************************/
typedef struct {
    uint32_t          size_64[2]   ;  /*NC, not used*/
    /*uint32_t          size_128[2]  ;*/  /*is valid in SHA384 and SAH512*/
} SHA_MSG_SIZE_MODE;

/******************************************************************************
 * configure  SHA128/SHA192/SHA256/SHA384/SHA512 initialization
 *****************************************************************************/
typedef struct {
    SEA_SHA_MODE        bitWideMode ; /* SHA-128/224/256/384/512 select*/
    uint8_t reserved[3];
    SHA_MSG_SIZE_MODE   msgSize     ; /* size of the messages  in bytes*/
} hashConfigStr;

/******************************************************************************
 * internal parameters, donot care it
 *****************************************************************************/
typedef struct  {
    uint32_t                *pIv;
    uint8_t                  ivLen;
    uint8_t                  blockSize      ;
    uint8_t                  blockShift     ;
    uint8_t                  MsgAddLenSize  ;
    uint8_t                  dataOutLen ;
    uint8_t                  ctr_ir     ;
    uint8_t                  is_start   ;
    uint8_t                  reserved   ;
    uint32_t                 messageSize;
} hashEngineParameters;

/******************************************************************************
 *hash process parameters
 *****************************************************************************/
typedef struct  {
    hashConfigStr            config      ;
    hashEngineParameters     engine      ;
    SEA_HASH_G_PARAS         proc        ;
} hashProcessParameters;

typedef enum {
    SHA_MSG_ONLY      ,
    SHA_MSG_FILL_ADD  ,
    SHA_MSG_FILL      ,
    SHA_ZERO_ADD      ,
}SHA_BLOCK_DATA_TPYE;

typedef enum {SUCCESS = 0, ERROR = !SUCCESS} ErrStatus;
typedef enum {PASS    = 0, FAIL = !PASS} PassFlag;
#endif
/* r2896 */
