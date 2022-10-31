/**************************************************************************************************************/
/* Author: Mohamed Sedeek                                                                                     */
/* Date: 31 Oct 2022                                                                                          */
/* Version: 01                                                                                                */
/**************************************************************************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#define INPUT_ANALOG					0b0000
#define INPUT_FLOATING					0b0100
#define INPUT_PULL						0b1000

#define OUTPUT_10M_GENERAL_PUSH_PULL	0b0001
#define OUTPUT_10M_GENERAL_OPEN_DRAIN	0b0101
#define OUTPUT_10M_ALTERNATE_PUSH_PULL	0b1001
#define OUTPUT_10M_ALTERNATE_OPEN_DRAIN	0b1101

#define OUTPUT_2M_GENERAL_PUSH_PULL		0b0010
#define OUTPUT_2M_GENERAL_OPEN_DRAIN	0b0110
#define OUTPUT_2M_ALTERNATE_PUSH_PULL	0b1010
#define OUTPUT_2M_ALTERNATE_OPEN_DRAIN	0b1110

#define OUTPUT_50M_GENERAL_PUSH_PULL	0b0011
#define OUTPUT_50M_GENERAL_OPEN_DRAIN	0b0111
#define OUTPUT_50M_ALTERNATE_PUSH_PULL	0b1011
#define OUTPUT_50M_ALTERNATE_OPEN_DRAIN	0b1111	


#define ALL_PINS_INPUT_ANALOG						0x00000000
#define ALL_PINS_INPUT_FLOATING						0x44444444
#define ALL_PINS_INPUT_PULL							0x88888888
			
#define ALL_PINS_OUTPUT_10M_GENERAL_PUSH_PULL		0x11111111
#define ALL_PINS_OUTPUT_10M_GENERAL_OPEN_DRAIN		0x55555555
#define ALL_PINS_OUTPUT_10M_ALTERNATE_PUSH_PULL		0x99999999
#define ALL_PINS_OUTPUT_10M_ALTERNATE_OPEN_DRAIN	0xDDDDDDDD
		
#define ALL_PINS_OUTPUT_2M_GENERAL_PUSH_PULL		0x22222222
#define ALL_PINS_OUTPUT_2M_GENERAL_OPEN_DRAIN		0x66666666
#define ALL_PINS_OUTPUT_2M_ALTERNATE_PUSH_PULL		0xAAAAAAAA
#define ALL_PINS_OUTPUT_2M_ALTERNATE_OPEN_DRAIN		0xEEEEEEEE
			
#define ALL_PINS_OUTPUT_50M_GENERAL_PUSH_PULL		0x33333333
#define ALL_PINS_OUTPUT_50M_GENERAL_OPEN_DRAIN		0x77777777
#define ALL_PINS_OUTPUT_50M_ALTERNATE_PUSH_PULL		0xBBBBBBBB
#define ALL_PINS_OUTPUT_50M_ALTERNATE_OPEN_DRAIN	0xFFFFFFFF	

#define GPIOA 0
#define GPIOB 1
#define GPIOC 2

#define PIN0  0
#define PIN1  1
#define PIN2  2
#define PIN3  3
#define PIN4  4
#define PIN5  5
#define PIN6  6
#define PIN7  7
#define PIN8  8
#define PIN9  9
#define PIN10 10
#define PIN11 11
#define PIN12 12
#define PIN13 13
#define PIN14 14
#define PIN15 15

#define LOW 0
#define HIGH 1

#define ALL_PINS_LOW 0x0000
#define ALL_PINS_HIGH 0xFFFF


void GPIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Mode);
void GPIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Value);
void GPIO_voidSetPortDirection(u8 copy_u8Port, u8 copy_u8Mode);
void GPIO_voidSetPortValue(u8 copy_u8Port, u8 copy_u8Value);
u8 GPIO_voidGetPinValue(u8 copy_u8Port, u8 copy_u8Pin);



#endif