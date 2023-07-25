/*
 * MOTOR.h
 *
 * Created: 7/5/2023 12:29:09 AM
 *  Author: GRAPHICS
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_

#include "DIO.h"
#include "STD_Types.h"

void Motor_forward();
void Motor_back();
void Motor_right();
void Motor_left();
void Motor_stop();

#endif /* MOTOR_H_ */