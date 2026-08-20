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

extern const emu_cal_data_t emu_cal_data_default;

const emu_cal_data_t *emu_cal_data_get(void);

#ifdef __cplusplus
}
#endif

#endif

