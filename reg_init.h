/*****************************************************************
*  Filename:     reg_init.h
*  Revised:      $Date$
*  Revision:     $Revision$
*
*  Description:  Handles register initialization for 6N1M0C52137N1W
*
*  
*****************************************************************/
#ifndef __HW_REG_INIT_H__
#define __HW_REG_INIT_H__

#define REG_OVR_CTRL        0x00000008
#define REG_TIMERA_INT      0x0000000A
#define REG_TIMERB_INT      0x0000000C
#define REG_TPM_FW_VERSION  0x00000064
#define REG_TPM_CRYPT_BASE  0x4e655672
#define REG_TPM_CRYPT_SEED  0x47306e41
#define REG_TPM_CRYPT_JMP   0x47317633
#define REG_TPM_CRYPT_ROT   0x79303075
#define REG_TPM_CRYPT_SALT  0x55705021
#define REG_ADAS_CONV_JMP   0x00000002
#define REG_ADAS_REGR_INT   0x400000A0

#endif // __HW_REG_INIT_H__
