#pragma once

#define BOARD_INFO_NAME "Controllino"

//
// Limit Switches
//
#define X_MIN_PIN                               54 // A0
//#define X_MAX_PIN                              2
#define Y_MIN_PIN                               55 // A1
//#define Y_MAX_PIN                             17
#define Z_MIN_PIN                               56 // A2
//#define Z_MAX_PIN                             19

//
// Steppers
#define X_STEP_PIN                            2 // D0
#define X_DIR_PIN                             3 // D1
#define X_ENABLE_PIN                          22 // R0

#define Y_STEP_PIN                            4 // D2
#define Y_DIR_PIN                             5 // D3
#define Y_ENABLE_PIN                          23 // R1

#define Z_STEP_PIN                            6 // D4
#define Z_DIR_PIN                             7 // D5
#define Z_ENABLE_PIN                          24 // R2

#define E0_STEP_PIN                           9 // D7
#define E0_DIR_PIN                            10 // D8
#define E0_ENABLE_PIN                         25 // R3

//
// Temperature Sensors
//
//#define TEMP_0_PIN                             2  // Analog Input
//#define TEMP_BED_PIN                           1  // Analog Input

// SPI for MAX Thermocouple
#if !HAS_MEDIA
  #define TEMP_0_CS_PIN                       66  // Don't use 53 if using Display/SD card
#else
  #define TEMP_0_CS_PIN                       66  // Don't use 49 (SD_DETECT_PIN)
#endif

//
// Heaters / Fans
//
#if ENABLED(RAMPS_V_1_0)
  #define HEATER_0_PIN                        12
  #define HEATER_BED_PIN                      -1
  #ifndef FAN0_PIN
    #define FAN0_PIN                          11
  #endif
#else // RAMPS_V_1_1 or RAMPS_V_1_2
  #define HEATER_0_PIN                        10
  #define HEATER_BED_PIN                       8
  #ifndef FAN0_PIN
    #define FAN0_PIN                           9
  #endif
#endif

//
// Misc. Functions
//
#define SDPOWER_PIN                           48
#define SDSS                                  53
#define LED_PIN                               13

#ifndef CASE_LIGHT_PIN
  #define CASE_LIGHT_PIN                      45  // Hardware PWM
#endif

//
// M3/M4/M5 - Spindle/Laser Control
//
#if HAS_CUTTER
  #define SPINDLE_LASER_PWM_PIN               45  // Hardware PWM
  #define SPINDLE_LASER_ENA_PIN               41  // Pullup or pulldown!
  #define SPINDLE_DIR_PIN                     43
#endif
