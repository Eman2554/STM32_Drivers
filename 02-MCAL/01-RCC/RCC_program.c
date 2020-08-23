/*****************************************************/
/* Auther : Eman Mohamed                             */
/* Date   : 8 August 2020                            */
/* Version: V01                                      */
/*****************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void RCC_voidInitSystemClock(void)
{
	
	#if RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
		
		RCC_CR = 0x00010000 ; /* Enable HSE only */
		RCC_CFGR= 0x00000001;
	  
	#elif RCC_CLOCK_TYPE == RCC_HSE_RC
		
		RCC_CR = 0x00050000; /* Enable HSE With By Pass */
		RCC_CFGR= 0x00000001;
		
	#elif RCC_CLOCK_TYPE == RCC_HSI
		
		RCC_CR =  0x00000081; /* Enable HSI */
		RCC_CFGR= 0x00000000;
	
		// Assignment

	#elif RCC_CLOCK_TYPE == RCC_PLL
	
		#if   RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2
			  RCC_CR         =  0x01010000;  	          /* Enable HSE & PLL */
			  RCC_CFGR       =  0x00000002;  	          /* Enable HSI/2 and PLL and initialize Mul_Val by 0 */
			  RCC_CFGR      |= (17  << RCC_PLL_MUL_VAL ); /* Set Mul_Val */

		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
			  RCC_CR         =  0x01000081;  	          /* Enable HSE & PLL */
			  RCC_CFGR       =  0x00030002;  	          /* Enable HSE/2 and PLL and initialize Mul_Val by 0 */
			  RCC_CFGR      |= (17  << RCC_PLL_MUL_VAL ); /* Set Mul_Val */
		
		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE
			  RCC_CR         =  0x01000081;  	          /* Enable HSE & PLL */
			  RCC_CFGR       =  0x00010002;  	          /* Enable HSE and PLL and initialize Mul_Val by 0 */
			  RCC_CFGR      |= (17  << RCC_PLL_MUL_VAL ); /* Set Mul_Val */
		
		#endif
	
	#else
		#error("You chosed wrong clock type")
	#endif

}

void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if (Copy_u8PerId <= 31)
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB  : SET_BIT(RCC_AHBENR  ,Copy_u8PerId);   break;
			case RCC_APB1 : SET_BIT(RCC_APB1ENR ,Copy_u8PerId);   break;
			case RCC_APB2 : SET_BIT(RCC_APB2ENR ,Copy_u8PerId);   break;
		}
	}

	else
	{
		/* Return Error */
	}

}


void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if (Copy_u8PerId <= 31)
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB  : CLR_BIT(RCC_AHBENR  ,Copy_u8PerId);   break;
			case RCC_APB1 : CLR_BIT(RCC_APB1ENR ,Copy_u8PerId);   break;
			case RCC_APB2 : CLR_BIT(RCC_APB2ENR ,Copy_u8PerId);   break;
		}
	}

	else
	{
		/* Return Error */
	}

}
