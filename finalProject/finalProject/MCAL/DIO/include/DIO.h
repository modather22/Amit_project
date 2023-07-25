/*
 * DIO.h
 *
 * Created: 3/24/2023 2:40:32 PM
 *  Author: user
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "BitMath.h"
#include "STD_Types.h"
#include "DIO_Reg.h"
#include "DIO_Types.h"
#include "DIO_CFG.h"

void DIO_WriteChannel(DIO_ChannelTypes channelId,STD_LevelTypes level);
STD_LevelTypes DIO_ReadChannel(DIO_ChannelTypes channelId);
void DIO_ToggleChannel(DIO_ChannelTypes channelId);
void DIO_ConfigChannel(DIO_ChannelTypes channelId,DIO_DataDir direction);
u8 DIO_ReadPort(DIO_PortTypes portId);
void DIO_WritePort(DIO_PortTypes portId,u8 portValue);
void DIO_WriteChannelGroup(DIO_PortTypes portId,u8 portValue,u8 mask);
#endif /* DIO_H_ */