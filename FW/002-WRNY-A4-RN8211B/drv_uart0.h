#ifndef __DRV_UART0_H__
#define __DRV_UART0_H__
/*
 * UART0端口作为DLT645端口，在DLT645中初始化
 */
#include "hbox.h"
#ifdef __cplusplus
extern "C"
{
#endif

void uart0_init(void);

extern hdlt645_slave_io_t uart0_dlt645_io;

#ifdef __cplusplus
}
#endif

#endif

