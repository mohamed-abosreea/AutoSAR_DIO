/*
 * Dio.h
 *
 *  Created on: Oct 7, 2023
 *      Author: Mohamed Abosreea
 */

#ifndef DIO_H_
#define DIO_H_

#include "Dio_Types.h"
#include "TM4C123GH6PM.h"

void Port_Init (const Port_ConfigType* ConfigPtr);

Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId);

void Dio_WriteChannel (Dio_ChannelType ChannelId, Dio_LevelType Level);

Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId);

void Dio_WritePort (Dio_PortType PortId,Dio_PortLevelType Level);

#endif /* DIO_H_ */
