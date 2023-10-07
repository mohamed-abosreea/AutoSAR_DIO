/*
 * Dio.c
 *
 *  Created on: Oct 7, 2023
 *      Author: Mohamed Abosreea
 */
#include "Dio.h"

static GPIOA_Type* GPIO_PORTS[] = {GPIOA,GPIOB,GPIOC,GPIOD,GPIOE,GPIOF};

void Port_Init (const Port_ConfigType* ConfigPtr)
{
    if(ConfigPtr == NULL)
    {
        return ;
    }else{

    }
}

Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId)
{
    Dio_LevelType type;
    type = GET_BIT(GPIO_PORTS[ChannelId/8]->DATA, ChannelId %8);
    return (type)?STD_HIGH : STD_LOW;
}

void Dio_WriteChannel (Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    if(Level == STD_HIGH || Level == STD_LOW)
    {
        return ;
    }
    else
    {
        MODIFY_BIT(GPIO_PORTS[ChannelId/8]->DATA , ChannelId %8 , Level);
    }
}

Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId)
{
    if(PortId >= 0 && PortId <= 6)
    {
        return GPIO_PORTS[PortId]->DATA;
    }
    else
    {
        /*Do Nothing*/
    }
}

void Dio_WritePort (Dio_PortType PortId,Dio_PortLevelType Level)
{
    if(PortId >= 0 && PortId <= 6)
    {
        GPIO_PORTS[PortId]->DATA = Level;
    }
    else
    {
        /*Do Nothing*/
    }
}

