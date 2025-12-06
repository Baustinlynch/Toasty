// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"
#include "toasty.h"

const uint16_t PROGMEM keymaps [][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x3(
        KC_CALCULATOR,   KC_MEDIA_PLAY_PAUSE,   KC_KB_MUTE,
        KC_UNDO,   C(S(KC_Z)),   KC_KB_VOLUME_UP,
        KC_COPY,   KC_PASTE,   KC_KB_VOLUME_DOWN
    ),
};
