/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * MKS Robin nano (STM32F103VET6) board pin assignments
 * https://github.com/makerbase-mks/MKS-Robin-Nano-V1.X/tree/master/hardware
 */

#define ALLOW_STM32DUINO
#include "env_validate.h"

#define BOARD_INFO_NAME "MKS Robin Nano adapt for laser"

//
// Release PB4 (Y_ENABLE_PIN) from JTAG NRST role
//
#define DISABLE_JTAG

//
// Thermocouples
//
//#define TEMP_0_CS_PIN                     PE5   // TC1 - CS1
//#define TEMP_0_CS_PIN                     PE6   // TC2 - CS2

//#define LED_PIN                           PB2

#define KILL_PIN                          PA2
#define KILL_PIN_STATE                    LOW
#define SUICIDE_PIN                       PB2
#define SUICIDE_PIN_STATE                 LOW
//#define BTN_ENC                           PA4
//LASER PINS
#define TEMP_LASER_PIN                      PC1   // TH1
#define SPINDLE_LASER_ENA_PIN               PC3   // HEATER_0_PIN
#define SPINDLE_LASER_PWM_PIN               PB0   // HEATER_1_PIN
#define AIR_EVACUATION_PIN                  PB1   // FAN
//override Steppers pins
#define X_ENABLE_PIN                        PE1
#define X_STEP_PIN                          PE0
#define X_DIR_PIN                           PB9

#define Y_ENABLE_PIN                        PB8
#define Y_STEP_PIN                          PB5
#define Y_DIR_PIN                           PB4
/*
#define Z_ENABLE_PIN                        PE4
#define Z_STEP_PIN                          PE3
#define Z_DIR_PIN                           PE2
*/
#include "pins_MKS_ROBIN_NANO_common.h"
