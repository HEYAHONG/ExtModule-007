/**
 * @file    rn821x_rn721x_soc_lpuart.h
 * @brief   LPUART definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_LPUART_H
#define RN821X_RN721X_SOC_LPUART_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* bits definitions */
/* LPUART_MODE */
#define LPUART_MODE_TE                       (BIT(0))                                            /*!< LPUART transmit enable bit */
#define LPUART_MODE_RE                       (BIT(1))                                            /*!< LPUART receive enable bit */
#define LPUART_MODE_IRE                      (BIT(2))                                            /*!< infra-red modulation enable bit */
#define LPUART_MODE_NEG                      (BIT(3))                                            /*!< transfer polarity selection bit */
#define LPUART_MODE_IRPOL                    (BIT(4))                                            /*!< infra-red modulation polarity selection */
#define LPUART_MODE_DATLEN                   (BITS(5,6))                                         /*!< transfer bit-width selection bits(do not include parity bit) */
#define LPUART_MODE_PARS                     (BITS(7,9))                                         /*!< parity type selection bits */
#define LPUART_MODE_STOPS                    (BIT(10))                                           /*!< stop bit width selection bit */
#define LPUART_MODE_LMSB                     (BIT(11))                                           /*!< LSB/MSB transfer mode selection bit */
#define LPUART_MODE_ILBE                     (BIT(12))                                           /*!< inner loopback enable bit */
#define LPUART_MODE_WUSEL                    (BITS(13,14))                                       /*!< wake up interrupt event selection bits */

/* LPUART_IE */
#define LPUART_IE_TXIE                       (BIT(0))                                            /*!< Transmit data complete interrupt enable bit */
#define LPUART_IE_RXIE                       (BIT(1))                                            /*!< Receive data complete interrupt enable bit */
#define LPUART_IE_WUFIE                      (BIT(2))                                            /*!< Wake-up interrupt enable bit (Wake-up from hibernation mode) */
#define LPUART_IE_PEIE                       (BIT(3))                                            /*!< Parity error interrupt enable bit */
#define LPUART_IE_OEIE                       (BIT(4))                                            /*!< Overflow error interrupt enable bit */
#define LPUART_IE_FEIE                       (BIT(5))                                            /*!< Frame format error interrupt enable bit */
#define LPUART_IE_DEIE                       (BIT(6))                                            /*!< Data error interrupt enable bit */
#define LPUART_IE_NEIE                       (BIT(7))                                            /*!< Noise detection of start bit enable bit */
#define LPUART_IE_IDLEIE                     (BIT(8))                                            /*!< IDLE frame detection interrupt enable bit */
#define LPUART_IE_TXFEIE                     (BIT(9))                                            /*!< Transmit FIFO empty interrupt flag enabled bit */
#define LPUART_IE_TXFHEIE                    (BIT(10))                                           /*!< Transmit FIFO half-empty interrupt flag enable bit */
#define LPUART_IE_RXFNEIE                    (BIT(11))                                           /*!< Receive FIFO empty interrupt flag enable bit */
#define LPUART_IE_RXFHFIE                    (BIT(12))                                           /*!< Receive FIFO half-full interrupt flag enable bit */
#define LPUART_IE_RXFFIE                     (BIT(13))                                           /*!< Receive FIFO full interrupt flag enable bit */

/* LPUART_STA */
#define LPUART_STA_TXIF                      (BIT(0))                                            /*!< Transmit complete interrupt flag */
#define LPUART_STA_RXIF                      (BIT(1))                                            /*!< Receive complete interrupt flag */
#define LPUART_STA_WUF                       (BIT(2))                                            /*!< Receive wake-up event flag */
#define LPUART_STA_PEIF                      (BIT(3))                                            /*!< Parity error flag */
#define LPUART_STA_OEIF                      (BIT(4))                                            /*!< Overflow error flag */
#define LPUART_STA_FEIF                      (BIT(5))                                            /*!< Frame format error flag */
#define LPUART_STA_DEIF                      (BIT(6))                                            /*!< Data error flag */
#define LPUART_STA_NEIF                      (BIT(7))                                            /*!< Start bit noise detection flag */
#define LPUART_STA_IDLEIF                    (BIT(8))                                            /*!< Idle frames detect interrupt flag */
#define LPUART_STA_TBUSY                     (BIT(9))                                            /*!< Transmit status flag */
#define LPUART_STA_RBUSY                     (BIT(10))                                           /*!< Receive status flag */
#define LPUART_STA_TXFEIF                    (BIT(11))                                           /*!< Transmit FIFO empty interrupt */
#define LPUART_STA_TXFHEIF                   (BIT(12))                                           /*!< A transmit FIFO half-empty interrupt flag */
#define LPUART_STA_TXFF                      (BIT(13))                                           /*!< Transmit FIFO full Mark (one to clear or hardware automatically clear) */
#define LPUART_STA_RXFNEIF                   (BIT(14))                                           /*!< Receive FIFO empty interrupt flag */
#define LPUART_STA_RXFHFIF                   (BIT(15))                                           /*!< Receive FIFO half-full interrupt flag */
#define LPUART_STA_RXFFIF                    (BIT(16))                                           /*!< Receive FIFO full interrupt flag */
#define LPUART_STA_TXFCNT                    (BITS(17,19))                                       /*!< Transmit FIFO data number bits */
#define LPUART_STA_RXFCNT                    (BITS(20,22))                                       /*!< Receive FIFO data number bits */

/* LPUART_BAUD */
#define LPUART_BAUD_BAUD                     (BITS(0,2))                                         /*!< LPUART baud rate selection bits */
#define LPUART_BAUD_MCTL                     (BITS(16,27))                                       /*!< LPUART bit-width modulation configuration bits */

/* LPUART_TXD */
#define LPUART_TXD_TXDATA                    (BITS(0,7))                                         /*!< transmit data value bits */
#define LPUART_TXD_UP                        (BIT(8))                                            /*!< user-defined parity bit(valid when user-defined parity selected) */

/* LPUART_RXD */
#define LPUART_RXD_RXDATA                    (BITS(0,7))                                         /*!< read data value */
#define LPUART_RXD_UP                        (BIT(8))                                            /*!< user-defined parity bit(valid when user-defined parity selected) */

/* LPUART_DMR */
#define LPUART_DMR_DMR                       (BITS(0,7))                                         /*!< LPUART data matches register bits */

/* constants definitions */
/* LPUART_MODE_TE */
#define LPUART_MODE_TE_DIS                   ((uint32_t)0x00000000U)                             /*!< LPUART transmit disable */
#define LPUART_MODE_TE_EN                    (LPUART_MODE_TE)                                    /*!< LPUART transmit enable */

/* LPUART_MODE_RE */
#define LPUART_MODE_RE_DIS                   ((uint32_t)0x00000000U)                             /*!< LPUART receive disable */
#define LPUART_MODE_RE_EN                    (LPUART_MODE_RE)                                    /*!< LPUART receive enable */

/* LPUART_MODE_IRE */
#define LPUART_MODE_IRE_DIS                  ((uint32_t)0x00000000U)                             /*!< infra-red modulation disable */
#define LPUART_MODE_IRE_EN                   (LPUART_MODE_IRE)                                   /*!< infra-red modulation enable */

/* LPUART_MODE_NEG */
#define LPUART_MODE_NEG_P                    ((uint32_t)0x00000000U)                             /*!< positive polarity (default driving voltage is high) */
#define LPUART_MODE_NEG_N                    (LPUART_MODE_NEG)                                   /*!< negative polarity (default driving voltage is low) */

/* LPUART_MODE_IRPOL */
#define LPUART_MODE_IRPOL_P                  ((uint32_t)0x00000000U)                             /*!< positive polarity (default driving voltage is high) */
#define LPUART_MODE_IRPOL_N                  (LPUART_MODE_IRPOL)                                 /*!< negative polarity (default driving voltage is low) */

/* LPUART_MODE_DATLEN */
#define LPUART_MODE_DATLEN_CFG(regval)  (LPUART_MODE_DATLEN & ((uint32_t)(regval) << 5))
#define LPUART_MODE_DATLEN_5                 (LPUART_MODE_DATLEN_CFG(0))                         /*!< data length select as 5 bits */
#define LPUART_MODE_DATLEN_6                 (LPUART_MODE_DATLEN_CFG(1))                         /*!< data length select as 6 bits */
#define LPUART_MODE_DATLEN_7                 (LPUART_MODE_DATLEN_CFG(2))                         /*!< data length select as 7 bits */
#define LPUART_MODE_DATLEN_8                 (LPUART_MODE_DATLEN_CFG(3))                         /*!< data length select as 8 bits */

/* LPUART_MODE_PARS */
#define LPUART_MODE_PARS_CFG(regval)  (LPUART_MODE_PARS & ((uint32_t)(regval) << 7))
#define LPUART_MODE_PARS_NUL                 (LPUART_MODE_PARS_CFG(0))                           /*!< parity type select as no parity */
#define LPUART_MODE_PARS_ODD                 (LPUART_MODE_PARS_CFG(1))                           /*!< parity type select as odd parity */
#define LPUART_MODE_PARS_EVEN                (LPUART_MODE_PARS_CFG(2))                           /*!< parity type select as even parity */
#define LPUART_MODE_PARS_0                   (LPUART_MODE_PARS_CFG(3))                           /*!< parity type select as stick_zero parity */
#define LPUART_MODE_PARS_1                   (LPUART_MODE_PARS_CFG(4))                           /*!< parity type select as stick one parity */
#define LPUART_MODE_PARS_USER                (LPUART_MODE_PARS_CFG(5))                           /*!< parity type select as user_defined parity */

/* LPUART_MODE_STOPS */
#define LPUART_MODE_STOPS_1BIT               ((uint32_t)0x00000000U)                             /*!< stop bit_width select as 1 bit */
#define LPUART_MODE_STOPS_2BIT               (LPUART_MODE_STOPS)                                 /*!< stop bit_width select as 2 bit */

/* LPUART_MODE_LMSB */
#define LPUART_MODE_LMSB_L                   ((uint32_t)0x00000000U)                             /*!< LSB first transfer mode */
#define LPUART_MODE_LMSB_M                   (LPUART_MODE_LMSB)                                  /*!< MSB first transfer mode */

/* LPUART_MODE_ILBE */
#define LPUART_MODE_ILBE_DIS                 ((uint32_t)0x00000000U)                             /*!< inner loopback disable */
#define LPUART_MODE_ILBE_EN                  (LPUART_MODE_ILBE)                                  /*!< inner loopback enable */

/* LPUART_MODE_WUSEL */
#define LPUART_MODE_WUSEL_CFG(regval)  (LPUART_MODE_WUSEL & ((uint32_t)(regval) << 13))
#define LPUART_MODE_WUSEL_START              (LPUART_MODE_WUSEL_CFG(0))                          /*!< select as start bit wake up */
#define LPUART_MODE_WUSEL_RX                 (LPUART_MODE_WUSEL_CFG(1))                          /*!< select as RX negedge wake up */
#define LPUART_MODE_WUSEL_RX_DONE            (LPUART_MODE_WUSEL_CFG(2))                          /*!< select as data receive done wake up */
#define LPUART_MODE_WUSEL_MATCH              (LPUART_MODE_WUSEL_CFG(3))                          /*!< select as one frame data match wake up */
#endif

#endif /* RN821X_RN721X_SOC_LPUART_H */
/* r1190 */
