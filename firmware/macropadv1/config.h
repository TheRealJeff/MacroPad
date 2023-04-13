// Copyright 2023 Jeffrey (@TheRealJeff)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/*
 * Keyboard Matrix Assignments
 */
#define MATRIX_ROW_PINS { F7, F6, F5, F4 }
#define MATRIX_COL_PINS { E6, F0, F1 }
#define UNUSED_PINS { B0, B4, B5, B6, B7, C6, C7, D0, D1, D2, D3, D4, D5, D6, D7 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO
#define QMK_KEYS_PER_SCAN 12
