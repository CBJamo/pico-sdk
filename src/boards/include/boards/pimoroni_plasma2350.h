/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

// This header may be included by other board headers as "boards/pimoroni_plasma2350.h"

#ifndef _BOARDS_PIMORONI_PLASMA2350_H
#define _BOARDS_PIMORONI_PLASMA2350_H

pico_board_cmake_set(PICO_PLATFORM, rp2350)

// For board detection
#define PIMORONI_PLASMA2350

// --- BOARD SPECIFIC ---
#define SPCE_SPI 0
#define SPCE_TX_MISO_PIN 8
#define SPCE_RX_CS_PIN 9
#define SPCE_NETLIGHT_SCK_PIN 10
#define SPCE_RESET_MOSI_PIN 11
#define SPCE_PWRKEY_BL_PIN 7

#define PLASMA2350_SW_A_PIN 12

#define PLASMA2350_CLK_PIN 14
#define PLASMA2350_DATA_PIN 15

#define PLASMA2350_LED_R_PIN 16
#define PLASMA2350_LED_G_PIN 17
#define PLASMA2350_LED_B_PIN 18

#define PLASMA2350_I2C 0
#define PLASMA2350_INT_PIN 19
#define PLASMA2350_SDA_PIN 20
#define PLASMA2350_SCL_PIN 21

#define PLASMA2350_USER_SW_PIN 22

#define PLASMA2350_A0_PIN 26
#define PLASMA2350_A1_PIN 27
#define PLASMA2350_A2_PIN 28
#define PLASMA2350_NUM_ADC_PINS 3

#define PLASMA2350_CURRENT_SENSE_PIN 29

// --- RP2350 VARIANT ---
#define PICO_RP2350A 1

// --- UART ---
// no PICO_DEFAULT_UART
// no PICO_DEFAULT_UART_TX_PIN
// no PICO_DEFAULT_UART_RX_PIN

// --- LED ---
#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN PLASMA2350_LED_G_PIN
#endif
// no PICO_DEFAULT_WS2812_PIN

#ifndef PICO_DEFAULT_LED_PIN_INVERTED
#define PICO_DEFAULT_LED_PIN_INVERTED 1
#endif

// --- I2C ---
// routed to Qw/St connector
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C PLASMA2350_I2C
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN PLASMA2350_SDA_PIN
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN PLASMA2350_SCL_PIN
#endif

// --- SPI ---
#ifndef PICO_DEFAULT_SPI
#define PICO_DEFAULT_SPI 1
#endif
#ifndef PICO_DEFAULT_SPI_SCK_PIN
#define PICO_DEFAULT_SPI_SCK_PIN SPCE_NETLIGHT_SCK_PIN
#endif
#ifndef PICO_DEFAULT_SPI_TX_PIN
#define PICO_DEFAULT_SPI_TX_PIN SPCE_RESET_MOSI_PIN
#endif
#ifndef PICO_DEFAULT_SPI_RX_PIN
#define PICO_DEFAULT_SPI_RX_PIN SPCE_TX_MISO_PIN
#endif
#ifndef PICO_DEFAULT_SPI_CSN_PIN
#define PICO_DEFAULT_SPI_CSN_PIN SPCE_RX_CS_PIN
#endif

// --- FLASH ---
#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

pico_board_cmake_set_default(PICO_FLASH_SIZE_BYTES, (4 * 1024 * 1024))
#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (4 * 1024 * 1024)
#endif

pico_board_cmake_set_default(PICO_RP2350_A2_SUPPORTED, 1)
#ifndef PICO_RP2350_A2_SUPPORTED
#define PICO_RP2350_A2_SUPPORTED 1
#endif

// no PICO_VBUS_PIN
// no PICO_VSYS_PIN

#endif
