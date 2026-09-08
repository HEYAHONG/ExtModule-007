#include "dlt645.h"
#include "drv_uart0.h"
#include "hbox.h"
#include "flashdb.h"

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
