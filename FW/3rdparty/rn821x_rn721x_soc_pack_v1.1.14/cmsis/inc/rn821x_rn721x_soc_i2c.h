/**
 * @file    rn821x_rn721x_soc_i2c.h
 * @brief   I2C definitions for RN821X_RN721X_SOC
 * @version v1.0.1
 */
#ifndef RN821X_RN721X_SOC_I2C_H
#define RN821X_RN721X_SOC_I2C_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* I2C_CTRL */
#define I2C_CTRL_EN                          (BIT(0))                                            /*!< I2C module enable bit */
#define I2C_CTRL_BUSCON                      (BITS(1,2))                                         /*!< I2C bus control bit (when finish command transmision clear automatically) */
#define I2C_CTRL_IRQE                        (BIT(3))                                            /*!< I2C interrupt enable bit */
#define I2C_CTRL_ACK                         (BIT(4))                                            /*!< ACK signal configuration bit */
#define I2C_CTRL_MODE                        (BIT(5))                                            /*!< I2C slave/master mode selection bit */

/* I2C_CLK */
#define I2C_CLK_CLKDIV                       (BITS(0,2))                                         /*!< I2C module clock divisor selection bits */

/* I2C_STA */
#define I2C_STA_STPD                         (BIT(0))                                            /*!< interrupt flag of stop time sequence detection */
#define I2C_STA_RX_NACK                      (BIT(1))                                            /*!< interrupt flag of receive NACK interrupt */
#define I2C_STA_TRANC                        (BIT(2))                                            /*!< interrupt flag of transmit finish */
#define I2C_STA_TXEMPT                       (BIT(3))                                            /*!< transmit data registor empty error flag */
#define I2C_STA_OVERF                        (BIT(4))                                            /*!< interrupt flag of receive data overflow */
#define I2C_STA_COL                          (BIT(5))                                            /*!< interrupt flag of transmit conflict */
#define I2C_STA_BUSY                         (BIT(6))                                            /*!< communication busy flag */
#define I2C_STA_MATCH                        (BIT(7))                                            /*!< address match flag */
#define I2C_STA_DIR                          (BIT(8))                                            /*!< receive/transmit direction flag */

/* I2C_ADDR */
#define I2C_ADDR_RW                          (BIT(0))                                            /*!< receive/transmit direction configuration bit */
#define I2C_ADDR_SADR                        (BITS(1,7))                                         /*!< device address configuration bits */

/* I2C_DATA */
#define I2C_DATA_DATA                        (BITS(0,7))                                         /*!< I2C transfer data bits */

/* constants definitions */
/* I2C_CTRL_BUSCON */
#define I2C_CTRL_BUSCON_CFG(regval)  (I2C_CTRL_BUSCON & ((uint32_t)(regval) << 1))
#define I2C_CTRL_BUSCON_NUL                  (I2C_CTRL_BUSCON_CFG(0))                            /*!< no action */
#define I2C_CTRL_BUSCON_START                (I2C_CTRL_BUSCON_CFG(1))                            /*!< generate start sequence (clear automatically when finish command transmision) */
#define I2C_CTRL_BUSCON_STOP                 (I2C_CTRL_BUSCON_CFG(2))                            /*!< generate stop sequence  (clear automatically when finish command transmision) */

/* I2C_CTRL_ACK */
#define I2C_CTRL_ACK_ACK                     (I2C_CTRL_ACK)                                      /*!< receive 9st SCL generate ACK */
#define I2C_CTRL_ACK_NUL                     ((uint32_t)0x00000000U)                             /*!< receive 9st SCL donot generate ACK */

/* I2C_CTRL_MODE */
#define I2C_CTRL_MODE_S                      ((uint32_t)0x00000000U)                             /*!< select as slave device */
#define I2C_CTRL_MODE_M                      (I2C_CTRL_MODE)                                     /*!< select as master device */

/* I2C_CLK_CLKDIV */
#define I2C_CLK_CLKDIV_CFG(regval)  (I2C_CLK_CLKDIV & ((uint32_t)(regval) << 0))
#define I2C_CLK_CLKDIV_DEFAULT               (I2C_CLK_CLKDIV_CFG(1))                             /*!< select I2C module clock divisor as 10 */
#define I2C_CLK_CLKDIV_7M4_FM                (I2C_CLK_CLKDIV_CFG(2))                             /*!< when system clock = 7.3728Mhz,  select I2C as fast speed mode, module clock set at system clock divided by 20 */
#define I2C_CLK_CLKDIV_14M7_FM               (I2C_CLK_CLKDIV_CFG(3))                             /*!< when system clock = 14.7456Mhz, select I2C as fast speed mode, module clock set at system clock divided by 38 */
#define I2C_CLK_CLKDIV_29M5_FM               (I2C_CLK_CLKDIV_CFG(4))                             /*!< when system clock = 29.4912Mhz, select I2C as fast speed mode, module clock set at system clock divided by 76 */
#define I2C_CLK_CLKDIV_1M8_SM                (I2C_CLK_CLKDIV_CFG(2))                             /*!< when system clock = 1.8432Mhz , select I2C as standard speed mode, module clock set at system clock divided by 20 */
#define I2C_CLK_CLKDIV_3M6_SM                (I2C_CLK_CLKDIV_CFG(3))                             /*!< when system clock = 3.6864Mhz , select I2C as standard speed mode, module clock set at system clock divided by 38 */
#define I2C_CLK_CLKDIV_7M4_SM                (I2C_CLK_CLKDIV_CFG(4))                             /*!< when system clock = 7.3728Mhz , select I2C as standard speed mode, module clock set at system clock divided by 76 */
#define I2C_CLK_CLKDIV_14M7_SM               (I2C_CLK_CLKDIV_CFG(5))                             /*!< when system clock = 14.7456Mhz, select I2C as standard speed mode, module clock set at system clock divided by 154 */
#define I2C_CLK_CLKDIV_29M5_SM               (I2C_CLK_CLKDIV_CFG(6))                             /*!< when system clock = 29.4912Mhz, select I2C as standard speed mode, module clock set at system clock divided by 306 */

/* I2C_STA_DIR */
#define I2C_STA_DIR_T                        ((uint32_t)0x00000000U)                             /*!< device as transmitting status */
#define I2C_STA_DIR_R                        (I2C_STA_DIR)                                       /*!< device as receiving status */

/* I2C_ADDR_RW */
#define I2C_ADDR_RW_T                        ((uint32_t)0x00000000U)                             /*!< configuration as transmit device */
#define I2C_ADDR_RW_R                        (I2C_ADDR_RW)                                       /*!< configuration as receive device */

#endif /* RN821X_RN721X_SOC_I2C_H */
/* r1134 */
