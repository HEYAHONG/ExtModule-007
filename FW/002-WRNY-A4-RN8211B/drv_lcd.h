#ifndef __DRV_LCD_H__
#define __DRV_LCD_H__

#include "stdlib.h"
#include "stdint.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lcd_init(void);

uint8_t lcd_buf_get(size_t index);

void    lcd_buf_set(size_t index,uint8_t data);


#ifdef __cplusplus
}
#endif

#endif

