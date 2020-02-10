#ifndef USART_DRIVER_H
#define USART_DRIVER_H

#include <avr/io.h>
#include "../../Utilities/AVR_ATMega32.h"


#define F_CPU 8000000UL
#define BAUD_RATE(BAUD) (((F_CPU) / (BAUD * 16UL)) - 1)

void USART_Init(int, int, int, int, int);

void USART_Transmit(U8);
U8 USART_Receive(void);

void USART_TransmitString(U8 *);
void USART_ReceiveString(U8 *);


#endif


