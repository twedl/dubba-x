/* Copyright 2020 drhigsby
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _NUM,
  _SYM
};

#define xxx KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RGUI_T(KC_K), LALT_T(KC_L), RCTL_T(KC_SCLN),
        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                KC_ESC, KC_TAB, LT(_SYM, KC_ENT), LT(_NUM, KC_SPC), LT(_SYM, KC_BSPC), xxx
  ),


    [_SYM] = LAYOUT(
 	KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR,
KC_ASTR, KC_BSLS, KC_PIPE, 
	KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_UNDS, KC_MINS,
KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK, 
	KC_TILD, KC_GRV, KC_SCLN, KC_COLN, KC_0, KC_1, KC_DQUO,
KC_QUOT, KC_PLUS, KC_EQL,
	xxx, xxx, xxx, xxx, xxx, xxx
  ),


    [_NUM] = LAYOUT(
	KC_DEL, _______, KC_ESC, _______, _______, _______, _______,
KC_TAB, _______, _______, 
	LCTL_T(KC_1), LALT_T(KC_2), LGUI_T(KC_3), LSFT_T(KC_4), KC_5,
KC_6, RSFT_T(KC_7), RGUI_T(KC_8), LALT_T(KC_9), RCTL_T(KC_0), 
	xxx, xxx, xxx, xxx, xxx, xxx, xxx, xxx, xxx, xxx,
	xxx, xxx, xxx, xxx, xxx, xxx
  )

};
