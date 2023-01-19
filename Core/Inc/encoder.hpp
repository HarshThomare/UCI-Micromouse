/*
 * encoder.h
 *
 *  Created on: Jan 12, 2023
 *      Author: Harsh
 */

#ifndef INC_ENCODER_HPP_
#define INC_ENCODER_HPP_

#include <stdio.h>

struct Ticks{
	uint32_t Left;
	uint32_t Right;
	};

class Encoder
{
	public:
		Encoder(){};
		Ticks getTicks();
		void resetTickL();
		void resetTickR();
		void printTicks();



};




#endif /* INC_ENCODER_HPP_ */
