/**************************************************************************//**
 * @file     dac.c
 * @version  V1.00
 * $Revision: 4 $
 * $Date: 14/09/08 12:31p $
 * @brief    NANO100 series DAC driver source file
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2014 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include "Nano100Series.h"

/** @addtogroup NANO100_Device_Driver NANO100 Device Driver
  @{
*/

/** @addtogroup NANO100_DAC_Driver DAC Driver
  @{
*/

/** @addtogroup NANO100_DAC_EXPORTED_FUNCTIONS DAC Exported Functions
  @{
*/

/**
  * @brief This function make a DAC channel ready to convert.
  * @param[in] dac Base address of DAC module.
  * @param[in] u32Ch DAC channel number, could be 0 or 1
  * @param[in] u32TrgSrc Decides the trigger source of specified DAC channel. Valid options are:
  *                      - \ref DAC_WRITE_DAT_TRIGGER
  *                      - \ref DAC_PDMA_TRIGGER
  *                      - \ref DAC_TIMER0_TRIGGER
  *                      - \ref DAC_TIMER1_TRIGGER
  *                      - \ref DAC_TIMER2_TRIGGER
  *                      - \ref DAC_TIMER3_TRIGGER
  * @return None
  * @note This API also set DAC stable time to 2uc according to current PCLK
  */




/*@}*/ /* end of group NANO100_DAC_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group NANO100_DAC_Driver */

/*@}*/ /* end of group NANO100_Device_Driver */

/*** (C) COPYRIGHT 2014 Nuvoton Technology Corp. ***/
