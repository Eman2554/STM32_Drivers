/*****************************************************/
/* Auther : Eman Mohamed                             */
/* Date   : 15 August 2020                           */
/* Version: V01                                      */
/*****************************************************/
#ifndef SEVEN_SEGMENT_CONFIG_H
#define SEVEN_SEGMENT_CONFIG_H


/* options :    GPIOA
				GPIOB
				GPIOC*/
#define SEVEN_SEGMENT_PORT  GPIOA


/* options :   COMMON_ANODE
			   COMMON_CATHODE*/
#define SEVEN_SEGMENT_TYPE  COMMON_CATHODE

/* Sevent segement pins connection */
#define SEVEN_SEGMENT_PINA	PIN0
#define SEVEN_SEGMENT_PINB  PIN1
#define SEVEN_SEGMENT_PINC  PIN2
#define SEVEN_SEGMENT_PIND  PIN3
#define SEVEN_SEGMENT_PINE  PIN4
#define SEVEN_SEGMENT_PINF  PIN5
#define SEVEN_SEGMENT_PING  PIN6
#define SEVEN_SEGMENT_DOT   PIN7

/* options :   DISPLAY_0
			   DISPLAY_1
			   DISPLAY_2
			   DISPLAY_3
			   DISPLAY_4 
			   DISPLAY_5 
			   DISPLAY_6 
			   DISPLAY_7 
			   DISPLAY_8 
			   DISPLAY_9 
			   DISPLAY_DOT*/
#define SEVEN_SEGMENT_DISPLAY   DISPLAY_1

#endif
