/*
 * GPIO.c
 *
 *	Updated on : 10/14/2019 3:00:34 PM
 *  Author	   : Abdelrahman Hafez
 */ 
#include "GPIO.h"
#include "GPIO_Cfg.h"

const GPIO_CfgType GPIO_ConfigParam [GPIO_GROUPS_NUMBER] =
{
	{
		1,						/*PORTB*/
		0x0F,					/*MASK*/
		0xFF,					/*OUTPUT*/
		0x00					/*NO PULLUP*/
	}
};