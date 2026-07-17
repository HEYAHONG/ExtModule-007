# Change Log

## v1.2.8（2025-6-13）

### 功能优化

- 修改`LL_LIB_Check`接口内部实现方式，从crc32改成checksum，降低接口耗时（约10ms@1.8432Mhz）

### 功能增加

### 修改bug

### 其他

## v1.2.7（2025-5-28）

### 功能优化

### 功能增加
- 新增`RN831x_RN861x_MCU_V3`和`RN821x_RN721x_SOC_V3`合封EEPROM的支持，具体支持型号请参见产品用户手册

### 修改bug

### 其他

## v1.2.6（2025-4-24）

### 功能优化
- 芯片型号宏定义以及nvr内置库函数宏定义存放在`renergy_chip_config.h`文件中，该文件位于CMSIS文件夹中
- 增加clktrim的各时钟测量接口的超时等待值
- `LL_CLKTRIM_LoscStopCheck`接口不再根据20%/50%误差范围返回`CLK_TRIM_PASS`,`CLK_TRIM_UNSTABLE`,`CLK_TRIM_NO_CLK`，改为5%误差范围判定，低于5%返回`CLK_TRIM_PASS`，超出5%返回`CLK_TRIM_UNSTABLE`
- `LL_SYSCLK_SysModeChg`接口切换到PLL模式时，降低时钟异常时切换等待时间（由1s降低至0.5s）

### 功能增加
- 新增nvr内置库函数接口`LL_LIB_Check`，用于验证nvr内置库函数合法性
- 新增`LL_SYSOPTION_RtcConfCheck`, `LL_SYSOPTION_WdtConfCheck`, `LL_SYSOPTION_RchConfCheck`, `LL_SYSOPTION_RclConfCheck`接口，分别用于管理RTC校准曲线参数，WDT参数，RCH时钟校正参数，RCL时钟校正参数。当用户程序管理或动态校正上述参数时，不要调用上述接口，否则会导致用户程序设置值/校正值被修改。
- 新增`LL_SYSOPTION_CpLevelGet`,`LL_SYSOPTION_CpLevelSet`接口，用于软件管理保护等级
- 增加`LL_RTC_ClkSel`接口，用于设置万年历的时钟源，支持`LOSC`和`RCL`
- 恢复`RN202x_RN7326_SOC_V2`产品的`LL_SYSOPTION_Dota0CfgSet`,`LL_SYSOPTION_AlphalCfgSet`,`LL_SYSOPTION_AlphahCfgSet`,`LL_SYSOPTION_Xt0CfgSet`,`LL_SYSOPTION_Dota0CfgGet`,`LL_SYSOPTION_AlphalCfgGet`,`LL_SYSOPTION_AlphahCfgGet`,`LL_SYSOPTION_Xt0CfgGet`接口功能

### 修改bug


### 其他


## v1.2.5（2025-2-7）

### 功能优化
- `LL_SYSOPTION_SysConfCheck`函数中增加测试寄存器的管理，增强系统鲁棒性

### 功能增加

### 修改bug
- 修复IAR编译器`-O3`优化编译选项时，`LL_SYSOPTION_Dota0CfgGet/LL_SYSOPTION_AlphalCfgGet/LL_SYSOPTION_AlphahCfgGet/LL_SYSOPTION_Xt0CfgGet`返回值不正确的bug

### 其他
- 删除`RN202X_RN7326_SOC_V2`产品的下列接口：`LL_LIB_Dota0CfgUpdate`,`LL_LIB_AlphalCfgUpdate`,`LL_LIB_AlphahCfgUpdate`,`LL_LIB_Xt0CfgUpdate`,`LL_LIB_RtcCfgUpdate`,`LL_LIB_CodeProtectLevelUpdate`,`LL_LIB_Dota0CfgRead`,`LL_LIB_AlphalCfgRead`,`LL_LIB_AlphahCfgRead`,`LL_LIB_Xt0CfgRead`,`LL_LIB_CodeProtectLevelRead`,`LL_LIB_RemapRead`。以上接口功能已通过编程器(上位机v4.5，固件v5.8)支持，无需通过应用程序设置选项字节
- 删除`RN202x_RN7326_SOC_V2`产品的下列接口：`LL_FLASH_CacheOn`，`LL_FLASH_CacheOff`。以上接口功能在该产品下没有应用场景

## v1.2.4（2024-12-2）

### 功能优化

### 功能增加

### 修改bug
- 修复`LL_CLKTRIM_LoscStopCheck`精简版本`-O3`优化编译选项时，函数内部的超时值临界的bug

### 其他

## v1.2.3（2024-10-30）

### 功能优化

### 功能增加
- `RN831x_RN861x_MCU_V2`芯片内部集成库函数，支持的接口参见文件`rn831x_rn861x_mcu_lib_api.h`，内部集成库函数函数指针结构体地址固定为**0x00080600U**，使用内部集成库函数时，不再需要添加库函数源码，使用方法为在应用程序中定义`const rn_lib_t  *rn_lib = (rn_lib_t  *)0x80600;`

### 修改bug
- 修复`LL_SYSOPTION_GetMcuVersion`接口识别`V22`和`V3`升级产品的芯片版本报错bug

### 其他

## v1.2.2 (2024-8-18)

### 功能优化
- 合并非ll版本库函数接口到ll版本中
- 增加flash编程接口的注释内容

### 功能增加
- 增加`LL_GPADC_TadjGet`，`LL_EMU_ExtRefConf`库函数接口

### 修改bug
- `LL_SYSOPTION_Dota0CfgSet`,`LL_SYSOPTION_AlphalCfgSet`,`LL_SYSOPTION_AlphahCfgSet`,`LL_SYSOPTION_Xt0CfgSet`接口传入的参数按照寄存器实际位宽截取后存储
- 修复V2/V3 MCU/SOC平台版本接口切换至LC模式未正确配置LDO功耗模式的bug

### 其他

## v1.2.1（2024-8-1）

### 功能优化

- 修正部分lint报警

### 功能增加

- 增加`LL_CLKTRIM_RclTrimByRch`,`LL_CLKTRIM_SysClkMonitorAsync`,`LL_CLKTRIM_SysClkMonitorAsyncStatus`,`LL_CLKTRIM_SysClkMonitorSync`,`LL_CLKTRIM_LoscStopCheck`接口

### 修改bug

### 其他

## v1.2.0（2024-5-31）

### 功能优化

### 功能增加

- 支持芯片类型宏定义，当前支持`RN831x_RN861x_MCU_V1`,`RN831x_RN861x_MCU_V2`,`RN831x_RN861x_MCU_V3`,`RN821x_RN721x_SOC_B`,`RN821x_RN721x_SOC_C`,`RN821x_RN721x_SOC_D`,`RN821x_RN721x_SOC_V2`,`RN821x_RN721x_SOC_V3`, `RN202X_RN7326_SOC_B`, `RN202X_RN7326_SOC_V2`，当未定义上述芯片类型宏定义，库函数支持上述全部类型；当定义了特定的芯片类型宏定义，库函数只支持对应类型的芯片，不支持其他型号
- 增加对`MCU V3`, `单相SOC V3`和`三相SOC V2`的支持
- 增加`LL_SIPEEPROM_Init`，`LL_SIPEEPROM_Rst`，`LL_SIPEEPROM_Read`，`LL_SIPEEPROM_Write`合封EEPROM接口
- 增加`LL_CLKTRIM_RchTrimByLosc` RCH时钟实时校正接口
- `RN831x_RN861x_MCU_V3`芯片内部集成库函数，支持的接口参见文件`rn831x_rn861x_mcu_lib_api.h`，内部集成库函数函数指针结构体地址固定为**0x00040600U**，使用内部集成库函数时，不再需要添加库函数源码，使用方法为在应用程序中定义`const rn_lib_t  *rn_lib = (rn_lib_t  *)0x40600;`
- 删除对`单相SOC A版`的支持

### 修改bug

### 其他

## v1.1.6 (2023-12-14)

### 功能优化
- `LL_SYSCLK_FastSysModeChg()`函数支持D版SOC产品

### 功能增加
- 增加`LL_SYSCLK_NvmActive()`和`LL_SYSCLK_NvmSleep()`接口，适用于低功耗模式（系统运行于32K主频）下使用NVM(全失压)功能的场景。当系统模式切换至32K主频后，系统自动切换至低功耗模式，此时如果需要使用NVM功能，请在NVM模块开启前调用`LL_SYSCLK_NvmActive()`以开启NVM功耗模式，否则低功耗模式不足以驱动NVM模块，系统存在内部电源驱动能力不足导致复位或功能异常的风险；当完成NVM功能后，可以调用`LL_SYSCLK_NvmSleep()`以恢复低功耗模式

### 修改bug

### 其他

## v1.1.5 (2023-11-21)

### 功能优化
- 清除部分misra 2012报警和gcc报警

### 功能增加
- 增加`eSysCtrlRet_TypeDef LL_LIB_Dota0CfgUpdate(unsigned short dota0)`接口，用于用户程序中自行管理晶振参数时，将相应的参数同步更新到芯片的选项字节存储区域中，该区域位于FLASH特殊存储空间；芯片复位后系统会自动将选项字节中的晶振参数加载到RTC模块寄存器中。建议用户自行管理晶振参数时，将参数同步到选项字节存储区域中以确保芯片复位后RTC参数正确。
- 增加`eSysCtrlRet_TypeDef LL_LIB_AlphalCfgUpdate(unsigned short alphal)`接口，用于用户程序中自行管理晶振参数时，将相应的参数同步更新到芯片的选项字节存储区域中，该区域位于FLASH特殊存储空间；芯片复位后系统会自动将选项字节中的晶振参数加载到RTC模块寄存器中。建议用户自行管理晶振参数时，将参数同步到选项字节存储区域中以确保芯片复位后RTC参数正确。
- 增加`eSysCtrlRet_TypeDef LL_LIB_AlphahCfgUpdate(unsigned short alphah)`接口，用于用户程序中自行管理晶振参数时，将相应的参数同步更新到芯片的选项字节存储区域中，该区域位于FLASH特殊存储空间；芯片复位后系统会自动将选项字节中的晶振参数加载到RTC模块寄存器中。建议用户自行管理晶振参数时，将参数同步到选项字节存储区域中以确保芯片复位后RTC参数正确。
- 增加`eSysCtrlRet_TypeDef LL_LIB_Xt0CfgUpdate(unsigned short xt0)`接口，用于用户程序中自行管理晶振参数时，将相应的参数同步更新到芯片的选项字节存储区域中，该区域位于FLASH特殊存储空间；芯片复位后系统会自动将选项字节中的晶振参数加载到RTC模块寄存器中。建议用户自行管理晶振参数时，将参数同步到选项字节存储区域中以确保芯片复位后RTC参数正确。
- 增加`eSysCtrlRet_TypeDef LL_LIB_RtcCfgUpdate(unsigned short dota0, unsigned short alphal, unsigned short alphah, unsigned short xt0)`接口，用于用户程序中自行管理晶振参数时，将相应的参数同步更新到芯片的选项字节存储区域中，该区域位于FLASH特殊存储空间；芯片复位后系统会自动将选项字节中的晶振参数加载到RTC模块寄存器中。建议用户自行管理晶振参数时，将参数同步到选项字节存储区域中以确保芯片复位后RTC参数正确。
- 增加`eSysCtrlRet_TypeDef LL_LIB_CodeProtectLevelUpdate(unsigned char level, unsigned int password)`接口，用于客户修改芯片的保护等级，关于保护等级的说明，请参见用户手册
- 增加`eSysCtrlRet_TypeDef LL_LIB_Dota0CfgRead(unsigned short *dota0)`接口，用于读取FLASH选项字节存储区域中保存的相应参数值
- 增加`eSysCtrlRet_TypeDef LL_LIB_AlphalCfgRead(unsigned short *alphal)`接口，用于读取FLASH选项字节存储区域中保存的相应参数值
- 增加`eSysCtrlRet_TypeDef LL_LIB_AlphahCfgRead(unsigned short *alphah)`接口，用于读取FLASH选项字节存储区域中保存的相应参数值
- 增加`eSysCtrlRet_TypeDef LL_LIB_Xt0CfgRead(unsigned short *xt0)`接口，用于读取FLASH选项字节存储区域中保存的相应参数值
- 增加`eSysCtrlRet_TypeDef LL_LIB_CodeProtectLevelRead(unsigned short *level)`接口，用于读取FLASH选项字节存储区域中保存的相应参数值
- 增加`eSysCtrlRet_TypeDef LL_LIB_RemapRead(unsigned short *level)`接口，用于读取FLASH选项字节存储区域中保存的相应参数值

### 修改bug

### 其他
- 将所有接口前缀统一改成`LL_LIB_`

## v1.1.4 (2023-10-19)

### 功能优化

### 功能增加
- 增加V2版SOC的支持

### 修改bug

## v1.1.3 (2023-10-10)

### 改动点

#### 功能优化

#### 功能增加
- 增加FastSysModeChg，快速时钟切换函数。只能用于LOSC32K和RC1M8之间切换。该函数用于快速进入和退出低功耗模式，该函数不做HOSC/PLL时钟关闭的操作，因此需要使用SysModeChg进入LOSC32K/RC1M8后才能调用此函数以确保HOSC/PLL被正确关闭。
- 增加Clock_PLL_58M9_DIV2时钟模式，PLL时钟源为58.9Mhz的2分频时钟

#### 修改bug
- 修复客户可能关闭内部超时函数专用定时器时钟导致超时函数失效的bug
- 修复V2芯片RC29M模式flash时序没正确配置的bug

## v1.1.2 (2023-07-14)

### 改动点

#### 功能优化

- RC29M模式开启PLL14M，确保RC29M模式下RTC可以输出高精度1Hz脉冲

#### 功能增加
- 增加FlashVoltageTrim()函数，v2芯片在进行FLASH擦写前至少需要调用一次该函数

## v1.1.1 (2023-07-07)

### 改动点
#### 功能优化
-  sysupdata.c文件 - SysConfCheck函数
   1. 删除RN8XXX v2系列芯片对REG_MADC_ADTEST寄存器的检测，交给客户管理此寄存器。

## v1.1.0 (2023-06-13)

### 改动点
#### 整体优化
- 完全支持MISRA C:2004标准
- 支持MISRA C:2012标准（除MISRA C:2012 Rule 11.1 IAP函数指针使用违例外全部支持）

#### 修改bug
- 优化v21系列芯片库函数支持

## v1.0.3 (2023-04-24)

### 改动点
#### 修改bug
- flashProgram API支持小于页长度字节编程，注意：当变成字节长度超过页长度时，编程长度仍然需要保持页长度对齐

## v1.0.2 (2023-03-28)

### 改动点
#### 修改bug
- 优化SysConfCheck API

## v1.0.1 (2023-03-26)

### 改动点
#### 修改bug
- 优化SysConfCheck API

## v1.0.0 (2023-3-24)

### 新建
- 支持RN8XXX v2系列芯片
