# Change Log

## RN831X_RN861X_MCU v1.1.8 (2025-05-28)
## RN821X_RN721X_SOC v1.1.8 (2025-05-28)
## RN202X_RN7326_SOC v1.0.6 (2025-05-28)
 - 修改 gcc startup 文件消除 warning
 - 修改 iar patch 中 .flash 最小block单位为 0x1000 (4k)

## RN831X_RN861X_MCU v1.1.7 (2025-04-24)
## RN821X_RN721X_SOC v1.1.7 (2025-04-24)
## RN202X_RN7326_SOC v1.0.5 (2025-04-24)
 - 增加 renergy_chip_config.h

## RN831X_RN861X_MCU v1.1.6 (2025-01-13)
## RN821X_RN721X_SOC v1.1.6 (2025-01-13)
 - 根据客服部需求增加 v2/v3版 RTC 部分寄存器开放

## RN831X_RN861X_MCU v1.1.5 (2025-01-02)
## RN821X_RN721X_SOC v1.1.5 (2025-01-02)
## RN202X_RN7326_SOC v1.0.4 (2025-01-02)
- 新增全系列部分 WDT 模块寄存器开放
- arm/iar startup  文件增加注释说明中断复用关系

## RN831X_RN861X_MCU v1.1.4 (2024-12-23)
 - 根据客服部需求增加 v1版 RTC 部分寄存器开放

## RN821X_RN721X_SOC v1.1.4 (2024-12-23)
 - 根据客服部需求增加 B/C/D 版 RTC 部分寄存器开放

## RN831X_RN861X_MCU v1.1.3 (2024-8-20)
 - 根据客服部需求增加 v2版/v3版 RTC 部分寄存器开放
 - 修正 D2F 部分位定义位宽错误

## RN821X_RN721X_SOC v1.1.3 (2024-8-20)
 - 根据客服部需求增加 v2版/v3版 RTC 部分寄存器开放
 - 修正 D2F 部分位定义位宽错误
 - 修正 RN821x_RN721x_SOC_V3 EMU 部分位定义位宽错误

## RN202X_RN7326_SOC v1.0.3 (2024-8-20)
 - 修正笔误修改 RTC->DATA0 为 RTC->DOTA0
 - 修正 RN831x_RN861x_MCU_V3 GPIO   部分位定义错误
 - 修正 RN831x_RN861x_MCU_V3 SYSCTL 部分位定义错误



## RN202X_RN7326_SOC v1.0.2 (2024-7-31)
 -  所有系统控制中的加密位，都删除
 -  中断向量表中 sea /emb 的注释 都删除
### rn202x_rn7326_soc 2026 V2版
 -  SYSCTL->DMA_RST 寄存器，删除多余未定义 比特15和比特8
 -  SPIS_CTRL 修改位域定义错误
 -  **位宽修改**  RTC_TEMP(0x3C)  比特位为15:0
 -  rtc.h 补充部分位定义
  - **增加位定义** RTC_CNT2(0x24) 比特9 RTC_CNT2_CLK_SEL
  - **增加位定义** 时钟配置寄存器TC_CCFG(0x1C) bit2  TC_CCFG_CS_SEL
 -  gpio.h 补充部分位定义
  - **增加位定义**  GPIO_PA  增加位定义 GPIO_PA_P06 GPIO_PA_P07
  - **位宽修改**   GPIO_PCA2
 - UART控制寄存器UARTx_CTL (0x00)  删除bit20 不开放位
 - **删除位定义** 删除 UART_DMA_IE_TX_ERR_IE/UART_DMA_IF_TX_ERR
 - **增加位定义** 增加 UART_DMA_IF_RX_DONE
 - **修改位定义** 修改 GPADC_CTRL0_FREQSEL 为 GPADC_CTRL0_FREQ_SEL
 - **中断名称修改** 由 EMU3_IRQn 改成EDT_EMU3_IRQn
 - 位定义中 CMP1/2全部改成CMP0/1
 - **寄存器名称修改** nvm 章节寄存器名称恢复与手册保持一致（恢复至原RN7326.h一致）
 - **位宽修改** NVM_PSW(0x3C)
 - 位定义中 SPI2 改为 SPIS
 - MADC_LVD_STAT 位定义名称修改
 - 修正 EMU_CKE2 偏移地址为 0x804
 - **寄存器名称修改** EMU 寄存器 FSTFCNT2 改为 FSTVFCNT2
 - **寄存器名称修改** EMU章节 DMA 相关寄存器 进行部分规整

|偏移地址|原寄存器名称|修改后寄存器名称|
|:--|:--|:--|
|0x2A0|DMAWAV_BUF_CTRL     |DMA_BUF_CTRL    |
|0x2AC|DMA_WAVE_CH_SEL     |DMA_CH_SEL      |
|0x2B0|DMA_WAVE_ERR_ADDR   |DMA_ERR_ADDR    |
|0x2C0|DMA_WAVE_MODE_SEL   |DMA_MODE_SEL    |
|0x2C8|DMA_WAVE_GAP_DEPTH  |DMA_GAP_DEPTH   |
|0x6C4|DMA2WAV_BUF_CTRL    |DMA2_BUF_CTRL   |
|0x6D0|DMA2_WAVE_CH_SEL    |DMA2_CH_SEL     |
|0x6D4|DMA2_WAVE_ERR_ADDR  |DMA2_ERR_ADDR   |
|0x6D8|DMA2_WAVE_MODE_SEL  |DMA2_MODE_SEL   |
|0x6E0|DMA2_WAVE_GAP_DEPTH |DMA2_GAP_DEPTH  |

## RN821X_RN721X_SOC v1.1.2 (2024-7-31)
 -  所有系统控制中的加密位，都删除
 -  中断向量表中 sea /emb 的注释 都删除
### B/C/D 版本
 - 修正缺少模块/基地址错误
### rn821x_rn721x_soc v2
 -  **位宽修改** UARTx_BAUD（0x4）修改位宽为 13bit
 -  **位宽修改** 修正 GPIO_PCA2_PC03_B2 范围
 -  uart章节 删除下列不开放寄存器
   CF_CTRL/PFDAT/QFDAT/FPFDAT/IRQDAT/CF_OV/TW_CTRL/TW_BAUD/TW_EN/CAL_CTRL/CAL_CNT

### rn821x_rn721x_soc v3
 - **位宽修改** NVM->PLS_CFG 寄存器修改位宽为 6bit
 - **增加位定义** GPIO->PIMC  PC口输入模式寄存器PIMC（0x48） 补充比特13:8
          增加 PIL104/PIL105/PIL106/PIL107/PIL114/PIL115
 - **增加位定义** GPIO->PASET和GPIO->PACLR 头文件缺少比特31:30
 - **位宽修改** 修正 GPIO_PCA2_PC03_B2 范围
 - **位宽修改** SPI_DMA_TBADR（0x18）~SPI_DMA_RADR（0x2C）修改位宽为15bit
 - **位宽修改** UARTx_BAUD（0x4） 修改位宽为 13bit
 - **位宽修改** UARTx_DMA_TBADR（0x1C）修改位宽为 15bit

## RN831X_RN861X_MCU v1.1.2 (2024-7-31)
 - 所有系统控制中的加密位，都删除
 - **寄存器名称修改** GPIO中的IOCNT名称统一 单独定义结构体
 - 中断向量表中 sea /emb 的注释 都删除
### rn831x_rn861x_mcu v1版
 - 修正缺少模块/基地址错误
### rn831x_rn861x_mcu v2版
 - **增加位定义** V2版 GPIO->PCA0 比特7 GPIO_PUA_PU05

### rn831x_rn861x_mcu v3版
 - v3版补充 GPIO 寄存器 PCA2/PCA3/PCB3/PCC2/PCC3
 - **增加位定义** SYSCTL->OSC_CTRL2 比特19 SYSCTL_OSC_CTRL2_RCL_VBAT_SEL
 - **增加位定义** UARTx_CTRL 比特15 UART_CTRL_PE2DMA
 - **增加位定义** GPIO->PUA  比特5 GPIO_PUA_PU05
 - **增加位定义** GPIO->PACLR（0x68）比特31:30 GPIO_PACLR_P36/GPIO_PACLR_P37
 - **位宽修改** LSTX_ZX_TIME0-2 0x24-0x2C 修改位宽为 24bit

### 功能优化
## v1.0.1 (2023-12-14)

### 功能优化
- mcu产品的`DMA_FLG`改成`DMA_IF`
- mcu产品的`SPI_IRQ/HANDLER`改成`SPI0_IRQ/HANDLER`，`CT_IRQn/HANDLER`改成`CP_IRQn/HANDLER`
- mcu产品的`MOD1_EN[10]`由`SYSCTL_MOD1_EN_RTC_SAR_EN`改成`SYSCTL_MOD1_EN_RTC_EN`
- mcu产品的`MOD1_EN[11]`由`SYSCTL_MOD1_EN_CMPLVD_EN`改成`SYSCTL_MOD1_EN_SAR_EN`
- soc产品的`CAL_T0~T9`改成`CAL_T[10]`
- soc产品的`FLK->UA_600Hz`改成`FLK->UA_600HZ`
- mcu/soc产品的`OSC_CTRL2[12]`由`SYSCTL_OSC_CTRL2_RCL_STB`改成`SYSCTL_OSC_CTRL2_RCL_LOSC_SYS_SEL`

### 功能增加

### 修改bug

### 其他

## v1.0.0 (2023-11-13)

### 新建
- 支持`rn821x_rn721x_soc`和`rn831x_rn861x_mcu`的标准化CMSIS头文件
