/*****************************************************************************************/
/* Author   : Mohamed Sedeek                                                             */
/* Date     : 27 Oct 2022                                                                */
/* Version  : 01                                                                         */
/*****************************************************************************************/

#ifndef _RCC_PROGRAM_H_
#define _RCC_PROGRAM_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


void RCC_voidEnableClock(u8 copy_u8BusID, u8 copy_u8PeripheralID){
	if(copy_u8PeripheralID <= 31) {
		switch(copy_u8BusID) {
			case RCC_AHB :  SET_BIT(RCC_AHBENR,copy_u8PeripheralID);   break;
			case RCC_APB1: SET_BIT(RCC_APB1ENR,copy_u8PeripheralID); break;
 			case RCC_APB2: SET_BIT(RCC_APB2ENR,copy_u8PeripheralID); break;
			default: /* Return Error */ break;
		}
	}
	else {
		/* Return Error */
	}
}

void RCC_voidDisableClock(u8 copy_u8BusID, u8 copy_u8PeripheralID){
	if(copy_u8PeripheralID <= 31) {
		switch(copy_u8BusID) {
			case RCC_AHB :  CLR_BIT(RCC_AHBENR,copy_u8PeripheralID);  break;
			case RCC_APB1: CLR_BIT(RCC_APB1ENR,copy_u8PeripheralID); break;
 			case RCC_APB2: CLR_BIT(RCC_APB2ENR,copy_u8PeripheralID); break;
			default: /* Return Error */ break;
		}
	}
	else {
		/* Return Error */
	}

void RCC_voidInitSysClock(void){
	#if (CLOCK_SOURCE == RCC_HSI)
		RCC_CR = (HSI_TRIM << 7);
		SET_BIT(RCC_CR,0);
		RCC_CFGR= 0x00000000;
	#elif (CLOCK_SOURCE == RCC_HSE_RC)
		RCC_CR= 0x00050000;
		RCC_CFGR= 0x00000001;
		
	#elif (CLOCK_SOURCE == RCC_HSE_CRYSTAL)
		RCC_CR= 0x00010000;
		RCC_CFGR= 0x00000001;
		
	#elif (CLOCK_SOURCE == RCC_PLL_HSI/2)
		#if PLLMUL == PLL_MUL_2
			RCC_CFGR= 0x00000002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_3
			RCC_CFGR= 0x00040002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_4
			RCC_CFGR= 0x00080002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_5
			RCC_CFGR= 0x000c0002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_6
			RCC_CFGR= 0x00100002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_7
			RCC_CFGR= 0x00140002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_8
			RCC_CFGR= 0x00180002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_9
			RCC_CFGR= 0x001c0002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_10	
			RCC_CFGR= 0x00200002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_11
			RCC_CFGR= 0x00240002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_12
			RCC_CFGR= 0x00280002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_13
			RCC_CFGR= 0x002c0002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_14
			RCC_CFGR= 0x00300002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_15
			RCC_CFGR= 0x00340002;
			RCC_CR=0x010000000;
		#elif PLLMUL == PLL_MUL_16
			RCC_CFGR= 0x00380002;
			RCC_CR=0x010000000;
		#endif
		
	#elif (CLOCK_SOURCE == RCC_PLL_HSE/2)
		#if PLLMUL == PLL_MUL_2
			RCC_CFGR= 0x00030002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_3
			RCC_CFGR= 0x00070002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_4
			RCC_CFGR= 0x000b0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_5
			RCC_CFGR= 0x000f0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_6
			RCC_CFGR= 0x00130002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_7
			RCC_CFGR= 0x00170002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_8
			RCC_CFGR= 0x001b0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_9
			RCC_CFGR= 0x001f0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_10	
			RCC_CFGR= 0x00230002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_11
			RCC_CFGR= 0x00270002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_12
			RCC_CFGR= 0x002b0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_13
			RCC_CFGR= 0x002f0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_14
			RCC_CFGR= 0x00330002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_15
			RCC_CFGR= 0x00370002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_16
			RCC_CFGR= 0x003b0002;
			RCC_CR=0x010010000;
		#endif
		
	#elif (CLOCK_SOURCE == RCC_PLL_HSE)
		#if PLLMUL == PLL_MUL_2
			RCC_CFGR= 0x00010002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_3
			RCC_CFGR= 0x00050002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_4
			RCC_CFGR= 0x00090002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_5
			RCC_CFGR= 0x000d0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_6
			RCC_CFGR= 0x00110002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_7
			RCC_CFGR= 0x00150002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_8
			RCC_CFGR= 0x00190002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_9
			RCC_CFGR= 0x001d0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_10	
			RCC_CFGR= 0x00210002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_11
			RCC_CFGR= 0x00250002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_12
			RCC_CFGR= 0x00290002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_13
			RCC_CFGR= 0x002d0002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_14
			RCC_CFGR= 0x00310002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_15
			RCC_CFGR= 0x00350002;
			RCC_CR=0x010010000;
		#elif PLLMUL == PLL_MUL_16
			RCC_CFGR= 0x00390002;
			RCC_CR=0x010010000;
		#endif
		
	#else #error("You chose wrong type")
				
	#endif
	
}

void RCC_voidSetAHBClock(u8 copy_u8Prescaler){
	switch(copy_u8Prescaler) {
		case SYSCLK_DIV_1:
			CLR_BIT(RCC_CFGR,7);
			break;
		case SYSCLK_DIV_2:
			CLR_BIT(RCC_CFGR,4);
			CLR_BIT(RCC_CFGR,5);
			CLR_BIT(RCC_CFGR,6);
			SET_BIT(RCC_CFGR,7);
			break;
		case SYSCLK_DIV_4:
			SET_BIT(RCC_CFGR,4);
			CLR_BIT(RCC_CFGR,5);
			CLR_BIT(RCC_CFGR,6);
			SET_BIT(RCC_CFGR,7);
			break;	
		case SYSCLK_DIV_8:
			CLR_BIT(RCC_CFGR,4);
			SET_BIT(RCC_CFGR,5);
			CLR_BIT(RCC_CFGR,6);
			SET_BIT(RCC_CFGR,7);
			break;	
		case SYSCLK_DIV_16:
			SET_BIT(RCC_CFGR,4);
			SET_BIT(RCC_CFGR,5);
			CLR_BIT(RCC_CFGR,6);
			SET_BIT(RCC_CFGR,7);
			break;	
		case SYSCLK_DIV_64:
			CLR_BIT(RCC_CFGR,4);
			CLR_BIT(RCC_CFGR,5);
			SET_BIT(RCC_CFGR,6);
			SET_BIT(RCC_CFGR,7);
			break;	
		case SYSCLK_DIV_128:
			SET_BIT(RCC_CFGR,4);
			CLR_BIT(RCC_CFGR,5);
			SET_BIT(RCC_CFGR,6);
			SET_BIT(RCC_CFGR,7);
			break;	
		case SYSCLK_DIV_256:
			CLR_BIT(RCC_CFGR,4);
			SET_BIT(RCC_CFGR,5);
			SET_BIT(RCC_CFGR,6);
			SET_BIT(RCC_CFGR,7);
			break;
		case SYSCLK_DIV_512:
			SET_BIT(RCC_CFGR,4);
			SET_BIT(RCC_CFGR,5);
			SET_BIT(RCC_CFGR,6);
			SET_BIT(RCC_CFGR,7);
			break;				
	}
}

void RCC_voidSetAPB2Clock(u8 copy_u8Prescaler){
	switch(copy_u8Prescaler) {
		case HCLK_DIV_1:
			CLR_BIT(RCC_CFGR,13);
			break;
		case HCLK_DIV_2:
			CLR_BIT(RCC_CFGR,11);
			CLR_BIT(RCC_CFGR,12);
			SET_BIT(RCC_CFGR,13);
			break;
		case HCLK_DIV_4:
			SET_BIT(RCC_CFGR,11);
			CLR_BIT(RCC_CFGR,12);
			SET_BIT(RCC_CFGR,13);
			break;
		case HCLK_DIV_8:
			CLR_BIT(RCC_CFGR,11);
			SET_BIT(RCC_CFGR,12);
			SET_BIT(RCC_CFGR,13);
			break;	
		case HCLK_DIV_16:
			SET_BIT(RCC_CFGR,11);
			SET_BIT(RCC_CFGR,12);
			SET_BIT(RCC_CFGR,13);
			break;
	}
}

void RCC_voidSetAPB1Clock(u8 copy_u8Prescaler){
	switch(copy_u8Prescaler) {
		case HCLK_DIV_1:
			CLR_BIT(RCC_CFGR,10);
			break;
		case HCLK_DIV_2:
			CLR_BIT(RCC_CFGR,8);
			CLR_BIT(RCC_CFGR,9);
			SET_BIT(RCC_CFGR,10);
			break;
		case HCLK_DIV_4:
			SET_BIT(RCC_CFGR,8);
			CLR_BIT(RCC_CFGR,9);
			SET_BIT(RCC_CFGR,10);
			break;
		case HCLK_DIV_8:
			CLR_BIT(RCC_CFGR,8);
			SET_BIT(RCC_CFGR,9);
			SET_BIT(RCC_CFGR,10);
			break;	
		case HCLK_DIV_16:
			SET_BIT(RCC_CFGR,8);
			SET_BIT(RCC_CFGR,9);
			SET_BIT(RCC_CFGR,10);
			break;
	}
}

void RCC_voidSetADCClock(u8 copy_u8Prescaler){
	switch(copy_u8Prescaler) {
		case PCLK2_DIV_2:
			CLR_BIT(RCC_CFGR,14);
			CLR_BIT(RCC_CFGR,15);
			break;
		case PCLK2_DIV_4:
			CLR_BIT(RCC_CFGR,14);
			SET_BIT(RCC_CFGR,15);
			break;
		case PCLK2_DIV_6:
			SET_BIT(RCC_CFGR,14);
			CLR_BIT(RCC_CFGR,15);
			break;
		case PCLK2_DIV_8:
			SET_BIT(RCC_CFGR,14);
			SET_BIT(RCC_CFGR,15);
			break;			
	}
}

#endif