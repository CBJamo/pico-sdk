/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_HELLBENDER_0001_H
#define _BOARDS_HELLBENDER_0001_H

pico_board_cmake_set(PICO_PLATFORM, rp2350)

// For board detection
#define HELLBENDER_0001

// Pin aliases
#define HELLBENDER_0001_BLACKBOX_FLASH_CS_PIN 0 // on qspi bus

#define HELLBENDER_0001_IMU_CS_PIN 1 // also defined as PICO_DEFAULT_SPI_CSN_PIN
#define HELLBENDER_0001_IMU_IRQ_PIN 22
#define HELLBENDER_0001_IMU_CLKOUT_PIN 23

#define HELLBENDER_0001_5V_EN_PIN 14
#define HELLBENDER_0001_9V_EN_PIN 15

#define HELLBENDER_0001_LED_BLUE_PIN 6 // also defined as PICO_DEFAULT_LED_PIN
#define HELLBENDER_0001_LED_GREEN_PIN 7
#define HELLBENDER_0001_BUZZER_PIN 5

#define HELLBENDER_0001_GNSS_UART_TX_PIN 8
#define HELLBENDER_0001_GNSS_UART_RX_PIN 9

#define HELLBENDER_0001_DVTX_UART_TX_PIN 12
#define HELLBENDER_0001_DVTX_UART_RX_PIN 13
#define HELLBENDER_0001_DVTX_SBUS_PIN 36

#define HELLBENDER_0001_ESC_TELEM_RX_PIN 37

#define HELLBENDER_0001_OFFBOARD_WS2812_PIN 38
#define HELLBENDER_0001_ONBOARD_WS2812_PIN 39 // also defined as PICO_DEFAULT_WS2812_PIN

#define HELLBENDER_0001_SPARE_UART_TX_PIN 34
#define HELLBENDER_0001_SPARE_UART_RX_PIN 35

#define HELLBENDER_0001_I2C_CON_SDA_PIN 10
#define HELLBENDER_0001_I2C_CON_SCL_PIN 11

#define HELLBENDER_0001_FTRX_TX_PIN 20
#define HELLBENDER_0001_FTRX_RX_PIN 21

#define HELLBENDER_0001_SD_OSD_SPI_TX_PIN 27
#define HELLBENDER_0001_SD_OSD_SPI_RX_PIN 24
#define HELLBENDER_0001_SD_OSD_SPI_SCK_PIN 26
#define HELLBENDER_0001_OSD_CS_PIN 17
#define HELLBENDER_0001_SD_CS_PIN 25

#define HELLBENDER_0001_DSHOT1_PIN 28
#define HELLBENDER_0001_DSHOT2_PIN 29
#define HELLBENDER_0001_DSHOT3_PIN 30
#define HELLBENDER_0001_DSHOT4_PIN 31

#define HELLBENDER_0001_GPIO_SPARE1_PIN 32
#define HELLBENDER_0001_GPIO_SPARE2_PIN 33
#define HELLBENDER_0001_GPIO_SPARE3_PIN 47

#define HELLBENDER_0001_VBAT_SENSE_PIN 40
#define HELLBENDER_0001_CURR_SENSE_PIN 41
#define HELLBENDER_0001_SPARE_ADC_PIN 42


// --- UART ---
// Note, conflicts with HSTX range
#ifndef PICO_DEFAULT_UART
#define PICO_DEFAULT_UART 0
#endif
#ifndef PICO_DEFAULT_UART_TX_PIN
#define PICO_DEFAULT_UART_TX_PIN 12
#endif
#ifndef PICO_DEFAULT_UART_RX_PIN
#define PICO_DEFAULT_UART_RX_PIN 13
#endif

#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN 6
#endif

#ifndef PICO_DEFAULT_WS2812_PIN
#define PICO_DEFAULT_WS2812_PIN 39
#endif

// --- I2C ---
// Default I2C is connected to barometer
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C 0
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN 44
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN 45
#endif

// --- SPI ---
// Default SPI is connected to IMU
#ifndef PICO_DEFAULT_SPI
#define PICO_DEFAULT_SPI 0
#endif
#ifndef PICO_DEFAULT_SPI_SCK_PIN
#define PICO_DEFAULT_SPI_SCK_PIN 2
#endif
#ifndef PICO_DEFAULT_SPI_TX_PIN
#define PICO_DEFAULT_SPI_TX_PIN 3
#endif
#ifndef PICO_DEFAULT_SPI_RX_PIN
#define PICO_DEFAULT_SPI_RX_PIN 4
#endif
#ifndef PICO_DEFAULT_SPI_CSN_PIN
#define PICO_DEFAULT_SPI_CSN_PIN 1
#endif

// --- FLASH ---

#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

pico_board_cmake_set_default(PICO_FLASH_SIZE_BYTES, (8 * 1024 * 1024))
#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (8 * 1024 * 1024)
#endif

#define HELLBENDER_0001_BLACKBOX_FLASH_SIZE_BYTES (16 * 1024 * 1024)

// --- RP2350 VARIANT ---
#define PICO_RP2350A 0

pico_board_cmake_set_default(PICO_RP2350_A2_SUPPORTED, 1)
#ifndef PICO_RP2350_A2_SUPPORTED
#define PICO_RP2350_A2_SUPPORTED 1
#endif

#endif
