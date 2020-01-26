#ifndef LED_DRIVER_H
#define LED_DRIVER_H

#include "../../Utilities/AVR_ATMega32.h"

void LED_Init(U8, U8);
void LED_Init(U8);
void LED_Port_Init(U8, U8);

void Set_LED(U8, U8, U8);
void Set_LED(U8 ,U8);
void Set_LED_Port(U8, U8);


#endif