/*****************************************************************************************/
/* Author   : Mohamed Sedeek                                                             */
/* Date     : 27 Oct 2022                                                                */
/* Version  : 01                                                                         */
/*****************************************************************************************/

#ifndef _RCC_CONFIG_H_
#define _RCC_CONFIG_H_

/* Options: RCC_HSI, RCC_HSE_RC, RCC_HSE_CRYSTAL, RCC_PLL_HSI_DIV_2, RCC_PLL_HSE_DIV_2, RCC_PLL_HSE */
#define CLOCK_SOURCE RCC_HSI

 /* HSI Configurations */
 /* Options: 00000 to 11111, each step= 40 Khz, default=10000 , decreasing steps decreases the frequency and vice versa*/
#define HSI_TRIM 10000 //Each step = 40 Khz

/* PLL Configurations*/
/* Options: PLL_MULL_2 to PLL_MUL_16*/
#define PLLMUL PLL_MUL_2

#endif