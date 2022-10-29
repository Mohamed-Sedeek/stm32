/*****************************************************************************************/
/* Author   : Mohamed Sedeek                                                             */
/* Date     : 27 Oct 2022                                                                */
/* Version  : 01                                                                         */
/*****************************************************************************************/

#ifndef _RCC_INTERFACE_H_
#define _RCC_INTERFACE_H_



void RCC_voidEnableClock(u8 copy_u8BusID, u8 copy_PeripheralID);
void RCC_voidDisableClock(u8 copy_u8BusID, u8 copy_PeripheralID);
void RCC_voidInitSysClock(void);
void RCC_voidSetADCClock(u8 copy_u8Prescaler);
void RCC_voidSetAHBClock(u8 copy_u8Prescaler);
void RCC_voidSetAPB2Clock(u8 copy_u8Prescaler);
void RCC_voidSetAPB1Clock(u8 copy_u8Prescaler);


#endif