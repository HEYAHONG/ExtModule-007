/*****************************************************************************
; * @file:    startup_rn821x_rn721x_soc.c
; * @purpose: CMSIS Cortex-M0 Core Device Startup File
; *           for rn821x_rn721x_soc
; *           Should be used with GCC 'GNU Tools ARM Embedded'
; *
; *****************************************************************************/

#include <stdint.h>

/*----------------------------------------------------------------------------
  Linker generated Symbols
 *----------------------------------------------------------------------------*/
extern uint32_t __etext;
extern uint32_t __data_start__;
extern uint32_t __data_end__;
extern uint32_t __copy_table_start__;
extern uint32_t __copy_table_end__;
extern uint32_t __zero_table_start__;
extern uint32_t __zero_table_end__;
extern uint32_t __bss_start__;
extern uint32_t __bss_end__;
extern uint32_t __StackTop;

/*----------------------------------------------------------------------------
  Exception / Interrupt Handler Function Prototype
 *----------------------------------------------------------------------------*/
typedef void( *pFunc )( void );

/*----------------------------------------------------------------------------
  External References
 *----------------------------------------------------------------------------*/
#ifndef __START
extern void  _start(void) __attribute__((noreturn));    /* PreeMain (C library entry point) */
#else
extern int  __START(void) __attribute__((noreturn));    /* main entry point */
#endif

#ifndef __NO_SYSTEM_INIT
extern void SystemInit (void);            /* CMSIS System Initialization      */
#endif

/*----------------------------------------------------------------------------
  Internal References
 *----------------------------------------------------------------------------*/
void Default_Handler(void);                          /* Default empty handler */
void Reset_Handler(void);                            /* Reset Handler */

#define    __STACK_SIZE  0x00000C00
#define    __HEAP_SIZE   0x00000000

/*----------------------------------------------------------------------------
  User Initial Stack & Heap
 *----------------------------------------------------------------------------*/
#ifndef __STACK_SIZE
  #define    __STACK_SIZE  0x00000C00
#endif
static uint8_t stack[__STACK_SIZE] __attribute__ ((aligned(8), used, section(".stack")));

#ifndef __HEAP_SIZE
  #define    __HEAP_SIZE   0x00000000
#endif
#if __HEAP_SIZE > 0
static uint8_t heap[__HEAP_SIZE]   __attribute__ ((aligned(8), used, section(".heap")));
#endif

/*----------------------------------------------------------------------------
  Exception / Interrupt Handler
 *----------------------------------------------------------------------------*/
/* Cortex-M0 Processor Exceptions */
void NMI_Handler            (void) __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler      (void) __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler            (void) __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler         (void) __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler        (void) __attribute__ ((weak, alias("Default_Handler")));

/* Specific Interrupts */
void SYSCLKCAL_HANDLER      (void) __attribute__ ((weak, alias("Default_Handler")));
void CMP_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void VCH_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void RTC_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void EMU_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void MADC_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void UART0_HANDLER          (void) __attribute__ ((weak, alias("Default_Handler")));
void UART1_HANDLER          (void) __attribute__ ((weak, alias("Default_Handler")));
void UART2_HANDLER          (void) __attribute__ ((weak, alias("Default_Handler")));
void UART3_HANDLER          (void) __attribute__ ((weak, alias("Default_Handler")));
void SPI0_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void I2C_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void ISO78160_HANDLER       (void) __attribute__ ((weak, alias("Default_Handler")));
void ISO78161_HANDLER       (void) __attribute__ ((weak, alias("Default_Handler")));
void TC0_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void TC1_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void UART4_HANDLER          (void) __attribute__ ((weak, alias("Default_Handler")));
void UART5_HANDLER          (void) __attribute__ ((weak, alias("Default_Handler")));
void WDT_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void KBI_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void LCD_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void CP_HANDLER             (void) __attribute__ ((weak, alias("Default_Handler")));
void DMA_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void NVM_HANDLER            (void) __attribute__ ((weak, alias("Default_Handler")));
void EXT0_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void EXT1_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void EXT2_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void EXT3_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void EXT4_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void EXT5_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void EXT6_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));
void EXT7_HANDLER           (void) __attribute__ ((weak, alias("Default_Handler")));

/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/
const uintptr_t __Vectors[] __attribute__ ((section(".vectors"))) = {
  /* Cortex-M0 Exceptions Handler */
  (uintptr_t)&__StackTop,                              /*     Initial Stack Pointer    */
  (uintptr_t)Reset_Handler,                            /*     Reset Handler            */
  (uintptr_t)NMI_Handler,                              /*     NMI Handler              */
  (uintptr_t)HardFault_Handler,                        /*     Hard Fault Handler       */
  0,                                                   /*     Reserved                 */
  0,                                                   /*     Reserved                 */
  0,                                                   /*     Reserved                 */
  0,                                                   /*     Reserved                 */
  0,                                                   /*     Reserved                 */
  0,                                                   /*     Reserved                 */
  0,                                                   /*     Reserved                 */
  (uintptr_t)SVC_Handler,                              /*     SVCall Handler           */
  0,                                                   /*     Reserved                 */
  0,                                                   /*     Reserved                 */
  (uintptr_t)PendSV_Handler,                           /*     PendSV Handler           */
  (uintptr_t)SysTick_Handler,                          /*     SysTick Handler            */

  /* External interrupts */
  (uintptr_t)SYSCLKCAL_HANDLER,                        /*  0: SYSCLK CALC or EMU_RCD(v2/v3) Handler           */
  (uintptr_t)CMP_HANDLER,                              /*  1: Voltage compare Handler                         */
  (uintptr_t)VCH_HANDLER,                              /*  2: Power Switch or EMU2(v2) Handler                */
  (uintptr_t)RTC_HANDLER,                              /*  3: RTC Handler                                     */
  (uintptr_t)EMU_HANDLER,                              /*  4: EMU or D2F(v2) Handler                          */
  (uintptr_t)MADC_HANDLER,                             /*  5: MADC or FLK(v2) Handler                         */
  (uintptr_t)UART0_HANDLER,                            /*  6: UART0 Handler                                   */
  (uintptr_t)UART1_HANDLER,                            /*  7: UART1 Handler                                   */
  (uintptr_t)UART2_HANDLER,                            /*  8: UART2 Handler                                   */
  (uintptr_t)UART3_HANDLER,                            /*  9: UART3 Handler                                   */
  (uintptr_t)SPI0_HANDLER,                             /* 10: SPI0(except v3) Handler                         */
  (uintptr_t)I2C_HANDLER,                              /* 11: IIC Handler                                     */
  (uintptr_t)ISO78160_HANDLER,                         /* 12: ISO7816 0(except v3) and SPI3(v2/v3) Handler    */
  (uintptr_t)ISO78161_HANDLER,                         /* 13: ISO7816 1(except v3) and SPI2(v2) Handler       */
  (uintptr_t)TC0_HANDLER,                              /* 14: Timer/Counter 0(except v3) Handler              */
  (uintptr_t)TC1_HANDLER,                              /* 15: Timer/Counter 1 Handler                         */
  (uintptr_t)UART4_HANDLER,                            /* 16: UART4 Handler                                   */
  (uintptr_t)UART5_HANDLER,                            /* 17: UART5 Handler                                   */
  (uintptr_t)WDT_HANDLER,                              /* 18: Watch Dog Handler                               */
  (uintptr_t)KBI_HANDLER,                              /* 19: Key Handler                                     */
  (uintptr_t)LCD_HANDLER,                              /* 20: LCD and DSP(v2) Handler                         */
  (uintptr_t)CP_HANDLER,                               /* 21: CP(v1) Handler                                  */
  (uintptr_t)DMA_HANDLER,                              /* 22: EMU3(v2) or DMA(v2) Handler                     */
  (uintptr_t)NVM_HANDLER,                              /* 23: NVM or SPI1 Handler                             */
  (uintptr_t)EXT0_HANDLER,                             /* 24: Extern0 Handler  (or all extern irq)            */
  (uintptr_t)EXT1_HANDLER,                             /* 25: Extern1 Handler  (v2/v3 share with simp-tc0)    */
  (uintptr_t)EXT2_HANDLER,                             /* 26: Extern2 Handler  (v2/v3 share with simp-tc1)    */
  (uintptr_t)EXT3_HANDLER,                             /* 27: Extern3 Handler  (v2/v3 share with simp-tc2)    */
  (uintptr_t)EXT4_HANDLER,                             /* 28: Extern4 Handler  (v2/v3 share with simp-tc3)    */
  (uintptr_t)EXT5_HANDLER,                             /* 29: Extern5 Handler  (v2 share with M2M)            */
  (uintptr_t)EXT6_HANDLER,                             /* 30: Extern6 Handler  (v2 share with CRC)            */
  (uintptr_t)EXT7_HANDLER,                             /* 31: Extern7 Handler  (v2 share with ECT)            */
};

/*----------------------------------------------------------------------------
  Reset Handler called on controller reset
 *----------------------------------------------------------------------------*/
void Reset_Handler(void) {
  uint32_t *pSrc, *pDest;
  uint32_t *pTable __attribute__((unused));

/*  Firstly it copies data from read only memory to RAM. There are two schemes
 *  to copy. One can copy more than one sections. Another can only copy
 *  one section.  The former scheme needs more instructions and read-only
 *  data to implement than the latter.
 *  Macro __STARTUP_COPY_MULTIPLE is used to choose between two schemes.  */

#ifdef __STARTUP_COPY_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of triplets, each of which specify:
 *    offset 0: LMA of start of a section to copy from
 *    offset 4: VMA of start of a section to copy to
 *    offset 8: size of the section to copy. Must be multiply of 4
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
  pTable = &__copy_table_start__;

  for (; pTable < &__copy_table_end__; pTable = pTable + 3) {
        pSrc  = (uint32_t*)*(pTable + 0);
        pDest = (uint32_t*)*(pTable + 1);
        for (; pDest < (uint32_t*)(*(pTable + 1) + *(pTable + 2)) ; ) {
      *pDest++ = *pSrc++;
        }
    }
#else
/*  Single section scheme.
 *
 *  The ranges of copy from/to are specified by following symbols
 *    __etext: LMA of start of the section to copy from. Usually end of text
 *    __data_start__: VMA of start of the section to copy to
 *    __data_end__: VMA of end of the section to copy to
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
  pSrc  = &__etext;
  pDest = &__data_start__;

  for ( ; pDest < &__data_end__ ; ) {
    *pDest++ = *pSrc++;
  }
#endif /*__STARTUP_COPY_MULTIPLE */

/*  This part of work usually is done in C library startup code. Otherwise,
 *  define this macro to enable it in this startup.
 *
 *  There are two schemes too. One can clear multiple BSS sections. Another
 *  can only clear one section. The former is more size expensive than the
 *  latter.
 *
 *  Define macro __STARTUP_CLEAR_BSS_MULTIPLE to choose the former.
 *  Otherwise efine macro __STARTUP_CLEAR_BSS to choose the later.
 */
#ifdef __STARTUP_CLEAR_BSS_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of tuples specifying:
 *    offset 0: Start of a BSS section
 *    offset 4: Size of this BSS section. Must be multiply of 4
 */
  pTable = &__zero_table_start__;

  for (; pTable < &__zero_table_end__; pTable = pTable + 2) {
        pDest = (uint32_t*)*(pTable + 0);
        for (; pDest < (uint32_t*)(*(pTable + 0) + *(pTable + 1)) ; ) {
      *pDest++ = 0;
        }
    }
#elif defined (__STARTUP_CLEAR_BSS)
/*  Single BSS section scheme.
 *
 *  The BSS section is specified by following symbols
 *    __bss_start__: start of the BSS section.
 *    __bss_end__: end of the BSS section.
 *
 *  Both addresses must be aligned to 4 bytes boundary.
 */
  pDest = &__bss_start__;

  for ( ; pDest < &__bss_end__ ; ) {
    *pDest++ = 0ul;
  }
#endif /* __STARTUP_CLEAR_BSS_MULTIPLE || __STARTUP_CLEAR_BSS */
#ifndef __NO_SYSTEM_INIT
    SystemInit();
#endif

#ifndef __START
#define __START _start
#endif
    __START();

}

extern int main(void);
void __START(void){
    while(1) main();
}
/*----------------------------------------------------------------------------
  Default Handler for Exceptions / Interrupts
 *----------------------------------------------------------------------------*/
void Default_Handler(void) {

    while(1);
}
/* r2953 */
