/**************************************************************************//**
 * @file     nano1xx_isr.c
 * @version  V0.10
 * $Revision: 1 $
 * $Date: 14/01/21 11:49a $
 * @brief    Nano100 series ISR source file
 *
 * @note
 * Copyright (C) 2013 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include <stdio.h>
#include <string.h>

#include "config.h"
#include "Nano100Series.h"

static uint32_t PcmBuff[32] = {0};
extern uint32_t volatile u32BuffPos;

void I2S_IRQHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Len, i;
    uint32_t *pBuffTx, *pBuffRx;

    // enable sound output
    PA4 = 0;

    u32Reg = I2S_GET_INT_FLAG(I2S, I2S_STATUS_I2STXINT_Msk | I2S_STATUS_I2SRXINT_Msk);

    if (u32Reg & I2S_STATUS_I2STXINT_Msk)
    {
        pBuffTx = &PcmBuff[0];

        /* Read Tx FIFO free size */
        u32Len = 8 - I2S_GET_TX_FIFO_LEVEL(I2S);

        if (u32BuffPos >= 8)
        {
            for (i = 0; i < u32Len; i++)
            {
                I2S_WRITE_TX_FIFO(I2S, pBuffTx[i]);
            }

            for (i = 0; i < BUFF_LEN - u32Len; i++)
            {
                pBuffTx[i] = pBuffTx[i + u32Len];
            }

            u32BuffPos -= u32Len;
        }
        else
        {
            for (i = 0; i < u32Len; i++)
            {
                I2S_WRITE_TX_FIFO(I2S, 0x00);
            }
        }
    }

    if (u32Reg & I2S_STATUS_I2SRXINT_Msk)
    {
        if (u32BuffPos < (BUFF_LEN-8))
        {
            pBuffRx = &PcmBuff[u32BuffPos];

            /* Read Rx FIFO Level */
            u32Len = I2S_GET_RX_FIFO_LEVEL(I2S);

            for ( i = 0; i < u32Len; i++ )
            {
                pBuffRx[i] = I2S_READ_RX_FIFO(I2S);
            }

            u32BuffPos += u32Len;

            if (u32BuffPos >= BUFF_LEN)
            {
                u32BuffPos =    0;
            }
        }
    }
}

/*** (C) COPYRIGHT 2013 Nuvoton Technology Corp. ***/
