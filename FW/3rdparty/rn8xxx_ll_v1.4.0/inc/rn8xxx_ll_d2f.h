/********************************************************************************
 * @file    rn8xxx_ll_d2f.h
 * @author  Renergy Application Team
 * @version V1.1.1
 * @date    2023-12-27
 * @brief   Header file containing functions prototypes of Uart HAL library.
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
 ******************************************************************************
 * @ Revised records
 * V1.1.1   2023-12-27  Add       Add macro definition for geting register and register bit
 * V1.1.0               Initial
 */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _Rn8xxx_D2F_H
#define _Rn8xxx_D2F_H

/* Includes ------------------------------------------------------------------*/

#include "rn8xxx_ll_def.h"

#if defined(RN821x_RN721x_SOC_V2) || defined(RN831x_RN861x_MCU_V2)
/* Exported define ------------------------------------------------------------*/

/*********************************************************************************/
#if defined(RN831x_RN861x_MCU_V2)
#define GET_REG_D2F_HFCONST3(d2f, databits) ((d2f)->HFCONST3 & GET_DATA_MASK(databits))  /* HFCONST3是16位无符号数 */
#define SET_REG_D2F_HFCONST3(d2f, data) ((d2f)->HFCONST3 = (data))
#else
#define GET_REG_D2F_HFCONST4(d2f, databits) ((d2f)->HFCONST4 & GET_DATA_MASK(databits)) /* HFCONST4是16位无符号数 */
#define GET_REG_D2F_HFCONST5(d2f, databits) ((d2f)->HFCONST5 & GET_DATA_MASK(databits)) /* HFCONST5是16位无符号数 */
#define GET_REG_D2F_HFCONST6(d2f, databits) ((d2f)->HFCONST6 & GET_DATA_MASK(databits)) /* HFCONST6是16位无符号数 */
#define GET_REG_D2F_HFCONST7(d2f, databits) ((d2f)->HFCONST7 & GET_DATA_MASK(databits)) /* HFCONST7是16位无符号数 */

#define SET_REG_D2F_HFCONST4(d2f, data) ((d2f)->HFCONST4 = (data))
#define SET_REG_D2F_HFCONST5(d2f, data) ((d2f)->HFCONST5 = (data))
#define SET_REG_D2F_HFCONST6(d2f, data) ((d2f)->HFCONST6 = (data))
#define SET_REG_D2F_HFCONST7(d2f, data) ((d2f)->HFCONST7 = (data))

#define GET_REG_D2F_OUT_CFG(d2f, databits) ((d2f)->OUT_CFG & GET_DATA_MASK(databits)) /* 脉冲输出配置寄存器 */
#define SET_REG_D2F_OUT_CFG(d2f, data) ((d2f)->OUT_CFG = (data))

#define GET_BIT_D2F_OUT_CFG(d2f, bit) (((d2f)->OUT_CFG & (bit)) ? (1u) : (0u))
#define SET_BIT_D2F_OUT_CFG(d2f, bit) SET_REG32_BIT((d2f)->OUT_CFG, (bit))

#define GET_REG_D2F_FCNT00(d2f, databits) ((d2f)->D2FFCNT[0] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT01(d2f, databits) ((d2f)->D2FFCNT[1] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT02(d2f, databits) ((d2f)->D2FFCNT[2] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT03(d2f, databits) ((d2f)->D2FFCNT[3] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT04(d2f, databits) ((d2f)->D2FFCNT[4] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT05(d2f, databits) ((d2f)->D2FFCNT[5] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT06(d2f, databits) ((d2f)->D2FFCNT[6] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT07(d2f, databits) ((d2f)->D2FFCNT[7] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT08(d2f, databits) ((d2f)->D2FFCNT[8] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT09(d2f, databits) ((d2f)->D2FFCNT[9] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT10(d2f, databits) ((d2f)->D2FFCNT[10] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */
#define GET_REG_D2F_FCNT11(d2f, databits) ((d2f)->D2FFCNT[11] & GET_DATA_MASK(databits)) /* D2F快速脉冲计数器，16位无符号数 */

#define SET_REG_D2F_FCNT00(d2f, data) ((d2f)->D2FFCNT[0] = (data))
#define SET_REG_D2F_FCNT01(d2f, data) ((d2f)->D2FFCNT[1] = (data))
#define SET_REG_D2F_FCNT02(d2f, data) ((d2f)->D2FFCNT[2] = (data))
#define SET_REG_D2F_FCNT03(d2f, data) ((d2f)->D2FFCNT[3] = (data))
#define SET_REG_D2F_FCNT04(d2f, data) ((d2f)->D2FFCNT[4] = (data))
#define SET_REG_D2F_FCNT05(d2f, data) ((d2f)->D2FFCNT[5] = (data))
#define SET_REG_D2F_FCNT06(d2f, data) ((d2f)->D2FFCNT[6] = (data))
#define SET_REG_D2F_FCNT07(d2f, data) ((d2f)->D2FFCNT[7] = (data))
#define SET_REG_D2F_FCNT08(d2f, data) ((d2f)->D2FFCNT[8] = (data))
#define SET_REG_D2F_FCNT09(d2f, data) ((d2f)->D2FFCNT[9] = (data))
#define SET_REG_D2F_FCNT10(d2f, data) ((d2f)->D2FFCNT[10] = (data))
#define SET_REG_D2F_FCNT11(d2f, data) ((d2f)->D2FFCNT[11] = (data))
#endif

#define GET_REG_D2F_IE(d2f, databits) ((d2f)->IE & GET_DATA_MASK(databits))
#define GET_REG_D2F_IF(d2f, databits) ((d2f)->IF & GET_DATA_MASK(databits))
#define GET_REG_D2F_CFG(d2f, databits) ((d2f)->CFG & GET_DATA_MASK(databits))

#define GET_REG_D2F_FP00(d2f, databits) ((d2f)->D2FP[0] & GET_DATA_MASK(databits)) /* D2F功率寄存器， MCU和SOC有效位数不一样，RN831x_RN861x_MCU_V2对应28位，RN821x_RN721x_SOC_V2对应32位*/
#define GET_REG_D2F_FP01(d2f, databits) ((d2f)->D2FP[1] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP02(d2f, databits) ((d2f)->D2FP[2] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP03(d2f, databits) ((d2f)->D2FP[3] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP04(d2f, databits) ((d2f)->D2FP[4] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP05(d2f, databits) ((d2f)->D2FP[5] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP06(d2f, databits) ((d2f)->D2FP[6] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP07(d2f, databits) ((d2f)->D2FP[7] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP08(d2f, databits) ((d2f)->D2FP[8] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP09(d2f, databits) ((d2f)->D2FP[9] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP10(d2f, databits) ((d2f)->D2FP[10] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FP11(d2f, databits) ((d2f)->D2FP[11] & GET_DATA_MASK(databits))

#define GET_REG_D2F_FE00(d2f, databits) ((d2f)->D2FE[0] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE01(d2f, databits) ((d2f)->D2FE[1] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE02(d2f, databits) ((d2f)->D2FE[2] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE03(d2f, databits) ((d2f)->D2FE[3] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE04(d2f, databits) ((d2f)->D2FE[4] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE05(d2f, databits) ((d2f)->D2FE[5] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE06(d2f, databits) ((d2f)->D2FE[6] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE07(d2f, databits) ((d2f)->D2FE[7] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE08(d2f, databits) ((d2f)->D2FE[8] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE09(d2f, databits) ((d2f)->D2FE[9] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE10(d2f, databits) ((d2f)->D2FE[10] & GET_DATA_MASK(databits))
#define GET_REG_D2F_FE11(d2f, databits) ((d2f)->D2FE[11] & GET_DATA_MASK(databits))


#define SET_REG_D2F_IE(d2f, data) ((d2f)->IE = (data))
#define SET_REG_D2F_IF(d2f, data) ((d2f)->IF = (data))
#define SET_REG_D2F_CFG(d2f, data) ((d2f)->CFG = (data))
#define SET_REG_D2F_FP00(d2f, data) ((d2f)->D2FP[0] = (data))
#define SET_REG_D2F_FP01(d2f, data) ((d2f)->D2FP[1] = (data))
#define SET_REG_D2F_FP02(d2f, data) ((d2f)->D2FP[2] = (data))
#define SET_REG_D2F_FP03(d2f, data) ((d2f)->D2FP[3] = (data))
#define SET_REG_D2F_FP04(d2f, data) ((d2f)->D2FP[4] = (data))
#define SET_REG_D2F_FP05(d2f, data) ((d2f)->D2FP[5] = (data))
#define SET_REG_D2F_FP06(d2f, data) ((d2f)->D2FP[6] = (data))
#define SET_REG_D2F_FP07(d2f, data) ((d2f)->D2FP[7] = (data))
#define SET_REG_D2F_FP08(d2f, data) ((d2f)->D2FP[8] = (data))
#define SET_REG_D2F_FP09(d2f, data) ((d2f)->D2FP[9] = (data))
#define SET_REG_D2F_FP10(d2f, data) ((d2f)->D2FP[10] = (data))
#define SET_REG_D2F_FP11(d2f, data) ((d2f)->D2FP[11] = (data))

/*********************************************************************************/

#define GET_BIT_D2F_IE(d2f, bit) (((d2f)->IE & (bit)) ? (1u) : (0u))
#define GET_BIT_D2F_IF(d2f, bit) (((d2f)->IF & (bit)) ? (1u) : (0u))
#define GET_BIT_D2F_CFG(d2f, bit) (((d2f)->CFG & (bit)) ? (1u) : (0u))

#define SET_BIT_D2F_IE(d2f, bit) SET_REG32_BIT((d2f)->IE, (bit))
#define SET_BIT_D2F_IF(d2f, bit) ((d2f)->IF = (bit))

typedef enum
{
    D2FCFG_DISABLE = 0x01, /*"复位所有计数器和数字运算单元，不复位寄存器 值。默认值为 1"*/
    D2FCFG_ENABLE = 0x00,  /*"使能 D2F 模块,当启动积分时，需要先将该位配置为 0，此后保持该 位为 0，直接填写 D2FP 寄存器会立即启动积分"*/

    D2FCFG_EREGADD = 0x01, /*"累加型"*/
    D2FCFG_EREGCAR = 0x00, /*"读后清零型"*/
} eD2F_CFG_TypeDef;

typedef enum
{
    D2FOUT_D2F00 = 0x00, /* 输出的脉冲类型选择:D2F00 脉冲 */
    D2FOUT_D2F01 = 0x01, /* 输出的脉冲类型选择:D2F01 脉冲 */
    D2FOUT_D2F02 = 0x02, /* 输出的脉冲类型选择:D2F02 脉冲 */
    D2FOUT_D2F03 = 0x03, /* 输出的脉冲类型选择:D2F03 脉冲 */
    D2FOUT_D2F04 = 0x04, /* 输出的脉冲类型选择:D2F04 脉冲 */
    D2FOUT_D2F05 = 0x05, /* 输出的脉冲类型选择:D2F05 脉冲 */
   
} eD2F_OUT_CFG_TypeDef;

typedef union
{
    struct
    {
        uint32_t ERegCAR : 1;
        uint32_t D2F_DISABLE : 1;     
    }bitCFG;
    uint32_t CFG;
} uD2F_CFG_TypeDef;

#if defined(RN821x_RN721x_SOC_V2)
typedef union
{
    struct
    {
        uint32_t OUT0_CFG : 3;
        uint32_t Reserved0 : 1;   
        uint32_t OUT1_CFG : 3;
        uint32_t Reserved1 : 1; 
        uint32_t OUT2_CFG : 3;
        uint32_t Reserved2 : 1;   
        uint32_t OUT3_CFG : 3;
        uint32_t Reserved3 : 1; 
        uint32_t OUT4_CFG : 3;
        uint32_t Reserved4 : 13;     
    }bitOUT_CFG;
    uint32_t OUT_CFG;
} uD2F_OUT_CFG_TypeDef;
typedef struct
{    
    uint32_t HFCONST4;
    uint32_t HFCONST5;
    uint32_t HFCONST6;
    uint32_t HFCONST7;
    uint32_t IE;
    uD2F_CFG_TypeDef CFGCTL;
    uD2F_OUT_CFG_TypeDef OUT_CFGCTL;
} sLL_D2F_InitTypeDef;

#else
typedef struct
{    
    uint32_t HFCONST3;
    uint32_t IE;
    uD2F_CFG_TypeDef CFGCTL;
} sLL_D2F_InitTypeDef;

#endif

/* Exported data ----------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
extern void LL_D2F_Init(sLL_D2F_InitTypeDef *sD2F_Init);
extern void LL_D2FP_Clear(void);
#endif
#endif //_UART_H
/****************************   (C) COPYRIGHT Renergy   ****************************/
/****************************       END OF FILE     ********************************/
