/*****************************************************/
/* Auther : Eman Mohamed                             */
/* Date   : 8 August 2020                            */
/* Version: V01                                      */
/*****************************************************/
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

/* Register Definition */
#define RCC_CR  	  	 *((u32*)0x40021000)
#define RCC_CFGR 		 *((u32*)0x40021004)
#define RCC_CIR  		 *((u32*)0x40021008)
#define RCC_APB2RSTR  	 *((u32*)0x4002100c)
#define RCC_APB1RSTS  	 *((u32*)0x40021010)
#define RCC_AHBENR   	 *((u32*)0x40021014)
#define RCC_APB2ENR  	 *((u32*)0x40021018)
#define RCC_APB1ENR  	 *((u32*)0x4002101c)
#define RCC_BDCR   		 *((u32*)0x40021020)
#define RCC_CSR          *((u32*)0x40021024)



 /* Clock Types */
 #define RCC_HSE_CRYSTAL 	  	0
 #define RCC_HSE_RC    	      	1
 #define RCC_HSI              	2
 #define RCC_PLL              	3

/* PLL Input Types*/
 #define RCC_PLL_IN_HSI_DIV_2 	0
 #define RCC_PLL_IN_HSE_DIV_2 	1
 #define RCC_PLL_IN_HSE 	  	2

/* PLL Multiplication Value */
#define PLL_MUL_VAL_X2		0
#define PLL_MUL_VAL_X3		1
#define PLL_MUL_VAL_X4		2
#define PLL_MUL_VAL_X5		3
#define PLL_MUL_VAL_X6		4
#define PLL_MUL_VAL_X7		5
#define PLL_MUL_VAL_X8		6
#define PLL_MUL_VAL_X9		7
#define PLL_MUL_VAL_X10		8
#define PLL_MUL_VAL_X11		9
#define PLL_MUL_VAL_X12		10
#define PLL_MUL_VAL_X13		11
#define PLL_MUL_VAL_X14		12
#define PLL_MUL_VAL_X15		13
#define PLL_MUL_VAL_X16		14


#endif
