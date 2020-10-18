/*
 * main.c
 *
 *  Created on: Oct 15, 2020
 *      Author: Ahmed Salah
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "UARTBootloader_interface.h"



int main (void)
{
	/*	Initialize the internal RC oscillator (HSI) as the System Clock */
	MRCC_voidInitSysClock ();
	MRCC_voidEnableClock  (RCC_APB2,RCC_APB2_IOPAEN);
	MRCC_voidEnableClock  (RCC_APB2,RCC_APB2_USART1EN);
	MRCC_voidEnableClock  (RCC_AHB ,RCC_AHB_FLITFEN);

	/*	Start the Bootloader */
	AUBL_voidStartUARTBootloader ();	
}
