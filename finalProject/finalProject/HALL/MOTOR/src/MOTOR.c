/*
 * MOTOR.c
 *
 * Created: 7/5/2023 12:29:23 AM
 *  Author: GRAPHICS
 */ 
#include "MOTOR.h"

void Motor_forward()
{
	DIO_WriteChannel(DIO_ChannelC0,STD_High);
	DIO_WriteChannel(DIO_ChannelC1,STD_Low);
	DIO_WriteChannel(DIO_ChannelC2,STD_High);
	DIO_WriteChannel(DIO_ChannelC3,STD_Low);
	
	DIO_WriteChannel(DIO_ChannelB0,STD_High);
	DIO_WriteChannel(DIO_ChannelB1,STD_Low);
	DIO_WriteChannel(DIO_ChannelB2,STD_High);
	DIO_WriteChannel(DIO_ChannelB3,STD_Low);
}

void Motor_back()
{
	DIO_WriteChannel(DIO_ChannelC0,STD_Low);
	DIO_WriteChannel(DIO_ChannelC1,STD_High);
	DIO_WriteChannel(DIO_ChannelC2,STD_Low);
	DIO_WriteChannel(DIO_ChannelC3,STD_High);
	
	DIO_WriteChannel(DIO_ChannelB0,STD_Low);
	DIO_WriteChannel(DIO_ChannelB1,STD_High);
	DIO_WriteChannel(DIO_ChannelB2,STD_Low);
	DIO_WriteChannel(DIO_ChannelB3,STD_High);
}

void Motor_right()
{
	DIO_WriteChannel(DIO_ChannelC0,STD_Low);
	DIO_WriteChannel(DIO_ChannelC1,STD_High);
	DIO_WriteChannel(DIO_ChannelC2,STD_Low);
	DIO_WriteChannel(DIO_ChannelC3,STD_High);
	
	DIO_WriteChannel(DIO_ChannelB0,STD_High);
	DIO_WriteChannel(DIO_ChannelB1,STD_Low);
	DIO_WriteChannel(DIO_ChannelB2,STD_High);
	DIO_WriteChannel(DIO_ChannelB3,STD_Low);
}
void Motor_left()
{
	DIO_WriteChannel(DIO_ChannelC0,STD_High);
	DIO_WriteChannel(DIO_ChannelC1,STD_Low);
	DIO_WriteChannel(DIO_ChannelC2,STD_High);
	DIO_WriteChannel(DIO_ChannelC3,STD_Low);
	
	DIO_WriteChannel(DIO_ChannelB0,STD_Low);
	DIO_WriteChannel(DIO_ChannelB1,STD_High);
	DIO_WriteChannel(DIO_ChannelB2,STD_Low);
	DIO_WriteChannel(DIO_ChannelB3,STD_High);
	

}
void Motor_stop()
{
   DIO_WriteChannel(DIO_ChannelC0,STD_Low);
   DIO_WriteChannel(DIO_ChannelC1,STD_Low);
   DIO_WriteChannel(DIO_ChannelC2,STD_Low);
   DIO_WriteChannel(DIO_ChannelC3,STD_Low);
   
   DIO_WriteChannel(DIO_ChannelB0,STD_Low);
   DIO_WriteChannel(DIO_ChannelB1,STD_Low);
   DIO_WriteChannel(DIO_ChannelB2,STD_Low);
   DIO_WriteChannel(DIO_ChannelB3,STD_Low);
}