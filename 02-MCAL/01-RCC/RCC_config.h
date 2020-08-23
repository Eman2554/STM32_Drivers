/*****************************************************/
/* Auther : Eman Mohamed                             */
/* Date   : 8 August 2020                            */
/* Version: V01                                      */
/*****************************************************/
#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H


/* Options:    RCC_HSE_CRYSTAL
               RCC_HSE_RC
               RCC_HSI
               RCC_PLL			   */
#define RCC_CLOCK_TYPE    RCC_HSE_CRYSTAL


/* Options:     RCC_PLL_IN_HSI_DIV_2
                RCC_PLL_IN_HSE_DIV_2
				RCC_PLL_IN_HSE      */
/* Note: Select value only if you have PLL as input clock source */
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_INPUT     RCC_PLL_IN_HSE_DIV_2
#endif


/* Options: PLL_MUL_VAL_X2
 * 			PLL_MUL_VAL_X3
 * 			PLL_MUL_VAL_X4
 * 			PLL_MUL_VAL_X5
 * 			PLL_MUL_VAL_X6
 * 			PLL_MUL_VAL_X7
 * 			PLL_MUL_VAL_X8
 * 			PLL_MUL_VAL_X9
 * 			PLL_MUL_VAL_X10
 * 			PLL_MUL_VAL_X11
 * 			PLL_MUL_VAL_X12
 * 			PLL_MUL_VAL_X13
 * 			PLL_MUL_VAL_X14
 * 			PLL_MUL_VAL_X15
 * 			PLL_MUL_VAL_X16
 *
 */
/* Note: Select value only if you have PLL as input clock source */
#if     RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_MUL_VAL   PLL_MUL_VAL_X2
#endif


#endif
