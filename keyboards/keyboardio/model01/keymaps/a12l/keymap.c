/* Copyright 2018 James Laird-Wah
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

/* layer constants */
enum {
  DEF = 0,
  FUN,
  SYM,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[DEF] = LAYOUT(
  QK_BOOT, KC_1        , KC_2        , KC_3        , KC_4        , _______     ,                   _______        , KC_7        , KC_8        , KC_9        , KC_0        , _______,
  KC_A   , KC_J        , KC_G        , KC_M        , KC_P        , KC_V        , _______, _______, S(KC_3)        , KC_DOT      , KC_SLSH     , S(KC_QUOT)  , KC_QUOT     , KC_A   ,
  KC_A   , LALT_T(KC_C), LGUI_T(KC_S), LSFT_T(KC_N), LCTL_T(KC_T), HYPR_T(KC_K), _______, _______, HYPR_T(KC_COMM), RCTL_T(KC_A), RSFT_T(KC_E), RGUI_T(KC_I), RALT_T(KC_H), KC_A   ,
  _______, KC_X        , KC_F        , KC_L        , KC_D        , KC_W        , MO(SYM), MO(SYM), KC_MINS        , KC_U        , KC_O        , KC_Y        , KC_B        , _______,
                                                        KC_R   ,                                       KC_ENT ,
                                                           KC_BSPC,                                 KC_SPC ,
                                                              KC_LGUI,                           KC_ESC ,
                                                                 _______,                     _______,
                                                     MO(FUN),                                              MO(FUN)
  ),
[FUN] = LAYOUT(
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
  KC_TAB , _______, KC_MS_U, _______, KC_BTN3, _______, _______,    KC_MPRV, KC_MNXT, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_F12 ,
  KC_HOME, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1, _______, _______,    KC_MPLY, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
  KC_END , KC_PSCR, KC_INS , _______, KC_BTN2, _______, _______,    _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, KC_BSLS, KC_PIPE,
                                         _______,                                 _______,
                                            KC_DEL ,                           KC_ENT ,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[SYM] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  )
};

/* template for new layouts:
LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  )
*/

/* CKC: Custom Key Code */
enum
combos {
  WX2Z,
  XG2QU,
  TN2TH,
  CT2CH,
  SN2SH,
  WM2WH,
  GM2GH,
  FD2PH
};

enum
custom_keycodes {
  CKC_QU = SAFE_RANGE,
  CKC_TH,
  CKC_CH,
  CKC_SH,
  CKC_WH,
  CKC_GH,
  CKC_PH,
};

bool
process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    /* Defining my custom keycodes */
    case CKC_QU:
      if (record->event.pressed) {
          tap_code16(KC_Q);
          tap_code16(KC_U);
      }
      break;
    case CKC_TH:
      if (record->event.pressed) {
          tap_code16(KC_T);
          tap_code16(KC_H);
      }
      break;
    case CKC_CH:
      if (record->event.pressed) {
          tap_code16(KC_C);
          tap_code16(KC_H);
      }
      break;
    case CKC_SH:
      if (record->event.pressed) {
          tap_code16(KC_S);
          tap_code16(KC_H);
      }
      break;
    case CKC_WH:
      if (record->event.pressed) {
          tap_code16(KC_W);
          tap_code16(KC_H);
      }
      break;
    case CKC_GH:
      if (record->event.pressed) {
          tap_code16(KC_G);
          tap_code16(KC_H);
      }
      break;
    case CKC_PH:
      if (record->event.pressed) {
          tap_code16(KC_P);
          tap_code16(KC_H);
      }
      break;
    }
    return true;
};

const uint16_t PROGMEM
wx_combo[] = {KC_W, KC_X, COMBO_END};

const uint16_t PROGMEM
xg_combo[] = {KC_X, KC_G, COMBO_END};

const uint16_t PROGMEM
tn_combo[] = {KC_T, KC_N, COMBO_END};

const uint16_t PROGMEM
ct_combo[] = {KC_C, KC_T, COMBO_END};

const uint16_t PROGMEM
sn_combo[] = {KC_S, KC_N, COMBO_END};

const uint16_t PROGMEM
wm_combo[] = {KC_W, KC_M, COMBO_END};

const uint16_t PROGMEM
gm_combo[] = {KC_G, KC_M, COMBO_END};

const uint16_t PROGMEM
fd_combo[] = {KC_F, KC_D, COMBO_END};

combo_t
key_combos[] = {
  [WX2Z] = COMBO(wx_combo, KC_Z),
  [XG2QU] = COMBO(xg_combo, CKC_QU),
  [TN2TH] = COMBO(tn_combo, CKC_TH),
  [CT2CH] = COMBO(ct_combo, CKC_CH),
  [SN2SH] = COMBO(sn_combo, CKC_SH),
  [WM2WH] = COMBO(wm_combo, CKC_WH),
  [GM2GH] = COMBO(gm_combo, CKC_GH),
  [FD2PH] = COMBO(fd_combo, CKC_PH),
};

/* vim: set ts=2 sw=2 et: */
