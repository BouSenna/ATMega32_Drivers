#include "SPI Driver.h"

void SPI_MasterInit(void){
	// Set MOSI, SCK and SS as output Pins.
	DDRB |= (1 << MOSI) | (1 << SCK) | (1 << SS);
	// Set MISO as input Pin.
	DDRB &= ~(1 << MISO); 
	
	// Enable SPI, Master mode, Shift Clock = CLK /16
	SPCR = (1 << SPE) | (1 << MSTR) | (1 << SPR0);
}

void SPI_SlaveInit(void){
	// Set MOSI, SCK and SS as input Pins.
	DDRB &= ~(1 << MOSI) & ~(1 << SCK) & ~(1 << SS) ;
	// Set MISO as an output Pin.
	DDRB |= (1 << MISO); 	
	
	// Enable SPI as a Slave Device
	SPCR = (1 << SPE);
}

void SPI_Transmit(U8 data){
	SPDR = data;			
	// Wait for transmission until it is completed.
	while(!(SPSR & (1 << SPIF)));	
}

U8 SPI_Receive(){
	// Wait for reception until it is completed.
	while(!(SPSR & (1 << SPIF)));
	// Return received data
	return SPDR;
}

void SPI_TransmitString(U8 *str){
	while(*str){
		SPI_Transmit(*str);
		str++;
	}
}

void SPI_ReceiveString(U8 *str){
	int i = 0;
	str[i] = SPI_Receive();
	
	while(str[i] != '#'){
		i++;
		str[i] = SPI_Receive();
	}
	str[i] = '\0';
}