/******************************************************************************
 * @file     nvm.h
 * @brief    non-valatile memory driver header file for RN821x series SOC
 * @author   Renergy Technology
 * @version  V1.5
 * @date     2020-07-13
 *
 * @note
 * Copyright (C) , Renergy Technology Inc. All rights reserved.
 *
 *  2020-7-13 re-designe eepromProgram for 9103c 9103e
 ******************************************************************************/
#ifndef __NVM_H
#define __NVM_H

#ifdef __cplusplus
extern "C" {
#endif

#define NVM_PASS                      0
#define INVALID_PAGE                  8
#define SRC_ADDR_NOT_ALIGN            10
#define SRC_ADDR_NOT_MAPPED           11
#define DST_ADDR_NOT_ALIGN            12
#define DST_ADDR_NOT_MAPPED           13

uint8_t flashPageErase(uint32_t pg);
uint8_t flashSectorErase(uint32_t sec);

uint8_t flashProgram(uint32_t dst_addr, uint32_t src_addr, uint32_t len);
uint8_t eepromProgram(uint32_t dst_addr, uint32_t src_addr, uint32_t len);

uint8_t eepromPageErase(uint32_t pg);
uint8_t eepromSectorErase(uint32_t sec);	
	
void    eepromStandby(void);
void    eepromWakeup(void);

void    cacheOn(void);
void    cacheOff(void);

#ifdef __cplusplusw
}
#endif

#endif
