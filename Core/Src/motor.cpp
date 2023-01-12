/*
 * motor.cpp
 *
 *  Created on: Jan 10, 2023
 *      Author: Harsh
 */

#include "motor.hpp"
#include "gpio.h"

//TODO: Is M2 Left?
static void Motor::setL(const Direction& dir, const int& mspeed)
{
	switch(dir)
	    {
	        case Direction::FORWARDS:
	        	HAL_GPIO_WritePin(M2_FWD_GPIO_Port, M2_FWD_GPIO_Pin, SET);
				HAL_GPIO_WritePin(M2_FWD_GPIO_Port, M2_FWD_GPIO_Pin, UNSET);
	            (M2_BACK_PIN, mspeed);
	            break;
	        case Direction::BACKWARDS:
	            digitalWrite(M2_BACK_PIN, LOW);
	            digitalWrite(M2_SPD_PIN, HIGH);
	            analogWrite(M2_FWD_PIN, mspeed);
	            break;
	        case Direction::STOP:
	            digitalWrite(M2_FWD_PIN, LOW);
	            digitalWrite(M2_BACK_PIN, LOW);
	            analogWrite(M2_SPD_PIN, 0);
	            break;
	        default:
	            break;
	    }
}

