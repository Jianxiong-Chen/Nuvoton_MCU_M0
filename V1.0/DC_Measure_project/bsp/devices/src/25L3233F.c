/**************************************************************************//**
 * @file     crc.c
 * @version  V1.00
 * $Revision: 3 $
 * $Date: 14/09/29 3:50p $
 * @brief    Nano100 series CRC driver source file
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2014 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include "Nano100Series.h"



/** @addtogroup NANO100_Device_Driver NANO100 Device Driver
  @{
*/

/** @addtogroup NANO100_CRC_Driver CRC Driver
  @{
*/


/** @addtogroup NANO100_CRC_EXPORTED_FUNCTIONS CRC Exported Functions
  @{
*/

/**
 * @brief       CRC Open
 *
 * @param[in]   u32Mode      CRC Polynomial Mode \ref CRC_CCITT, \ref CRC_8, \ref CRC_16, \ref CRC_32
 * @param[in]   u32Attribute Parameter attribute \ref CRC_CHECKSUM_COM, \ref CRC_CHECKSUM_RVS, \ref CRC_WDATA_COM, \ref CRC_WDATA_RVS
 * @param[in]   u32Seed      Seed value
 * @param[in]   u32DataLen   CPU Write Data Length \ref CRC_CPU_WDATA_8, \ref CRC_CPU_WDATA_16, \ref CRC_CPU_WDATA_32
 *
 * @return      None
 *
 * @details     This function enable the CRC channel.
 */


/*@}*/ /* end of group NANO100_CRC_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group NANO100_CRC_Driver */

/*@}*/ /* end of group NANO100_Device_Driver */

/*** (C) COPYRIGHT 2013 Nuvoton Technology Corp. ***/
