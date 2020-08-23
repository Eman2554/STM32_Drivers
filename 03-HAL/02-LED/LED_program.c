/*****************************************************/
/* Auther : Eman Mohamed                             */
/* Date   : 15 August 2020                           */
/* Version: V01                                      */
/*****************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_Interface.h"
#include "RCC_interface.h"
#include "SEVEN_SEGMENT_interface.h"

#include "LED_interface.h"
#include "LED_config.h"


void LED_voidON (u8 Copy_u8PORT,u8 Copy_u8PIN)
{
		MGPIO_voidSetPinDirection(Copy_u8PORT,Copy_u8PIN,LED_CONNECTED_OUTPUT_TYPE);
		MGPIO_voidSetPinValue(Copy_u8PORT,Copy_u8PIN,GPIO_HIGH);
}

void LED_voidOFF (u8 Copy_u8PORT,u8 Copy_u8PIN)
{
		MGPIO_voidSetPinDirection(Copy_u8PORT,Copy_u8PIN,LED_CONNECTED_OUTPUT_TYPE);
		MGPIO_voidSetPinValue(Copy_u8PORT,Copy_u8PIN,GPIO_LOW);
}
void LED_voidToggle (u8 Copy_u8PORT,u8 Copy_u8PIN)
{
		u16 LOC_w = 800 ;
		MGPIO_voidSetPinDirection(Copy_u8PORT,Copy_u8PIN,LED_CONNECTED_OUTPUT_TYPE);
		MGPIO_voidSetPinValue(Copy_u8PORT,Copy_u8PIN,GPIO_HIGH);
		
		for(u16 j =0 ; j < LOC_w ; j++)
		{
			for(u16 i =0 ; i <LOC_w ; i++)
			{
				asm("NOP");
			}
		}
		
		MGPIO_voidSetPinDirection(Copy_u8PORT,Copy_u8PIN,LED_CONNECTED_OUTPUT_TYPE);
		MGPIO_voidSetPinValue(Copy_u8PORT,Copy_u8PIN,GPIO_LOW);
		
		for(u16 j =0 ; j < LOC_w ; j++)
		{
			for(u16 i =0 ; i <LOC_w ; i++)
			{
				asm("NOP");
			}
		}
}



