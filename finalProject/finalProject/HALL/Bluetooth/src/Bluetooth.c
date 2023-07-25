/*
 * Bluetooth.c
 *
 * Created: 4/28/2023 4:28:31 PM
 *  Author: user
 */ 
#include "Bluetooth.h"

void Bluetooth_Init(UART_Config * options){
	UART_Init(options);
}
void Bluetooth_Transmait(u8 data){
	UART_Transmait(data);
}
void Bluetooth_TransmaitString(s8 * string){
	UART_TransmaitString(string);
}
u8 Bluetooth_Receive(void){
	return UART_Receive();
}
	