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

void dlt645_di_set_time(const hdlt645_slave_di_t *di,uint8_t mm,uint8_t hh,uint8_t DD,uint8_t MM,uint8_t YY);
void dlt645_di_reset_time(const hdlt645_slave_di_t *di);
void dlt645_di_write_enable(const hdlt645_slave_di_t *di,hdlt645_data_p_t *p,hdlt645_data_c_t *c);
void dlt645_di_write_disable(const hdlt645_slave_di_t *di);
size_t dlt645_di_getlen(const hdlt645_slave_di_t *di);
size_t dlt645_di_write(const hdlt645_slave_di_t *di,const uint8_t *buff,size_t length);
size_t dlt645_di_read(const hdlt645_slave_di_t *di,uint8_t *buff,size_t length);

#ifdef __cplusplus
}
#endif


#endif
