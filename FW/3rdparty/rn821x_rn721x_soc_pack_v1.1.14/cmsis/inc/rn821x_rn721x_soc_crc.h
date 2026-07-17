/**
 * @file    rn821x_rn721x_soc_crc.h
 * @brief   CRC definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_CRC_H
#define RN821X_RN721X_SOC_CRC_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* CRC_DR */
#define CRC_DR_DR                            (BITS(0,31))                                        /*!< crc data bits */

/* CRC_STA */
#define CRC_STA_STA                          (BIT(0))                                            /*!< crc status bits */

/* CRC_CTRL */
#define CRC_CTRL_CTRL                        (BITS(0,7))                                         /*!< crc configuration bits */

/* CRC_INIT */
#define CRC_INIT_INIT                        (BITS(0,31))                                        /*!< crc initial data bits */

/* CRC_POL */
#define CRC_POL_POL                          (BITS(0,31))                                        /*!< crc polynomial bits */

/* CRC_XOR */
#define CRC_XOR_XOR                          (BITS(0,31))                                        /*!< crc xor output value bits */

/* CRC_DMA_CTL */
#define CRC_DMA_CTL_DMA_CTL                  (BITS(0,2))                                         /*!< crc dma confibits */

/* CRC_DMA_BADR */
#define CRC_DMA_BADR_DMA_BADR                (BITS(0,16))                                        /*!< crc base address bits */

/* CRC_DMA_LEN */
#define CRC_DMA_LEN_DMA_LEN                  (BITS(0,16))                                        /*!< crc length bits */

/* CRC_DMA_ADR */
#define CRC_DMA_ADR_DMA_ADR                  (BITS(0,16))                                        /*!< crc current address bits */

/* CRC_DMA_IE */
#define CRC_DMA_IE_DMA_IE                    (BIT(0))                                            /*!< crc interrupt enable bits */

/* CRC_DMA_FLG */
#define CRC_DMA_FLG_DMA_FLG                  (BIT(0))                                            /*!< crc flag bits */
#endif

/* constants definitions */
#endif /* RN821X_RN721X_SOC_CRC_H */
/* r1190 */
