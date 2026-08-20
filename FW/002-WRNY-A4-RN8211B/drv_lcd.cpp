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

uint8_t lcd_7_seg_get(size_t index)
{
    uint8_t ret=0;
    switch(index)
    {
    case 1:
    {
        ret+= lcd_seg_get(LCD_SEG_INDEX_1A)?0x01:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_1B)?0x02:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_1C)?0x04:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_1D)?0x08:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_1E)?0x10:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_1F)?0x20:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_1G)?0x40:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_1P)?0x80:00;
    }
    break;
    case 2:
    {
        ret+= lcd_seg_get(LCD_SEG_INDEX_2A)?0x01:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_2B)?0x02:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_2C)?0x04:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_2D)?0x08:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_2E)?0x10:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_2F)?0x20:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_2G)?0x40:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_2P)?0x80:00;
    }
    break;
    case 3:
    {
        ret+= lcd_seg_get(LCD_SEG_INDEX_3A)?0x01:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_3B)?0x02:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_3C)?0x04:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_3D)?0x08:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_3E)?0x10:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_3F)?0x20:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_3G)?0x40:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_3P)?0x80:00;
    }
    break;
    case 4:
    {
        ret+= lcd_seg_get(LCD_SEG_INDEX_4A)?0x01:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_4B)?0x02:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_4C)?0x04:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_4D)?0x08:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_4E)?0x10:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_4F)?0x20:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_4G)?0x40:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_4P)?0x80:00;
    }
    break;
    case 5:
    {
        ret+= lcd_seg_get(LCD_SEG_INDEX_5A)?0x01:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_5B)?0x02:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_5C)?0x04:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_5D)?0x08:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_5E)?0x10:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_5F)?0x20:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_5G)?0x40:00;
        ret+= lcd_seg_get(LCD_SEG_INDEX_5P)?0x80:00;
    }
    break;
    default:
    {

    }
    break;
    }
    return ret;
}
void    lcd_7_seg_set(size_t index,uint8_t data)
{
    switch(index)
    {
    case 1:
    {
        lcd_seg_set(LCD_SEG_INDEX_1A,(data&0x01)!=0);
        lcd_seg_set(LCD_SEG_INDEX_1B,(data&0x02)!=0);
        lcd_seg_set(LCD_SEG_INDEX_1C,(data&0x04)!=0);
        lcd_seg_set(LCD_SEG_INDEX_1D,(data&0x08)!=0);
        lcd_seg_set(LCD_SEG_INDEX_1E,(data&0x10)!=0);
        lcd_seg_set(LCD_SEG_INDEX_1F,(data&0x20)!=0);
        lcd_seg_set(LCD_SEG_INDEX_1G,(data&0x40)!=0);
        lcd_seg_set(LCD_SEG_INDEX_1P,(data&0x80)!=0);

    }
    break;
    case 2:
    {
        lcd_seg_set(LCD_SEG_INDEX_2A,(data&0x01)!=0);
        lcd_seg_set(LCD_SEG_INDEX_2B,(data&0x02)!=0);
        lcd_seg_set(LCD_SEG_INDEX_2C,(data&0x04)!=0);
        lcd_seg_set(LCD_SEG_INDEX_2D,(data&0x08)!=0);
        lcd_seg_set(LCD_SEG_INDEX_2E,(data&0x10)!=0);
        lcd_seg_set(LCD_SEG_INDEX_2F,(data&0x20)!=0);
        lcd_seg_set(LCD_SEG_INDEX_2G,(data&0x40)!=0);
        lcd_seg_set(LCD_SEG_INDEX_2P,(data&0x80)!=0);

    }
    break;
    case 3:
    {
        lcd_seg_set(LCD_SEG_INDEX_3A,(data&0x01)!=0);
        lcd_seg_set(LCD_SEG_INDEX_3B,(data&0x02)!=0);
        lcd_seg_set(LCD_SEG_INDEX_3C,(data&0x04)!=0);
        lcd_seg_set(LCD_SEG_INDEX_3D,(data&0x08)!=0);
        lcd_seg_set(LCD_SEG_INDEX_3E,(data&0x10)!=0);
        lcd_seg_set(LCD_SEG_INDEX_3F,(data&0x20)!=0);
        lcd_seg_set(LCD_SEG_INDEX_3G,(data&0x40)!=0);
        lcd_seg_set(LCD_SEG_INDEX_3P,(data&0x80)!=0);

    }
    break;
    case 4:
    {
        lcd_seg_set(LCD_SEG_INDEX_4A,(data&0x01)!=0);
        lcd_seg_set(LCD_SEG_INDEX_4B,(data&0x02)!=0);
        lcd_seg_set(LCD_SEG_INDEX_4C,(data&0x04)!=0);
        lcd_seg_set(LCD_SEG_INDEX_4D,(data&0x08)!=0);
        lcd_seg_set(LCD_SEG_INDEX_4E,(data&0x10)!=0);
        lcd_seg_set(LCD_SEG_INDEX_4F,(data&0x20)!=0);
        lcd_seg_set(LCD_SEG_INDEX_4G,(data&0x40)!=0);
        lcd_seg_set(LCD_SEG_INDEX_4P,(data&0x80)!=0);

    }
    break;
    case 5:
    {
        lcd_seg_set(LCD_SEG_INDEX_5A,(data&0x01)!=0);
        lcd_seg_set(LCD_SEG_INDEX_5B,(data&0x02)!=0);
        lcd_seg_set(LCD_SEG_INDEX_5C,(data&0x04)!=0);
        lcd_seg_set(LCD_SEG_INDEX_5D,(data&0x08)!=0);
        lcd_seg_set(LCD_SEG_INDEX_5E,(data&0x10)!=0);
        lcd_seg_set(LCD_SEG_INDEX_5F,(data&0x20)!=0);
        lcd_seg_set(LCD_SEG_INDEX_5G,(data&0x40)!=0);
        lcd_seg_set(LCD_SEG_INDEX_5P,(data&0x80)!=0);

    }
    break;
    default:
    {

    }
    break;
    }
}


static const uint8_t lcd_7_seg_table[] = {
    0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,  /* 0 ~ 9 */
    0x77,0x7c,0x39,0x5e,0x79,0x71,0x3d,0x76,0x0f,0x0e,  /* a ~ z */
    0x75,0x38,0x37,0x54,0x5c,0x73,0x67,0x31,0x49,0x78,
    0x3e,0x1c,0x7e,0x64,0x6e,0x59
};

uint8_t lcd_7_seg_font_get(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return lcd_7_seg_table[ch-'0'];
    }
    if(ch >= 'a' && ch <= 'z')
    {
        return lcd_7_seg_table[ch-'a'+10];
    }
    if(ch >= 'A' && ch <= 'Z')
    {
        return lcd_7_seg_table[ch-'A'+10];
    }
    return 0;
}
