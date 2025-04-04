// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include "quantum/encoder.h"
#include QMK_KEYBOARD_H
#define NUM_DIRECTIONS 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ 1 │ 2 │
     * ├───┼───┤
     * │ 3 │ 4 │
     * ├───┼───┤
     * │ 5 │ 6 │
     * ├───┼───┤
     * │ 7 │ 8 │
     * ├───┼───┤
     * │ 9 │ 10│
     * └───┴───┘
     */
    [0] = LAYOUT(
        KC_1,   KC_2,   
        KC_3,   KC_4,
        KC_5,   KC_6,   
        KC_7,   KC_8,
        KC_9,   KC_0
    )
};


const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) , ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) }
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
    }
    return false;
}