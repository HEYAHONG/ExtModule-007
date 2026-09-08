#ifndef __DLT645_H__
#define __DLT645_H__
#include "hbox.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dlt645_init(void);
void dlt645_loop(void);


extern const hdlt645_slave_time_t dlt645_slave_time;
extern const hdlt645_slave_writeaddr_t dlt645_io_ctx_write_addr;
extern const hdlt645_slave_com_z_t dlt645_io_ctx_com_z;

#ifdef __cplusplus
}
#endif


#endif
