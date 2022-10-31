/**************************************************************************************************************/
/* Author: Mohamed Sedeek                                                                                     */
/* Date: 31 Oct 2022                                                                                          */
/* Version: 01                                                                                                */
/**************************************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_interface.h"
#include "GPIO_private"

void GPIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin <= 7, {
 u8 copy_u8Mode){
	switch(copy_u8Port_u8) {
		case GPIOA: 
			if (copy_u8Pin <= 7) {
				GPIOA_CRL &= ~(1111) << (copy_u8Pin*4);
				GPIOA_CRL |= copy_u8Mode << (copy_u8Pin*4);
			}
			else if (copy_u8Pin <= 15) {
				GPIOA_CRH &= ~(1111) << (copy_u8Pin*4);
				GPIOA_CRH |= copy_u8Mode << (copy_u8Pin*4);
			}
			break;	
		case GPIOB:
			if (copy_u8Pin <= 7) {
				GPIOB_CRL &= ~(1111) << (copy_u8Pin*4);
				GPIOB_CRL |= copy_u8Mode << (copy_u8Pin*4);
			}
			else if (copy_u8Pin <= 15) {
				GPIOB_CRH &= ~(1111) << (copy_u8Pin*4);
				GPIOB_CRH |= copy_u8Mode << (copy_u8Pin*4);
			}
			break;
		case GPIOC:
			if (copy_u8Pin <= 7) {
				GPIOC_CRL &= ~(1111) << (copy_u8Pin*4);
				GPIOC_CRL |= copy_u8Mode << (copy_u8Pin)*4;
			}
			else if (copy_u8Pin <= 15) {
				copy_u8Pin -= 8;
				GPIOC_CRH &= ~(1111) << (copy_u8Pin*4);
				GPIOC_CRH |= copy_u8Mode << (copy_u8Pin*4);
			}
			break;
	}
}

void GPIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Value){
	switch(copy_u8Port) {
		case GPIOA:
			if (copy_u8Value == HIGH) {
				SET_BIT(GPIOA_ODR,copy_u8Pin);
			}
			else if (copy_u8Value == LOW) {
				CLR_BIT(GPIOA_ODR,copy_u8Pin);
			}
			break;
		case GPIOB:
			if (copy_u8Value == HIGH) {
				SET_BIT(GPIOB_ODR,copy_u8Pin);
			}
			else if (copy_u8Value == LOW) {
				CLR_BIT(GPIOB_ODR,copy_u8Pin);
			}
			break;
		case GPIOC:
			if (copy_u8Value == HIGH) {
				SET_BIT(GPIOC_ODR,copy_u8Pin);
			}
			else if (copy_u8Value == LOW) {
				CLR_BIT(GPIOC_ODR,copy_u8Pin);
			}
			break;
	}
}

void GPIO_voidSetPortDirection(u8 copy_u8Port, u8 copy_u8Mode){
	switch(copy_u8Port) {
		case GPIOA:
			GPIOA_CRL= copy_u8Mode;
			GPIOA_CRH= copy_u8Mode;
			break;
		case GPIOB:
			GPIOB_CRL= copy_u8Mode;
			GPIOB_CRH= copy_u8Mode;
			break;
		case GPIOC:
			GPIOC_CRL= copy_u8Mode;
			GPIOC_CRH= copy_u8Mode;
			break;
	}
}

void GPIO_voidSetPortValue(u8 copy_u8Port, u8 copy_u8Value){
	switch(copy_u8Port) {
		case GPIOA:
			GPIOA_ODR= copy_u8Value;
			break;
		case GPIOB:
			GPIOB_ODR= copy_u8Value;
			break;
		case GPIOC:
			GPIOC_ODR= copy_u8Value;
			break;
	}
}

u8 GPIO_voidGetPinValue(u8 copy_u8Port, u8 copy_u8Pin){
	u8 local_u8PinValue=0;
	switch(copy_u8Port) {
		case GPIOA:
			local_u8PinValue = GET_BIT(GPIOA_IDR,copy_u8Pin);
			break;
		case GPIOB:
			local_u8PinValue = GET_BIT(GPIOB_IDR,copy_u8Pin);
			break;
		case GPIOC:
			local_u8PinValue = GET_BIT(GPIOC_IDR,copy_u8Pin);
			break;	
	}
	return local_u8PinValue;
}