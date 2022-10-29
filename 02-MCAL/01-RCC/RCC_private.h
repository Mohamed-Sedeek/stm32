/*****************************************************************************************/
/* Author   : Mohamed Sedeek                                                             */
/* Date     : 27 Oct 2022                                                                */
/* Version  : 01                                                                         */
/*****************************************************************************************/

#ifndef _RCC_PRIVATE_H_
#define _RCC_PRIVATE_H_

/* Registers Definitions*/
#define RCC_CR       *((volatile u32*) 0x4002 1000)
#define RCC_CFGR     *((volatile u32*) 0x4002 1004)
#define RCC_CIR      *((volatile u32*) 0x4002 1008)
#define RCC_APB2RSTR *((volatile u32*) 0x4002 100c)
#define RCC_APB1RSTR *((volatile u32*) 0x4002 1010)
#define RCC_AHBENR   *((volatile u32*) 0x4002 1014)
#define RCC_APB2ENR  *((volatile u32*) 0x4002 1018)
#define RCC_APB1ENR  *((volatile u32*) 0x4002 101c)
#define RCC_BDCR     *((volatile u32*) 0x4002 1020)
#define RCC_CSR      *((volatile u32*) 0x4002 1024)

#define RCC_AHB 0
#define RCC_APB1 1
#define RCC_APB2 2

#define RCC_HSI 0
#define RCC_HSE_RC 1
#define RCC_HSE_CRYSTAL 2
#define RCC_PLL_HSI_DIV_2 3
#define RCC_PLL_HSE_DIV_2 4
#define RCC_PLL_HSE 5

#define PLL_MULL_2 0
#define PLL_MULL_3 1
#define PLL_MULL_4 2
#define PLL_MULL_5 3
#define PLL_MULL_6 4
#define PLL_MULL_7 5
#define PLL_MULL_8 6
#define PLL_MULL_9 7
#define PLL_MULL_10 8
#define PLL_MULL_11 9
#define PLL_MULL_12 10
#define PLL_MULL_13 11
#define PLL_MULL_14 12
#define PLL_MULL_15 13
#define PLL_MULL_16 14

#define PCLK2_DIV_2 0
#define PCLK2_DIV_4 1
#define PCLK2_DIV_6 2
#define PCLK2_DIV_8 3

#define HCLK_DIV_1 0
#define HCLK_DIV_2 1
#define HCLK_DIV_4 2
#define HCLK_DIV_8 3
#define HCLK_DIV_16 4

#define SYSCLK_DIV_1 0
#define SYSCLK_DIV_2  1
#define SYSCLK_DIV_4 2
#define SYSCLK_DIV_8 3
#define SYSCLK_DIV_16 4
#define SYSCLK_DIV_64 5
#define SYSCLK_DIV_128 6
#define SYSCLK_DIV_256 7
#define SYSCLK_DIV_512 8

/*typedef enum{
	PLLMUL_2, 
	PLLMUL_3,
	PLLMUL_4,
	PLLMUL_5,
	PLLMUL_6,
	PLLMUL_7,
	PLLMUL_8,
	PLLMUL_9,
	PLLMUL_10,
	PLLMUL_11,
	PLLMUL_12,
	PLLMUL_13,
	PLLMUL_14,
	PLLMUL_15,
	PLLMUL_16
} PLL_MULL*/


#endif