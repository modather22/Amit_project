/*
 * PWM.c
 *
 * Created: 4/13/2023 3:21:05 PM
 *  Author: user
 */ 
#include "PWM.h"

void PWM_Generate_COM1A(u8 Duty){
	DIO_ConfigChannel(DIO_ChannelD5,Output);
	u16 ICR_Value = (u16)0xFFFF;
	u16 OCR1A_Value = (u16)((((float)Duty/100)*((u32)ICR_Value+1))-1);
	TIMER1_ICR_SetValue(ICR_Value);
	TIMER1_OCR1A_SetValue(OCR1A_Value);
	TIMER1_InitTypes options = {PWM_Fast,Clock_8,COM1A_Non_Inverting_PWM,COM1B_No_PWM,OC1AInt_Disable,OC1BInt_Disable,ICInt_Disable,TOVInt_Disable};
	TIMER1_Init(&options);
}