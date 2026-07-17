/**
 * @file    rn821x_rn721x_soc_sysctl.h
 * @brief   SYSCTL definitions for RN821X_RN721X_SOC
 * @version v1.1.1
 */
#ifndef RN821X_RN721X_SOC_SYSCTL_H
#define RN821X_RN721X_SOC_SYSCTL_H

#include "rn821x_rn721x_soc.h"

/* bits definitions */
/* SYSCTL_OSC_CTRL1 */
#define SYSCTL_OSC_CTRL1_PLL_PD              (BIT(0))                                            /*!< PLL disable bit (=1 disable, =0 enable) */
#define SYSCTL_OSC_CTRL1_IRCH_PD             (BIT(1))                                            /*!< internal RCH oscillator disable bit (=1 disable, =0 enable) */
#if defined(RN821x_RN721x_SOC_V3)
#define SYSCTL_OSC_CTRL1_PLL_HOSC_DIV        (BITS(2,3))                                         /*!< system clock division(applicable for high frequency mode(only for PLL)) */
#else
#define SYSCTL_OSC_CTRL1_PLL_HOSC_DIV        (BITS(2,3))                                         /*!< system clock division(applicable for high frequency mode(PLL or HOSC)) */
#endif
#define SYSCTL_OSC_CTRL1_LOSC_ON             (BIT(4))                                            /*!< system clock flag of losc or RCL */
#define SYSCTL_OSC_CTRL1_IRCH_ON             (BIT(5))                                            /*!< system clock flag of internal RC oscillator */
#if defined(RN821x_RN721x_SOC_V3)
#define SYSCTL_OSC_CTRL1_PLL_HOSC_ON         (BIT(6))                                            /*!< system clock flag of internal PLL */
#else
#define SYSCTL_OSC_CTRL1_PLL_HOSC_ON         (BIT(6))                                            /*!< system clock flag of external high-frequence oscillator or internal PLL */
#endif
#define SYSCTL_OSC_CTRL1_PLL_LOCK            (BIT(7))                                            /*!< PLL locked flag */
#define SYSCTL_OSC_CTRL1_SYSCLK_STAT         (BITS(8,10))                                        /*!< system clock freq status flag */
#define SYSCTL_OSC_CTRL1_LOSC_CLOCK_FLAG     (BIT(11))                                           /*!< LOSC ON status flag */
#define SYSCTL_OSC_CTRL1_PLL_CLOCK_FLAG      (BIT(12))                                           /*!< PLL ON status flag */
#define SYSCTL_OSC_CTRL1_RCH_CLOCK_FLAG      (BIT(13))                                           /*!< internal RCH ON status flag */
#define SYSCTL_OSC_CTRL1_RCL_CLOCK_FLAG      (BIT(14))                                           /*!< internal RCL ON status flag */
#if !defined(RN821x_RN721x_SOC_V3)
#define SYSCTL_OSC_CTRL1_HOSC_CLOCK_FLAG     (BIT(15))                                           /*!< HOSC ON status flag */
#endif
#if defined(RN821x_RN721x_SOC_B)
#define SYSCTL_OSC_CTRL1_DLL_FLAG            (BIT(16))                                           /*!< DLL ON status flag */
#elif !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C)
#define SYSCTL_OSC_CTRL1_RCM_CLOCK_FLAG      (BIT(16))                                           /*!< RCM ON status flag */
#endif

/* SYSCTL_SYS_MODE */
#define SYSCTL_SYS_MODE_MODE                 (BITS(0,3))                                         /*!< system clock configuration bits */

#if defined(RN821x_RN721x_SOC_C) || defined(RN821x_RN721x_SOC_B)
#define SYSCTL_SYS_MODE_EEPROM_BUSY          (BIT(4))                                            /*!< EEPROM busy status flag (=1 busy, =0 idle) */
#endif
#define SYSCTL_SYS_MODE_FLASH_BUSY           (BIT(5))                                            /*!< FLASH busy status flag (=1 busy, =0 idle) */

/* SYSCTL_SYS_PD */
#define SYSCTL_SYS_PD_ADCI1_PD               (BIT(0))                                            /*!< I1 ADC power down switch bit(=1 power down, =0 power on) */
#define SYSCTL_SYS_PD_ADCI2_PD               (BIT(1))                                            /*!< I2 ADC power down switch bit(=1 power down, =0 power on) */
#define SYSCTL_SYS_PD_ADCU_PD                (BIT(2))                                            /*!< U ADC power down switch bit(=1 power down, =0 power on) */
#define SYSCTL_SYS_PD_LVD_PD                 (BIT(3))                                            /*!< LVD power down switch bit(=1 power down, =0 power on) */
#define SYSCTL_SYS_PD_CMP1_PD                (BIT(4))                                            /*!< power down switch bit of Comparator No.1 (=1 power down, =0 power on) */
#define SYSCTL_SYS_PD_CMP2_PD                (BIT(5))                                            /*!< power down switch bit of Comparator No.2 (=1 power down, =0 power on) */
#define SYSCTL_SYS_PD_BGR_PD                 (BIT(6))                                            /*!< BGR power down switch bit(=1 power down, =0 power on) */
#if defined(RN821x_RN721x_SOC_B)
#define SYSCTL_SYS_PD_LBGR_PD                (BIT(7))                                            /*!< LBGR power down switch bit */
#elif !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C)
#define SYSCTL_SYS_PD_BGRLP_PD               (BIT(7))                                            /*!< BGRLP power down switch bit(=1 power down, =0 power on) */
#endif
#define SYSCTL_SYS_PD_PWD_CMP1R              (BIT(8))                                            /*!< switch bit of CMP1 internal simpling resistor(=1 register off, =0 register on) */
#define SYSCTL_SYS_PD_PWD_CMP2R              (BIT(9))                                            /*!< switch bit of CMP2 internal simpling resistor(=1 register off, =0 register on) */
#if !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_SYS_PD_HYSEN_CMP1             (BIT(10))                                           /*!< CMP1 hysteresis switch bit */
#define SYSCTL_SYS_PD_HYSEN_CMP2             (BIT(11))                                           /*!< CMP2 hysteresis switch bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_SYS_PD_VSEL_BOR5              (BIT(16))                                           /*!< BOR5 voltage threshold bit */
#define SYSCTL_SYS_PD_LDO3_PD                (BIT(17))                                           /*!< LDO3 power down switch bit(=1 power on, =0 power off) */
#endif

/* SYSCTL_ADC_CTRL */
#define SYSCTL_ADC_CTRL_ADCI1_PGA            (BITS(0,2))                                         /*!< ADC I1 PGA config bits */
#define SYSCTL_ADC_CTRL_ADCI2_PGA            (BITS(3,5))                                         /*!< ADC I2 PGA config bits */
#define SYSCTL_ADC_CTRL_ADCU_PGA             (BITS(6,8))                                         /*!< ADC U PGA config bits */

/* SYSCTL_OSC_CTRL2 */
#if !defined(RN821x_RN721x_SOC_V3)
#define SYSCTL_OSC_CTRL2_HOSC_FREQ           (BITS(0,2))                                         /*!< freq of external high-frequence oscillator select bits */
#define SYSCTL_OSC_CTRL2_HOSC_PD             (BIT(3))                                            /*!< HOSC disable bit (=1 disable HOSC, =0 enable HOSC) */
#endif
#define SYSCTL_OSC_CTRL2_PLL_HOSC_SEL        (BIT(4))                                            /*!< system clock selection bits for full speed mode */
#if !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_OSC_CTRL2_PLL_FREQ            (BITS(5,7))                                         /*!< PLL freq selection bits */
#endif
#define SYSCTL_OSC_CTRL2_LOSC_PD             (BIT(8))                                            /*!< LOSC power down switch bit */
#define SYSCTL_OSC_CTRL2_LOSC_WEN            (BIT(9))                                            /*!< LOSC_PD writable enable/disable bit */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_SYS_SEL    (BIT(12))                                           /*!< system clock selection bit for low frequency mode */
#if !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_OSC_CTRL2_RCL_LCD             (BIT(13))                                           /*!< clock selection bit (RCL/LOSC) for LCD */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_RTC_SEL    (BIT(14))                                           /*!< clock selection bit (RCL/LOSC) for RTC */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_FLT_SEL    (BIT(15))                                           /*!< clock selection bit (RCL/LOSC) for KBI filter */
#endif
#if defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_C)
#define SYSCTL_OSC_CTRL2_RCH_FREQ            (BIT(16))                                           /*!< RCH frequency selection bits */
#else
#define SYSCTL_OSC_CTRL2_RCH_FREQ            (BITS(16,18))                                       /*!< RCH frequency selection bits */
#define SYSCTL_OSC_CTRL2_RCM_PD              (BIT(20))                                           /*!< internal RCM enable bit */
#define SYSCTL_OSC_CTRL2_PM_SEL              (BIT(22))                                           /*!< EMU power mode selection bit */
#endif

/* SYSCTL_SYS_RST */
#define SYSCTL_SYS_RST_EMU_RST_REQ           (BIT(0))                                            /*!< EMU module soft reset cfg bit */
#define SYSCTL_SYS_RST_NVM_RST_REQ           (BIT(1))                                            /*!< NVM module soft reset cfg bit */
#define SYSCTL_SYS_RST_LOCKUP_ENRST          (BIT(2))                                            /*!< selection for the connection of lockup and system reset */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_SYS_RST_EMUREG_RST_REQ        (BIT(3))                                            /*!< EMU/NVM/FLK module soft reset cfg bit */
#endif
#define SYSCTL_SYS_RST_POWEROK_RST           (BIT(5))                                            /*!< power-on reset flag (=1 reset ccured) */
#define SYSCTL_SYS_RST_PIN_RST               (BIT(6))                                            /*!< external pin reset flag (=1 reet occured) */
#define SYSCTL_SYS_RST_WDT_RST               (BIT(7))                                            /*!< WDT reset flag (=1 reset occurd) */
#define SYSCTL_SYS_RST_MCU_RST               (BIT(8))                                            /*!< CPU reset flag(software or LOCKUP) (=1 reset occured) */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_SYS_RST_BOR_V2P8_ENRST        (BIT(9))                                            /*!< lower than BOR 2.8V threshold reset CPU cfg bit */
#define SYSCTL_SYS_RST_BOR_V2P8_IE           (BIT(10))                                           /*!< BOR 2.8V threshold interrupt enable bit */
#define SYSCTL_SYS_RST_BOR_V2P8_IF           (BIT(11))                                           /*!< BOR 2.8V threshold interrupt flag */
#define SYSCTL_SYS_RST_CM0_ENRST             (BIT(12))                                           /*!< CM0 reset enable bit(do not reset EMU related module) */
#define SYSCTL_SYS_RST_CM0_RST               (BIT(13))                                           /*!< CM0 reset flag */
#define SYSCTL_SYS_RST_UART0_CLKG            (BIT(14))                                           /*!< UART0 CM0 reset lock enable bit(during CM0 reset period lock transmission between CPU and UART) */
#define SYSCTL_SYS_RST_UART1_CLKG            (BIT(15))                                           /*!< UART1 CM0 reset lock enable bit(during CM0 reset period lock transmission between CPU and UART) */
#define SYSCTL_SYS_RST_UART2_CLKG            (BIT(16))                                           /*!< UART2 CM0 reset lock enable bit(during CM0 reset period lock transmission between CPU and UART) */
#define SYSCTL_SYS_RST_UART3_CLKG            (BIT(17))                                           /*!< UART3 CM0 reset lock enable bit(during CM0 reset period lock transmission between CPU and UART) */
#define SYSCTL_SYS_RST_UART4_CLKG            (BIT(18))                                           /*!< UART4 CM0 reset lock enable bit(during CM0 reset period lock transmission between CPU and UART) */
#define SYSCTL_SYS_RST_UART5_CLKG            (BIT(19))                                           /*!< UART5 CM0 reset lock enable bit(during CM0 reset period lock transmission between CPU and UART) */
#define SYSCTL_SYS_RST_I2C_RST_REQ           (BIT(20))                                           /*!< I2C module soft reset cfg bit */
#endif

/* SYSCTL_MAP_CTRL */
#define SYSCTL_MAP_CTRL_REMAP                (BITS(0,2))                                         /*!< system remap address configuration bits */

/* SYSCTL_MOD0_EN */
#if defined(RN821x_RN721x_SOC_C) || defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD0_EN_EEPROM_EN             (BIT(2))                                            /*!< EEPROM enable bit */
#endif
#if defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD0_EN_CPC_EN                (BIT(3))                                            /*!< CPC enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_V3)
#define SYSCTL_MOD0_EN_TC0_EN                (BIT(4))                                            /*!< TC0 enable bit */
#endif
#define SYSCTL_MOD0_EN_TC1_EN                (BIT(5))                                            /*!< TC1 enable bit */
#define SYSCTL_MOD0_EN_UART4_EN              (BIT(6))                                            /*!< UART4 enable bit */
#define SYSCTL_MOD0_EN_UART5_EN              (BIT(7))                                            /*!< UART5 enable bit */
#define SYSCTL_MOD0_EN_UART0_EN              (BIT(8))                                            /*!< UART0 enable bit */
#define SYSCTL_MOD0_EN_UART1_EN              (BIT(9))                                            /*!< UART1 enable bit */
#define SYSCTL_MOD0_EN_UART2_EN              (BIT(10))                                           /*!< UART2 enable bit */
#define SYSCTL_MOD0_EN_UART3_EN              (BIT(11))                                           /*!< UART3 enable bit */
#define SYSCTL_MOD0_EN_UART38K_EN            (BIT(12))                                           /*!< UART38K enable bit */
#if !defined(RN821x_RN721x_SOC_V3)
#define SYSCTL_MOD0_EN_ISO7816_EN            (BIT(13))                                           /*!< ISO7816 enable bit */
#endif
#define SYSCTL_MOD0_EN_I2C_EN                (BIT(14))                                           /*!< I2C enable bit */
#if !defined(RN821x_RN721x_SOC_V3)
#define SYSCTL_MOD0_EN_SPI0_EN               (BIT(15))                                           /*!< SPI0 enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD0_EN_SPI2_EN               (BIT(17))                                           /*!< SPI2 enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD0_EN_SPI3_EN               (BIT(18))                                           /*!< SPI3 enable bit */
#define SYSCTL_MOD0_EN_SIMP_TC_EN            (BIT(20))                                           /*!< SIMP_TC enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD0_EN_EMB_PKE_EN            (BIT(21))                                           /*!< EMB_PKE enable bit */
#define SYSCTL_MOD0_EN_EMB_AES_EN            (BIT(22))                                           /*!< EMB_AES enable bit */
#define SYSCTL_MOD0_EN_EMB_TRNG_EN           (BIT(23))                                           /*!< EMB_TRNG enable bit */
#define SYSCTL_MOD0_EN_EMB_SHA_EN            (BIT(24))                                           /*!< EMB_SHA enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD0_EN_LPUART_EN             (BIT(25))                                           /*!< LPUART enable bit */
#define SYSCTL_MOD0_EN_CRC_EN                (BIT(26))                                           /*!< CRC enable bit */
#endif

/* SYSCTL_MOD1_EN */
#if defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD1_EN_DMA0_EN               (BIT(0))                                            /*!< DMA0 enable bit */
#define SYSCTL_MOD1_EN_DMA1_EN               (BIT(1))                                            /*!< DMA1 enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD1_EN_SPI1_EN               (BIT(3))                                            /*!< SPI1 enable bit */
#endif
#if defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD1_EN_DMA_EN                (BIT(4))                                            /*!< DMA enable bit */
#endif
#define SYSCTL_MOD1_EN_GPIO_EN               (BIT(5))                                            /*!< GPIO enable bit */
#define SYSCTL_MOD1_EN_LCD_EN                (BIT(6))                                            /*!< LCD enable bit */
#define SYSCTL_MOD1_EN_EMU_EN                (BIT(7))                                            /*!< EMU enable bit */
#define SYSCTL_MOD1_EN_NVM_EN                (BIT(8))                                            /*!< NVM enable bit */
#define SYSCTL_MOD1_EN_WDT_EN                (BIT(9))                                            /*!< WDT enable bit */
#define SYSCTL_MOD1_EN_RTC_EN                (BIT(10))                                           /*!< RTC enable bit */
#define SYSCTL_MOD1_EN_SAR_EN                (BIT(11))                                           /*!< SAR enable bit */
#define SYSCTL_MOD1_EN_NVM_REG_EN            (BIT(12))                                           /*!< NVM REG read/write enable bit */
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD1_EN_D2F_EN                (BIT(13))                                           /*!< D2F enable bit */
#define SYSCTL_MOD1_EN_DSP_EN                (BIT(14))                                           /*!< DSP enable bit */
#define SYSCTL_MOD1_EN_M2M_EN                (BIT(15))                                           /*!< M2M enable bit */
#define SYSCTL_MOD1_EN_FLK_EN                (BIT(16))                                           /*!< FLK enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD1_EN_IOCNT_EN              (BIT(17))                                           /*!< IOCNT enable bit */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_MOD1_EN_ECT_EN                (BIT(18))                                           /*!< ECT enable bit */
#endif

/* SYSCTL_INTC_EN */
#define SYSCTL_INTC_EN_INTC0_EN              (BIT(0))                                            /*!< INTC channel No.0 enable bit */
#define SYSCTL_INTC_EN_INTC1_EN              (BIT(1))                                            /*!< INTC channel No.1 enable bit */
#define SYSCTL_INTC_EN_INTC2_EN              (BIT(2))                                            /*!< INTC channel No.2 enable bit */
#define SYSCTL_INTC_EN_INTC3_EN              (BIT(3))                                            /*!< INTC channel No.3 enable bit */
#define SYSCTL_INTC_EN_INTC4_EN              (BIT(4))                                            /*!< INTC channel No.4 enable bit */
#define SYSCTL_INTC_EN_INTC5_EN              (BIT(5))                                            /*!< INTC channel No.5 enable bit */
#define SYSCTL_INTC_EN_INTC6_EN              (BIT(6))                                            /*!< INTC channel No.6 enable bit */
#define SYSCTL_INTC_EN_INTC7_EN              (BIT(7))                                            /*!< INTC channel No.7 enable bit */
#define SYSCTL_INTC_EN_INTC_EN               (BIT(8))                                            /*!< INTC enable bit */

/* SYSCTL_KBI_EN */
#define SYSCTL_KBI_EN_KBI0_EN                (BIT(0))                                            /*!< KBI channel No.0 enable bit */
#define SYSCTL_KBI_EN_KBI1_EN                (BIT(1))                                            /*!< KBI channel No.1 enable bit */
#define SYSCTL_KBI_EN_KBI2_EN                (BIT(2))                                            /*!< KBI channel No.2 enable bit */
#define SYSCTL_KBI_EN_KBI3_EN                (BIT(3))                                            /*!< KBI channel No.3 enable bit */
#define SYSCTL_KBI_EN_KBI4_EN                (BIT(4))                                            /*!< KBI channel No.4 enable bit */
#define SYSCTL_KBI_EN_KBI5_EN                (BIT(5))                                            /*!< KBI channel No.5 enable bit */
#define SYSCTL_KBI_EN_KBI6_EN                (BIT(6))                                            /*!< KBI channel No.6 enable bit */
#define SYSCTL_KBI_EN_KBI7_EN                (BIT(7))                                            /*!< KBI channel No.7 enable bit */
#define SYSCTL_KBI_EN_KBI_EN                 (BIT(8))                                            /*!< KBI clock enable bit */

/* SYSCTL_CHIP_ID */
#define SYSCTL_CHIP_ID_CHIP_ID               (BITS(0,15))                                        /*!< chip ID */

/* SYSCTL_SYS_PS */
#define SYSCTL_SYS_PS_SYS_PSW                (BITS(0,7))                                         /*!< system control register set access protection */

/* SYSCTL_IRFR_CTRL */
#define SYSCTL_IRFR_CTRL_IRFR_CTRL           (BITS(0,5))                                         /*!< infra-red modulation clock divisor cfg bits */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_SYS_CFG */
#define SYSCTL_SYS_CFG_EXT_REF_EN            (BITS(0,7))                                         /*!< external VREF enable bits */
#define SYSCTL_SYS_CFG_RTC_SW_EN             (BITS(8,15))                                        /*!< RTC clock change enable bits */
#endif

/* SYSCTL_TRIM_CFG1 */
#define SYSCTL_TRIM_CFG1_REF_CLK_CNT         (BITS(0,19))                                        /*!< reference clock counter value bits */
#define SYSCTL_TRIM_CFG1_REF_CLK_SEL         (BITS(24,25))                                       /*!< reference clock selection bits */
#define SYSCTL_TRIM_CFG1_CAL_CLK_SEL_B0      (BIT(26))                                           /*!< calculated clock selection bit0 */
#define SYSCTL_TRIM_CFG1_CAL_DONE_IE         (BIT(27))                                           /*!< calculation down interrupt enable bit */
#define SYSCTL_TRIM_CFG1_CAL_OV_IE           (BIT(28))                                           /*!< calculation overflow interrupt enable bit */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_TRIM_CFG1_CAL_CLK_SEL_B1      (BIT(29))                                           /*!< calculated clock selection bit1 */
#endif

/* SYSCTL_TRIM_START */
#define SYSCTL_TRIM_START_CAL_CLK_CNT        (BITS(0,19))                                        /*!< counter value of the calculated clock */
#define SYSCTL_TRIM_START_CAL_DONE           (BIT(24))                                           /*!< clock trim finish flag */
#define SYSCTL_TRIM_START_CAL_OV             (BIT(25))                                           /*!< clock trim counter overflow flag */
#define SYSCTL_TRIM_START_START              (BIT(26))                                           /*!< start bit of clock trim */
#define SYSCTL_TRIM_START_STOP               (BIT(27))                                           /*!< stop bit of clock trim */

/* SYSCTL_DMA_PRI */
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI_DMA_CH0_PRI           (BITS(0,1))                                         /*!< DMA CH0: CACHE priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI_DMA_CH1_PRI           (BITS(2,3))                                         /*!< DMA CH1: EMU priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI_DMA_CH2_PRI           (BITS(4,5))                                         /*!< DMA CH2: SPI0 priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI_DMA_CH3_PRI           (BITS(6,7))                                         /*!< DMA CH3: SPI1 priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI_DMA_CH4_PRI           (BITS(8,9))                                         /*!< DMA CH4: SPI2 priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI_DMA_CH5_PRI           (BITS(10,11))                                       /*!< DMA CH5: SPI3 priority setting bits */
#define SYSCTL_DMA_PRI_DMA_CH6_PRI           (BITS(12,13))                                       /*!< DMA CH6: UART0 priority setting bits */
#define SYSCTL_DMA_PRI_DMA_CH7_PRI           (BITS(14,15))                                       /*!< DMA CH7: UART1 priority setting bits */
#define SYSCTL_DMA_PRI_DMA_CH8_PRI           (BITS(16,17))                                       /*!< DMA CH8: UART2 priority setting bits */
#define SYSCTL_DMA_PRI_DMA_CH9_PRI           (BITS(18,19))                                       /*!< DMA CH9: UART3 priority setting bits */
#define SYSCTL_DMA_PRI_DMA_CH10_PRI          (BITS(20,21))                                       /*!< DMA CH10: UART4 priority setting bits */
#define SYSCTL_DMA_PRI_DMA_CH11_PRI          (BITS(22,23))                                       /*!< DMA CH11: UART5 priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI_DMA_CH12_PRI          (BITS(24,25))                                       /*!< DMA CH12: CAN priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI_DMA_CH13_PRI          (BITS(26,27))                                       /*!< DMA CH13: TC1 priority setting bits */
#define SYSCTL_DMA_PRI_WKEY                  (BITS(28,31))                                       /*!< write key (0xE) */

/* SYSCTL_FAB_UID0 */
#define SYSCTL_FAB_UID0_FAB_UID0             (BITS(0,31))                                        /*!< chip UID register No.0 bits */

/* SYSCTL_FAB_UID1 */
#define SYSCTL_FAB_UID1_FAB_UID1             (BITS(0,31))                                        /*!< chip UID register No.1 bits */
#endif

/* SYSCTL_DMA_PRI2 */
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI2_DMA_CH14_PRI         (BITS(0,1))                                         /*!< DMA CH14: DSP priority setting bits */
#define SYSCTL_DMA_PRI2_DMA_CH15_PRI         (BITS(2,3))                                         /*!< DMA CH15: CRC priority setting bits */
#define SYSCTL_DMA_PRI2_DMA_CH16_PRI         (BITS(4,5))                                         /*!< DMA CH16: M2M priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI2_DMA_CH17_PRI         (BITS(6,7))                                         /*!< DMA CH17: CPU priority setting bits */
#endif
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_DMA_PRI2_WKEY                 (BITS(28,31))                                       /*!< write key (0xE) */

/* SYSCTL_ADCIN_CTRL */
#define SYSCTL_ADCIN_CTRL_ADCIN_IA           (BIT(0))                                            /*!< IA channel ADCIN 1bit enable bit */
#define SYSCTL_ADCIN_CTRL_ADCIN_IB           (BIT(1))                                            /*!< IB channel ADCIN 1bit enable bit */
#define SYSCTL_ADCIN_CTRL_ADC_CLK_OEN        (BIT(8))                                            /*!< ADCIN clock output enable bit */
#define SYSCTL_ADCIN_CTRL_ADC_CLKO_SEL       (BIT(9))                                            /*!< ADCIN clock freq selection bit */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_SYSCP_CON */
#define SYSCTL_SYSCP_CON_ADC_SYSCPIA_EN      (BIT(0))                                            /*!< IA channel syschop enable bit */
#define SYSCTL_SYSCP_CON_ADC_SYSCPIB_EN      (BIT(1))                                            /*!< IB channel syschop enable bit */
#define SYSCTL_SYSCP_CON_ADC_SYSCPU_EN       (BIT(2))                                            /*!< U channel syschop enable bit */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_MODE      (BIT(3))                                            /*!< syschop mode selection bits */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_SEL       (BITS(4,5))                                         /*!< forward and reverse sampling freq config bits (only available when adc_syscp_mode=0) */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_PH        (BIT(8))                                            /*!< forward and reverse sample cfg bit(only available when adc_syscp_mode=1) */
#endif

/* constants definitions */
/* SYSCTL_OSC_CTRL1_PLL_PD */
#define SYSCTL_OSC_CTRL1_PLL_PD_DIS          (SYSCTL_OSC_CTRL1_PLL_PD)                           /*!< disable */
#define SYSCTL_OSC_CTRL1_PLL_PD_EN           ((uint32_t)0x00000000U)                             /*!< enable */

/* SYSCTL_OSC_CTRL1_IRCH_PD */
#define SYSCTL_OSC_CTRL1_IRCH_PD_DIS         (SYSCTL_OSC_CTRL1_IRCH_PD)                          /*!< disable */
#define SYSCTL_OSC_CTRL1_IRCH_PD_EN          ((uint32_t)0x00000000U)                             /*!< enable */

/* SYSCTL_OSC_CTRL1_PLL_HOSC_DIV */
#define SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_CFG(regval)  (SYSCTL_OSC_CTRL1_PLL_HOSC_DIV & ((uint32_t)(regval) << 2))
#define SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_DIV1   (SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_CFG(0))              /*!< when PLL/HOSC selected as system clock not divided */
#define SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_DIV2   (SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_CFG(1))              /*!< when PLL/HOSC selected as system clock divided by 2 */
#define SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_DIV4   (SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_CFG(2))              /*!< when PLL/HOSC selected as system clock divided by 4 */
#define SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_DIV8   (SYSCTL_OSC_CTRL1_PLL_HOSC_DIV_CFG(3))              /*!< when PLL/HOSC selected as system clock divided by 8 */

/* SYSCTL_OSC_CTRL1_SYSCLK_STAT */
#define SYSCTL_OSC_CTRL1_SYSCLK_STAT_CFG(regval)  (SYSCTL_OSC_CTRL1_SYSCLK_STAT & ((uint32_t)(regval) << 8))
#define SYSCTL_OSC_CTRL1_SYSCLK_STAT_7M4     (SYSCTL_OSC_CTRL1_SYSCLK_STAT_CFG(0))               /*!< current system clock freq = 7.3728MHz */
#define SYSCTL_OSC_CTRL1_SYSCLK_STAT_3M6     (SYSCTL_OSC_CTRL1_SYSCLK_STAT_CFG(1))               /*!< current system clock freq = 3.6864MHz */
#define SYSCTL_OSC_CTRL1_SYSCLK_STAT_1M8     (SYSCTL_OSC_CTRL1_SYSCLK_STAT_CFG(2))               /*!< current system clock freq = 1.8432MHz */
#define SYSCTL_OSC_CTRL1_SYSCLK_STAT_32K     (SYSCTL_OSC_CTRL1_SYSCLK_STAT_CFG(3))               /*!< current system clock freq = 32.768KHz */
#define SYSCTL_OSC_CTRL1_SYSCLK_STAT_14M7    (SYSCTL_OSC_CTRL1_SYSCLK_STAT_CFG(4))               /*!< current system clock freq = 14.7456Mhz */
#define SYSCTL_OSC_CTRL1_SYSCLK_STAT_29M5    (SYSCTL_OSC_CTRL1_SYSCLK_STAT_CFG(5))               /*!< current system clock freq = 29.4912Mhz */

/* SYSCTL_SYS_MODE_MODE */
#define SYSCTL_SYS_MODE_MODE_CFG(regval)  (SYSCTL_SYS_MODE_MODE & ((uint32_t)(regval) << 0))
#define SYSCTL_SYS_MODE_MODE_HCM             (SYSCTL_SYS_MODE_MODE_CFG(13))                      /*!< select HCM mode as system mode */
#define SYSCTL_SYS_MODE_MODE_RCM             (SYSCTL_SYS_MODE_MODE_CFG(14))                      /*!< select RCM mode as system mode */
#define SYSCTL_SYS_MODE_MODE_LCM             (SYSCTL_SYS_MODE_MODE_CFG(15))                      /*!< select LCM mode as system mode */

/* SYSCTL_SYS_PD_PWD_CMP1R */
#define SYSCTL_SYS_PD_PWD_CMP1R_ON           ((uint32_t)0x00000000U)                             /*!< switch on */
#define SYSCTL_SYS_PD_PWD_CMP1R_OFF          (SYSCTL_SYS_PD_PWD_CMP1R)                           /*!< switch off */

/* SYSCTL_SYS_PD_PWD_CMP2R */
#define SYSCTL_SYS_PD_PWD_CMP2R_ON           ((uint32_t)0x00000000U)                             /*!< switch on */
#define SYSCTL_SYS_PD_PWD_CMP2R_OFF          (SYSCTL_SYS_PD_PWD_CMP2R)                           /*!< switch off */

#if !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_SYS_PD_HYSEN_CMP1 */
#define SYSCTL_SYS_PD_HYSEN_CMP1_ON          (SYSCTL_SYS_PD_HYSEN_CMP1)                          /*!< switch on */
#define SYSCTL_SYS_PD_HYSEN_CMP1_OFF         ((uint32_t)0x00000000U)                             /*!< switch off */

/* SYSCTL_SYS_PD_HYSEN_CMP2 */
#define SYSCTL_SYS_PD_HYSEN_CMP2_ON          (SYSCTL_SYS_PD_HYSEN_CMP2)                          /*!< switch on */
#define SYSCTL_SYS_PD_HYSEN_CMP2_OFF         ((uint32_t)0x00000000U)                             /*!< switch off */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_SYS_PD_VSEL_BOR5 */
#define SYSCTL_SYS_PD_VSEL_BOR5_HIGH         ((uint32_t)0x00000000U)                             /*!< BOR5 high level(2.5/2.2V) */
#define SYSCTL_SYS_PD_VSEL_BOR5_LOW          (SYSCTL_SYS_PD_VSEL_BOR5)                           /*!< BOR5 low level(2.1/1.8V) */

/* SYSCTL_SYS_PD_LDO3_PD */
#define SYSCTL_SYS_PD_LDO3_PD_OFF            ((uint32_t)0x00000000U)                             /*!< power off */
#define SYSCTL_SYS_PD_LDO3_PD_ON             (SYSCTL_SYS_PD_LDO3_PD)                             /*!< power on */
#endif

/* SYSCTL_ADC_CTRL_ADCI1_PGA */
#define SYSCTL_ADC_CTRL_ADCI1_PGA_CFG(regval)  (SYSCTL_ADC_CTRL_ADCI1_PGA & ((uint32_t)(regval) << 0))
#define SYSCTL_ADC_CTRL_ADCI1_PGA_1TIME      (SYSCTL_ADC_CTRL_ADCI1_PGA_CFG(0))                  /*!< PGA config 1 time */
#define SYSCTL_ADC_CTRL_ADCI1_PGA_2TIME      (SYSCTL_ADC_CTRL_ADCI1_PGA_CFG(1))                  /*!< PGA config 2 times */
#define SYSCTL_ADC_CTRL_ADCI1_PGA_8TIME      (SYSCTL_ADC_CTRL_ADCI1_PGA_CFG(2))                  /*!< PGA config 8 times */
#define SYSCTL_ADC_CTRL_ADCI1_PGA_16TIME     (SYSCTL_ADC_CTRL_ADCI1_PGA_CFG(3))                  /*!< PGA config 16 times */

/* SYSCTL_ADC_CTRL_ADCI2_PGA */
#define SYSCTL_ADC_CTRL_ADCI2_PGA_CFG(regval)  (SYSCTL_ADC_CTRL_ADCI2_PGA & ((uint32_t)(regval) << 3))
#define SYSCTL_ADC_CTRL_ADCI2_PGA_1TIME      (SYSCTL_ADC_CTRL_ADCI2_PGA_CFG(0))                  /*!< PGA config 1 time */
#define SYSCTL_ADC_CTRL_ADCI2_PGA_2TIME      (SYSCTL_ADC_CTRL_ADCI2_PGA_CFG(1))                  /*!< PGA config 2 times */
#define SYSCTL_ADC_CTRL_ADCI2_PGA_4TIME      (SYSCTL_ADC_CTRL_ADCI2_PGA_CFG(2))                  /*!< PGA config 4 times */

/* SYSCTL_ADC_CTRL_ADCU_PGA */
#define SYSCTL_ADC_CTRL_ADCU_PGA_CFG(regval)  (SYSCTL_ADC_CTRL_ADCU_PGA & ((uint32_t)(regval) << 6))
#define SYSCTL_ADC_CTRL_ADCU_PGA_1TIME       (SYSCTL_ADC_CTRL_ADCU_PGA_CFG(0))                   /*!< PGA config 1 time */
#define SYSCTL_ADC_CTRL_ADCU_PGA_2TIME       (SYSCTL_ADC_CTRL_ADCU_PGA_CFG(1))                   /*!< PGA config 2 times */
#define SYSCTL_ADC_CTRL_ADCU_PGA_4TIME       (SYSCTL_ADC_CTRL_ADCU_PGA_CFG(2))                   /*!< PGA config 4 times */

#if !defined(RN821x_RN721x_SOC_V3)
/* SYSCTL_OSC_CTRL2_HOSC_FREQ */
#define SYSCTL_OSC_CTRL2_HOSC_FREQ_CFG(regval)  (SYSCTL_OSC_CTRL2_HOSC_FREQ & ((uint32_t)(regval) << 0))
#define SYSCTL_OSC_CTRL2_HOSC_FREQ_7M4       (SYSCTL_OSC_CTRL2_HOSC_FREQ_CFG(0))                 /*!< external high-frequence oscillator freq = 7.3728MHz */
#define SYSCTL_OSC_CTRL2_HOSC_FREQ_14M7      (SYSCTL_OSC_CTRL2_HOSC_FREQ_CFG(1))                 /*!< external high-frequence oscillator freq = 14.7456Mhz */
#define SYSCTL_OSC_CTRL2_HOSC_FREQ_29M5_PLUS  (SYSCTL_OSC_CTRL2_HOSC_FREQ_CFG(3))                 /*!< external high-frequence oscillator freq = 29.4912Mhz (driver enhanced) */

/* SYSCTL_OSC_CTRL2_HOSC_PD */
#define SYSCTL_OSC_CTRL2_HOSC_PD_ON          ((uint32_t)0x00000000U)                             /*!< power on */
#define SYSCTL_OSC_CTRL2_HOSC_PD_OFF         (SYSCTL_OSC_CTRL2_HOSC_PD)                          /*!< power off */
#endif

/* SYSCTL_OSC_CTRL2_PLL_HOSC_SEL */
#define SYSCTL_OSC_CTRL2_PLL_HOSC_SEL_PLL    ((uint32_t)0x00000000U)                             /*!< select PLL as system clock */
#define SYSCTL_OSC_CTRL2_PLL_HOSC_SEL_HOSC   (SYSCTL_OSC_CTRL2_PLL_HOSC_SEL)                     /*!< select HOSC as system clock */

/* SYSCTL_OSC_CTRL2_PLL_FREQ */
#if defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_C)
#define SYSCTL_OSC_CTRL2_PLL_FREQ_7M4        ((uint32_t)0x00000000U)                             /*!< PLL freq select 7.3728MHz */
#define SYSCTL_OSC_CTRL2_PLL_FREQ_14M7       (SYSCTL_OSC_CTRL2_PLL_FREQ)                         /*!< PLL freq select 14.7456Mhz */
#elif !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_OSC_CTRL2_PLL_FREQ_CFG(regval)  (SYSCTL_OSC_CTRL2_PLL_FREQ & ((uint32_t)(regval) << 5))
#define SYSCTL_OSC_CTRL2_PLL_FREQ_7M4        (SYSCTL_OSC_CTRL2_PLL_FREQ_CFG(0))                  /*!< PLL freq select 7.3728MHz */
#define SYSCTL_OSC_CTRL2_PLL_FREQ_14M7       (SYSCTL_OSC_CTRL2_PLL_FREQ_CFG(1))                  /*!< PLL freq select 14.7456Mhz */
#define SYSCTL_OSC_CTRL2_PLL_FREQ_29M5       (SYSCTL_OSC_CTRL2_PLL_FREQ_CFG(2))                  /*!< PLL freq select 29.4912Mhz */
#define SYSCTL_OSC_CTRL2_PLL_FREQ_59M_DIV2   (SYSCTL_OSC_CTRL2_PLL_FREQ_CFG(3))                  /*!< PLL freq select 58.9824Mhz divided by 2 */
#endif

/* SYSCTL_OSC_CTRL2_LOSC_PD */
#define SYSCTL_OSC_CTRL2_LOSC_PD_ON          ((uint32_t)0x00000000U)                             /*!< power on */
#define SYSCTL_OSC_CTRL2_LOSC_PD_OFF         (SYSCTL_OSC_CTRL2_LOSC_PD)                          /*!< power off */

/* SYSCTL_OSC_CTRL2_LOSC_WEN */
#define SYSCTL_OSC_CTRL2_LOSC_WEN_DIS        ((uint32_t)0x00000000U)                             /*!< LOSC_PD write disable */
#define SYSCTL_OSC_CTRL2_LOSC_WEN_EN         (SYSCTL_OSC_CTRL2_LOSC_WEN)                         /*!< LOSC_PD write enable */

/* SYSCTL_OSC_CTRL2_RCL_LOSC_SYS_SEL */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_SYS_SEL_LOSC  ((uint32_t)0x00000000U)                             /*!< select LOSC */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_SYS_SEL_RCL  (SYSCTL_OSC_CTRL2_RCL_LOSC_SYS_SEL)                 /*!< select RCL */

#if !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_OSC_CTRL2_RCL_LCD */
#define SYSCTL_OSC_CTRL2_RCL_LCD_LOSC        ((uint32_t)0x00000000U)                             /*!< select LOSC */
#define SYSCTL_OSC_CTRL2_RCL_LCD_RCL         (SYSCTL_OSC_CTRL2_RCL_LCD)                          /*!< select RCL */

/* SYSCTL_OSC_CTRL2_RCL_LOSC_RTC_SEL */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_RTC_SEL_LOSC  ((uint32_t)0x00000000U)                             /*!< select LOSC */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_RTC_SEL_RCL  (SYSCTL_OSC_CTRL2_RCL_LOSC_RTC_SEL)                 /*!< select RCL */

/* SYSCTL_OSC_CTRL2_RCL_LOSC_FLT_SEL */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_FLT_SEL_LOSC  ((uint32_t)0x00000000U)                             /*!< select LOSC */
#define SYSCTL_OSC_CTRL2_RCL_LOSC_FLT_SEL_RCL  (SYSCTL_OSC_CTRL2_RCL_LOSC_FLT_SEL)                 /*!< select RCL */
#endif

/* SYSCTL_OSC_CTRL2_RCH_FREQ */
#if defined(RN821x_RN721x_SOC_D) || defined(RN821x_RN721x_SOC_C)
#define SYSCTL_OSC_CTRL2_RCH_FREQ_1M6        ((uint32_t)0x00000000U)                             /*!< internal RCH freq select 1.6MHz */
#define SYSCTL_OSC_CTRL2_RCH_FREQ_3M2        (SYSCTL_OSC_CTRL2_RCH_FREQ)                         /*!< internal RCH freq select 3.2MHz */
#elif !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_OSC_CTRL2_RCH_FREQ_CFG(regval)  (SYSCTL_OSC_CTRL2_RCH_FREQ & ((uint32_t)(regval) << 16))
#define SYSCTL_OSC_CTRL2_RCH_FREQ_1M8        (SYSCTL_OSC_CTRL2_RCH_FREQ_CFG(0))                  /*!< internal RCH freq select 1.8432MHz */
#define SYSCTL_OSC_CTRL2_RCH_FREQ_3M6        (SYSCTL_OSC_CTRL2_RCH_FREQ_CFG(1))                  /*!< internal RCH freq select 3.6864MHz */
#define SYSCTL_OSC_CTRL2_RCH_FREQ_7M4        (SYSCTL_OSC_CTRL2_RCH_FREQ_CFG(2))                  /*!< internal RCH freq select 7.3728MHz */
#define SYSCTL_OSC_CTRL2_RCH_FREQ_14M7       (SYSCTL_OSC_CTRL2_RCH_FREQ_CFG(3))                  /*!< internal RCH freq select 14.7456Mhz */
#define SYSCTL_OSC_CTRL2_RCH_FREQ_29M5       (SYSCTL_OSC_CTRL2_RCH_FREQ_CFG(4))                  /*!< internal RCH freq select 29.4912Mhz */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_OSC_CTRL2_RCM_PD */
#define SYSCTL_OSC_CTRL2_RCM_PD_OFF          ((uint32_t)0x00000000U)                             /*!< power off */
#define SYSCTL_OSC_CTRL2_RCM_PD_ON           (SYSCTL_OSC_CTRL2_RCM_PD)                           /*!< power on */

/* SYSCTL_OSC_CTRL2_PM_SEL */
#define SYSCTL_OSC_CTRL2_PM_SEL_NORM         ((uint32_t)0x00000000U)                             /*!< select as normal mode */
#define SYSCTL_OSC_CTRL2_PM_SEL_NVM          (SYSCTL_OSC_CTRL2_PM_SEL)                           /*!< select as NVM mode */
#endif

/* SYSCTL_MAP_CTRL_REMAP */
#define SYSCTL_MAP_CTRL_REMAP_CFG(regval)  (SYSCTL_MAP_CTRL_REMAP & ((uint32_t)(regval) << 0))
#define SYSCTL_MAP_CTRL_REMAP_0              (SYSCTL_MAP_CTRL_REMAP_CFG(0))                      /*!< FLASH mapped at address 0 */
#define SYSCTL_MAP_CTRL_REMAP_1              (SYSCTL_MAP_CTRL_REMAP_CFG(1))                      /*!< FLASH mapped at address 1/2 (2nd FLASH at 0x0, 1st FLASH at 0x4000 and bootload at 0) */
#define SYSCTL_MAP_CTRL_REMAP_2              (SYSCTL_MAP_CTRL_REMAP_CFG(2))                      /*!< FLASH switch mapping address with SRAM(FLASH at 0x10000000 and SRAM at 0) */
#define SYSCTL_MAP_CTRL_REMAP_3              (SYSCTL_MAP_CTRL_REMAP_CFG(3))                      /*!< BOOTROM mapped at address 0 */
#define SYSCTL_MAP_CTRL_REMAP_4              (SYSCTL_MAP_CTRL_REMAP_CFG(4))                      /*!< FLASH mapped at address 1/2 total memory capacity */

/* SYSCTL_SYS_PS_SYS_PSW */
#define SYSCTL_SYS_PS_SYS_PSW_PS             ((uint32_t)0x00000082U)                             /*!< SYSCTRL registers offset adderess write access enable */
#define SYSCTL_SYS_PS_SYS_PSW_DIS            ((uint32_t)0x00000055U)                             /*!< SYSCTRL registers offset adderess write access disable */

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_SYS_CFG_EXT_REF_EN */
#define SYSCTL_SYS_CFG_EXT_REF_EN_PS         ((uint32_t)0x00000082U)                             /*!< enable external VREF */
#define SYSCTL_SYS_CFG_EXT_REF_EN_DIS        ((uint32_t)0x00000000U)                             /*!< disable external VREF */

/* SYSCTL_SYS_CFG_RTC_SW_EN */
#define SYSCTL_SYS_CFG_RTC_SW_EN_OFF         ((uint32_t)0x00007500U)                             /*!< RTC clock OFF */
#define SYSCTL_SYS_CFG_RTC_SW_EN_ON          ((uint32_t)0x00000000U)                             /*!< RTC clock ON */
#endif

/* SYSCTL_TRIM_CFG1_REF_CLK_SEL */
#define SYSCTL_TRIM_CFG1_REF_CLK_SEL_CFG(regval)  (SYSCTL_TRIM_CFG1_REF_CLK_SEL & ((uint32_t)(regval) << 24))
#define SYSCTL_TRIM_CFG1_REF_CLK_SEL_LOSC    (SYSCTL_TRIM_CFG1_REF_CLK_SEL_CFG(0))               /*!< select LOSC as reference clock */
#define SYSCTL_TRIM_CFG1_REF_CLK_SEL_HOSC    (SYSCTL_TRIM_CFG1_REF_CLK_SEL_CFG(1))               /*!< select HOSC as reference clock */
#define SYSCTL_TRIM_CFG1_REF_CLK_SEL_RCH     (SYSCTL_TRIM_CFG1_REF_CLK_SEL_CFG(2))               /*!< select RCH  as reference clock */
#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
#define SYSCTL_TRIM_CFG1_REF_CLK_SEL_PLL     (SYSCTL_TRIM_CFG1_REF_CLK_SEL_CFG(3))               /*!< select PLL as reference clock */
#endif

/* SYSCTL_TRIM_CFG1_CAL_DONE_IE */
#define SYSCTL_TRIM_CFG1_CAL_DONE_IE_DIS     ((uint32_t)0x00000000U)                             /*!< disable interrupt */
#define SYSCTL_TRIM_CFG1_CAL_DONE_IE_EN      (SYSCTL_TRIM_CFG1_CAL_DONE_IE)                      /*!< enable interrupt */

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI_DMA_CH0_PRI */
#define SYSCTL_DMA_PRI_DMA_CH0_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH0_PRI & ((uint32_t)(regval) << 0))
#define SYSCTL_DMA_PRI_DMA_CH0_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH0_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH0_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH0_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH0_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH0_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH0_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH0_PRI_CFG(0))                 /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI_DMA_CH1_PRI */
#define SYSCTL_DMA_PRI_DMA_CH1_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH1_PRI & ((uint32_t)(regval) << 2))
#define SYSCTL_DMA_PRI_DMA_CH1_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH1_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH1_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH1_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH1_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH1_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH1_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH1_PRI_CFG(0))                 /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI_DMA_CH2_PRI */
#define SYSCTL_DMA_PRI_DMA_CH2_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH2_PRI & ((uint32_t)(regval) << 4))
#define SYSCTL_DMA_PRI_DMA_CH2_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH2_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH2_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH2_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH2_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH2_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH2_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH2_PRI_CFG(0))                 /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI_DMA_CH3_PRI */
#define SYSCTL_DMA_PRI_DMA_CH3_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH3_PRI & ((uint32_t)(regval) << 6))
#define SYSCTL_DMA_PRI_DMA_CH3_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH3_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH3_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH3_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH3_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH3_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH3_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH3_PRI_CFG(0))                 /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI_DMA_CH4_PRI */
#define SYSCTL_DMA_PRI_DMA_CH4_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH4_PRI & ((uint32_t)(regval) << 8))
#define SYSCTL_DMA_PRI_DMA_CH4_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH4_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH4_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH4_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH4_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH4_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH4_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH4_PRI_CFG(0))                 /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI_DMA_CH5_PRI */
#define SYSCTL_DMA_PRI_DMA_CH5_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH5_PRI & ((uint32_t)(regval) << 10))
#define SYSCTL_DMA_PRI_DMA_CH5_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH5_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH5_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH5_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH5_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH5_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH5_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH5_PRI_CFG(0))                 /*!< DMA lowest priority */

/* SYSCTL_DMA_PRI_DMA_CH6_PRI */
#define SYSCTL_DMA_PRI_DMA_CH6_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH6_PRI & ((uint32_t)(regval) << 12))
#define SYSCTL_DMA_PRI_DMA_CH6_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH6_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH6_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH6_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH6_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH6_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH6_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH6_PRI_CFG(0))                 /*!< DMA lowest priority */

/* SYSCTL_DMA_PRI_DMA_CH7_PRI */
#define SYSCTL_DMA_PRI_DMA_CH7_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH7_PRI & ((uint32_t)(regval) << 14))
#define SYSCTL_DMA_PRI_DMA_CH7_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH7_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH7_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH7_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH7_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH7_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH7_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH7_PRI_CFG(0))                 /*!< DMA lowest priority */

/* SYSCTL_DMA_PRI_DMA_CH8_PRI */
#define SYSCTL_DMA_PRI_DMA_CH8_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH8_PRI & ((uint32_t)(regval) << 16))
#define SYSCTL_DMA_PRI_DMA_CH8_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH8_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH8_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH8_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH8_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH8_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH8_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH8_PRI_CFG(0))                 /*!< DMA lowest priority */

/* SYSCTL_DMA_PRI_DMA_CH9_PRI */
#define SYSCTL_DMA_PRI_DMA_CH9_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH9_PRI & ((uint32_t)(regval) << 18))
#define SYSCTL_DMA_PRI_DMA_CH9_PRI_HIGHEST   (SYSCTL_DMA_PRI_DMA_CH9_PRI_CFG(3))                 /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH9_PRI_HIGH      (SYSCTL_DMA_PRI_DMA_CH9_PRI_CFG(2))                 /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH9_PRI_LOW       (SYSCTL_DMA_PRI_DMA_CH9_PRI_CFG(1))                 /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH9_PRI_LOWEST    (SYSCTL_DMA_PRI_DMA_CH9_PRI_CFG(0))                 /*!< DMA lowest priority */

/* SYSCTL_DMA_PRI_DMA_CH10_PRI */
#define SYSCTL_DMA_PRI_DMA_CH10_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH10_PRI & ((uint32_t)(regval) << 20))
#define SYSCTL_DMA_PRI_DMA_CH10_PRI_HIGHEST  (SYSCTL_DMA_PRI_DMA_CH10_PRI_CFG(3))                /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH10_PRI_HIGH     (SYSCTL_DMA_PRI_DMA_CH10_PRI_CFG(2))                /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH10_PRI_LOW      (SYSCTL_DMA_PRI_DMA_CH10_PRI_CFG(1))                /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH10_PRI_LOWEST   (SYSCTL_DMA_PRI_DMA_CH10_PRI_CFG(0))                /*!< DMA lowest priority */

/* SYSCTL_DMA_PRI_DMA_CH11_PRI */
#define SYSCTL_DMA_PRI_DMA_CH11_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH11_PRI & ((uint32_t)(regval) << 22))
#define SYSCTL_DMA_PRI_DMA_CH11_PRI_HIGHEST  (SYSCTL_DMA_PRI_DMA_CH11_PRI_CFG(3))                /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH11_PRI_HIGH     (SYSCTL_DMA_PRI_DMA_CH11_PRI_CFG(2))                /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH11_PRI_LOW      (SYSCTL_DMA_PRI_DMA_CH11_PRI_CFG(1))                /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH11_PRI_LOWEST   (SYSCTL_DMA_PRI_DMA_CH11_PRI_CFG(0))                /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI_DMA_CH12_PRI */
#define SYSCTL_DMA_PRI_DMA_CH12_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH12_PRI & ((uint32_t)(regval) << 24))
#define SYSCTL_DMA_PRI_DMA_CH12_PRI_HIGHEST  (SYSCTL_DMA_PRI_DMA_CH12_PRI_CFG(3))                /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH12_PRI_HIGH     (SYSCTL_DMA_PRI_DMA_CH12_PRI_CFG(2))                /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH12_PRI_LOW      (SYSCTL_DMA_PRI_DMA_CH12_PRI_CFG(1))                /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH12_PRI_LOWEST   (SYSCTL_DMA_PRI_DMA_CH12_PRI_CFG(0))                /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI_DMA_CH13_PRI */
#define SYSCTL_DMA_PRI_DMA_CH13_PRI_CFG(regval)  (SYSCTL_DMA_PRI_DMA_CH13_PRI & ((uint32_t)(regval) << 26))
#define SYSCTL_DMA_PRI_DMA_CH13_PRI_HIGHEST  (SYSCTL_DMA_PRI_DMA_CH13_PRI_CFG(3))                /*!< DMA highest priority */
#define SYSCTL_DMA_PRI_DMA_CH13_PRI_HIGH     (SYSCTL_DMA_PRI_DMA_CH13_PRI_CFG(2))                /*!< DMA high priority */
#define SYSCTL_DMA_PRI_DMA_CH13_PRI_LOW      (SYSCTL_DMA_PRI_DMA_CH13_PRI_CFG(1))                /*!< DMA low priority */
#define SYSCTL_DMA_PRI_DMA_CH13_PRI_LOWEST   (SYSCTL_DMA_PRI_DMA_CH13_PRI_CFG(0))                /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI2_DMA_CH14_PRI */
#define SYSCTL_DMA_PRI2_DMA_CH14_PRI_CFG(regval)  (SYSCTL_DMA_PRI2_DMA_CH14_PRI & ((uint32_t)(regval) << 0))
#define SYSCTL_DMA_PRI2_DMA_CH14_PRI_HIGHEST  (SYSCTL_DMA_PRI2_DMA_CH14_PRI_CFG(3))               /*!< DMA highest priority */
#define SYSCTL_DMA_PRI2_DMA_CH14_PRI_HIGH    (SYSCTL_DMA_PRI2_DMA_CH14_PRI_CFG(2))               /*!< DMA high priority */
#define SYSCTL_DMA_PRI2_DMA_CH14_PRI_LOW     (SYSCTL_DMA_PRI2_DMA_CH14_PRI_CFG(1))               /*!< DMA low priority */
#define SYSCTL_DMA_PRI2_DMA_CH14_PRI_LOWEST  (SYSCTL_DMA_PRI2_DMA_CH14_PRI_CFG(0))               /*!< DMA lowest priority */

/* SYSCTL_DMA_PRI2_DMA_CH15_PRI */
#define SYSCTL_DMA_PRI2_DMA_CH15_PRI_CFG(regval)  (SYSCTL_DMA_PRI2_DMA_CH15_PRI & ((uint32_t)(regval) << 2))
#define SYSCTL_DMA_PRI2_DMA_CH15_PRI_HIGHEST  (SYSCTL_DMA_PRI2_DMA_CH15_PRI_CFG(3))               /*!< DMA highest priority */
#define SYSCTL_DMA_PRI2_DMA_CH15_PRI_HIGH    (SYSCTL_DMA_PRI2_DMA_CH15_PRI_CFG(2))               /*!< DMA high priority */
#define SYSCTL_DMA_PRI2_DMA_CH15_PRI_LOW     (SYSCTL_DMA_PRI2_DMA_CH15_PRI_CFG(1))               /*!< DMA low priority */
#define SYSCTL_DMA_PRI2_DMA_CH15_PRI_LOWEST  (SYSCTL_DMA_PRI2_DMA_CH15_PRI_CFG(0))               /*!< DMA lowest priority */

/* SYSCTL_DMA_PRI2_DMA_CH16_PRI */
#define SYSCTL_DMA_PRI2_DMA_CH16_PRI_CFG(regval)  (SYSCTL_DMA_PRI2_DMA_CH16_PRI & ((uint32_t)(regval) << 4))
#define SYSCTL_DMA_PRI2_DMA_CH16_PRI_HIGHEST  (SYSCTL_DMA_PRI2_DMA_CH16_PRI_CFG(3))               /*!< DMA highest priority */
#define SYSCTL_DMA_PRI2_DMA_CH16_PRI_HIGH    (SYSCTL_DMA_PRI2_DMA_CH16_PRI_CFG(2))               /*!< DMA high priority */
#define SYSCTL_DMA_PRI2_DMA_CH16_PRI_LOW     (SYSCTL_DMA_PRI2_DMA_CH16_PRI_CFG(1))               /*!< DMA low priority */
#define SYSCTL_DMA_PRI2_DMA_CH16_PRI_LOWEST  (SYSCTL_DMA_PRI2_DMA_CH16_PRI_CFG(0))               /*!< DMA lowest priority */
#endif

#if !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_DMA_PRI2_DMA_CH17_PRI */
#define SYSCTL_DMA_PRI2_DMA_CH17_PRI_CFG(regval)  (SYSCTL_DMA_PRI2_DMA_CH17_PRI & ((uint32_t)(regval) << 6))
#define SYSCTL_DMA_PRI2_DMA_CH17_PRI_HIGHEST  (SYSCTL_DMA_PRI2_DMA_CH17_PRI_CFG(3))               /*!< DMA highest priority */
#define SYSCTL_DMA_PRI2_DMA_CH17_PRI_HIGH    (SYSCTL_DMA_PRI2_DMA_CH17_PRI_CFG(2))               /*!< DMA high priority */
#define SYSCTL_DMA_PRI2_DMA_CH17_PRI_LOW     (SYSCTL_DMA_PRI2_DMA_CH17_PRI_CFG(1))               /*!< DMA low priority */
#define SYSCTL_DMA_PRI2_DMA_CH17_PRI_LOWEST  (SYSCTL_DMA_PRI2_DMA_CH17_PRI_CFG(0))               /*!< DMA lowest priority */

/* SYSCTL_ADCIN_CTRL_ADCIN_IA */
#define SYSCTL_ADCIN_CTRL_ADCIN_IA_DIS       ((uint32_t)0x00000000U)                             /*!< disable */
#define SYSCTL_ADCIN_CTRL_ADCIN_IA_EN        (SYSCTL_ADCIN_CTRL_ADCIN_IA)                        /*!< enble */

/* SYSCTL_ADCIN_CTRL_ADCIN_IB */
#define SYSCTL_ADCIN_CTRL_ADCIN_IB_DIS       ((uint32_t)0x00000000U)                             /*!< disable */
#define SYSCTL_ADCIN_CTRL_ADCIN_IB_EN        (SYSCTL_ADCIN_CTRL_ADCIN_IB)                        /*!< enble */

/* SYSCTL_ADCIN_CTRL_ADC_CLK_OEN */
#define SYSCTL_ADCIN_CTRL_ADC_CLK_OEN_DIS    ((uint32_t)0x00000000U)                             /*!< disable */
#define SYSCTL_ADCIN_CTRL_ADC_CLK_OEN_EN     (SYSCTL_ADCIN_CTRL_ADC_CLK_OEN)                     /*!< enble */

/* SYSCTL_ADCIN_CTRL_ADC_CLKO_SEL */
#define SYSCTL_ADCIN_CTRL_ADC_CLKO_SEL_1M8   ((uint32_t)0x00000000U)                             /*!< freq select as 1.8432Mhz */
#define SYSCTL_ADCIN_CTRL_ADC_CLKO_SEL_3M6   (SYSCTL_ADCIN_CTRL_ADC_CLKO_SEL)                    /*!< freq select as 3.6864Mhz */
#endif
#if !defined(RN821x_RN721x_SOC_V3) && !defined(RN821x_RN721x_SOC_D) && !defined(RN821x_RN721x_SOC_C) && !defined(RN821x_RN721x_SOC_B)
/* SYSCTL_SYSCP_CON_ADC_SYSCP_MODE */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_MODE_AUTO  ((uint32_t)0x00000000U)                             /*!< select as auto mode */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_MODE_MANU  (SYSCTL_SYSCP_CON_ADC_SYSCP_MODE)                   /*!< select as manual mode */

/* SYSCTL_SYSCP_CON_ADC_SYSCP_SEL */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_CFG(regval)  (SYSCTL_SYSCP_CON_ADC_SYSCP_SEL & ((uint32_t)(regval) << 4))
#define SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_N2048  (SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_CFG(0))             /*!< N = 2048, period = (1.8432e6/N) Hz */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_N4096  (SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_CFG(1))             /*!< N = 4096, period = (1.8432e6/N) Hz */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_N8192  (SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_CFG(2))             /*!< N = 8192, period = (1.8432e6/N) Hz */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_N16384  (SYSCTL_SYSCP_CON_ADC_SYSCP_SEL_CFG(3))             /*!< N = 16384, period = (1.8432e6/N) Hz */

/* SYSCTL_SYSCP_CON_ADC_SYSCP_PH */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_PH_FS     ((uint32_t)0x00000000U)                             /*!< select as forward sampling */
#define SYSCTL_SYSCP_CON_ADC_SYSCP_PH_RS     (SYSCTL_SYSCP_CON_ADC_SYSCP_PH)                     /*!< select as reverse sampling */
#endif

#endif /* RN821X_RN721X_SOC_SYSCTL_H */
/* r1648 */
