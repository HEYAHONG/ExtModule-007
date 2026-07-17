/*******************************************************************************
 * @file    rn8xxx_gpio.h
 * @author  Renergy Application Team
 * @version V1.1.2
 * @date    2023-10-08
 * @brief   Header file containing functions prototypes of Gpio HAL library.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2016 Renergy.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 *
 *******************************************************************************/
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef Rn8xxx_GPIO_H_
#define Rn8xxx_GPIO_H_

/* Includes ------------------------------------------------------------------*/

/* Exported define ------------------------------------------------------------*/
/*"****************************   GPIO定义    ****************************"*/
#define PIN_0_Group (0x00U)
#define PIN_1_Group (0x08U)
#define PIN_2_Group (0x10U)
#define PIN_3_Group (0x18U)
#define PIN_4_Group (0x20U)
#define PIN_5_Group (0x28U)
#define PIN_6_Group (0x30U)
#define PIN_7_Group (0x38U)
#define PIN_8_Group (0x40U)
#define PIN_9_Group (0x48U)
#define PIN_10_Group (0x50U)
#define PIN_11_Group (0x58U)
#define PIN_12_Group (0x60U)
#define PIN_13_Group (0x68U)
#define PIN_14_Group (0x70U)

#define PIN_SegCom_Group (0x78U)
#define PIN_nMAX (PIN_SegCom_Group + 4U)
/*------------------------------------------------------------------------------------*/
#define PIN_0_0 (0U)    /*"	PIN_0_Group + 0x00	"*/
#define PIN_0_1 (1U)    /*"	PIN_0_Group + 0x01	"*/
#define PIN_0_2 (2U)    /*"	PIN_0_Group + 0x02	"*/
#define PIN_0_3 (3U)    /*"	PIN_0_Group + 0x03	"*/
#define PIN_0_4 (4U)    /*"	PIN_0_Group + 0x04	"*/
#define PIN_0_5 (5U)    /*"	PIN_0_Group + 0x05	"*/
#define PIN_0_6 (6U)    /*"	PIN_0_Group + 0x06	"*/
#define PIN_0_7 (7U)    /*"	PIN_0_Group + 0x07	"*/
#define PIN_1_0 (8U)    /*"	PIN_1_Group + 0x00	"*/
#define PIN_1_1 (9U)    /*"	PIN_1_Group + 0x01	"*/
#define PIN_1_2 (10U)   /*"	PIN_1_Group + 0x02	"*/
#define PIN_1_3 (11U)   /*"	PIN_1_Group + 0x03	"*/
#define PIN_1_4 (12U)   /*"	PIN_1_Group + 0x04	"*/
#define PIN_1_5 (13U)   /*"	PIN_1_Group + 0x05	"*/
#define PIN_1_6 (14U)   /*"	PIN_1_Group + 0x06	"*/
#define PIN_1_7 (15U)   /*"	PIN_1_Group + 0x07	"*/
#define PIN_2_0 (16U)   /*"	PIN_2_Group + 0x00	"*/
#define PIN_2_1 (17U)   /*"	PIN_2_Group + 0x01	"*/
#define PIN_2_2 (18U)   /*"	PIN_2_Group + 0x02	"*/
#define PIN_2_3 (19U)   /*"	PIN_2_Group + 0x03	"*/
#define PIN_2_4 (20U)   /*"	PIN_2_Group + 0x04	"*/
#define PIN_2_5 (21U)   /*"	PIN_2_Group + 0x05	"*/
#define PIN_2_6 (22U)   /*"	PIN_2_Group + 0x06	"*/
#define PIN_2_7 (23U)   /*"	PIN_2_Group + 0x07	"*/
#define PIN_3_0 (24U)   /*"	PIN_3_Group + 0x00	"*/
#define PIN_3_1 (25U)   /*"	PIN_3_Group + 0x01	"*/
#define PIN_3_2 (26U)   /*"	PIN_3_Group + 0x02	"*/
#define PIN_3_3 (27U)   /*"	PIN_3_Group + 0x03	"*/
#define PIN_3_4 (28U)   /*"	PIN_3_Group + 0x04	"*/
#define PIN_3_5 (29U)   /*"	PIN_3_Group + 0x05	"*/
#define PIN_3_6 (30U)   /*"	PIN_3_Group + 0x06	"*/
#define PIN_3_7 (31U)   /*"	PIN_3_Group + 0x07	"*/
#define PIN_4_0 (32U)   /*"	PIN_4_Group + 0x00	"*/
#define PIN_4_1 (33U)   /*"	PIN_4_Group + 0x01	"*/
#define PIN_4_2 (34U)   /*"	PIN_4_Group + 0x02	"*/
#define PIN_4_3 (35U)   /*"	PIN_4_Group + 0x03	"*/
#define PIN_4_4 (36U)   /*"	PIN_4_Group + 0x04	"*/
#define PIN_4_5 (37U)   /*"	PIN_4_Group + 0x05	"*/
#define PIN_4_6 (38U)   /*"	PIN_4_Group + 0x06	"*/
#define PIN_4_7 (39U)   /*"	PIN_4_Group + 0x07	"*/
#define PIN_5_0 (40U)   /*"	PIN_5_Group + 0x00	"*/
#define PIN_5_1 (41U)   /*"	PIN_5_Group + 0x01	"*/
#define PIN_5_2 (42U)   /*"	PIN_5_Group + 0x02	"*/
#define PIN_5_3 (43U)   /*"	PIN_5_Group + 0x03	"*/
#define PIN_5_4 (44U)   /*"	PIN_5_Group + 0x04	"*/
#define PIN_5_5 (45U)   /*"	PIN_5_Group + 0x05	"*/
#define PIN_5_6 (46U)   /*"	PIN_5_Group + 0x06 	当VCC无电，VBAT初次上电时，P56默认输出1HZ。"*/
#define PIN_5_7 (47U)   /*"	PIN_5_Group + 0x07	"*/
#define PIN_6_0 (48U)   /*"	PIN_6_Group + 0x00	"*/
#define PIN_6_1 (49U)   /*"	PIN_6_Group + 0x01	"*/
#define PIN_6_2 (50U)   /*"	PIN_6_Group + 0x02	"*/
#define PIN_6_3 (51U)   /*"	PIN_6_Group + 0x03	"*/
#define PIN_6_4 (52U)   /*"	PIN_6_Group + 0x04	"*/
#define PIN_6_5 (53U)   /*"	PIN_6_Group + 0x05	"*/
#define PIN_6_6 (54U)   /*"	PIN_6_Group + 0x06	"*/
#define PIN_6_7 (55U)   /*"	PIN_6_Group + 0x07	"*/
#define PIN_7_0 (56U)   /*"	PIN_7_Group + 0x00	"*/
#define PIN_7_1 (57U)   /*"	PIN_7_Group + 0x01	"*/
#define PIN_7_2 (58U)   /*"	PIN_7_Group + 0x02	"*/
#define PIN_7_3 (59U)   /*"	PIN_7_Group + 0x03	"*/
#define PIN_7_4 (60U)   /*"	PIN_7_Group + 0x04	"*/
#define PIN_7_5 (61U)   /*"	PIN_7_Group + 0x05	"*/
#define PIN_7_6 (62U)   /*"	PIN_7_Group + 0x06	"*/
#define PIN_7_7 (63U)   /*"	PIN_7_Group + 0x07	"*/
#define PIN_8_0 (64U)   /*"	PIN_8_Group + 0x00	"*/
#define PIN_8_1 (65U)   /*"	PIN_8_Group + 0x01	"*/
#define PIN_8_2 (66U)   /*"	PIN_8_Group + 0x02	"*/
#define PIN_8_3 (67U)   /*"	PIN_8_Group + 0x03	"*/
#define PIN_8_4 (68U)   /*"	PIN_8_Group + 0x04	"*/
#define PIN_8_5 (69U)   /*"	PIN_8_Group + 0x05	"*/
#define PIN_8_6 (70U)   /*"	PIN_8_Group + 0x06	"*/
#define PIN_8_7 (71U)   /*"	PIN_8_Group + 0x07	"*/
#define PIN_9_0 (72U)   /*"	PIN_9_Group + 0x00	"*/
#define PIN_9_1 (73U)   /*"	PIN_9_Group + 0x01	"*/
#define PIN_9_2 (74U)   /*"	PIN_9_Group + 0x02	"*/
#define PIN_9_3 (75U)   /*"	PIN_9_Group + 0x03	"*/
#define PIN_9_4 (76U)   /*"	PIN_9_Group + 0x04	"*/
#define PIN_9_5 (77U)   /*"	PIN_9_Group + 0x05	"*/
#define PIN_9_6 (78U)   /*"	PIN_9_Group + 0x06	"*/
#define PIN_9_7 (79U)   /*"	PIN_9_Group + 0x07	"*/
#define PIN_10_0 (80U)  /*"	PIN_10_Group + 0x00	"*/
#define PIN_10_1 (81U)  /*"	PIN_10_Group + 0x01	"*/
#define PIN_10_2 (82U)  /*"	PIN_10_Group + 0x02	"*/
#define PIN_10_3 (83U)  /*"	PIN_10_Group + 0x03	"*/
#define PIN_10_4 (84U)  /*"	PIN_10_Group + 0x04	"*/
#define PIN_10_5 (85U)  /*"	PIN_10_Group + 0x05	"*/
#define PIN_10_6 (86U)  /*"	PIN_10_Group + 0x06	"*/
#define PIN_10_7 (87U)  /*"	PIN_10_Group + 0x07	"*/
#define PIN_11_0 (88U)  /*"	PIN_11_Group + 0x00	"*/
#define PIN_11_1 (89U)  /*"	PIN_11_Group + 0x01	"*/
#define PIN_11_2 (90U)  /*"	PIN_11_Group + 0x02	"*/
#define PIN_11_3 (91U)  /*"	PIN_11_Group + 0x03	"*/
#define PIN_11_4 (92U)  /*"	PIN_11_Group + 0x04	"*/
#define PIN_11_5 (93U)  /*"	PIN_11_Group + 0x05	"*/
#define PIN_11_6 (94U)  /*"	PIN_11_Group + 0x06	"*/
#define PIN_11_7 (95U)  /*"	PIN_11_Group + 0x07	"*/
#define PIN_12_0 (96U)  /*"	PIN_12_Group + 0x00	"*/
#define PIN_12_1 (97U)  /*"	PIN_12_Group + 0x01	"*/
#define PIN_12_2 (98U)  /*"	PIN_12_Group + 0x02	"*/
#define PIN_12_3 (99U)  /*"	PIN_12_Group + 0x03	"*/
#define PIN_12_4 (100U) /*"	PIN_12_Group + 0x04	"*/
#define PIN_12_5 (101U) /*"	PIN_12_Group + 0x05	"*/
#define PIN_12_6 (102U) /*"	PIN_12_Group + 0x06	"*/
#define PIN_12_7 (103U) /*"	PIN_12_Group + 0x07	"*/
#define PIN_13_0 (104U) /*"	PIN_13_Group + 0x00	"*/
#define PIN_13_1 (105U) /*"	PIN_13_Group + 0x01	"*/
#define PIN_13_2 (106U) /*"	PIN_13_Group + 0x02	"*/
#define PIN_13_3 (107U) /*"	PIN_13_Group + 0x03	"*/
#define PIN_13_4 (108U) /*"	PIN_13_Group + 0x04	"*/
#define PIN_13_5 (109U) /*"	PIN_13_Group + 0x05	"*/
#define PIN_13_6 (110U) /*"	PIN_13_Group + 0x06	"*/
#define PIN_13_7 (111U) /*"	PIN_13_Group + 0x07	"*/
#define PIN_14_0 (112U) /*"	PIN_14_Group + 0x00	"*/
#define PIN_14_1 (113U) /*"	PIN_14_Group + 0x01	"*/
#define PIN_14_2 (114U) /*"	PIN_14_Group + 0x02	"*/
#define PIN_14_3 (115U) /*"	PIN_14_Group + 0x03	"*/
#define PIN_14_4 (116U) /*"	PIN_14_Group + 0x04	"*/
#define PIN_14_5 (117U) /*"	PIN_14_Group + 0x05	"*/
#define PIN_14_6 (118U) /*"	PIN_14_Group + 0x06	"*/
#define PIN_14_7 (119U) /*"	PIN_14_Group + 0x07	"*/



/* Exported enum ------------------------------------------------------------*/

/*"GPIO方向选择"*/
typedef enum
{
    GPIO_MODE_OUT = 0U,
    GPIO_MODE_IN = 1U,
    GPIO_MODE_NORMAL = 2U, /*"输入不使能;不使用的IO口配置为此模式"*/
} eGPIODir_TypeDef;

/*"GPIO模式选择"*/
typedef enum
{
    NORMAL_IN = 0x00U,      /*""普通模式输入，即CMOS输入缓冲器类型"*/
    TTL_IN = 0x02U,         /*""TTL输入缓冲器类型"*/
    NORMAL_OUT = 0x03U,     /*"普通模式输出,推挽输出"*/
    N_OPENDRAIN_OUT = 0x04U /*"N通道漏极开路模式输出"*/
} eGPIOMode_TypeDef;

/*"GPIO输入模式选择"*/
typedef enum
{
    COMS_MODE = 0x00U,     /*"CMOS 缓冲器， Vil=0.3VCC Vih=0.7VCC；"*/
    TTL_MODE = 0x01U,      /*"TTL 缓冲器， Vil=0.16VCC Vih=0.4VCC；"*/
} eGPIOInputMode_TypeDef; /*"输入模式选择"*/

/*"GPIO输出模式选择"*/
typedef enum
{
    PushPll_MODE = 0x00U,   /*"推挽输出，默认模式"*/
    N_ch_MODE = 0x01U,      /*"N-ch 漏极开路模式；"*/
} eGPIOOutputMode_TypeDef; /*"输出模式选择"*/

/*"GPIO上拉选择"*/
typedef enum
{
    Pull_ON = 0x01U,  /*"选择上拉"*/
    Pull_OFF = 0x00U, /*"不加上拉"*/
} eGPIOPull_TypeDef;

/*"GPIO输出电平选择"*/
typedef enum
{
    Low_Level = 0x00U,  /*"输出低电平"*/
    High_Level = 0x01U, /*"输出高电平"*/
} eGPIOOutputLevel_TypeDef;

typedef enum
{
    _NORMALIO = 1U,

    _HOSCI, /*高频晶体管脚*/
    _HOSCO, /*高频晶体管脚*/
    _SWD,

    _UART0, /*"TX,RX组合同步设置"*/
    _UART1,
    _UART2,
    _UART3,
    _UART4,
    _UART5,
    _UART6,
    _UART7,
    _LPUART,
    _CAN,
    _CAN_RX,
    _CAN_TX,

    _IIC,/*"芯片只有一个IIC时选择,_IIC0,"*/
    _IIC0,
    _IIC1,
    _SPI,/*RN202x_RN7326_SOC_V2有组合关系的SPI，使用"_SPI"将IO口初始化为SPI功能，需要另外再调用LL_GPIO_SPISelNoInit函数确定当前组SPI的具体编号*/  
    _SPI0,
    _SPI1,
    _SPI2,
    _SPI3,
    _SPI4,
    _ISO7816,

    _TC_IN,
    _TC0_N_0, /*"TCO的0通道的反向输出"*/
    _TC0_P_0, /*"TCO的0通道的正向输出"*/
    _TC0_N_1, /*"TCO的1通道的反向输出"*/
    _TC0_P_1, /*"TCO的1通道的正向输出"*/
    _TC1_N_0, /*"TC1的0通道的反向输出"*/
    _TC1_P_0,
    _TC1_N_1,
    _TC1_P_1,

    _RTC_OUT,
    _RTC_1S,

    _KEY,
    _KEY_OUT,

    _INT,

    /*"*******************计量*******************"*/
    _SF_OUT, /*"视在电能脉冲输出，脉冲转发功能"*/
    _SF,     /*""*/
    _PF,     /*"有功电能脉冲输出，脉冲转发功能"*/
    _QF,     /*"无功电能脉冲输出，脉冲转发功能"*/
    _SF1,    /*"脉冲转发功能，INT6口输入，SF1输出"*/
    _SF2,    /*"脉冲转发功能，INT7口输入，SF2输出"*/
    _CF0,    /*"CF0"*/
    _CF1,    /*"CF1"*/
    _CF2,    /*"CF2"*/
    _CF3,    /*"CF3"*/
    _CF4,    /*"CF4"*/
    _CF_OUT0,/*"电能脉冲"*/
    _CF_OUT1,
    _CF_OUT2,
    _CF_OUT3,
    _CF_OUT4,
    _D2F_OUT0,
    _D2F_OUT1,
    _D2F_OUT2,
    _D2F_OUT3,
    _D2F_OUT4,
    _IOCNT_OUT0,/*"脉冲转发"*/
    _IOCNT_OUT1,
    _IOCNT_OUT2,
    _IOCNT_OUT3,
    _IOCNT_OUT4,

    _ZXOUT,
    /*"*******************模拟*******************"*/
    _AIN, /*"SDAIN,AIN "*/
    _CMP2,
    _LVD,
    _CTSWO,
    _CTCMPA,
    _CTCMPB,
    _CTCMPC,

    _LCDV, /*"gpio配置LCDVA, LCDVB, LCDVC, LCDVD, LCDVP1, LCDVP2"*/
    _SEG,  /*"SEG/COM配置为SEG"*/
    _COM,  /*"SEG/COM配置为COM"*/

    _ADC_CLKO,
    _IA_IN,
    _IB_IN,
    _IC_IN,
    _U_IN,
    _TRIG_OUT,

} eGPIOFunction_TypeDef;
#ifdef RN202x_RN7326_SOC_V2
typedef enum
{
	GPIO_SPI_SelNo0 = 0,/*"P31~34:SPI2(高速 SPIS)； P06~P11:SPI0(SPIM/S)；      P12~P15:SPI1(SPIM/S)；"*/
	GPIO_SPI_SelNo1 = 1,/*"P31~34:SPI2(高速 SPIS)； P06~P11:SPI1(SPIM/S)；      P12~P15:SPI0(SPIM/S)；"*/
	GPIO_SPI_SelNo2 = 2,/*"P31~34:SPI1(SPIM/S)；    P06~P11:SPI0(SPIM/S)；      P12~P15:SPI2(高速 SPIS)；"*/
	GPIO_SPI_SelNo3 = 3,/*"P31~34:SPI1(SPIM/S)；    P06~P11:SPI2(高速 SPIS)；   P12~P15:SPI0(SPIM/S)；"*/	
	GPIO_SPI_SelNo4 = 4,/*"P31~34:SPI0(SPIM/S)；    P06~P11:SPI2(高速 SPIS)；   P12~P15:SPI1(SPIM/S)；"*/	
	GPIO_SPI_SelNo5 = 5,/*"P31~34:SPI0(SPIM/S)；    P06~P11:SPI1(SPIM/S)；      P12~P15:SPI2(高速 SPIS)；"*/	
}eGPIO_SPISelNo_TypeDef;
#endif
/* Exported types ------------------------------------------------------------*/
/** @defgroup GPIO_Exported_Types GPIO Exported Types
 * @{
 */
/**
 * @brief   GPIO Init structure definition
 */
typedef struct
{
    uint8_t Pin;                         /*!< Specifies the GPIO pins to be configured.
                                             This parameter can be any value of @ref GPIO_pins */
    eGPIOFunction_TypeDef Mode;           /*!< 复用模式 */
    eGPIOOutputLevel_TypeDef OutputLevel; /*"输出电平选择"*/
    eGPIOPull_TypeDef Pull;               /*!< 上拉选择 */
    eGPIODir_TypeDef Dir;                 /*!< 输入输出选择 */
    eGPIOInputMode_TypeDef InputMode;     /*!< 输入模式*/
    eGPIOOutputMode_TypeDef OutputMode;   /*!< 输出模式*/
} GPIO_InitTypeDef;

/* Exported data  ----------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
extern void LL_GPIO_SetPin(uint8_t pin_id, uint8_t value);
extern uint8_t LL_GPIO_ReadPin(uint8_t pin_id);
extern void LL_GPIO_OverturnPin(uint8_t pin_id);
extern void LL_GPIO_CfgPullMode(uint8_t pin_id, eGPIOPull_TypeDef mode);
extern void LL_GPIO_CfgInputMode(uint8_t pin_id, eGPIOInputMode_TypeDef mode);
extern void LL_GPIO_CfgOutputMode(uint8_t pin_id, eGPIOOutputMode_TypeDef mode);
extern void LL_GPIO_CfgDirMode(uint8_t pin_id, eGPIODir_TypeDef dir);
extern void LL_GPIO_CfgIOMode(uint8_t pin_id, eGPIODir_TypeDef dir, eGPIOMode_TypeDef mode);
extern ErrorStatus LL_GPIO_CfgFun(uint8_t pin_id, eGPIOFunction_TypeDef Fun);
extern void LL_GPIO_Init(const GPIO_InitTypeDef *GPIO_Init);
extern void LL_GPIO_CfgInit(uint8_t Pin,                         /*!< IO口ID */
                            eGPIOFunction_TypeDef Mode,           /*!< 复用模式 */
                            eGPIOOutputLevel_TypeDef OutputLevel, /*"输出电平选择"*/
                            eGPIOPull_TypeDef Pull,               /*!< 上拉选择 */
                            eGPIODir_TypeDef Dir,                 /*!< 输入输出选择 */
                            eGPIOInputMode_TypeDef InputMode,     /*!< 输入模式*/
                            eGPIOOutputMode_TypeDef OutputMode);  /*!< 输出模式*/
#ifdef RN202x_RN7326_SOC_V2
extern void LL_GPIO_SPISelNoInit(eGPIO_SPISelNo_TypeDef gpio_spi_sel); 
#endif

#endif

/****************************   (C) COPYRIGHT Renergy   ****************************/
/****************************       END OF FILE     ********************************/
