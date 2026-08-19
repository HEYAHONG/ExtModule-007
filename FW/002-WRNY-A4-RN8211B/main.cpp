
#include "main.h"
#include "flashdb.h"
#include "drv_lcd.h"

static void hw_feed()
{
    LL_WDT_ReloadCounter();
};
static void sys_reset()
{
    NVIC_SystemReset();
}
static hwatchdog_tick_t sys_tick_ms()
{
    return hdefaults_tick_get();
};


static void hw_lowlevel_init(void)
{
    /*
     * 切换时钟
     */
    LL_SYSCLK_SysModeChg(Clock_PLL_14M7,Clock_Div_1);

    SystemCoreClockUpdate();

    /*
     * 配置看门狗(看门狗可由编程器启动，此处为兼容已启用看门狗的芯片只配置喂狗不在此处启动看门狗)
     */
    hwatchdog_set_hardware_dog_feed(hw_feed);
    hwatchdog_setup_software_dog(sys_reset,sys_tick_ms);
    hruntime_loop_enable_softwatchdog(false);


}



static void HeapInit(void)
{
#if defined(HCOMPILER_ARMCC) || defined(HCOMPILER_ARMCLANG)
#define SRAM_END (0x10000000 + 0x2000)
    {
        extern  int Image$$RW_IRAM1$$ZI$$Limit;
        uint8_t *       ram1_heap_base= (uint8_t *)&Image$$RW_IRAM1$$ZI$$Limit;
        const size_t    ram1_heap_size= ((uintptr_t)SRAM_END)-((uintptr_t)&Image$$RW_IRAM1$$ZI$$Limit);
        static const HeapRegion_t xHeapRegions[] =
        {
            { (uint8_t *)ram1_heap_base, ram1_heap_size },     // SRAM
            { NULL, 0 }                                        // 结束标记
        };
        vPortDefineHeapRegions(xHeapRegions);
    }
#elif defined(HCOMPILER_GCC) || defined(HCOMPILER_CLANG)
    {
        extern uint8_t __heap_start__[];
        extern uint8_t __heap_end__[];
        uint8_t *       ram1_heap_base= (uint8_t *)__heap_start__;
        const size_t    ram1_heap_size= ((uintptr_t)__heap_end__)-((uintptr_t)__heap_start__);
        static const HeapRegion_t xHeapRegions[] =
        {
            { (uint8_t *)ram1_heap_base, ram1_heap_size },     // SRAM
            { NULL, 0 }                                        // 结束标记
        };
        vPortDefineHeapRegions(xHeapRegions);
    }
#endif

}

/*
 * 栈溢出钩子
 */
void vApplicationStackOverflowHook( TaskHandle_t xTask,char * pcTaskName )
{
    while(true);
}

/*
 * 空闲钩子
 */
void vApplicationIdleHook( void )
{
    if(hwatchdog_is_valid())
    {
        HWATCHDOG_FEED();
    }
    else
    {
        hruntime_loop_enable_softwatchdog(false);
    }
}


/*
 * hbox任务
 */
static void hbox_task_entry(void *usr)
{
    lcd_init();
    flashdb_init();
    hcpprt_init();
    while(1)
    {
        hcpprt_loop();
        vTaskDelay(5);
    }
}


int main()
{
    hw_lowlevel_init();

    HeapInit();

    hruntime_init_lowlevel();

    xTaskCreate( hbox_task_entry, "hbox_task",2048/sizeof(StackType_t), NULL, 1, NULL );

    vTaskStartScheduler();

    while(true)
    {

    }
    return 0;
}
