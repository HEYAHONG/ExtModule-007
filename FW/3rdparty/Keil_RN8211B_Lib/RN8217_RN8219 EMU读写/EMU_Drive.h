
#ifndef __EMU_Drive_H
#define __EMU_Drive_H

#ifdef   EMU_Drive_GLOBALS
	#define  EMU_Drive_EXT
#else
	#define  EMU_Drive_EXT	extern 
#endif

#define SPCMD_EN				0xE5					// EMU 使能打开值
#define SPCMD_DIS				0xDC 					// emu 使能关闭值

typedef struct
{
	u32		*RegAd;	
	u32		DefaultValue;	
}sEmuCheckConfigReg_TypeDef;

#define	EMU_ClearIF(x)	(EMU->IF = x , EMU->IF = x)

#define __SPCMD_AD		((u32 )&EMU->SPCMD		& 0xfff)
#define __EMUCON    	((u32 )&EMU->EMUCON    	& 0xfff)
#define	__EMUCON2   	((u32 )&EMU->EMUCON2   	& 0xfff)
#define	__HFConst   	((u32 )&EMU->HFConst   	& 0xfff)
#define	__PStart    	((u32 )&EMU->PStart    	& 0xfff)
#define	__QStart    	((u32 )&EMU->QStart    	& 0xfff)
#define	__GPQA      	((u32 )&EMU->GPQA      	& 0xfff)
#define	__GPQB      	((u32 )&EMU->GPQB      	& 0xfff)
#define	__PhsA      	((u32 )&EMU->PhsA      	& 0xfff)
#define	__PhsB      	((u32 )&EMU->PhsB      	& 0xfff)
#define	__QPhsCal   	((u32 )&EMU->QPhsCal   	& 0xfff)
#define	__APOSA     	((u32 )&EMU->APOSA     	& 0xfff)						
#define	__APOSB     	((u32 )&EMU->APOSB     	& 0xfff)						
#define	__RPOSA     	((u32 )&EMU->RPOSA     	& 0xfff)						
#define	__RPOSB     	((u32 )&EMU->RPOSB     	& 0xfff)						
#define	__IARMSOS   	((u32 )&EMU->IARMSOS   	& 0xfff)												
#define	__IBRMSOS   	((u32 )&EMU->IBRMSOS   	& 0xfff)												
#define	__URMSOS    	((u32 )&EMU->URMSOS    	& 0xfff)												
#define	__IAGAIN    	((u32 )&EMU->IAGAIN    	& 0xfff)												
#define	__IBGAIN    	((u32 )&EMU->IBGAIN    	& 0xfff)												
#define	__UGAIN     	((u32 )&EMU->UGAIN     	& 0xfff)												
#define	__IADCOS    	((u32 )&EMU->IADCOS    	& 0xfff)												
#define	__IBDCOS    	((u32 )&EMU->IBDCOS    	& 0xfff)												
#define	__UDCOS     	((u32 )&EMU->UDCOS     	& 0xfff)												
#define	__UADD      	((u32 )&EMU->UADD      	& 0xfff)												
#define	__USAG      	((u32 )&EMU->USAG      	& 0xfff)												
#define	__IAPEAK    	((u32 )&EMU->IAPEAK    	& 0xfff)												
#define	__IBPEAK    	((u32 )&EMU->IBPEAK    	& 0xfff)												
#define	__UPEAK     	((u32 )&EMU->UPEAK     	& 0xfff)												
#define	__D2FP      	((u32 )&EMU->D2FP      	& 0xfff)	
										
#define	__PF2Cnt		((u32 )&EMU->PF2Cnt		& 0xfff)												
#define __QF2Cnt		((u32 )&EMU->QF2Cnt		& 0xfff)												
#define __SF2Cnt		((u32 )&EMU->SF2Cnt		& 0xfff)											
#define	__PFCnt     	((u32 )&EMU->PFCnt		& 0xfff) 												        
#define	__QFCnt         ((u32 )&EMU->QFCnt		& 0xfff) 												  
#define	__SFCnt         ((u32 )&EMU->SFCnt		& 0xfff) 												  
#define	__IARMS         ((u32 )&EMU->IARMS		& 0xfff) 												  
#define	__IBRMS         ((u32 )&EMU->IBRMS		& 0xfff) 												  
#define	__URMS      	((u32 )&EMU->URMS		& 0xfff) 												  
#define	__Ufreq     	((u32 )&EMU->Ufreq		& 0xfff) 												  
#define	__PowerPA   	((u32 )&EMU->PowerPA	& 0xfff) 												  
#define	__PowerPB       ((u32 )&EMU->PowerPB	& 0xfff) 												  
#define	__PowerQA       ((u32 )&EMU->PowerQA	& 0xfff) 												  
#define	__PowerQB   	((u32 )&EMU->PowerQB	& 0xfff) 												 
#define	__PowerSA   	((u32 )&EMU->PowerSA	& 0xfff) 												 
#define	__PowerSB       ((u32 )&EMU->PowerSB	& 0xfff) 												 
#define	__EnergyP   	((u32 )&EMU->EnergyP	& 0xfff) 												 
#define	__EnergyP2    	((u32 )&EMU->EnergyP2	& 0xfff) 												 
#define	__EnergyQ       ((u32 )&EMU->EnergyQ	& 0xfff) 
#define	__EnergyQ2  	((u32 )&EMU->EnergyQ2	& 0xfff)
#define	__EnergyS   	((u32 )&EMU->EnergyS	& 0xfff)
#define	__PFA       	((u32 )&EMU->PFA		& 0xfff)
#define	__PFB       	((u32 )&EMU->PFB		& 0xfff)
#define	__ANGLEA    	((u32 )&EMU->ANGLEA		& 0xfff)
#define	__ANGLEB    	((u32 )&EMU->ANGLEB		& 0xfff)
#define	__EMUStatus 	((u32 )&EMU->EMUStatus	& 0xfff)
#define	__SPL_IA     	((u32 )&EMU->SPL_IA		& 0xfff)
#define	__SPL_IB    	((u32 )&EMU->SPL_IB		& 0xfff)
#define	__SPL_U     	((u32 )&EMU->SPL_U		& 0xfff)
#define	__PowerPA2  	((u32 )&EMU->PowerPA2	& 0xfff)
#define	__PowerPB2  	((u32 )&EMU->PowerPB2	& 0xfff)
#define	__EnergyS2  	((u32 )&EMU->EnergyS2	& 0xfff)
#define	__SPL_PA    	((u32 )&EMU->SPL_PA		& 0xfff)
#define	__SPL_PB    	((u32 )&EMU->SPL_PB		& 0xfff)
#define	__SPL_QA    	((u32 )&EMU->SPL_QA		& 0xfff)
#define	__SPL_QB    	((u32 )&EMU->SPL_QB		& 0xfff)
#define	__TRNG      	((u32 )&EMU->TRNG		& 0xfff)
#define	__EMUStatus2	((u32 )&EMU->EMUStatus2	& 0xfff)
#define	__IE        	((u32 )&EMU->IE			& 0xfff)
#define	__IF        	((u32 )&EMU->IF			& 0xfff)
#define	__DMAEN     	((u32 )&EMU->DMAEN		& 0xfff)
#define	__Rdata     	((u32 )&EMU->Rdata		& 0xfff)
#define	__Wdata     	((u32 )&EMU->Wdata		& 0xfff)

EMU_Drive_EXT void fnEmu_RstConfigReg(void);
EMU_Drive_EXT ErrorStatus fnEmuDrive_RegWrite(u16 wReg,u8 *pBuf,u8 ucLen);
EMU_Drive_EXT ErrorStatus fnEmuDrive_RegRead(u16 wReg,u8 *pBuf,u8 ucLen);

#endif // __RN2026_H














