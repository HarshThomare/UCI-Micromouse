/*
 * encoder.cpp
 *
 *  Created on: Jan 12, 2023
 *      Author: Harsh
 */
#include "encoder.hpp"
#include "usart.h"




Ticks Encoder::getTicks()
{
	Ticks t;
	t.Left = TIM4->CNT;
	t.Right = TIM3->CNT;
	return t;
}

void Encoder::resetTickL()
{
	TIM4->CNT = 0;
}

void Encoder::resetTickR()
{
	TIM3->CNT = 0;
}


void Encoder::printTicks()
{
	char MSG[50]{'\0'};
//	sprintf(MSG, "Encoder Ticks L = %ld; R = %ld\n\r", ((TIM4->CNT)>>2), ((TIM3->CNT)>>2));
	sprintf(MSG, "Hello");
	HAL_UART_Transmit(&huart1, (uint8_t *) MSG, sizeof(MSG), 100);
}
