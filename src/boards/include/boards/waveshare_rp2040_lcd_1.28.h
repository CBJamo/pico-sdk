/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_WAVESHARE_RP2040_LCD_1_28_H
#define _BOARDS_WAVESHARE_RP2040_LCD_1_28_H

pico_board_cmake_set(PICO_PLATFORM, rp2040)

// For board detection
#define WAVESHARE_RP2040_LCD_1_28

// --- UART ---
#ifndef PICO_DEFAULT_UART
#define PICO_DEFAULT_UART 0
#endif
#ifndef PICO_DEFAULT_UART_TX_PIN
#define PICO_DEFAULT_UART_TX_PIN 0
#endif
#ifndef PICO_DEFAULT_UART_RX_PIN
#define PICO_DEFAULT_UART_RX_PIN 1
#endif

// no PICO_DEFAULT_WS2812_PIN

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C 1
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN 6
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN 7
#endif

// --- SPI ---
#ifndef PICO_DEFAULT_SPI
#define PICO_DEFAULT_SPI 0
#endif
#ifndef PICO_DEFAULT_SPI_SCK_PIN
#define PICO_DEFAULT_SPI_SCK_PIN 18
#endif
#ifndef PICO_DEFAULT_SPI_TX_PIN
#define PICO_DEFAULT_SPI_TX_PIN 19
#endif
#ifndef PICO_DEFAULT_SPI_RX_PIN
#define PICO_DEFAULT_SPI_RX_PIN 16
#endif
#ifndef PICO_DEFAULT_SPI_CSN_PIN
#define PICO_DEFAULT_SPI_CSN_PIN 17
#endif

// --- LCD ---
#ifndef WAVESHARE_LCD_SPI
#define WAVESHARE_LCD_SPI 1
#endif
#ifndef WAVESHARE_LCD_DC_PIN
#define WAVESHARE_LCD_DC_PIN 8
#endif
#ifndef WAVESHARE_LCD_CS_PIN
#define WAVESHARE_LCD_CS_PIN 9
#endif
#ifndef WAVESHARE_LCD_SCLK_PIN
#define WAVESHARE_LCD_SCLK_PIN 10
#endif
#ifndef WAVESHARE_LCD_TX_PIN
#define WAVESHARE_LCD_TX_PIN 11
#endif
#ifndef WAVESHARE_LCD_RST_PIN
#define WAVESHARE_LCD_RST_PIN 12
#endif
#ifndef WAVESHARE_LCD_BL_PIN
#define WAVESHARE_LCD_BL_PIN 25
#endif
// --- ADC ---
#ifndef WAVESHARE_BAT_ADC_PIN
#define WAVESHARE_BAT_ADC_PIN 29
#endif
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
#define PICO_RP2040_B0_SUPPORTED  0
#endif

#endif

