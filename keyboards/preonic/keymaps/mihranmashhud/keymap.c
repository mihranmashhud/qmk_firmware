/* Copyright 2015-2017 Jack Humbert
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

enum preonic_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LCtrl| RCtrl| Alt  |Super |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid(
  KC_GRV , KC_1   , KC_2   , KC_3   , KC_4 , KC_5  , KC_6  , KC_7 , KC_8   , KC_9   , KC_0   , KC_BSPC,
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R , KC_T  , KC_Y  , KC_U , KC_I   , KC_O   , KC_P   , KC_DEL ,
  KC_ESC , KC_A   , KC_S   , KC_D   , KC_F , KC_G  , KC_H  , KC_J , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V , KC_B  , KC_N  , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,
  KC_LCTL, KC_RCTL, KC_LALT, KC_LGUI, LOWER, KC_SPC, KC_SPC, RAISE, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
)        ,

/* Lower
 *,-----------------------------------------------------------------------------------.
 *|   ~  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | Bksp |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|   ~  |  F11 |  F12 |      |      |      |      |   {  |   }  |      |      |  Del |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *| CAPS |      |      |      |      |      |      |   _  |   +  |      |      | Pipe |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|      |      |      |      |      |      |      | ISO ~|  ISO |      |      |      |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |      |
 *`-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid(
  KC_TILD, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_BSPC,
  KC_TILD, KC_F11 , KC_F12 , _______, _______, _______, _______, KC_LCBR, KC_RCBR, _______, _______, KC_DEL ,
  KC_CAPS, _______, _______, _______, _______, _______, _______, KC_UNDS, KC_PLUS, _______, _______, KC_PIPE,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_END , _______,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
)        ,

/* Raise
 *,-----------------------------------------------------------------------------------.
 *|   `  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | Bksp |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|   `  |  F11 |  F12 |      |      |      |      |   [  |   ]  |      |      |  Del |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *| CAPS |      |      |      |      |      |      |   -  |   =  |      |      |   \  |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|      |      |      |      |      |      |      | ISO #| ISO /|      |      |      |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|      |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
 *`-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid(
  KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_BSPC,
  KC_GRV , KC_F11 , KC_F12 , _______, _______, _______, _______, KC_LBRC, KC_RBRC, _______, _______, KC_DEL ,
  KC_CAPS, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL , _______, _______, KC_BSLS,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, KC_PGDN, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
)        ,

/* Adjust (Lower + Raise)
 *,-----------------------------------------------------------------------------------.
 *|      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | Bksp |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|      |  F11 |  F12 | Debug| Reset|      |      | Hue- | Hue+ |RGBTog|      |  Del |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|      |      |      |Aud on|AudOff|AGnorm|AGswap| Sat- | Sat+ |RGBMod|      |      |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|      |Voice-|Voice+|      |      |      |      | Val- | Val+ |Veloci|      |      |
 *|------|------|------|------|------|------|------|------|------|------|------|------|
 *|      |      |      |      |      |      |      |      |      |      |      |      |
 *`-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid(
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_BSPC,
  _______, KC_F11 , KC_F12 , DEBUG  , RESET  , _______, _______, RGB_HUD, RGB_HUI, RGB_TOG, _______, KC_DEL ,
  KC_CAPS, _______, _______, AU_ON  , AU_OFF , AG_NORM, AG_SWAP, RGB_SAD, RGB_SAI, RGB_MOD, _______, _______,
  _______, MUV_DE , MUV_IN , _______, _______, _______, _______, RGB_VAD, RGB_VAI, VLK_TOG, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
    }
    return true;
};


void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
    }
}
