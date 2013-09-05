/*
 * spi.h
 *
 *  Created on: 01/02/2011
 *      Author: build
 */
#include <stdio.h> // for size_t
#include <stdio.h>
#include <avr/pgmspace.h>

#define MOSI PB3
#define SCK PB5
#define SS  PB2
#define MISO PB4

#define SPI_MODE0 0x00
#define SPI_MODE1 0x04
#define SPI_MODE2 0x08
#define SPI_MODE3 0x0C

#define SPI_CLOCK_DIV4 0x00
#define SPI_CLOCK_DIV16 0x01
#define SPI_CLOCK_DIV64 0x02
#define SPI_CLOCK_DIV128 0x03
#define SPI_CLOCK_DIV2 0x04

#define SPI_CLOCK_DIV8 0x05
#define SPI_CLOCK_DIV32 0x06


#define SPI_MODE_MASK 0x0C  // CPOL = bit 3, CPHA = bit 2 on SPCR
#define SPI_CLOCK_MASK 0x03  // SPR1 = bit 1, SPR0 = bit 0 on SPCR
#define SPI_2XCLOCK_MASK 0x01  // SPI2X = bit 0 on SPSR


void SPIBegin(uint8_t Pin, uint8_t DataMode, uint8_t ClockSpeed);

