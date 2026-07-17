/**
 * @file    rn821x_rn721x_soc_spi.h
 * @brief   SPI definitions for RN821X_RN721X_SOC
 * @version v1.1.2
 */
#ifndef RN821X_RN721X_SOC_SPI_H
#define RN821X_RN721X_SOC_SPI_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* SPI_CTRL */
#define SPI_CTRL_EN                          (BIT(0))                                            /*!< module enable */
#define SPI_CTRL_MAST_SLAV                   (BIT(1))                                            /*!< master slave selection */
#define SPI_CTRL_TR_IRQ_EN                   (BIT(2))                                            /*!< transmit interrupt enable */
#define SPI_CTRL_ERR_IRQ_EN                  (BIT(3))                                            /*!< SCSN error interrupt enable */
#define SPI_CTRL_RXCOL_IRQ_EN                (BIT(4))                                            /*!< receive data collision interrupt enable */
#define SPI_CTRL_TXCOL_IRQ_EN                (BIT(5))                                            /*!< transmit data collision interrupt enable */
#define SPI_CTRL_LMSB                        (BIT(6))                                            /*!< LSB or MSB selection */
#define SPI_CTRL_CPOL                        (BIT(7))                                            /*!< clock polarity selection */
#define SPI_CTRL_CPHA                        (BIT(8))                                            /*!< clock phase selection */
#define SPI_CTRL_SCSN_EN                     (BIT(9))                                            /*!< SCSN error detection enable.applicable in master mode */
#define SPI_CTRL_WIDTH                       (BITS(10,11))                                       /*!< data width selection */
#define SPI_CTRL_CLKDIV                      (BITS(12,19))                                       /*!< clock divisor for SCK.frequency of SCK is (frequency of system clock)/(2*(CLKDIV+1)) */
#if !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SPI_CTRL_TX_DFLT_EN                  (BIT(22))                                           /*!< transmit data when TX buffer empty */
#define SPI_CTRL_TXEMPT_IRQEN                (BIT(23))                                           /*!< transmit empty interrupt */
#define SPI_CTRL_SCSN_NEG_IRQEN              (BIT(24))                                           /*!< CSN NEG interrupt */
#define SPI_CTRL_SCSN_POS_IRQEN              (BIT(25))                                           /*!< CSN POS interrupt */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SPI_CTRL_SLV_TX_ADV                  (BIT(26))                                           /*!< SPI slave high speed mode enable */
#endif

/* SPI_STA */
#define SPI_STA_TRIF                         (BIT(0))                                            /*!< transmit interrupt flag */
#define SPI_STA_ERRIF                        (BIT(1))                                            /*!< SCSN error interrupt flag */
#define SPI_STA_RXCOLIF                      (BIT(2))                                            /*!< receive data overflow interrupt flag */
#define SPI_STA_TXCOLIF                      (BIT(3))                                            /*!< transmit data overflow interrupt flag */
#define SPI_STA_TXBUFVLD                     (BIT(4))                                            /*!< transmit buffer not empty flag */
#if !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SPI_STA_TXEMPT                       (BIT(5))                                            /*!< transmit buffer empty conflict flag (buffer empty but need to transmit) */
#define SPI_STA_SCSN_NEG                     (BIT(6))                                            /*!< CSN posedge flag */
#define SPI_STA_SCSN_POS                     (BIT(7))                                            /*!< CSN negedge flag */
#endif

/* SPI_TX */
#define SPI_TX_TX                            (BITS(0,31))                                        /*!< transmit data bits */

/* SPI_RX */
#define SPI_RX_RX                            (BITS(0,31))                                        /*!< receive data bits */

#if !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SPI_TXDFLT */
#define SPI_TXDFLT_TXDFLT                    (BITS(0,31))                                        /*!< transmit default data bits */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SPI_DMA_CTRL */
#define SPI_DMA_CTRL_TX_DMA_EN               (BIT(0))                                            /*!< transmit DMA enable bit */
#define SPI_DMA_CTRL_RX_DMA_EN               (BIT(1))                                            /*!< receive DMA enable bit */
#define SPI_DMA_CTRL_TX_CYC_MODE             (BIT(2))                                            /*!< periodic transmit enable bit */
#define SPI_DMA_CTRL_RX_CYC_MODE             (BIT(3))                                            /*!< periodic receive enable bit */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SPI_DMA_TBADR */
#define SPI_DMA_TBADR_DMA_TBADR              (BITS(0,16))                                        /*!< DMA transmit begin addr configuration bits */

/* SPI_DMA_RBADR */
#define SPI_DMA_RBADR_DMA_RBADR              (BITS(0,16))                                        /*!< DMA receive  begin addr configuration bits */

/* SPI_DMA_TLEN */
#define SPI_DMA_TLEN_DMA_TLEN                (BITS(0,16))                                        /*!< DMA transmit length configuration bits */

/* SPI_DMA_RLEN */
#define SPI_DMA_RLEN_DMA_RLEN                (BITS(0,16))                                        /*!< DMA receive  length configuration bits */

/* SPI_DMA_TADR */
#define SPI_DMA_TADR_DMA_TADR                (BITS(0,16))                                        /*!< current transmit DMA addr bits */

/* SPI_DMA_RADR */
#define SPI_DMA_RADR_DMA_RADR                (BITS(0,16))                                        /*!< current receive  DMA addr bits */

#elif defined(RN821x_RN721x_SOC_V3)
/* SPI_DMA_TBADR */
#define SPI_DMA_TBADR_DMA_TBADR              (BITS(0,14))                                        /*!< DMA transmit begin addr configuration bits */

/* SPI_DMA_RBADR */
#define SPI_DMA_RBADR_DMA_RBADR              (BITS(0,14))                                        /*!< DMA receive  begin addr configuration bits */

/* SPI_DMA_TLEN */
#define SPI_DMA_TLEN_DMA_TLEN                (BITS(0,14))                                        /*!< DMA transmit length configuration bits */

/* SPI_DMA_RLEN */
#define SPI_DMA_RLEN_DMA_RLEN                (BITS(0,14))                                        /*!< DMA receive  length configuration bits */

/* SPI_DMA_TADR */
#define SPI_DMA_TADR_DMA_TADR                (BITS(0,14))                                        /*!< current transmit DMA addr bits */

/* SPI_DMA_RADR */
#define SPI_DMA_RADR_DMA_RADR                (BITS(0,14))                                        /*!< current receive  DMA addr bits */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SPI_DMA_IE */
#define SPI_DMA_IE_TX_HIE                    (BIT(0))                                            /*!< DMA transmit half-full interrupt enable bit */
#define SPI_DMA_IE_TX_FIE                    (BIT(1))                                            /*!< DMA receive full interrupt enable bit */
#define SPI_DMA_IE_RX_HIE                    (BIT(2))                                            /*!< DMA transmit half-full interrupt enable bit */
#define SPI_DMA_IE_RX_FIE                    (BIT(3))                                            /*!< DMA receive full interrupt enable bit */
#define SPI_DMA_IE_TX_ERR_IE                 (BIT(4))                                            /*!< DMA transmit error interrupt enable bit */
#define SPI_DMA_IE_RX_ERR_IE                 (BIT(5))                                            /*!< DMA receive error(data recover) interrupt enable bit */

/* SPI_DMA_FLG */
#define SPI_DMA_FLG_TX_HDONE                 (BIT(0))                                            /*!< DMA transmit half-full interrupt flag */
#define SPI_DMA_FLG_TX_FDONE                 (BIT(1))                                            /*!< DMA transmit full interrupt flag */
#define SPI_DMA_FLG_RX_HDONE                 (BIT(2))                                            /*!< DMA receive half-full interrupt flag */
#define SPI_DMA_FLG_RX_FDONE                 (BIT(3))                                            /*!< DMA receive full interrupt flag */
#define SPI_DMA_FLG_RX_ERR                   (BIT(5))                                            /*!< DMA receive error interrupt flag */
#endif

/* constants definitions */
/* SPI_CTRL_MAST_SLAV */
#define SPI_CTRL_MAST_SLAV_M                 (SPI_CTRL_MAST_SLAV)                                /*!< select as master device */
#define SPI_CTRL_MAST_SLAV_S                 ((uint32_t)0x00000000U)                             /*!< select as slave device */

/* SPI_CTRL_LMSB */
#define SPI_CTRL_LMSB_MSB                    ((uint32_t)0x00000000U)                             /*!< MSB transmitted first */
#define SPI_CTRL_LMSB_LSB                    (SPI_CTRL_LMSB)                                     /*!< LSB transmitted first */

/* SPI_CTRL_CPOL */
#define SPI_CTRL_CPOL_EL                     ((uint32_t)0x00000000U)                             /*!< select low level for 'SCK' empty status */
#define SPI_CTRL_CPOL_EH                     (SPI_CTRL_CPOL)                                     /*!< select high level for 'SCK' empty status */

/* SPI_CTRL_CPHA */
#define SPI_CTRL_CPHA_SAMP                   ((uint32_t)0x00000000U)                             /*!< leading edge sampling data, trailing edge build data */
#define SPI_CTRL_CPHA_BUILD                  (SPI_CTRL_CPHA)                                     /*!< leading edge build data,  trailing edge sampling data */

/* SPI_CTRL_WIDTH */
#define SPI_CTRL_WIDTH_CFG(regval)  (SPI_CTRL_WIDTH & ((uint32_t)(regval) << 10))
#define SPI_CTRL_WIDTH_8BIT                  (SPI_CTRL_WIDTH_CFG(0))                             /*!< select data width as 8 bit */
#define SPI_CTRL_WIDTH_16BIT                 (SPI_CTRL_WIDTH_CFG(1))                             /*!< select data width as 16 bit */
#define SPI_CTRL_WIDTH_32BIT                 (SPI_CTRL_WIDTH_CFG(2))                             /*!< select data width as 32 bit */

#if !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SPI_CTRL_TX_DFLT_EN */
#define SPI_CTRL_TX_DFLT_EN_DFLT             (SPI_CTRL_TX_DFLT_EN)                               /*!< transmit SPI_TXDFLT reg data when transmit buffer empty */
#define SPI_CTRL_TX_DFLT_EN_LAST             ((uint32_t)0x00000000U)                             /*!< transmit last time reg data of SPI_TXDATA  when transmit buffer empty */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SPI_CTRL_SLV_TX_ADV */
#define SPI_CTRL_SLV_TX_ADV_LM               ((uint32_t)0x00000000U)                             /*!< select SPI as slave low speed mode if device configrate as slave */
#define SPI_CTRL_SLV_TX_ADV_HM               (SPI_CTRL_SLV_TX_ADV)                               /*!< select SPI as slave high speed mode if device configrate as slave */
#endif

#endif /* RN821X_RN721X_SOC_SPI_H */
/* r1730 */
