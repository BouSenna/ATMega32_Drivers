#ifndef SPI_DRIVER_H
#define SPI_DRIVER_H

#include <avr/io.h>  
#include "../../Utilities/AVR_ATMega32.h"

#define SS      4		// Slave Select
#define MOSI    5 		// Master Out Slave In
#define MISO    6		// Master In Slave Out
#define SCK     7 		// Shift Clock

void SPI_MasterInit(void);
void SPI_SlaveInit(void);

void SPI_Transmit(U8);
U8 SPI_Receive();

void SPI_TransmitString(U8 *);
void SPI_ReceiveString(U8 *);

#endif