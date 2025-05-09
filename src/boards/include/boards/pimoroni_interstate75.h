/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_PIMORONI_INTERSTATE75_H
#define _BOARDS_PIMORONI_INTERSTATE75_H

pico_board_cmake_set(PICO_PLATFORM, rp2040)

// For board detection
#define PIMORONI_INTERSTATE75

// --- BOARD SPECIFIC ---
#define INTERSTATE75_R0_PIN 0
#define INTERSTATE75_G0_PIN 1
#define INTERSTATE75_B0_PIN 2
#define INTERSTATE75_R1_PIN 3
#define INTERSTATE75_G1_PIN 4
#define INTERSTATE75_B1_PIN 5

#define INTERSTATE75_ROW_A_PIN 6
#define INTERSTATE75_ROW_B_PIN 7
#define INTERSTATE75_ROW_C_PIN 8
#define INTERSTATE75_ROW_D_PIN 9
#define INTERSTATE75_ROW_E_PIN 10

#define INTERSTATE75_CLK_PIN 11
#define INTERSTATE75_LAT_PIN 12
#define INTERSTATE75_OE_PIN 13

#define INTERSTATE75_SW_A_PIN 14

#define INTERSTATE75_LED_R_PIN 16
#define INTERSTATE75_LED_G_PIN 17
#define INTERSTATE75_LED_B_PIN 18

#define INTERSTATE75_I2C 0
#define INTERSTATE75_INT_PIN 19
#define INTERSTATE75_SDA_PIN 20
#define INTERSTATE75_SCL_PIN 21

#define INTERSTATE75_USER_SW_PIN 23

#define INTERSTATE75_A0_PIN 26
#define INTERSTATE75_A1_PIN 27
#define INTERSTATE75_A2_PIN 28
#define INTERSTATE75_NUM_ADC_PINS 3

#define INTERSTATE75_CURRENT_SENSE_PIN 29

// --- UART ---
// no PICO_DEFAULT_UART
// no PICO_DEFAULT_UART_TX_PIN
// no PICO_DEFAULT_UART_RX_PIN

// --- LED ---
// Included so basic examples will work, and set it to the green LED
#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN INTERSTATE75_LED_G_PIN
#endif
// no PICO_DEFAULT_WS2812_PIN

#ifndef PICO_DEFAULT_LED_PIN_INVERTED
#define PICO_DEFAULT_LED_PIN_INVERTED 1
#endif

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C INTERSTATE75_I2C
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN INTERSTATE75_SDA_PIN
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN INTERSTATE75_SCL_PIN
#endif

// --- SPI ---
// no PICO_DEFAULT_SPI
// no PICO_DEFAULT_SPI_SCK_PIN
// no PICO_DEFAULT_SPI_TX_PIN
// no PICO_DEFAULT_SPI_RX_PIN
// no PICO_DEFAULT_SPI_CSN_PIN

// --- FLASH ---
#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

pico_board_cmake_set_default(PICO_FLASH_SIZE_BYTES, (2 * 1024 * 1024))
#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (2 * 1024 * 1024)
#endif
// All boards have B1 RP2040
#ifndef PICO_RP2040_B0_SUPPORTED
#define PICO_RP2040_B0_SUPPORTED 0
#endif

#endif
