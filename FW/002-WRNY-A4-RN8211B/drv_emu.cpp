#include "drv_emu.h"

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
#define EMU_I1PGA       (16.0)
#define EMU_I2PGA       (4.0)

/*
 * 电表常数
 */
#define EMU_EC          (3000)

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

const emu_cal_data_t * emu_cal_data_get(void)
{
    return &emu_cal_data_default;
}

void emu_init(void)
{

    /*
     * 启用模拟通道
     */
    LL_SYSC_AnaPowerCtrl(LL_SYSC_PD_ADCU,ERN_ENABLE);
    LL_SYSC_AnaPowerCtrl(LL_SYSC_PD_ADCI1,ERN_ENABLE);
    LL_SYSC_AnaPowerCtrl(LL_SYSC_PD_ADCI2,ERN_ENABLE);
    /*
     * 配置PGA,U=1倍,I1=16倍，I2=4倍
     */
    LL_SYSC_ADCPGACtrl(LL_SYSC_ADCCHN_U,LL_SYSC_ADCPGA_1);
    LL_SYSC_ADCPGACtrl(LL_SYSC_ADCCHN_I1,LL_SYSC_ADCPGA_16);
    LL_SYSC_ADCPGACtrl(LL_SYSC_ADCCHN_I2,LL_SYSC_ADCPGA_4);

    /*
     * 启用EMU模块
     */
    LL_SYSC_ApbClkCtrl(LL_SYSC_EMU_ID,ERN_ENABLE);

    /*
     * 初始化EMU模块
     */
    EMU->SPCMD=0xE5;
    EMU->EMUCON=0x1C0007;
    EMU->HFConst=emu_cal_data_get()->HFCONST1;
    EMU->SPCMD=0xDC;
}

