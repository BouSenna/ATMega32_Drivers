#include "../../Utilities/AVR_ATMega32.h"

void SevenSegment_Init(U8 port, U8 value){
	DDR(port) = value;
}

void SevenSegment_Display(U8 port, U8 num){
	Set_LED_Port(port, num);
}
