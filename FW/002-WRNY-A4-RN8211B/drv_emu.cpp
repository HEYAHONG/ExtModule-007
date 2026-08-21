#include "drv_emu.h"
#include "flashdb.h"

/*
 * 电阻分压串分压电阻
 */
#define EMU_RT          (49.9)
/*
 * 电阻分压串总电阻
 */
#define EMU_RA          (49.9+33000*6)
/*
 * 电压通道放大倍数(内部PGA)
 */
#define EMU_UPGA        (1.0)
/*
 * 电流取样电阻（等效）
 */
#define EMU_RI1         (20.0/1000)
#define EMU_RI2         (20.0/1000)

/*
 * 电流通道放大倍数(内部PGA)
 */
#define EMU_I1PGA       (1.0)
#define EMU_I2PGA       (1.0)

/*
 * 电表常数
 */
#ifndef EMU_EC
#define EMU_EC          (1000)
#endif

const emu_cal_data_t emu_cal_data_default=
{
    ((double)EMU_RA)/(EMU_RT*EMU_UPGA*(1UL << 23)),
    ((double)1.0)/(EMU_RI1*EMU_I1PGA * (1UL << 23)),
    ((double)1.0)/(EMU_RI2*EMU_I2PGA * (1UL << 23)),
    ((double)EMU_RA)/(EMU_RT*EMU_UPGA*EMU_RI1*EMU_I1PGA*(1UL << 31)),
    ((double)EMU_RA)/(EMU_RT*EMU_UPGA*EMU_RI2*EMU_I2PGA*(1UL << 31)),
    EMU_EC,
    (uint16_t)(1.8E6*0.9216E6*EMU_RI1*EMU_I1PGA*EMU_RT*EMU_UPGA/(EMU_RA*EMU_EC)),
    (uint16_t)(1.8E6*0.9216E6*EMU_RI2*EMU_I2PGA*EMU_RT*EMU_UPGA/(EMU_RA*EMU_EC))
};

const emu_cal_data_t *emu_cal_data_get_default(void)
{
    return &emu_cal_data_default;
}

/*
 * 在由硬件电路计算的理论值基础上进行校准,不校准时其值为1.0。
 * 系数=实际值/理论值
 * 一般仅用于微调，当相差太多时应调整硬件参数
 */
static double emu_cal_manual_kv     =1.0;
static double emu_cal_manual_ki1    =1.0;
static double emu_cal_manual_ki2    =1.0;

double * emu_cal_data_get_manual_kv(void)
{
    return &emu_cal_manual_kv;
}

double * emu_cal_data_get_manual_ki1(void)
{
    return &emu_cal_manual_ki1;
}

double * emu_cal_data_get_manual_ki2(void)
{
    return &emu_cal_manual_ki2;
}


double      emu_cal_data_get_kv(void)
{
    return  emu_cal_data_get_default()->Kv*emu_cal_manual_kv;
}
double      emu_cal_data_get_ki1(void)
{
    return  emu_cal_data_get_default()->Ki1*emu_cal_manual_ki1;
}
double      emu_cal_data_get_ki2(void)
{
    return  emu_cal_data_get_default()->Ki2*emu_cal_manual_ki2;
}
double      emu_cal_data_get_kp1(void)
{
    return  emu_cal_data_get_default()->Kp1*emu_cal_manual_kv*emu_cal_manual_ki1;
}
double      emu_cal_data_get_kp2(void)
{
    return  emu_cal_data_get_default()->Kp2*emu_cal_manual_kv*emu_cal_manual_ki2;
}
uint16_t    emu_cal_data_get_hfconst1(void)
{
    return  emu_cal_data_get_default()->HFCONST1/(emu_cal_manual_kv*emu_cal_manual_ki1);
}
uint16_t    emu_cal_data_get_hfconst2(void)
{
    return  emu_cal_data_get_default()->HFCONST2/(emu_cal_manual_kv*emu_cal_manual_ki2);
}

void emu_cal_data_load(void)
{

    struct fdb_blob blob;
    {
        double val=0;
        fdb_kv_get_blob(&fdb_kvdb1, "manual_kv", fdb_blob_make(&blob, &val, sizeof(val)));
        if(blob.saved.len > 0)
        {
            if(val > 0.1 && val < 10)
            {
                emu_cal_manual_kv=val;
            }
        }
    }

    {
        double val=0;
        fdb_kv_get_blob(&fdb_kvdb1, "manual_ki1", fdb_blob_make(&blob, &val, sizeof(val)));
        if(blob.saved.len > 0)
        {
            if(val > 0.1 && val < 10)
            {
                emu_cal_manual_ki1=val;
            }
        }
    }

    {
        double val=0;
        fdb_kv_get_blob(&fdb_kvdb1, "manual_ki2", fdb_blob_make(&blob, &val, sizeof(val)));
        if(blob.saved.len > 0)
        {
            if(val > 0.1 && val < 10)
            {
                emu_cal_manual_ki2=val;
            }
        }
    }

}

void emu_cal_data_save(void)
{
    struct fdb_blob blob;
    {
        double val= emu_cal_manual_kv;
        fdb_kv_set_blob(&fdb_kvdb1, "manual_kv", fdb_blob_make(&blob, &val, sizeof(val)));
    }
    {
        double val= emu_cal_manual_ki1;
        fdb_kv_set_blob(&fdb_kvdb1, "manual_ki1", fdb_blob_make(&blob, &val, sizeof(val)));
    }
    {
        double val= emu_cal_manual_ki2;
        fdb_kv_set_blob(&fdb_kvdb1, "manual_ki2", fdb_blob_make(&blob, &val, sizeof(val)));
    }
}

void emu_init(void)
{
    /*
     * 加载微调参数
     */
    emu_cal_data_load();

    /*
     * 启用模拟通道
     */
    LL_SYSC_AnaPowerCtrl(LL_SYSC_PD_ADCU,ERN_ENABLE);
    LL_SYSC_AnaPowerCtrl(LL_SYSC_PD_ADCI1,ERN_ENABLE);
    LL_SYSC_AnaPowerCtrl(LL_SYSC_PD_ADCI2,ERN_ENABLE);
    /*
     * 配置PGA,U=1倍,I1=1倍，I2=1倍
     */
    LL_SYSC_ADCPGACtrl(LL_SYSC_ADCCHN_U,LL_SYSC_ADCPGA_1);
    LL_SYSC_ADCPGACtrl(LL_SYSC_ADCCHN_I1,LL_SYSC_ADCPGA_1);
    LL_SYSC_ADCPGACtrl(LL_SYSC_ADCCHN_I2,LL_SYSC_ADCPGA_1);

    /*
     * 启用EMU模块
     */
    LL_SYSC_ApbClkCtrl(LL_SYSC_EMU_ID,ERN_ENABLE);

    /*
     * 初始化EMU模块
     */
    EMU->SPCMD=0xE5;
    EMU->EMUCON=0x1C0007;
    EMU->HFConst=emu_cal_data_get_hfconst1();       //默认采用HFCONST1
    EMU->SPCMD=0xDC;
}

