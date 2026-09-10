#include "dlt645.h"
#include "drv_uart0.h"
#include "hbox.h"
#include "flashdb.h"
#include "drv_emu.h"

static hdlt645_slave_io_ctx_t io_ctx;

#define DLT645_ADDR_FLASHDB_KEY_NAME "dlt645_addr"

static void dlt645_bcd_addr_load(hdlt645_bcd_addr_t *addr)
{
    if(addr==NULL)
    {
        return;
    }

    struct fdb_kvdb fdb_kvdb1;
    memset(&fdb_kvdb1,0,sizeof(fdb_kvdb1));
    flashdb_kvdb_init(&fdb_kvdb1);
    struct fdb_blob blob;

    {
        fdb_kv_get_blob(&fdb_kvdb1, DLT645_ADDR_FLASHDB_KEY_NAME, fdb_blob_make(&blob, addr, sizeof(*addr)));
    }

    flashdb_kvdb_deinit(&fdb_kvdb1);
}

static void dlt645_bcd_addr_save(hdlt645_bcd_addr_t *addr)
{
    if(addr==NULL)
    {
        return;
    }

    struct fdb_kvdb fdb_kvdb1;
    memset(&fdb_kvdb1,0,sizeof(fdb_kvdb1));
    flashdb_kvdb_init(&fdb_kvdb1);
    struct fdb_blob blob;

    {
        fdb_kv_set_blob(&fdb_kvdb1, DLT645_ADDR_FLASHDB_KEY_NAME, fdb_blob_make(&blob, addr, sizeof(*addr)));
    }

    flashdb_kvdb_deinit(&fdb_kvdb1);
}


void dlt645_init(void)
{
    hdlt645_bcd_addr_t addr= {0};
    dlt645_bcd_addr_load(&addr);
    hdlt645_slave_io_ctx_init(&io_ctx,&addr,NULL,NULL);
    uart0_init();
}

void dlt645_loop(void)
{
    hdlt645_slave_io_ctx_process_io(&io_ctx,&uart0_dlt645_io);
}


static void dlt645_slave_time_sync(const hdlt645_slave_time_t *time,uint8_t ss,uint8_t mm,uint8_t hh,uint8_t DD,uint8_t MM,uint8_t YY)
{
    htimeval_t tv;
    memset(&tv,0,sizeof(tv));
    {
        htm_t tm;
        memset(&tm,0,sizeof(tm));
        tm.tm_sec=hdlt645_bcd_to_uint64(ss);
        tm.tm_min=hdlt645_bcd_to_uint64(mm);
        tm.tm_hour=hdlt645_bcd_to_uint64(hh);
        tm.tm_mday=hdlt645_bcd_to_uint64(DD);
        tm.tm_mon=hdlt645_bcd_to_uint64(MM)-1;
        tm.tm_year=hdlt645_bcd_to_uint64(YY)+2000;
        tv.tv_sec=hlibc_mktime(&tm);
    }
    hsyscall_settimeofday(&tv,NULL);
}

const hdlt645_slave_time_t dlt645_slave_time=
{
    dlt645_slave_time_sync,
    0
};


static bool io_ctx_write_addr_write(struct hdlt645_slave_writeaddr *writeaddr,hdlt645_slave_io_ctx_t *ctx,hdlt645_bcd_addr_t *addr)
{
    if(writeaddr==NULL || ctx==NULL || addr == NULL)
    {
        return false;
    }
    hdlt645_bcd_addr_t zero_addr= {0};
    if(memcmp(addr,&zero_addr,sizeof(zero_addr))==0 || memcmp(&ctx->addr,&zero_addr,sizeof(zero_addr))==0)
    {
        dlt645_bcd_addr_save(addr);
        dlt645_bcd_addr_load(addr);
        return true;
    }

    return false;
}
const hdlt645_slave_writeaddr_t dlt645_io_ctx_write_addr=
{
    io_ctx_write_addr_write,
    0
};

static void io_ctx_change_com_z(struct hdlt645_slave_com_z *comz,hdlt645_slave_io_t *io,uint8_t *z)
{
    if(z==NULL || io==NULL)
    {
        return;
    }

    if(io==&uart0_dlt645_io)
    {
        /*
         * 返回实际波特率
         */
        (*z)=HDLT645_COM_Z_19200;
    }
}
const hdlt645_slave_com_z_t dlt645_io_ctx_com_z=
{
    io_ctx_change_com_z,
    0
};

void dlt645_di_set_time(const hdlt645_slave_di_t *di,uint8_t mm,uint8_t hh,uint8_t DD,uint8_t MM,uint8_t YY)
{

}
void dlt645_di_reset_time(const hdlt645_slave_di_t *di)
{

}
void dlt645_di_write_enable(const hdlt645_slave_di_t *di,hdlt645_data_p_t *p,hdlt645_data_c_t *c)
{

}
void dlt645_di_write_disable(const hdlt645_slave_di_t *di)
{

}
size_t dlt645_di_getlen(const hdlt645_slave_di_t *di)
{
    if(di==NULL)
    {
        return 0;
    }

    size_t ret=0;

    switch(di->di_num)
    {
    case 0x02010100:
    {
        ret=2;
    }
    break;
    case 0x02020100:
    case 0x02020101:
    case 0x02030000:
    case 0x02030001:
    case 0x02040000:
    case 0x02040001:
    case 0x02050000:
    case 0x02050001:
    {
        ret=3;
    }
    break;
    case 0x02800002:
    {
        ret=2;
    }
    break;
    default:
    {

    }
    break;
    }

    return ret;
}
size_t dlt645_di_write(const hdlt645_slave_di_t *di,const uint8_t *buff,size_t length)
{
    if(di==NULL || buff == NULL || length == 0)
    {
        return 0;
    }
    size_t ret= dlt645_di_getlen(di);
    if(ret > length)
    {
        ret=length;
    }

    return ret;
}

static inline double  dlt645_di_abs(double data)
{
    if(data > 0)
    {
        return data;
    }
    return -data;
}

static void dlt645_di_bcd_data_uint64_set(uint8_t *buff,size_t length,uint64_t bcd_data)
{
    if(buff == NULL || length == 0)
    {
        return;
    }

    for(size_t i=0; i<length; i++)
    {
        buff[i]=(bcd_data&0xFF);
        bcd_data >>= 8;
    }
}
size_t dlt645_di_read(const hdlt645_slave_di_t *di,uint8_t *buff,size_t length)
{
    if(di==NULL || buff == NULL || length == 0)
    {
        return 0;
    }
    size_t ret= dlt645_di_getlen(di);
    if(ret > length)
    {
        ret=length;
    }

    switch(di->di_num)
    {
    case 0x02010100:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_U))*10));
    }
    break;
    case 0x02020100:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_I1))*1000));
    }
    break;
    case 0x02020101:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_I2))*1000));
    }
    break;
    case 0x02030000:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_P1))/1000*10000));
    }
    break;
    case 0x02030001:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_P2))/1000*10000));
    }
    break;
    case 0x02040000:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_Q1))/1000*10000));
    }
    break;
    case 0x02040001:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_Q2))/1000*10000));
    }
    break;
    case 0x02050000:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_S1))/1000*10000));
    }
    break;
    case 0x02050001:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_S2))/1000*10000));
    }
    break;
    case 0x02800002:
    {
        dlt645_di_bcd_data_uint64_set(buff,ret, hdlt645_uint64_to_bcd(dlt645_di_abs(emu_data_get(EMU_DATA_FREQ))*100));
    }
    break;
    default:
    {

    }
    break;
    }

    return ret;
}
