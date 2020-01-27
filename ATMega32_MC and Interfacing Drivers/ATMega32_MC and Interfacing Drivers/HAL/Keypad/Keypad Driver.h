#ifndef KEYPAD_DRIVER_H
#define KEYPAD_DRIVER_H

#include <avr/io.h>
#include "../../Utilities/AVR_ATMega32.h"

#define keypadPORT PORTD
#define keypadPIN PIND
#define keypadDDR DDRD

#define Row_0     0
#define Row_1     1
#define Row_2     2
#define Row_3     3

#define Col_0     4
#define Col_1     5
#define Col_2     6
#define Col_3     7

void Keypad_init();
U8 Keypad_keylisten();

#endif