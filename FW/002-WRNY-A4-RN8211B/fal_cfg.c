#include "flashdb.h"
#undef eepromProgram
#undef eepromPageErase
#undef eepromSectorErase
#undef eepromStandby
#undef eepromWakeup
#include "nvm.h"

#define EEPROM_BASE (0x08000000)
#define EEPROM_SIZE (32*1024)

static int eeprom0_init(void)
{
    eepromStandby();
    return 0;
}

static int eeprom0_read(long offset, uint8_t *buf, size_t size)
{
    if(buf == NULL || offset > EEPROM_SIZE)
    {
        return 0;
    }
    if(offset+size > EEPROM_SIZE)
    {
        size=EEPROM_SIZE-offset;
    }
    for(size_t i=0; i<size; i++)
    {
        buf[i]=*(volatile const uint8_t *)(EEPROM_BASE+offset+i);
    }
    return size;
}

static int eeprom0_write(long offset, const uint8_t *buf, size_t size)
{
    if(buf == NULL || offset > EEPROM_SIZE)
    {
        return 0;
    }
    if(offset+size > EEPROM_SIZE)
    {
        size=EEPROM_SIZE-offset;
    }
    eepromProgram(EEPROM_BASE+offset,(uintptr_t)buf,size);
    return size;
}

static int eeprom0_erase(long offset, size_t size)
{
    return size;
}


const struct fal_flash_dev eeprom0=
{
    EEPROM_DEV_NAME,
    0,
    EEPROM_SIZE,
    4096,
    {
        eeprom0_init,
        eeprom0_read,
        eeprom0_write,
        eeprom0_erase
    },
    32
};

/*
 * fdb锁
 */
static StaticSemaphore_t fdb_buffer = {};
static SemaphoreHandle_t fdb_handle = NULL;

static void fdb_kvdb1_lock(fdb_db_t db)
{
    xSemaphoreTakeRecursive(fdb_handle,portMAX_DELAY);
}

static void fdb_kvdb1_unlock(fdb_db_t db)
{
    xSemaphoreGiveRecursive(fdb_handle);
}

static void fdb_tsdb1_lock(fdb_db_t db)
{
    xSemaphoreTakeRecursive(fdb_handle,portMAX_DELAY);
}

static void fdb_tsdb1_unlock(fdb_db_t db)
{
    xSemaphoreGiveRecursive(fdb_handle);
}


static fdb_time_t fdb_tsdb1_get_time(void)
{
    hgettimeofday_timeval_t tv= {0};
    /*
     * 采用节拍实现的时间，调用hsyscall_settimeofday设置时间，用户可采用其它实现
     */
    hsyscall_gettimeofday (&tv,NULL);
    return tv.tv_sec;
}

void flashdb_init(void)
{
    fdb_handle=xSemaphoreCreateRecursiveMutexStatic(&fdb_buffer);
}

void flashdb_kvdb_init(struct fdb_kvdb * kvdb)
{
    if(kvdb==NULL)
    {
        return;
    }
    fdb_kvdb_control(kvdb, FDB_KVDB_CTRL_SET_LOCK, (void *)fdb_kvdb1_lock);
    fdb_kvdb_control(kvdb, FDB_KVDB_CTRL_SET_UNLOCK, (void *)fdb_kvdb1_unlock);
    fdb_kvdb_init(kvdb,"fdb_kvdb1","fdb_kvdb1",NULL,NULL);
}

void flashdb_kvdb_deinit(struct fdb_kvdb * kvdb)
{
    if(kvdb==NULL)
    {
        return;
    }
    fdb_kvdb_deinit(kvdb);
}

void flashdb_tsdb_init(struct fdb_tsdb * tsdb)
{
    if(tsdb==NULL)
    {
        return;
    }
    fdb_tsdb_control(tsdb, FDB_TSDB_CTRL_SET_LOCK, (void *)fdb_tsdb1_lock);
    fdb_tsdb_control(tsdb, FDB_TSDB_CTRL_SET_UNLOCK, (void *)fdb_tsdb1_unlock);
    fdb_tsdb_init(tsdb,"fdb_tsdb1","fdb_tsdb1",fdb_tsdb1_get_time,32,NULL);
}

void flashdb_tsdb_deinit(struct fdb_tsdb * tsdb)
{
    if(tsdb==NULL)
    {
        return;
    }
    fdb_tsdb_deinit(tsdb);
}

