/*
Copyright 2020 MisonoWorks

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6d77
#define PRODUCT_ID      0x3E6C
#define DEVICE_VER      0x0001
#define MANUFACTURER    MisonoWorks
#define PRODUCT         Colavan
#define DESCRIPTION     40% Van, with numpad!

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D1, D0, D4, D6 }
#define MATRIX_COL_PINS { D7, B4, B5, B6, C6, C7, F7, F6, F5, F4, F1, F0, D5, D3, D2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define FORCE_NKRO
#define MK_3_SPEED
#define TERMINAL_HELP

/* Define Lock Lights */
#define LED_NUM_LOCK_PIN B2
#define LED_CAPS_LOCK_PIN B7
#define LED_PIN_ON_STATE 1

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLIGHT_LIMIT_VAL 100
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_DI_PIN B3
#define DRIVER_LED_TOTAL 58
#ifdef RGB_DI_PIN
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_TYPING_HEATMAP
#endif