/*******************************************************************************
  * @file    LL_d2f.c
  * @author  Renergy Application Team
  * @version V1.1.0
  * @date    2023-08-29
  * @brief   d2f drive
  *
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
  ******************************************************************************
  *@verbatim

  [..]

           ##### How to use this driver #####
  ==============================================================================
  [..]


  @endverbatim
  */

/* Includes ------------------------------------------------------------------*/

#include "rn8xxx_ll.h"
#ifdef LL_D2F_MODULE_ENABLED
#if defined(RN821x_RN721x_SOC_V2) || defined(RN831x_RN861x_MCU_V2)
/* Private define ------------------------------------------------------------*/

/* Private enum -------------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private data ---------------------------------------------------------*/

/* Exported data ----------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Exported functions ----------------------------------------------------------*/
#if defined(RN821x_RN721x_SOC_V2)
/*********************************************************************************************************
** Function name:     LL_D2F_Init
** Descriptions:
** input parameters:
** output parameters: null
** Returned value: 		null
*********************************************************************************************************/
void LL_D2F_Init(sLL_D2F_InitTypeDef *sD2F_Init)
{
    D2F->HFCONST4 = sD2F_Init->HFCONST4;
    D2F->HFCONST5 = sD2F_Init->HFCONST5;
    D2F->HFCONST6 = sD2F_Init->HFCONST6;
    D2F->HFCONST7 = sD2F_Init->HFCONST7;
    D2F->IE = sD2F_Init->IE;
    D2F->CFG = sD2F_Init->CFGCTL.CFG;
    D2F->OUT_CFG = sD2F_Init->OUT_CFGCTL.OUT_CFG;
}
#else
/*********************************************************************************************************
** Function name:     LL_D2F_Init
** Descriptions:
** input parameters:
** output parameters: null
** Returned value: 		null
*********************************************************************************************************/
void LL_D2F_Init(sLL_D2F_InitTypeDef *sD2F_Init)
{
    D2F->HFCONST3 = sD2F_Init->HFCONST3;
    D2F->IE = sD2F_Init->IE;
    D2F->CFG = sD2F_Init->CFGCTL.CFG;
}
/*********************************************************************************************************
** Function name:     LL_D2FP_Clear
** Descriptions:
** input parameters:
** output parameters: null
** Returned value: 		null
*********************************************************************************************************/
void LL_D2FP_Clear(void)
{
    uint8_t i;

    D2F->CFG = 0x02;  //

    for(i = 0; i < 12; i++)
    {
        D2F->D2FP[i] = 0;  //
    }
}
#endif
#endif
#endif /*LL_D2F_MODULE_ENABLED*/
/****************************   (C) COPYRIGHT Renergy   ****************************/
/****************************       END OF FILE     ********************************/
