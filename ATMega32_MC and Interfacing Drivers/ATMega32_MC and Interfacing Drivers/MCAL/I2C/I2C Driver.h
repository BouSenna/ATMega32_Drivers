#ifndef I2C_DRIVER_H
#define I2C_DRIVER_H

#include <avr/io.h>
#include "../../Utilities/AVR_ATMega32.h"

#define F_CPU 8000000UL
#define TWBR_VALUE(SCL_FREQ, PRESCALER)      ((((F_CPU) / (SCL_FREQ)) - 16) / ((PRESCALER) * 2))

void I2C_Init(int, U8, U8);
void I2C_Set_Address(U8);

U8 I2C_Read(U8);
void I2C_Write(U8);

void I2C_Start(void);
void I2C_Stop();

#endif
