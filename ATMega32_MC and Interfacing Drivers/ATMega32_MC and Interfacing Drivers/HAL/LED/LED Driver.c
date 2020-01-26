#include "../../Utilities/AVR_ATMega32.h"

void LED_Init(U8 port, U8 pin){
	DIO_PinDirection(port, pin, OUTPUT);
}

void LEDs_Init(U8 port, U8 stPin, U8 endPin){
	DIO_PortRangeDirection(port, stPin, endPin, OUTPUT);
}

void LED_Port_Init(U8 port, U8 value){
	DIO_PortDirection(port, value);
}


void Set_LED(U8 port, U8 pin, U8 value){
	DIO_PinWrite(port, pin, value);
}

void Set_LEDs(U8 port, U8 stPin, U8 endPin, U8 value){
	DIO_PortRangeWrite(port, stPin, endPin, value);
}

void Set_LED_Port(U8 port, U8 value){
	DIO_PortWrite(port, value);
}



