

#define EMU_Drive_GLOBALS
#include <RN8213.h>
#include <string.h>
#include <Dat_Types.h>
#include <EMU_Drive.h>

typedef union{
	u8 _Char[4];
	u16 _Int[2];
	u32 _Long;
}uEmuCommBuf;

uEmuCommBuf EmuCommbuf;
// 表格中所列寄存器为配置寄存器，对其进行效验和管理
const sEmuCheckConfigReg_TypeDef EmuConfigReg[] = 
{
	/*效验寄存器指针			寄存器默认值*/
	{(u32 *)&EMU->EMUCON	,	0x0007	},
	{(u32 *)&EMU->EMUCON2	,	0x0000	},
	{(u32 *)&EMU->HFConst	,	0x1000	},
	{(u32 *)&EMU->PStart   	,	0x0060	},
	{(u32 *)&EMU->QStart 	,	0x0120	},
	{(u32 *)&EMU->GPQA		,	0x0000	},
	{(u32 *)&EMU->GPQB		,	0x0000	},
	{(u32 *)&EMU->PhsA		,	0x0000	},
	{(u32 *)&EMU->PhsB		,	0x0000	},
	{(u32 *)&EMU->QPhsCal	,	0x0000	},
	{(u32 *)&EMU->APOSA  	,	0x0000	},
	{(u32 *)&EMU->APOSB  	,	0x0000	}, 
	{(u32 *)&EMU->RPOSA  	,	0x0000	},
	{(u32 *)&EMU->RPOSB  	,	0x0000	},
	{(u32 *)&EMU->IARMSOS	,	0x0000	},
	{(u32 *)&EMU->IBRMSOS	,	0x0000	},
	{(u32 *)&EMU->URMSOS 	,	0x0000	},
	{(u32 *)&EMU->IAGAIN 	,	0x0000	},
	{(u32 *)&EMU->IBGAIN 	,	0x0000	},
	{(u32 *)&EMU->UGAIN  	,	0x0000	},
	{(u32 *)&EMU->IADCOS 	,	0x0000	},
	{(u32 *)&EMU->IBDCOS 	,	0x0000	},
	{(u32 *)&EMU->UDCOS  	,	0x0000	},
	{(u32 *)&EMU->UADD   	,	0x0000	},
	{(u32 *)&EMU->USAG   	,	0x0000	},
	{(u32 *)&EMU->IAPEAK 	,	0x0000	},
	{(u32 *)&EMU->IBPEAK 	,	0x0000	},
	{(u32 *)&EMU->UPEAK  	,	0x0000	},
	{(u32 *)&EMU->D2FP  	,	0x0000	},
};
/*****************************************************************************
** Function name:fnEmu_RstConfigReg
**  
** Description:将设置寄存器配置为初始复位值
**  
** Parameters:NONE
**  
** Returned value:NONE
**  
******************************************************************************/
void fnEmu_RstConfigReg(void)
{
	u16 i;
	EMU->SPCMD = SPCMD_EN;		// 打开EMU写使能
	EMU->SPCMD = SPCMD_EN;
	for(i=0;i<sizeof(EmuConfigReg)/sizeof(sEmuCheckConfigReg_TypeDef);i++)
	{
		// EMU的设置寄存器设置为默认值
		*((u32 *)EmuConfigReg[i].RegAd) = EmuConfigReg[i].DefaultValue;
		*((u32 *)EmuConfigReg[i].RegAd) = EmuConfigReg[i].DefaultValue;		
	}
	EMU->SPCMD = SPCMD_DIS;		// 关闭EMU写使能
	EMU->SPCMD = SPCMD_DIS;	
}        
/*****************************************************************************
** Function name:fnEmuDrive_RegWrite          
**                                   
** Description:EMU 寄存器设置  
**                                   
** Parameters:wReg：寄存器偏移地址
**			  pBuf：设置数据指针
**			  ucLen：设置数据长度                                                  
** Returned value:SUCCESS:设置成功  ERROR:设置失败               
**                                   
******************************************************************************/ 
ErrorStatus fnEmuDrive_RegWrite(u16 wReg,u8 *pBuf,u8 ucLen)
{                                    
	u8 i;
	u32	TempData;
	if( (ucLen == 0) || (ucLen > 4) ) return(ERROR);	
	EmuCommbuf._Long = 0;                              
	memcpy(&EmuCommbuf._Char[0] , &pBuf[0] , ucLen);  
	for(i=0;i<3;i++)
	{
		// 寄存器写入
		*((u32 *)(EMU_BASE + wReg)) = EmuCommbuf._Long;
		*((u32 *)(EMU_BASE + wReg)) = EmuCommbuf._Long;                                 
		TempData = *((u32 *)(EMU_BASE + wReg));
		TempData = *((u32 *)(EMU_BASE + wReg));
		if(wReg == __SPCMD_AD)
		{
			if(EmuCommbuf._Long == SPCMD_EN)
			{
				if(TempData != 0x01) continue;
				else return(SUCCESS);	
			}
			else
			{
				if(TempData != 0x00) continue;
				else return(SUCCESS);				
			}
		}
		else
		{
			if(TempData != EmuCommbuf._Long) continue;
			else return(SUCCESS);
		}
	}
	return(ERROR);
}
/*****************************************************************************
** Function name:fnEmuDrive_RegRead          
**                                   
** Description:EMU 寄存器读取
**                                   
** Parameters:wReg：寄存器偏移地址
**			  pBuf：读取数据存放指针
**			  ucLen：读取数据长度                                                  
** Returned value:SUCCESS:读取成功  ERROR:读取失败               
**                                   
******************************************************************************/                                    
ErrorStatus fnEmuDrive_RegRead(u16 wReg,u8 *pBuf,u8 ucLen)
{       
	u8 i;
	u32 TempData;                    
	EmuCommbuf._Long = 0;
	if(ucLen == 0) return(ERROR);
	for(i=0;i<3;i++)
	{
		TempData = *((u32 *)(EMU_BASE + wReg));	
		TempData = *((u32 *)(EMU_BASE + wReg));	
		EmuCommbuf._Long = *((u32 *)(EMU_BASE + wReg));	
		if(TempData != EmuCommbuf._Long) continue;
		else {memcpy(&pBuf[0] , &EmuCommbuf._Char[0] , ucLen);return(SUCCESS);}                      
	}
	return(ERROR);
}


