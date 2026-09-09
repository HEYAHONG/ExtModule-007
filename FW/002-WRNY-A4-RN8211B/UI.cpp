#include "UI.h"
#include "drv_lcd.h"
#include "drv_emu.h"
#include "hbox.h"

static void ui_lcd_clear(void)
{
    for(size_t i=0; i<5; i++)
    {
        lcd_7_seg_set(1+i,0);
    }
    lcd_seg_set(LCD_SEG_INDEX_1P,false);
    lcd_seg_set(LCD_SEG_INDEX_2P,false);
    lcd_seg_set(LCD_SEG_INDEX_3P,false);
    lcd_seg_set(LCD_SEG_INDEX_4P,false);
    lcd_seg_set(LCD_SEG_INDEX_5P,false);
}

static void ui_lcd_show_number(char sign,double num,bool up,bool down)
{
    ui_lcd_clear();
    lcd_7_seg_set(1+0,lcd_7_seg_font_get(sign));
    if(num < 10.0)
    {
        uint32_t num_show=num*1000;
        for(size_t i = 0; i < 4; i++)
        {
            lcd_7_seg_set(1+4-i,lcd_7_seg_font_get(num_show%10+'0'));
            num_show/=10;
        }
        lcd_seg_set(LCD_SEG_INDEX_3P,true);
    }
    else if(num < 100)
    {
        uint32_t num_show=num*100;
        for(size_t i = 0; i < 4; i++)
        {
            lcd_7_seg_set(1+4-i,lcd_7_seg_font_get(num_show%10+'0'));
            num_show/=10;
        }
        lcd_seg_set(LCD_SEG_INDEX_4P,true);
    }
    else if(num < 1000)
    {
        uint32_t num_show=num*10;
        for(size_t i = 0; i < 4; i++)
        {
            lcd_7_seg_set(1+4-i,lcd_7_seg_font_get(num_show%10+'0'));
            num_show/=10;
        }
        lcd_seg_set(LCD_SEG_INDEX_5P,true);
    }
    else
    {
        uint32_t num_show=num;
        for(size_t i = 0; i < 4; i++)
        {
            lcd_7_seg_set(1+4-i,lcd_7_seg_font_get(num_show%10+'0'));
            num_show/=10;
        }
    }
    if(up)
    {
        lcd_seg_set(LCD_SEG_INDEX_2P,true);
    }
    if(down)
    {
        lcd_seg_set(LCD_SEG_INDEX_1P,true);
    }
}

void ui_init(void)
{
    ui_lcd_clear();
}

enum
{
    UI_U=0,
    UI_I1,
    UI_I2,
    UI_P1,
    UI_P2,
    UI_Q1,
    UI_Q2,
    UI_S1,
    UI_S2,
    UI_FREQ,
    UI_MAX
};

static uint8_t ui_index=UI_U;
static void ui_index_inc(void)
{
    ui_index++;
    if(ui_index >= UI_MAX)
    {
        ui_index=UI_U;
    }
}
static hdefaults_tick_t ui_tick=0;
static void ui_tick_check(void)
{
    if(hdefaults_tick_get()-ui_tick > 5000)
    {
        ui_tick=hdefaults_tick_get();
        ui_index_inc();
    }
}


static hdefaults_tick_t ui_show_data_tick=0;
static void ui_show_data(void)
{
    if(hdefaults_tick_get()-ui_show_data_tick < 300)
    {
        return;
    }
    ui_show_data_tick=hdefaults_tick_get();
    switch(ui_index)
    {
    case UI_U:
    {
        ui_lcd_show_number('U',emu_data_get(EMU_DATA_U),false,false);
    }
    break;
    case UI_I1:
    {
        ui_lcd_show_number('I',emu_data_get(EMU_DATA_I1),true,false);
    }
    break;
    case UI_I2:
    {
        ui_lcd_show_number('I',emu_data_get(EMU_DATA_I2),false,true);
    }
    break;
    case UI_P1:
    {
        ui_lcd_show_number('P',emu_data_get(EMU_DATA_P1),true,false);
    }
    break;
    case UI_P2:
    {
        ui_lcd_show_number('P',emu_data_get(EMU_DATA_P2),false,true);
    }
    break;
    case UI_Q1:
    {
        ui_lcd_show_number('Q',emu_data_get(EMU_DATA_Q1),true,false);
    }
    break;
    case UI_Q2:
    {
        ui_lcd_show_number('Q',emu_data_get(EMU_DATA_Q2),false,true);
    }
    break;
    case UI_S1:
    {
        ui_lcd_show_number('S',emu_data_get(EMU_DATA_S1),true,false);
    }
    break;
    case UI_S2:
    {
        ui_lcd_show_number('S',emu_data_get(EMU_DATA_S2),false,true);
    }
    break;
    case UI_FREQ:
    {
        ui_lcd_show_number('F',emu_data_get(EMU_DATA_FREQ),false,false);
    }
    break;
    default:
    {

    }
    break;
    }
}
void ui_loop(void)
{
    ui_tick_check();
    ui_show_data();
}

