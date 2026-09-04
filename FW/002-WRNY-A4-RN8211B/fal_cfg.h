#ifndef _FAL_CFG_H_
#define _FAL_CFG_H_

#include <hbox.h>
#include <flashdb.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define FAL_PART_HAS_TABLE_CFG
#define EEPROM_DEV_NAME             "eeprom0"



/* ===================== Flash device Configuration ========================= */
extern const struct fal_flash_dev eeprom0;

/* flash device table */
#define FAL_FLASH_DEV_TABLE                                          \
{                                                                    \
    &eeprom0,                                                        \
}
/* ====================== Partition Configuration ========================== */
#ifdef FAL_PART_HAS_TABLE_CFG
/* partition table */
#define FAL_PART_TABLE                                                                               \
{                                                                                                    \
    {FAL_PART_MAGIC_WORD, "fdb_kvdb1",  EEPROM_DEV_NAME,          0,         8*1024, 0},             \
    {FAL_PART_MAGIC_WORD, "fdb_tsdb1",  EEPROM_DEV_NAME,          8*1024,    32*1024-8*1024, 0},     \
}
#endif /* FAL_PART_HAS_TABLE_CFG */

void flashdb_init(void);


struct fdb_kvdb;
void flashdb_kvdb_init(struct fdb_kvdb * kvdb);
void flashdb_kvdb_deinit(struct fdb_kvdb * kvdb);

struct fdb_tsdb;
void flashdb_tsdb_init(struct fdb_tsdb * tsdb);
void flashdb_tsdb_deinit(struct fdb_tsdb * tsdb);

#ifdef __cplusplus
}
#endif

#endif /* _FAL_CFG_H_ */
