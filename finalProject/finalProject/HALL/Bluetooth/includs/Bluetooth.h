/*
 * Bluetooth.h
 *
 * Created: 4/28/2023 4:28:43 PM
 *  Author: user
 */ 


#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

#include "UART.h"

void Bluetooth_Init(UART_Config * options);
void Bluetooth_Transmait(u8 data);
void Bluetooth_TransmaitString(s8 * string);
u8 Bluetooth_Receive(void);

#endif /* BLUETOOTH_H_ */