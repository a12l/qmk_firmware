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
#include "sendstring_swedish.h"

#include "users/a12l/a12l.h"

// KC_HELP
// KC_MAIL KC_CALCULATOR KC_MY_COMPUTER
// KC_SELECT KC_FIND KC_STOP KC_AGAIN
/* KC_WWW_FAVORITES */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT(
  QK_BOOT, _______     , _______     , _______     , _______        , _______     ,                     _______     , _______        , _______     , _______     , _______     , _______,
  _______, SE_Q        , SE_W        , SE_F        , SE_P           , SE_B        , _______,   _______, SE_J        , SE_L           , SE_U        , SE_Y        , SE_QUOT     , _______,
  _______, LGUI_T(SE_A), LALT_T(SE_R), LSFT_T(SE_S), LCTL_T(SE_T)   , HYPR_T(SE_G), _______,   _______, HYPR_T(SE_M), RCTL_T(SE_N)   , RSFT_T(SE_E), LALT_T(SE_I), RGUI_T(SE_O), _______,
  _______, SE_Z        , SE_X        , SE_C        , LT(MACRO, SE_D), SE_V        , _______,   _______, SE_K        , LT(MACRO, SE_H), SE_COMM     , SE_DOT      , SE_SLSH     , _______,
                                         LT(MEDIA, KC_ESC),                                 LT(FUN, KC_DEL),
                                            LT(NAV, KC_BSPC),                             LT(NUM, KC_SPC),
                                               LT(MOUSE, KC_TAB),                     LT(SYM, KC_ENT),
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[FUN] = LAYOUT(
  _______, _______, _______, _______, _______, _______        ,                      _______, _______, _______, _______, _______, _______,
  _______, KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PRINT_SCREEN, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_APPLICATION , _______,    _______, KC_HYPR, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI, _______,
  _______, KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUSE       , _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[MACRO] = LAYOUT(
  _______, _______, _______  , _______, _______ , _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______  , _______, _______ , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, CKC_LAPCE, CKC_CD , CKC_SKIM, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______  , _______, _______ , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[MEDIA] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______    , _______    , _______           , _______         , _______       , _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______    , _______    , KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, _______       , _______,
  _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR, _______,    _______, KC_WWW_STOP, KC_WWW_BACK, KC_WWW_REFRESH    , KC_WWW_SEARCH   , KC_WWW_FORWARD, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______    , KC_MPRV    , KC_VOLD           , KC_VOLU         , KC_MNXT       , _______,
                                         _______,                                 KC_MUTE,
                                            _______,                           KC_MPLY,
                                               _______,                     KC_MSTP,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[MOUSE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______      , _______      , _______    , _______       , _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_PASTE     , KC_CUT       , KC_COPY    , KC_UNDO       , _______,
  _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR, _______,    _______, _______, KC_MS_L      , KC_MS_D      , KC_MS_U    , KC_MS_R       , _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, _______,
                                         _______,                                 KC_BTN3,
                                            _______,                           KC_BTN1,
                                               _______,                     KC_BTN2,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[NAV] = LAYOUT( // ,
  _______, _______, _______, _______, _______, _______,                     _______, _______      , _______      , _______    , _______       , _______,
  _______, _______, _______, _______, _______, _______, _______,   _______, _______, KC_HOME      , KC_PAGE_DOWN , KC_PAGE_UP , KC_END        , _______,
  _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR, _______,   _______, _______, KC_LEFT      , KC_DOWN      , KC_UP      , KC_RGHT       , _______,
  _______, _______, _______, _______, _______, _______, _______,   _______, _______, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[NUM] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, SE_LBRC, SE_7   , SE_8   , SE_9   , SE_RBRC, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, SE_LCBR, SE_4   , SE_5   , SE_6   , SE_RCBR, _______,    _______, KC_HYPR, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI, _______,
  _______, SE_LABK, SE_1   , SE_2   , SE_3   , SE_BSLS, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         SE_PIPE,                                 _______,
                                           SE_0   ,                           _______,
                                               SE_MINS,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[SYM] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, SE_DLR , SE_GRV , SE_CIRC, SE_PLUS, _______,    _______, KC_HYPR, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI, _______,
  _______, SE_TILD, _______, SE_AT  , _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  )
};

bool
process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    /* Give me the mods, layer, kc of typed */
    /* https://www.reddit.com/r/olkb/comments/ugkwxg/comment/i712e6p */
    // case QK_MOD_TAP ... QK_MOD_TAP_MAX:      /* this detects a mod tap key */
    //   uint8_t mods = (keycode >> 8) & 0x1F;  /* mod bits of MT key */
    //   uint8_t kc   = keycode & 0xFF;         /* keycode of MT key */
    //   /* put code for what you want to do here */

    // case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:  /* this detects a layer tap key */
    //   uint8_t layer = (keycode >> 8) & 0xF;  /* layer of LT key */
    //   uint8_t kc    = keycode & 0xFF;        /* keycode of LT key */
    //   /* put code for what you want to do here */

    /* Defining my custom keycodes */
    case CKC_CD:
      if (record->event.pressed) {
        SEND_STRING("cd ");
      }
      break;
    case CKC_LAPCE:
      if (record->event.pressed) {
        SEND_STRING("lapce ");
      }
      break;
    case CKC_SKIM:
      if (record->event.pressed) {
        SEND_STRING("$(sk)");
      }
      break;
    }
    return true;
};

/* vim: set ts=2 sw=2 et: */
