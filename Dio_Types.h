/*
 * Dio_Types.h
 *
 *  Created on: Oct 7, 2023
 *      Author: Mohamed Abosreea
 */

#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

#include "imported_types.h"

typedef unsigned char Dio_ChannelType;
typedef unsigned char Dio_LevelType;

typedef unsigned char Dio_PortType;
typedef unsigned char Dio_PortLevelType;

typedef struct {
    Dio_ChannelType channel;
}Port_ConfigType;
#endif /* DIO_TYPES_H_ */
