#ifndef  __HDLT645_CONFIG_C_H__
#define  __HDLT645_CONFIG_C_H__

#include "hcompiler.h"
#include "hdefaults.h"
#include "hnet.h"


/*
 * 时间同步
 */
extern const hdlt645_slave_time_t dlt645_slave_time;
#define HDLT645_SLAVE_TIME_SYNC (&dlt645_slave_time)


/*
 * 写地址
 */
extern const hdlt645_slave_writeaddr_t dlt645_io_ctx_write_addr;
#define HDLT645_SLAVE_WRITEADDR (&dlt645_io_ctx_write_addr)


/*
 * 修改通信速率
 */
extern const hdlt645_slave_com_z_t dlt645_io_ctx_com_z;
#define HDLT645_SLAVE_COM_Z (&dlt645_io_ctx_com_z)

/*
 *  DI相关操作
 */
void dlt645_di_set_time(const hdlt645_slave_di_t *di,uint8_t mm,uint8_t hh,uint8_t DD,uint8_t MM,uint8_t YY);
void dlt645_di_reset_time(const hdlt645_slave_di_t *di);
void dlt645_di_write_enable(const hdlt645_slave_di_t *di,hdlt645_data_p_t *p,hdlt645_data_c_t *c);
void dlt645_di_write_disable(const hdlt645_slave_di_t *di);
size_t dlt645_di_getlen(const hdlt645_slave_di_t *di);
size_t dlt645_di_write(const hdlt645_slave_di_t *di,const uint8_t *buff,size_t length);
size_t dlt645_di_read(const hdlt645_slave_di_t *di,uint8_t *buff,size_t length);
static const hdlt645_slave_di_t dlt645_slave_di[]=
{
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x01,0x01,0x00),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x02,0x01,0x00),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x02,0x01,0x01),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x03,0x00,0x00),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x03,0x00,0x01),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x04,0x00,0x00),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x04,0x00,0x01),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x05,0x00,0x00),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x05,0x00,0x01),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },
    {
        HDLT645_SLAVE_DI_DEFINE2(0x02,0x80,0x00,0x02),
        dlt645_di_set_time,
        dlt645_di_reset_time,
        dlt645_di_write_enable,
        dlt645_di_write_disable,
        dlt645_di_getlen,
        dlt645_di_write,
        dlt645_di_read,
        0
    },

};

#define HDLT645_SLAVE_DI_TABLE          (dlt645_slave_di)
#define HDLT645_SLAVE_DI_TABLE_SIZE     (sizeof(dlt645_slave_di)/sizeof(dlt645_slave_di[0]))


#endif