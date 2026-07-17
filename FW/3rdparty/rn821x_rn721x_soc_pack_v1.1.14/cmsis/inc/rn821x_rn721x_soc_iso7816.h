/**
 * @file    rn821x_rn721x_soc_iso7816.h
 * @brief   ISO7816 definitions for RN821X_RN721X_SOC
 * @version v1.1.0
 */
#ifndef RN821X_RN721X_SOC_ISO7816_H
#define RN821X_RN721X_SOC_ISO7816_H

#include "rn821x_rn721x_soc.h"

#if !defined(RN821x_RN721x_SOC_V3)
/* bits definitions */
/* ISO7816_CTRL0 */
#define ISO7816_CTRL0_EN                     (BIT(0))                                            /*!< ISO7816 controller enable bit */
#define ISO7816_CTRL0_DIRSEL                 (BIT(1))                                            /*!< data encode and transfer direction selection bit */
#define ISO7816_CTRL0_TX_EN                  (BIT(2))                                            /*!< transmit enable bit */
#define ISO7816_CTRL0_RX_EN                  (BIT(3))                                            /*!< receive enable bit */
#define ISO7816_CTRL0_TX_IRQ_EN              (BIT(4))                                            /*!< transmit interrupt enable bit */
#define ISO7816_CTRL0_RX_IRQ_EN              (BIT(5))                                            /*!< receive interrupt enable bit */
#define ISO7816_CTRL0_ERR_IRQ_EN             (BIT(6))                                            /*!< transfer error interrupt enable bit */
#define ISO7816_CTRL0_BGT_EN                 (BIT(7))                                            /*!< BGT enable bit */
#define ISO7816_CTRL0_PARSEL                 (BITS(8,10))                                        /*!< parity selections */
#define ISO7816_CTRL0_ERRWTH                 (BITS(11,12))                                       /*!< error signal width selection bits (applicable for RXPAR_ESEL=1 when receive) */
#define ISO7816_CTRL0_RXPAR_ESEL             (BIT(13))                                           /*!< handling way selection (when receive parity error) bit */
#define ISO7816_CTRL0_REP_CNT                (BITS(14,16))                                       /*!< data parity error resend times selection bits */
#define ISO7816_CTRL0_EGT                    (BITS(17,24))                                       /*!< EGT width configuration bits */
#define ISO7816_CTRL0_RX_GT                  (BIT(27))                                           /*!< receive data GT selaction bit */

/* ISO7816_CTRL1 */
#define ISO7816_CTRL1_EN                     (BIT(0))                                            /*!< controller enable */
#define ISO7816_CTRL1_DIRSEL                 (BIT(1))                                            /*!< data encode and transfer direction selection */
#define ISO7816_CTRL1_TX_EN                  (BIT(2))                                            /*!< transmit enable */
#define ISO7816_CTRL1_RX_EN                  (BIT(3))                                            /*!< receive enable */
#define ISO7816_CTRL1_TX_IRQ_EN              (BIT(4))                                            /*!< transmit interrupt enable */
#define ISO7816_CTRL1_RX_IRQ_EN              (BIT(5))                                            /*!< receive interrupt enable */
#define ISO7816_CTRL1_ERR_IRQ_EN             (BIT(6))                                            /*!< transfer error interrupt enable */
#define ISO7816_CTRL1_BGT_EN                 (BIT(7))                                            /*!< BGT enable */
#define ISO7816_CTRL1_PARSEL                 (BITS(8,10))                                        /*!< parity selection */
#define ISO7816_CTRL1_ERRWTH                 (BITS(11,12))                                       /*!< error signal width selection.applicable for RXPAR_ESEL=1 when receive */
#define ISO7816_CTRL1_RXPAR_ESEL             (BIT(13))                                           /*!< receive parity error handling selection */
#define ISO7816_CTRL1_REP_CNT                (BITS(14,16))                                       /*!< retry times when parity error found */
#define ISO7816_CTRL1_EGT                    (BITS(17,24))                                       /*!< EGT width selection (in etu) */
#define ISO7816_CTRL1_IO_EN                  (BIT(25))                                           /*!< input output enable */
#define ISO7816_CTRL1_RX_GT                  (BIT(28))                                           /*!< receive GT width */
#define ISO7816_CTRL1_OLD_EN                 (BIT(29))                                           /*!< OLD detection enable */
#define ISO7816_CTRL1_OLD_IRQ_EN             (BIT(30))                                           /*!< OLD detection interrupt enable */
#define ISO7816_CTRL1_CARD_CHECK_EN          (BIT(31))                                           /*!< card draw detection enable.only when CARD_CHECK_EN and OLD_IRQ_EN enable at the same time ,CARD_OUT interrupt enable. */

/* ISO7816_CLK */
#define ISO7816_CLK_DIV                      (BITS(0,2))                                         /*!< ISO7816 clock divisor selections bits */
#define ISO7816_CLK_O_EN                     (BIT(3))                                            /*!< card clock output enable bit */

/* ISO7816_BDDIV0 */
#define ISO7816_BDDIV0_FD                    (BITS(0,7))                                         /*!< FI and DI of reset ACK response */
#define ISO7816_BDDIV0_FDS                   (BITS(8,20))                                        /*!< baudrate coefficient.Only writtalbe when FSD0_EN=1.otherwise read as 372 */
#define ISO7816_BDDIV0_FDS_EN                (BIT(21))                                           /*!< F/D config enable */

/* ISO7816_BDDIV1 */
#define ISO7816_BDDIV1_FD                    (BITS(0,7))                                         /*!< FI and DI of reset ACK response */
#define ISO7816_BDDIV1_FDS                   (BITS(8,20))                                        /*!< baudrate coefficient.Only writtalbe when FSD0_EN=1.otherwise read as 372 */
#define ISO7816_BDDIV1_FDS_EN                (BIT(21))                                           /*!< F/D config enable */

/* ISO7816_STA0 */
#define ISO7816_STA0_TXIF                    (BIT(0))                                            /*!< transmit interrupt flag */
#define ISO7816_STA0_RXIF                    (BIT(1))                                            /*!< receive  interrupt flag */
#define ISO7816_STA0_OVL_IF                  (BIT(2))                                            /*!< receive  overflow flag */
#define ISO7816_STA0_COL_IF                  (BIT(3))                                            /*!< transmit conflict error flag */
#define ISO7816_STA0_RXPAR_ERRIF             (BIT(4))                                            /*!< receive  parity error flag */
#define ISO7816_STA0_TXPAR_ERRIF             (BIT(5))                                            /*!< transmit parity error flag */
#define ISO7816_STA0_TXBUSY                  (BIT(6))                                            /*!< transmit busy flag */
#define ISO7816_STA0_RXBUSY                  (BIT(7))                                            /*!< receive busy flag */
#define ISO7816_STA0_RX_FLAG                 (BIT(8))                                            /*!< receive fifo full flag */
#define ISO7816_STA0_TX_FLAG                 (BIT(9))                                            /*!< transmit fifo empty flag */
#define ISO7816_STA0_BDDIV_R                 (BIT(10))                                           /*!< baud matching flag */
#define ISO7816_STA0_FRAME_ERR               (BIT(11))                                           /*!< receive data frame format error interrupt flag */

/* ISO7816_STA1 */
#define ISO7816_STA1_TXIF                    (BIT(0))                                            /*!< transmit interrupt flag */
#define ISO7816_STA1_RXIF                    (BIT(1))                                            /*!< receive  interrupt flag */
#define ISO7816_STA1_OVL_IF                  (BIT(2))                                            /*!< receive  overflow flag */
#define ISO7816_STA1_COL_IF                  (BIT(3))                                            /*!< transmit conflict error flag */
#define ISO7816_STA1_RXPAR_ERRIF             (BIT(4))                                            /*!< receive  parity error flag */
#define ISO7816_STA1_TXPAR_ERRIF             (BIT(5))                                            /*!< transmit parity error flag */
#define ISO7816_STA1_TXBUSY                  (BIT(6))                                            /*!< transmit busy flag */
#define ISO7816_STA1_RXBUSY                  (BIT(7))                                            /*!< receive busy flag */
#define ISO7816_STA1_RX_FLAG                 (BIT(8))                                            /*!< receive fifo full flag */
#define ISO7816_STA1_TX_FLAG                 (BIT(9))                                            /*!< transmit fifo empty flag */
#define ISO7816_STA1_BDDIV_R                 (BIT(10))                                           /*!< baud matching flag */
#define ISO7816_STA1_FRAME_ERR               (BIT(11))                                           /*!< receive data frame format error interrupt flag */
#define ISO7816_STA1_OLD_FLAG                (BIT(12))                                           /*!< OLD signal received flag */
#define ISO7816_STA1_CARD_OUT_FLAG           (BIT(13))                                           /*!< card pull off flag */

/* ISO7816_DATA0 */
#define ISO7816_DATA0_DAT                    (BITS(0,7))                                         /*!< data bits */
#define ISO7816_DATA0_DAT_8                  (BIT(8))                                            /*!< parity bit value(effactive when PARSEL select define by users) */

/* ISO7816_DATA1 */
#define ISO7816_DATA1_DAT                    (BITS(0,7))                                         /*!< data bits */
#define ISO7816_DATA1_DAT_8                  (BIT(8))                                            /*!< parity bit value(effactive when PARSEL select define by users) */

/* constants definitions */
/* ISO7816_CTRL0_DIRSEL */
#define ISO7816_CTRL0_DIRSEL_LSB             ((uint32_t)0x00000000U)                             /*!< data transfered with LSB first */
#define ISO7816_CTRL0_DIRSEL_MSB             (ISO7816_CTRL0_DIRSEL)                              /*!< data toggled and transfered with MSB first */

/* ISO7816_CTRL0_PARSEL */
#define ISO7816_CTRL0_PARSEL_CFG(regval)  (ISO7816_CTRL0_PARSEL & ((uint32_t)(regval) << 8))
#define ISO7816_CTRL0_PARSEL_NUL             (ISO7816_CTRL0_PARSEL_CFG(0))                       /*!< no parity */
#define ISO7816_CTRL0_PARSEL_ODD             (ISO7816_CTRL0_PARSEL_CFG(1))                       /*!< odd parity */
#define ISO7816_CTRL0_PARSEL_EVEN            (ISO7816_CTRL0_PARSEL_CFG(2))                       /*!< even parity */
#define ISO7816_CTRL0_PARSEL_ZERO            (ISO7816_CTRL0_PARSEL_CFG(3))                       /*!< static zero parity */
#define ISO7816_CTRL0_PARSEL_ONE             (ISO7816_CTRL0_PARSEL_CFG(4))                       /*!< static one parity */
#define ISO7816_CTRL0_PARSEL_USER            (ISO7816_CTRL0_PARSEL_CFG(5))                       /*!< user defined parity */

/* ISO7816_CTRL0_ERRWTH */
#define ISO7816_CTRL0_ERRWTH_CFG(regval)  (ISO7816_CTRL0_ERRWTH & ((uint32_t)(regval) << 11))
#define ISO7816_CTRL0_ERRWTH_2ETU            (ISO7816_CTRL0_ERRWTH_CFG(0))                       /*!< select 2 etu as error signal width */
#define ISO7816_CTRL0_ERRWTH_1ETU            (ISO7816_CTRL0_ERRWTH_CFG(1))                       /*!< select 1 etu as error signal width */
#define ISO7816_CTRL0_ERRWTH_1P5ETU          (ISO7816_CTRL0_ERRWTH_CFG(2))                       /*!< select 1.5 etu as error signal width */

/* ISO7816_CTRL0_RXPAR_ESEL */
#define ISO7816_CTRL0_RXPAR_ESEL_NULS        ((uint32_t)0x00000000U)                             /*!< when parity error, set RX_PAR_ERR flag but do not return error signal */
#define ISO7816_CTRL0_RXPAR_ESEL_SEND        (ISO7816_CTRL0_RXPAR_ESEL)                          /*!< when parity error, set RX_PAR_ERR flag and return error signal by T=0 protocol */

/* ISO7816_CTRL0_REP_CNT */
#define ISO7816_CTRL0_REP_CNT_CFG(regval)  (ISO7816_CTRL0_REP_CNT & ((uint32_t)(regval) << 14))
#define ISO7816_CTRL0_REP_CNT_0              (ISO7816_CTRL0_REP_CNT_CFG(0))                      /*!< do not resend when receive parity error */
#define ISO7816_CTRL0_REP_CNT_1              (ISO7816_CTRL0_REP_CNT_CFG(1))                      /*!< resend 1 time  when receive parity error */
#define ISO7816_CTRL0_REP_CNT_2              (ISO7816_CTRL0_REP_CNT_CFG(2))                      /*!< resend 2 times when receive parity error */
#define ISO7816_CTRL0_REP_CNT_3              (ISO7816_CTRL0_REP_CNT_CFG(3))                      /*!< resend 3 times when receive parity error */
#define ISO7816_CTRL0_REP_CNT_4              (ISO7816_CTRL0_REP_CNT_CFG(4))                      /*!< resend 4 times when receive parity error */
#define ISO7816_CTRL0_REP_CNT_5              (ISO7816_CTRL0_REP_CNT_CFG(5))                      /*!< resend 5 times when receive parity error */
#define ISO7816_CTRL0_REP_CNT_6              (ISO7816_CTRL0_REP_CNT_CFG(6))                      /*!< resend 6 times when receive parity error */
#define ISO7816_CTRL0_REP_CNT_7              (ISO7816_CTRL0_REP_CNT_CFG(7))                      /*!< resend 7 times when receive parity error */

/* ISO7816_CTRL0_RX_GT */
#define ISO7816_CTRL0_RX_GT_2ETU             ((uint32_t)0x00000000U)                             /*!< select receive data GT as 2etu */
#define ISO7816_CTRL0_RX_GT_1ETU             (ISO7816_CTRL0_RX_GT)                               /*!< select receive data GT as 1etu */

/* ISO7816_CTRL1_DIRSEL */
#define ISO7816_CTRL1_DIRSEL_LSB             ((uint32_t)0x00000000U)                             /*!< data transfered with LSB first */
#define ISO7816_CTRL1_DIRSEL_MSB             (ISO7816_CTRL1_DIRSEL)                              /*!< data toggled and transfered with MSB first */

/* ISO7816_CTRL1_PARSEL */
#define ISO7816_CTRL1_PARSEL_CFG(regval)  (ISO7816_CTRL1_PARSEL & ((uint32_t)(regval) << 8))
#define ISO7816_CTRL1_PARSEL_NUL             (ISO7816_CTRL1_PARSEL_CFG(0))                       /*!< no parity */
#define ISO7816_CTRL1_PARSEL_ODD             (ISO7816_CTRL1_PARSEL_CFG(1))                       /*!< odd parity */
#define ISO7816_CTRL1_PARSEL_EVEN            (ISO7816_CTRL1_PARSEL_CFG(2))                       /*!< even parity */
#define ISO7816_CTRL1_PARSEL_ZERO            (ISO7816_CTRL1_PARSEL_CFG(3))                       /*!< static zero parity */
#define ISO7816_CTRL1_PARSEL_ONE             (ISO7816_CTRL1_PARSEL_CFG(4))                       /*!< static one parity */
#define ISO7816_CTRL1_PARSEL_USER            (ISO7816_CTRL1_PARSEL_CFG(5))                       /*!< user defined parity */

/* ISO7816_CTRL1_ERRWTH */
#define ISO7816_CTRL1_ERRWTH_CFG(regval)  (ISO7816_CTRL1_ERRWTH & ((uint32_t)(regval) << 11))
#define ISO7816_CTRL1_ERRWTH_2ETU            (ISO7816_CTRL1_ERRWTH_CFG(0))                       /*!< select 2 etu as error signal width */
#define ISO7816_CTRL1_ERRWTH_1ETU            (ISO7816_CTRL1_ERRWTH_CFG(1))                       /*!< select 1 etu as error signal width */
#define ISO7816_CTRL1_ERRWTH_1P5ETU          (ISO7816_CTRL1_ERRWTH_CFG(2))                       /*!< select 1.5 etu as error signal width */

/* ISO7816_CTRL1_RXPAR_ESEL */
#define ISO7816_CTRL1_RXPAR_ESEL_NULS        ((uint32_t)0x00000000U)                             /*!< when parity error, set RX_PAR_ERR flag but do not return error signal */
#define ISO7816_CTRL1_RXPAR_ESEL_SEND        (ISO7816_CTRL1_RXPAR_ESEL)                          /*!< when parity error, set RX_PAR_ERR flag and return error signal by T=0 protocol */

/* ISO7816_CTRL1_REP_CNT */
#define ISO7816_CTRL1_REP_CNT_CFG(regval)  (ISO7816_CTRL1_REP_CNT & ((uint32_t)(regval) << 14))
#define ISO7816_CTRL1_REP_CNT_0              (ISO7816_CTRL1_REP_CNT_CFG(0))                      /*!< do not resend when receive parity error */
#define ISO7816_CTRL1_REP_CNT_1              (ISO7816_CTRL1_REP_CNT_CFG(1))                      /*!< resend 1 time  when receive parity error */
#define ISO7816_CTRL1_REP_CNT_2              (ISO7816_CTRL1_REP_CNT_CFG(2))                      /*!< resend 2 times when receive parity error */
#define ISO7816_CTRL1_REP_CNT_3              (ISO7816_CTRL1_REP_CNT_CFG(3))                      /*!< resend 3 times when receive parity error */
#define ISO7816_CTRL1_REP_CNT_4              (ISO7816_CTRL1_REP_CNT_CFG(4))                      /*!< resend 4 times when receive parity error */
#define ISO7816_CTRL1_REP_CNT_5              (ISO7816_CTRL1_REP_CNT_CFG(5))                      /*!< resend 5 times when receive parity error */
#define ISO7816_CTRL1_REP_CNT_6              (ISO7816_CTRL1_REP_CNT_CFG(6))                      /*!< resend 6 times when receive parity error */
#define ISO7816_CTRL1_REP_CNT_7              (ISO7816_CTRL1_REP_CNT_CFG(7))                      /*!< resend 7 times when receive parity error */

/* ISO7816_CTRL1_IO_EN */
#define ISO7816_CTRL1_IO_EN_1D               ((uint32_t)0x00000000U)                             /*!< select as output only */
#define ISO7816_CTRL1_IO_EN_2D               (ISO7816_CTRL1_IO_EN)                               /*!< select as bidirectional */

/* ISO7816_CTRL1_RX_GT */
#define ISO7816_CTRL1_RX_GT_2ETU             ((uint32_t)0x00000000U)                             /*!< select receive data GT as 2etu */
#define ISO7816_CTRL1_RX_GT_1ETU             (ISO7816_CTRL1_RX_GT)                               /*!< select receive data GT as 1etu */

/* ISO7816_CLK_DIV */
#define ISO7816_CLK_DIV_CFG(regval)  (ISO7816_CLK_DIV & ((uint32_t)(regval) << 0))
#define ISO7816_CLK_DIV_NUL                  (ISO7816_CLK_DIV_CFG(0))                            /*!< select system clock as iso7816 module clock */
#define ISO7816_CLK_DIV_2                    (ISO7816_CLK_DIV_CFG(1))                            /*!< select system clock devided by 2   as iso7816 module clock */
#define ISO7816_CLK_DIV_4                    (ISO7816_CLK_DIV_CFG(2))                            /*!< select system clock devided by 4   as iso7816 module clock */
#define ISO7816_CLK_DIV_8                    (ISO7816_CLK_DIV_CFG(3))                            /*!< select system clock devided by 8   as iso7816 module clock */
#define ISO7816_CLK_DIV_16                   (ISO7816_CLK_DIV_CFG(4))                            /*!< select system clock devided by 16  as iso7816 module clock */
#define ISO7816_CLK_DIV_32                   (ISO7816_CLK_DIV_CFG(5))                            /*!< select system clock devided by 32  as iso7816 module clock */
#define ISO7816_CLK_DIV_64                   (ISO7816_CLK_DIV_CFG(6))                            /*!< select system clock devided by 64  as iso7816 module clock */
#define ISO7816_CLK_DIV_128                  (ISO7816_CLK_DIV_CFG(7))                            /*!< select system clock devided by 128 as iso7816 module clock */

/* ISO7816_BDDIV0_FDS_EN */
#define ISO7816_BDDIV0_FDS_EN_FD             ((uint32_t)0x00000000U)                             /*!< select reset input baud divisor (FD) */
#define ISO7816_BDDIV0_FDS_EN_FDS            (ISO7816_BDDIV0_FDS_EN)                             /*!< enable soft baud divisor (FDS) */

/* ISO7816_BDDIV1_FDS_EN */
#define ISO7816_BDDIV1_FDS_EN_FD             ((uint32_t)0x00000000U)                             /*!< select reset input baud divisor (FD) */
#define ISO7816_BDDIV1_FDS_EN_FDS            (ISO7816_BDDIV1_FDS_EN)                             /*!< enable soft baud divisor (FDS) */
#endif

#endif /* RN821X_RN721X_SOC_ISO7816_H */
/* r1192 */
