/*
 * motor.hpp
 *
 *  Created on: Jan 10, 2023
 *      Author: Harsh
 */

#ifndef INC_MOTOR_HPP_
#define INC_MOTOR_HPP_

enum Direction
{
  FORWARDS = 0, BACKWARDS = 1, STOP = 2
};


class Motor
{
	public:
		Motor(){};
		void setL(const Direction& dir, const int& mspeed);
		void setR(const Direction& dir, const int& mspeed);

};



#endif /* INC_MOTOR_HPP_ */
