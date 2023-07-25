/*
 * finalProject.c
 *
 * Created: 7/2/2023 8:46:46 PM
 * Author : asusu
 */ 



#include "DIO.h"
#include "Clock.h"
#include "MOTOR.h"
#include "PWM.h"
#include "Bluetooth.h"
#include "UART.h"


int main(void)
{
	u8 z=0;
	u8 duty=25;
	DIO_Init();
	DIO_WriteChannel(DIO_ChannelD5,STD_High);
	PWM_Generate_COM1A(duty);
	DIO_ConfigChannel(DIO_ChannelD0,Input);
	UART_Config BluetoothOption = {BaudRate_9600,DoupleSpeed_Disable,CharacterSize_8Bits,Stop_1Bit,Parity_Disable,TX_Disable,RX_Enable};
	Bluetooth_Init(&BluetoothOption);
	
    while (1) 
    {
		u8 receive =Bluetooth_Receive();
		switch (receive)
		{
		case 'S':
		if(z<4){
			duty+=25;
			z++;
			PWM_Generate_COM1A(duty);
			if (z==3)
			{
				z=0;
				duty=25;
			}
		}
		case 'F':
		Motor_forward();
			break;
			case 'B':
			Motor_back();
			break;
			case 'R':
			Motor_right();
			break;
			case 'L':
			Motor_left();
			break;
			case '\0':
			Motor_stop();
			break;
			
			break;
			default:
			break;
		}
    }
}
