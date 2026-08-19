#include "drv_lcd.h"
#include "main.h"


/*
 * LCD GPIO设置
 */
static void lcd_gpio_init(void)
{
    LL_SYSC_ApbClkCtrl(LL_SYSC_GPIO_ID,ERN_ENABLE);
    LL_GPIO_CfgInit(PIN_8_0,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_8_1,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_8_2,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_8_3,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_8_4,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_8_5,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_8_6,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_8_7,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_9_0,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_9_1,_SEG,High_Level,Pull_ON,GPIO_MODE_NORMAL,TTL_MODE,PushPll_MODE);
    /*
     * COM引脚为默认功能无需设置。
     */
}


void lcd_init(void)
{
    lcd_gpio_init();
    LL_SYSC_ApbClkCtrl(LL_SYSC_LCD_ID,ERN_ENABLE);
    uLcdCtrl_TypeDef lcd;
    lcd.bitLcdCtrl.EN=LCD_CTL_EN;
    lcd.bitLcdCtrl.DUTY=LCD_1_8DUTY;
    lcd.bitLcdCtrl.BIAS=LCD_1_4BIAS;
    lcd.bitLcdCtrl.BIASLVL=0x1F;
    lcd.bitLcdCtrl.TYPE=LCD_TYPE_A;
    lcd.bitLcdCtrl.PWD_PUMP= LCD_CHARGEPUMP;
    LL_LCD_Init(lcd,360);

    for(size_t i=0; i<12; i++)
    {
        lcd_buf_set(i,0xff);
    }

}

uint8_t lcd_buf_get(size_t index)
{
    if(index >= 12)
    {
        /*
         * 硬件最大支持12个SEG
         */
        return 0;
    }

    return LCD->BUF[16+index];
}

void lcd_buf_set(size_t index,uint8_t data)
{
    if(index >= 12)
    {
        /*
         * 硬件最大支持12个SEG
         */
        return;
    }

    LCD->BUF[16+index]=data;
}

void    lcd_seg_set(size_t index,bool is_set)
{
    if(index >= 40)
    {
        return;
    }
    uint8_t data= lcd_buf_get(index/4);
    if(is_set)
    {
        data |= (1U << (index %4));
    }
    else
    {
        data &= (~(1U << (index %4)));
    }
    lcd_buf_set(index/4,data);

}
bool    lcd_seg_get(size_t index)
{
    if(index >= 40)
    {
        return false;
    }


    uint8_t data= lcd_buf_get(index/4);

    return (data& (1U << (index %4)))!=0;
}
