/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

/* Encoder support */
#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B
#undef ENCODERS_PAD_A_RIGHT
#undef ENCODERS_PAD_B_RIGHT
#define ENCODERS_PAD_A \
    { F5 }
#define ENCODERS_PAD_B \
    { F4 }
#define ENCODERS_PAD_A_RIGHT \
    { F4 }
#define ENCODERS_PAD_B_RIGHT \
    { F5 }
#define ENCODER_RESOLUTION 2
#define ENCODER_DIRECTION_FLIP

// Underglow

#undef RGBLED_NUM
#define RGBLED_NUM 12  // Number of LEDs
#undef RGBLED_SPLIT
#define RGBLED_SPLIT \
    { 6, 6 }
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT
#define SPLIT_USB_DETECT
#undef RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LIMIT_VAL 150

#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD

// reduce size of image
#define NO_ACTION_ONESHOT
