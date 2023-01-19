/*
 * motor.cpp
 *
 *  Created on: Jan 10, 2023
 *      Author: Harsh
 */

#include "motor.hpp"
#include "gpio.h"


void Motor::setL(const Direction& dir, const int& mspeed)
{
	switch(dir)
	    {
	        case Direction::FORWARDS:
	        	HAL_GPIO_WritePin(M2_FWD_GPIO_Port, M2_FWD_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(M2_BACK_GPIO_Port, M2_BACK_Pin, GPIO_PIN_RESET);
	            TIM4->CCR3 = mspeed;
	            break;
	        case Direction::BACKWARDS:
	        	HAL_GPIO_WritePin(M2_BACK_GPIO_Port, M2_BACK_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(M2_FWD_GPIO_Port, M2_FWD_Pin, GPIO_PIN_SET);
				TIM4->CCR3 = mspeed;
	            break;
	        case Direction::STOP:
	        	HAL_GPIO_WritePin(M2_FWD_GPIO_Port, M2_FWD_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(M2_BACK_GPIO_Port, M2_BACK_Pin, GPIO_PIN_RESET);
	            break;
	        default:
	            break;
	    }
}

void Motor::setR(const Direction& dir, const int& mspeed)
{
	switch(dir)
	    {
	        case Direction::BACKWARDS:
	        	HAL_GPIO_WritePin(M1_FWD_GPIO_Port, M1_FWD_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(M1_BACK_GPIO_Port, M1_BACK_Pin, GPIO_PIN_RESET);
	            TIM4->CCR4 = mspeed;
	            break;
	        case Direction::FORWARDS:
	        	HAL_GPIO_WritePin(M1_FWD_GPIO_Port, M1_FWD_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(M1_BACK_GPIO_Port, M1_BACK_Pin, GPIO_PIN_SET);
				TIM4->CCR4 = mspeed;
	            break;
	        case Direction::STOP:
	        	HAL_GPIO_WritePin(M1_FWD_GPIO_Port, M1_FWD_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(M1_BACK_GPIO_Port, M1_BACK_Pin, GPIO_PIN_RESET);
//				TIM4->CCR3 = mspeed;
	            break;
	        default:
	            break;
	    }
}
