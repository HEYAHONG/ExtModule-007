;/*****************************************************************************
; * @file:    startup_rn821x_rn721x_soc.s
; * @purpose: CMSIS Cortex-M0 Core Device Startup File
; *           for rn821x_rn721x_soc
; *------- <<< Use Configuration Wizard in Context Menu >>> ------------------
; *
; *
; *****************************************************************************/

; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>
Stack_Size      EQU     0x00000C00
UNUSEDIRQ       EQU     0
UNUSEDUART      EQU     0
                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Heap_Size       EQU     0x00000000

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                THUMB

; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size

__Vectors       DCD     __initial_sp              ; Top of Stack
                DCD     Reset_Handler             ; Reset Handler
                DCD     NMI_Handler               ; NMI Handler
                DCD     HardFault_Handler         ; Hard Fault Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVC_Handler               ; SVCall Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                DCD     SYSCLKCAL_HANDLER         ;  0: SYSCLK CALC or EMU_RCD(v2/v3) Handler
                DCD     CMP_HANDLER               ;  1: Voltage compare Handler
                DCD     VCH_HANDLER               ;  2: Power Switch or EMU2(v2) Handler
                DCD     RTC_HANDLER               ;  3: RTC Handler
                DCD     EMU_HANDLER               ;  4: EMU or D2F(v2) Handler
                DCD     MADC_HANDLER              ;  5: MADC or FLK(v2) Handler
                DCD     UART0_HANDLER             ;  6: UART0 Handler
                DCD     UART1_HANDLER             ;  7: UART1 Handler
                DCD     UART2_HANDLER             ;  8: UART2 Handler
                DCD     UART3_HANDLER             ;  9: UART3 Handler
                DCD     SPI0_HANDLER              ; 10: SPI0(except v3) Handler
                DCD     I2C_HANDLER               ; 11: IIC Handler
                DCD     ISO78160_HANDLER          ; 12: ISO7816 0(except v3) and SPI3(v2/v3) Handler
                DCD     ISO78161_HANDLER          ; 13: ISO7816 1(except v3) and SPI2(v2) Handler
                DCD     TC0_HANDLER               ; 14: Timer/Counter 0(except v3) Handler
                DCD     TC1_HANDLER               ; 15: Timer/Counter 1 Handler
                DCD     UART4_HANDLER             ; 16: UART4 Handler
                DCD     UART5_HANDLER             ; 17: UART5 Handler
                DCD     WDT_HANDLER               ; 18: Watch Dog Handler
                DCD     KBI_HANDLER               ; 19: Key Handler
                DCD     LCD_HANDLER               ; 20: LCD and DSP(v2) Handler
                DCD     CP_HANDLER                ; 21: CP(v1) Handler
                DCD     DMA_HANDLER               ; 22: EMU3(v2) or DMA(v2) Handler
                DCD     NVM_HANDLER               ; 23: NVM or SPI1 Handler
                DCD     EXT0_HANDLER              ; 24: Extern0 Handler  (or all extern irq)
                DCD     EXT1_HANDLER              ; 25: Extern1 Handler  (v2/v3 share with simp-tc0)
                DCD     EXT2_HANDLER              ; 26: Extern2 Handler  (v2/v3 share with simp-tc1)
                DCD     EXT3_HANDLER              ; 27: Extern3 Handler  (v2/v3 share with simp-tc2)
                DCD     EXT4_HANDLER              ; 28: Extern4 Handler  (v2/v3 share with simp-tc3)
                DCD     EXT5_HANDLER              ; 29: Extern5 Handler  (v2 share with M2M)
                DCD     EXT6_HANDLER              ; 30: Extern6 Handler  (v2 share with CRC)
                DCD     EXT7_HANDLER              ; 31: Extern7 Handler  (v2 share with ECT)

__Vectors_End

__Vectors_Size  EQU  __Vectors_End - __Vectors


                AREA    |.text|, CODE, READONLY


; Reset Handler

Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main
                LDR     R0, =SystemInit
                BLX     R0
                LDR     R0, =__main
                BX      R0
                ENDP


; Dummy Exception Handlers (infinite loops which can be modified)

;                IF UNUSEDIRQ <> 1
NMI_Handler     PROC
                EXPORT  NMI_Handler               [WEAK]
                B       .
                ENDP
HardFault_Handler\
                PROC
                EXPORT  HardFault_Handler         [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
PendSV_Handler  PROC
                EXPORT  PendSV_Handler            [WEAK]
                B       .
                ENDP
SysTick_Handler PROC
                EXPORT  SysTick_Handler           [WEAK]
                B       .
                ENDP
EXT0_HANDLER    PROC
                EXPORT  EXT0_HANDLER			  [WEAK]
                B       .
                ENDP
EXT1_HANDLER    PROC
                EXPORT  EXT1_HANDLER			  [WEAK]
                B       .
                ENDP
EXT2_HANDLER    PROC
                EXPORT  EXT2_HANDLER			  [WEAK]
                B       .
                ENDP
EXT3_HANDLER    PROC
                EXPORT  EXT3_HANDLER			  [WEAK]
                B       .
                ENDP
EXT4_HANDLER    PROC
                EXPORT  EXT4_HANDLER			  [WEAK]
                B       .
                ENDP
EXT5_HANDLER    PROC
                EXPORT  EXT5_HANDLER			  [WEAK]
                B       .
                ENDP
EXT6_HANDLER    PROC
                EXPORT  EXT6_HANDLER			  [WEAK]
                B       .
                ENDP
EXT7_HANDLER    PROC
                EXPORT  EXT7_HANDLER			  [WEAK]
                B       .
                ENDP
RTC_HANDLER     PROC
                EXPORT  RTC_HANDLER				  [WEAK]
                B       .
                ENDP
EMU_HANDLER     PROC
                EXPORT  EMU_HANDLER				  [WEAK]
                B       .
                ENDP
MADC_HANDLER    PROC
                EXPORT  MADC_HANDLER			  [WEAK]
                B       .
                ENDP
UART0_HANDLER    PROC
                EXPORT  UART0_HANDLER			  [WEAK]
                B       .
                ENDP
UART1_HANDLER   PROC
                EXPORT  UART1_HANDLER			  [WEAK]
                B       .
                ENDP
UART2_HANDLER   PROC
                EXPORT  UART2_HANDLER			  [WEAK]
                B       .
                ENDP
UART3_HANDLER   PROC
                EXPORT  UART3_HANDLER			  [WEAK]
                B       .
                ENDP
SPI0_HANDLER     PROC
                EXPORT  SPI0_HANDLER				  [WEAK]
                B       .
                ENDP
I2C_HANDLER     PROC
                EXPORT  I2C_HANDLER				  [WEAK]
                B       .
                ENDP
ISO78161_HANDLER    PROC
                EXPORT  ISO78161_HANDLER		  [WEAK]
                B       .
                ENDP
ISO78160_HANDLER    PROC
                EXPORT  ISO78160_HANDLER		  [WEAK]
                B       .
                ENDP
TC0_HANDLER     PROC
                EXPORT  TC0_HANDLER				  [WEAK]
                B       .
                ENDP
TC1_HANDLER     PROC
                EXPORT  TC1_HANDLER				  [WEAK]
                B       .
                ENDP
UART5_HANDLER     PROC
                EXPORT  UART5_HANDLER				  [WEAK]
                B       .
                ENDP
UART4_HANDLER     PROC
                EXPORT UART4_HANDLER				  [WEAK]
                B       .
                ENDP
WDT_HANDLER     PROC
                EXPORT  WDT_HANDLER				  [WEAK]
                B       .
                ENDP
KBI_HANDLER     PROC
                EXPORT  KBI_HANDLER				  [WEAK]
                B       .
                ENDP
LCD_HANDLER     PROC
                EXPORT  LCD_HANDLER				  [WEAK]
                B       .
                ENDP
CP_HANDLER     	PROC
                EXPORT  CP_HANDLER				  [WEAK]
                B       .
                ENDP
VCH_HANDLER     PROC
                EXPORT  VCH_HANDLER				  [WEAK]
                B       .
                ENDP
NVM_HANDLER     PROC
                EXPORT  NVM_HANDLER				  [WEAK]
                B       .
                ENDP
CMP_HANDLER   PROC
                EXPORT  CMP_HANDLER			    [WEAK]
                B       .
                ENDP
SYSCLKCAL_HANDLER   PROC
                EXPORT  SYSCLKCAL_HANDLER			    [WEAK]
                B       .
                ENDP
DMA_HANDLER   PROC
                EXPORT  DMA_HANDLER			    [WEAK]
                B       .
                ENDP

                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                LDR     R0, =  Heap_Mem
                LDR     R1, =(Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem +  Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR

                ALIGN

                ENDIF


                END
; r2456
