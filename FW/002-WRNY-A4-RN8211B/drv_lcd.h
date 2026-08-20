#ifndef __DRV_LCD_H__
#define __DRV_LCD_H__

#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lcd_init(void);

/*
 * 设置显示缓冲
 */
uint8_t lcd_buf_get(size_t index);
void    lcd_buf_set(size_t index,uint8_t data);


/*
 * 设置段(5位8字共40段)
 */
enum
{
    LCD_SEG_INDEX_1D=0,
    LCD_SEG_INDEX_1E,
    LCD_SEG_INDEX_1G,
    LCD_SEG_INDEX_1F,
    LCD_SEG_INDEX_1P,
    LCD_SEG_INDEX_1C,
    LCD_SEG_INDEX_1B,
    LCD_SEG_INDEX_1A,

    LCD_SEG_INDEX_2D,
    LCD_SEG_INDEX_2E,
    LCD_SEG_INDEX_2G,
    LCD_SEG_INDEX_2F,
    LCD_SEG_INDEX_2P,
    LCD_SEG_INDEX_2C,
    LCD_SEG_INDEX_2B,
    LCD_SEG_INDEX_2A,


    LCD_SEG_INDEX_3D,
    LCD_SEG_INDEX_3E,
    LCD_SEG_INDEX_3G,
    LCD_SEG_INDEX_3F,
    LCD_SEG_INDEX_3P,
    LCD_SEG_INDEX_3C,
    LCD_SEG_INDEX_3B,
    LCD_SEG_INDEX_3A,


    LCD_SEG_INDEX_4D,
    LCD_SEG_INDEX_4E,
    LCD_SEG_INDEX_4G,
    LCD_SEG_INDEX_4F,
    LCD_SEG_INDEX_4P,
    LCD_SEG_INDEX_4C,
    LCD_SEG_INDEX_4B,
    LCD_SEG_INDEX_4A,

    LCD_SEG_INDEX_5D,
    LCD_SEG_INDEX_5E,
    LCD_SEG_INDEX_5G,
    LCD_SEG_INDEX_5F,
    LCD_SEG_INDEX_5P,
    LCD_SEG_INDEX_5C,
    LCD_SEG_INDEX_5B,
    LCD_SEG_INDEX_5A,


};
void    lcd_seg_set(size_t index,bool is_set);
bool    lcd_seg_get(size_t index);

/*
 * 设置七段数码显示。
 * 数据位 0 1 2 3 4 5 6 7
 * 显示段 a b c d e f g dp
 */
uint8_t lcd_7_seg_get(size_t index);
void    lcd_7_seg_set(size_t index,uint8_t data);
/*
 * 数码管字体支持0~9，a~z(不区分大小写)
 */
uint8_t lcd_7_seg_font_get(char ch);


#ifdef __cplusplus
}
#endif

#endif

