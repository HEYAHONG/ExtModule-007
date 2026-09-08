#include "main.h"
#include "drv_uart0.h"

hdlt645_slave_io_t uart0_dlt645_io;

static hdefaults_tick_t rx_tick=0;

static size_t dlt645_slave_io_cb_timeout(struct hdlt645_slave_io *io)
{
    (void)io;
    if(hdefaults_tick_get()-rx_tick > 500)
    {
        return 1;
    }
    return 0;
}
static size_t dlt645_slave_io_cb_reply(struct hdlt645_slave_io *io,uint8_t *frame,size_t frame_len)
{
    (void)io;
    if(frame!=NULL && frame_len > 0)
    {
        for(size_t i=0; i<frame_len; i++)
        {
            LL_UART_Write(UART0,frame[i]);
            while(0==GET_BIT_UART_STA(UART0,((1UL)<<1)));
            SET_BIT_UART_STA(UART0,((1UL)<<1));
        }
    }
    return frame_len;
}


void uart0_init(void)
{
    hdlt645_slave_io_init(&uart0_dlt645_io,dlt645_slave_io_cb_timeout,dlt645_slave_io_cb_reply,NULL);

    LL_SYSC_ApbClkCtrl(LL_SYSC_GPIO_ID,ERN_ENABLE);
    LL_GPIO_CfgInit(PIN_2_0,_UART0,High_Level,Pull_ON,GPIO_MODE_IN,TTL_MODE,PushPll_MODE);
    LL_GPIO_CfgInit(PIN_2_1,_UART0,High_Level,Pull_ON,GPIO_MODE_OUT,TTL_MODE,PushPll_MODE);

    LL_SYSC_ApbClkCtrl(LL_SYSC_UART0_ID,ERN_ENABLE);
    sLL_UART_InitTypeDef init;
    memset(&init,0,sizeof(init));
    init.BaudRate=UART_BPS_19200;
    init.Ctrl.bitUartCtrl.EN=UARTCTL_EN;
    init.Ctrl.bitUartCtrl.TXIE= UARTCTL_TXIE_DIS;
    init.Ctrl.bitUartCtrl.RXIE= UARTCTL_RXIE_EN;
    init.Ctrl.bitUartCtrl.ERRIE= UARTCTL_ERRIE_DIS;
    init.Ctrl.bitUartCtrl.STOPS= UARTCTL_1STOP_SBIT;
    init.Ctrl.bitUartCtrl.DATLEN= UARTCTL_8BIT_DAT;
    init.Ctrl.bitUartCtrl.PARS= UARTCTL_NO_PARITY;
    init.Ctrl.bitUartCtrl.IRE =  UARTCTL_IRE_DIS;
    init.Ctrl.bitUartCtrl.ILBE =  UARTCTL_ILBE_DIS;
    init.Ctrl.bitUartCtrl.IRSEL = UARTCTL_IRSEL_H;
    init.Ctrl.bitUartCtrl.LMSB = UARTCTL_LSB;
    init.Ctrl.bitUartCtrl.NEG = UARTCTL_NEG_H;
    LL_UART_Init(UART0,&init);

    LL_UART_SttConfig(UART0,USART_IT_RX,ERN_ENABLE);
    NVIC_EnableIRQ(UART0_IRQn);


}

extern "C" void UART0_HANDLER(void);
void UART0_HANDLER(void)
{
    uint32_t sta=UART0->STA;
    /*
     * 忽略TX标志
     */
    sta &= (~((1UL)<<1));
    UART0->STA=sta;
    if((sta&((1UL) << 0))!=0)
    {
        uint8_t dat=LL_UART_Read(UART0);
        hdlt645_slave_io_rx_input(&uart0_dlt645_io,&dat,sizeof(dat));
        rx_tick=hdefaults_tick_get();
    }
}

