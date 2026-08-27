#ifndef __DRV_EMU_H__
#include "main.h"
#include "hbox.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emu_init(void);

/*
 * 校准参数。
 * 电压、电流、功率（有功、无功）计算公式:实际值=寄存器值*系数
 * 电能(需要写入相应HFConst)计算公式: 实际值=累计的寄存器值/电表常数
 */
typedef struct
{
    double      Kv;         //电压系数
    double      Ki1;        //电流系数
    double      Ki2;        //电流系数
    double      Kp1;        //功率系数
    double      Kp2;        //功率系数
    uint16_t    EC;         //电表常数
    uint16_t    HFCONST1;   //HFCONST1值
    uint16_t    HFCONST2;   //HFCONST2值
} emu_cal_data_t;


const emu_cal_data_t *emu_cal_data_get_default(void);
double * emu_cal_data_get_manual_kv(void);
double * emu_cal_data_get_manual_ki1(void);
double * emu_cal_data_get_manual_ki2(void);
void emu_cal_data_load(void);
void emu_cal_data_save(void);


double      emu_cal_data_get_kv(void);
double      emu_cal_data_get_ki1(void);
double      emu_cal_data_get_ki2(void);
double      emu_cal_data_get_kp1(void);
double      emu_cal_data_get_kp2(void);
uint16_t    emu_cal_data_get_hfconst1(void);
uint16_t    emu_cal_data_get_hfconst2(void);

typedef enum
{
    EMU_DATA_U=0,                       //电压
    EMU_DATA_I1,                        //电流(通道1)
    EMU_DATA_I2,                        //电流(通道2)
    EMU_DATA_P1,                        //有功功率(通道1)
    EMU_DATA_P2,                        //有功功率(通道2)
    EMU_DATA_Q1,                        //无功功率(通道1)
    EMU_DATA_Q2,                        //无功功率(通道2)
    EMU_DATA_S1,                        //视在功率(通道1)
    EMU_DATA_S2,                        //视在功率(通道2)
    EMU_DATA_FREQ,                      //频率(电压)
    EMU_DATA_I=EMU_DATA_I1,
    EMU_DATA_P=EMU_DATA_P1,
    EMU_DATA_Q=EMU_DATA_Q1,
    EMU_DATA_S=EMU_DATA_S1,
}   emu_data_type_t;

/*
 * 获取计量数据，返回人类可读(采用国际单位制)的数据
 */
double emu_data_get(emu_data_type_t type);

#ifdef __cplusplus
}
#endif

#endif

