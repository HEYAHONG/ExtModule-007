;/*****************************************************************************
; * @file:    startup_rn821x_rn721x_soc.s
; * @purpose: CMSIS Cortex-M0 Core Device Startup File
; *           for rn821x_rn721x_soc
; *------- <<< Use Configuration Wizard in Context Menu >>> ------------------
; *
; *
; *****************************************************************************/

        MODULE  ?cstartup

        ;; Forward declaration of sections.
        SECTION CSTACK:DATA:NOROOT(3) ;; 8 bytes alignment

        SECTION .intvec:CODE:NOROOT(2);; 4 bytes alignment

        EXTERN  SystemInit
        EXTERN  __iar_program_start
        PUBLIC  __vector_table
        PUBLIC  __vector_table_0x1c
        PUBLIC  __Vectors
        PUBLIC  __Vectors_End
        PUBLIC  __Vectors_Size

        DATA
__vector_table
        DCD     sfe(CSTACK)
        DCD     __iar_program_start

        DCD     NMI_Handler
        DCD     HardFault_Handler
        DCD     0
        DCD     0
        DCD     0
__vector_table_0x1c
        DCD     0
        DCD     0
        DCD     0
        DCD     0
        DCD     SVC_Handler
        DCD     0
        DCD     0
        DCD     PendSV_Handler
        DCD     SysTick_Handler

        ; External Interrupts
        DCD     SYSCLKCAL_HANDLER       ;  0: SYSCLK CALC or EMU_RCD(v2/v3) Handler
        DCD     CMP_HANDLER             ;  1: Voltage compare Handler
        DCD     VCH_HANDLER             ;  2: Power Switch or EMU2(v2) Handler
        DCD     RTC_HANDLER             ;  3: RTC Handler
        DCD     EMU_HANDLER             ;  4: EMU or D2F(v2) Handler
        DCD     MADC_HANDLER            ;  5: MADC or FLK(v2) Handler
        DCD     UART0_HANDLER           ;  6: UART0 Handler
        DCD     UART1_HANDLER           ;  7: UART1 Handler
        DCD     UART2_HANDLER           ;  8: UART2 Handler
        DCD     UART3_HANDLER           ;  9: UART3 Handler
        DCD     SPI0_HANDLER            ; 10: SPI0(except v3) Handler
        DCD     I2C_HANDLER             ; 11: IIC Handler
        DCD     ISO78160_HANDLER        ; 12: ISO7816 0(except v3) and SPI3(v2/v3) Handler
        DCD     ISO78161_HANDLER        ; 13: ISO7816 1(except v3) and SPI2(v2) Handler
        DCD     TC0_HANDLER             ; 14: Timer/Counter 0(except v3) Handler
        DCD     TC1_HANDLER             ; 15: Timer/Counter 1 Handler
        DCD     UART4_HANDLER           ; 16: UART4 Handler
        DCD     UART5_HANDLER           ; 17: UART5 Handler
        DCD     WDT_HANDLER             ; 18: Watch Dog Handler
        DCD     KBI_HANDLER             ; 19: Key Handler
        DCD     LCD_HANDLER             ; 20: LCD and DSP(v2) Handler
        DCD     CP_HANDLER              ; 21: CP(v1) Handler
        DCD     DMA_HANDLER             ; 22: EMU3(v2) or DMA(v2) Handler
        DCD     NVM_HANDLER             ; 23: NVM or SPI1 Handler
        DCD     EXT0_HANDLER            ; 24: Extern0 Handler  (or all extern irq)
        DCD     EXT1_HANDLER            ; 25: Extern1 Handler  (v2/v3 share with simp-tc0)
        DCD     EXT2_HANDLER            ; 26: Extern2 Handler  (v2/v3 share with simp-tc1)
        DCD     EXT3_HANDLER            ; 27: Extern3 Handler  (v2/v3 share with simp-tc2)
        DCD     EXT4_HANDLER            ; 28: Extern4 Handler  (v2/v3 share with simp-tc3)
        DCD     EXT5_HANDLER            ; 29: Extern5 Handler  (v2 share with M2M)
        DCD     EXT6_HANDLER            ; 30: Extern6 Handler  (v2 share with CRC)
        DCD     EXT7_HANDLER            ; 31: Extern7 Handler  (v2 share with ECT)

__Vectors_End
__Vectors       EQU   __vector_table
__Vectors_Size  EQU     __Vectors_End - __Vectors

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; Default interrupt handlers.
;;
         THUMB
;         PUBWEAK Reset_Handler
         SECTION .text:CODE:REORDER(2)       ; 4 bytes alignment
Reset_Handler
         IMPORT  SystemInit
         IMPORT  __main

         LDR     R0, =SystemInit
         BLX     R0
         LDR     R0, =__iar_program_start
         BX      R0

         PUBWEAK NMI_Handler
         SECTION .text:CODE:REORDER:NOROOT(1)
NMI_Handler
         B       NMI_Handler

         PUBWEAK HardFault_Handler
         SECTION .text:CODE:REORDER:NOROOT(1)
HardFault_Handler
         B       HardFault_Handler

         PUBWEAK SVC_Handler
         SECTION .text:CODE:REORDER:NOROOT(1)
SVC_Handler
         B       SVC_Handler

         PUBWEAK PendSV_Handler
         SECTION .text:CODE:REORDER:NOROOT(1)
PendSV_Handler
         B       PendSV_Handler

         PUBWEAK SysTick_Handler
         SECTION .text:CODE:REORDER:NOROOT(1)
SysTick_Handler
         B       SysTick_Handler

         PUBWEAK EXT0_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EXT0_HANDLER
         B       EXT0_HANDLER

         PUBWEAK EXT1_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EXT1_HANDLER
         B       EXT1_HANDLER

         PUBWEAK EXT2_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EXT2_HANDLER
         B       EXT2_HANDLER

         PUBWEAK EXT3_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EXT3_HANDLER
         B       EXT3_HANDLER

         PUBWEAK EXT4_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EXT4_HANDLER
         B       EXT4_HANDLER

         PUBWEAK EXT5_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EXT5_HANDLER
         B       EXT5_HANDLER

         PUBWEAK EXT6_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EXT6_HANDLER
         B       EXT6_HANDLER

         PUBWEAK EXT7_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EXT7_HANDLER
         B       EXT7_HANDLER

         PUBWEAK RTC_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
RTC_HANDLER
         B       RTC_HANDLER

         PUBWEAK EMU_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
EMU_HANDLER
         B       EMU_HANDLER

         PUBWEAK MADC_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
MADC_HANDLER
         B       MADC_HANDLER

         PUBWEAK UART0_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
UART0_HANDLER
         B       UART0_HANDLER

         PUBWEAK UART1_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
UART1_HANDLER
         B       UART1_HANDLER

         PUBWEAK UART2_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
UART2_HANDLER
         B       UART2_HANDLER

         PUBWEAK UART3_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
UART3_HANDLER
         B       UART3_HANDLER

         PUBWEAK SPI0_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
SPI0_HANDLER
         B       SPI0_HANDLER

         PUBWEAK I2C_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
I2C_HANDLER
         B       I2C_HANDLER

         PUBWEAK ISO78161_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
ISO78161_HANDLER
         B       ISO78161_HANDLER

         PUBWEAK ISO78160_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
ISO78160_HANDLER
         B       ISO78160_HANDLER

         PUBWEAK TC0_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
TC0_HANDLER
         B       TC0_HANDLER

         PUBWEAK TC1_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
TC1_HANDLER
         B       TC1_HANDLER

         PUBWEAK UART4_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
UART4_HANDLER
         B       UART4_HANDLER

         PUBWEAK UART5_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
UART5_HANDLER
         B       UART5_HANDLER

         PUBWEAK WDT_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
WDT_HANDLER
         B       WDT_HANDLER

         PUBWEAK KBI_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
KBI_HANDLER
         B       KBI_HANDLER

         PUBWEAK LCD_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
LCD_HANDLER
         B       LCD_HANDLER

         PUBWEAK CP_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
CP_HANDLER
         B       CP_HANDLER

         PUBWEAK VCH_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
VCH_HANDLER
         B       VCH_HANDLER

         PUBWEAK NVM_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
NVM_HANDLER
         B       NVM_HANDLER

         PUBWEAK CMP_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
CMP_HANDLER
         B       CMP_HANDLER

         PUBWEAK SYSCLKCAL_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
SYSCLKCAL_HANDLER
         B       SYSCLKCAL_HANDLER

         PUBWEAK DMA_HANDLER
         SECTION .text:CODE:REORDER:NOROOT(1)
DMA_HANDLER
         B       DMA_HANDLER

         END
; r2456
