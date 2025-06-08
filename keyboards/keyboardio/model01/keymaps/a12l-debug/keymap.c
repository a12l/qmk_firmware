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
//#include "users/a12l/swedish_longform.h"

// KC_HELP
// KC_MAIL KC_CALCULATOR KC_MY_COMPUTER
// KC_SELECT KC_FIND KC_STOP KC_AGAIN
/* KC_WWW_FAVORITES */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*[ALPHA] = LAYOUT(
  QK_BOOT, _______     , _______     , _______     , _______        , _______     ,                     _______     , _______        , _______     , _______     , _______     , _______,
  _______, KC_Q        , KC_W        , KC_F        , KC_P           , KC_B        , _______,   _______, KC_J        , KC_L           , KC_U        , KC_Y        , SE_QUOT    , _______,
  _______, LGUI_T(KC_A), LALT_T(KC_R), LSFT_T(KC_S), LCTL_T(KC_T)   , HYPR_T(KC_G), _______,   _______, HYPR_T(KC_M), RCTL_T(KC_N)   , RSFT_T(KC_E), LALT_T(KC_I), RGUI_T(KC_O), _______,
  _______, KC_Z        , KC_X        , KC_C        , LT(MACRO, KC_D), KC_V        , _______,   _______, KC_K        , LT(MACRO, KC_H), KC_COMMA    , KC_DOT      , SE_MINS    , _______,
                                         LT(BETA, KC_ESC),                                 LT(ETA, KC_DEL),
                                            LT(GAMMA, KC_BSPC),                         LT(ZETA, KC_SPC),
                                               LT(DELTA, KC_TAB),                     LT(EPSILON, KC_ENT),
                                                  _______,               _______,
                                      _______,                                        _______
  ),*/
[ALPHA] = LAYOUT(
  QK_BOOT, _______     , _______     , _______     , _______        , _______     ,                     _______     , _______        , _______     , _______     , _______     , _______,
  _______, SE_Q        , SE_W        , SE_F        , SE_P           , SE_B        , _______,   _______, SE_J        , SE_L           , SE_U        , SE_Y        , SE_QUOT    , _______,
  _______, LGUI_T(SE_A), LALT_T(SE_R), LSFT_T(SE_S), LCTL_T(SE_T)   , HYPR_T(SE_G), _______,   _______, HYPR_T(SE_M), RCTL_T(SE_N)   , RSFT_T(SE_E), LALT_T(SE_I), RGUI_T(SE_O), _______,
  _______, SE_Z        , SE_X        , SE_C        , LT(MACRO, SE_D), SE_V        , _______,   _______, SE_K        , LT(MACRO, SE_H), SE_COMM    , SE_DOT      , SE_MINS    , _______,
                                         LT(BETA, KC_ESC),                                 LT(ETA, KC_DEL),
                                            LT(GAMMA, KC_BSPC),                         LT(ZETA, KC_SPC),
                                               LT(DELTA, KC_TAB),                     LT(EPSILON, KC_ENT),
                                                  _______,               _______,
                                      _______,                                        _______
  ),
/*[US_ALPHA] = LAYOUT(
  QK_BOOT, _______     , _______     , _______     , _______     , _______     ,                     _______     , _______     , _______     , _______     , _______     , _______,
  _______, KC_Q        , KC_W        , KC_F        , KC_P        , KC_B        , _______,   _______, KC_J        , KC_L        , KC_U        , KC_Y        , KC_QUOTE    , _______,
  _______, LGUI_T(KC_A), LALT_T(KC_R), LSFT_T(KC_S), LCTL_T(KC_T), HYPR_T(KC_G), _______,   _______, HYPR_T(KC_M), RCTL_T(KC_N), RSFT_T(KC_E), LALT_T(KC_I), RGUI_T(KC_O), _______,
  _______, KC_Z        , KC_X        , KC_C        , KC_D        , KC_V        , _______,   _______, KC_K        , KC_H        , KC_COMMA    , KC_DOT      , KC_MINUS    , _______,
                                         LT(US_BETA, KC_ESC),                                 LT(ETA, KC_DEL),
                                            LT(GAMMA, KC_BSPC),                         LT(US_ZETA, KC_SPC),
                                               LT(DELTA, KC_TAB),                     LT(EPSILON, KC_ENT),
                                                  _______,               _______,
                                      _______,                                        _______
  ), */
/* [BETA] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______    , _______      , _______       , _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, SE_QUESTION, SE_EXCLAIM   , _______       , SE_AT  , _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, SE_GRAVE   , SE_LEFT_PAREN, SE_RIGHT_PAREN, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______    , _______      , _______       , _______, _______,
                                         _______,                                 MO(ETA),
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),*/
[BETA] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______    , _______      , _______       , _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, SE_QUES, SE_EXLM   , _______       , SE_AT  , _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, SE_GRV   , SE_LPRN, SE_RPRN, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______    , _______      , _______       , _______, _______,
                                         _______,                                 MO(ETA),
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
/* [US_BETA] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______    , _______      , _______       , _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_QUESTION, KC_EXCLAIM   , _______       , KC_AT  , _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_GRAVE   , KC_LEFT_PAREN, KC_RIGHT_PAREN, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______    , _______      , _______       , _______, _______,
                                         _______,                                 MO(ETA),
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ), */
[GAMMA] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______      , _______      , _______    , _______       , _______,
  _______, _______, _______, _______, _______, _______, _______,   _______, _______, KC_HOME      , KC_PAGE_DOWN , KC_PAGE_UP , KC_END        , _______,
  _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR, _______,   _______, _______, KC_LEFT      , KC_DOWN      , KC_UP      , KC_RGHT       , _______,
  _______, _______, _______, _______, _______, _______, _______,   _______, _______, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, _______,
                                         _______,                                 _______,
                                            _______,                           MO(ZETA),
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[DELTA] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______      , _______      , _______    , _______       , _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_PASTE     , KC_CUT       , KC_COPY    , KC_UNDO       , _______,
  _______, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_HYPR, _______,    _______, _______, KC_MS_L      , KC_MS_D      , KC_MS_U    , KC_MS_R       , _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, _______,
                                         _______,                                 KC_BTN3,
                                            _______,                           KC_BTN1,
                                               _______,                     KC_BTN2 /* MO(EPSILON) */,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[EPSILON] = LAYOUT( /* KC_HELP KC_AGAIN KC_STOP */
  _______, _______, _______  , _______       , _______        , _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, KC_INSERT, _______       , KC_PRINT_SCREEN, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, KC_MENU  , KC_APPLICATION, KC_FIND        , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, KC_PAUSE , _______       , KC_SELECT      , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                             MO(DELTA),                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[ZETA] = LAYOUT(
  _______, _______ , _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, SE_TILD, SE_HASH, SE_DLR , SE_RBRC, SE_PLUS, _______, _______, _______, _______, SE_UNDS, _______, SE_CIRC, _______,
  _______, SE_SLSH, SE_DLR , SE_LCBR, SE_RCBR, SE_EQL , _______, _______, _______, SE_UNDS, SE_UNDS, SE_AMPR, SE_PERC, _______,
  _______, SE_ASTR , SE_PIPE, SE_LABK, SE_RABK, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            MO(GAMMA),                         _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
/* [ZETA] = LAYOUT(
  _______, _______    , _______  , _______              , _______               , _______ ,                   _______, _______      , _______     , _______     , _______      , _______,
  _______, SE_TILD   , SE_HASH  , SE_LEFT_BRACKET      , SE_RIGHT_BRACKET      , SE_PLUS , _______, _______, _______, _______      , SE_BACKSLASH, _______     , SE_CIRCUMFLEX, _______,
  _______, SE_SLSH   , SE_DOLLAR, SE_LEFT_CURLY_BRACE  , SE_RIGHT_CURLY_BRACE  , SE_EQUAL, _______, _______, _______, SE_UNDERSCORE, SE_QUOTE    , SE_AMPERSAND, SE_PERCENT   , _______,
  _______, SE_ASTR, SE_PIPE  , SE_LEFT_ANGLE_BRACKET, SE_RIGHT_ANGLE_BRACKET, _______ , _______, _______, _______, _______      , _______     , _______     , _______      , _______,
                                         _______,                                 _______,
                                            MO(GAMMA),                         _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),*/
/* [US_ZETA] = LAYOUT(
  _______, _______    , _______  , _______              , _______               , _______ ,                   _______, _______      , _______     , _______     , _______      , _______,
  _______, KC_TILDE   , KC_HASH  , KC_LEFT_BRACKET      , KC_RIGHT_BRACKET      , KC_PLUS , _______, _______, _______, _______      , KC_BACKSLASH, _______     , KC_CIRCUMFLEX, _______,
  _______, KC_SLASH   , KC_DOLLAR, KC_LEFT_CURLY_BRACE  , KC_RIGHT_CURLY_BRACE  , KC_EQUAL, _______, _______, _______, KC_UNDERSCORE, KC_QUOTE    , KC_AMPERSAND, KC_PERCENT   , _______,
  _______, KC_ASTERISK, KC_PIPE  , KC_LEFT_ANGLE_BRACKET, KC_RIGHT_ANGLE_BRACKET, _______ , _______, _______, _______, _______      , _______     , _______     , _______      , _______,
                                         _______,                                 _______,
                                            MO(GAMMA),                         _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ), */
[ETA] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, KC_7   , KC_8   , KC_9   , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, KC_4   , KC_5   , KC_6   , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, KC_1   , KC_2   , KC_3   , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         MO(BETA),                                 _______,
                                            KC_0   ,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[MACRO] = LAYOUT(
  _______, _______, _______, _______, _______ , _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______ , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, CKC_CD , CKC_SKIM, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______ , _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[UPSILON] = LAYOUT(
  _______, _______, _______, _______  , _______, _______,                      _______, _______, _______     , _______, _______, _______,
  _______, _______, _______, _______  , _______, _______, _______,    _______, _______, _______, /**DF(US_ALPHA)*/_______, _______, _______, _______,
  _______, _______, _______, DF(ALPHA), _______, _______, _______,    _______, _______, _______, _______     , _______, _______, _______,
  _______, _______, _______, _______  , _______, _______, _______,    _______, _______, _______, _______     , _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[PSI] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_F15 , _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_F14 , _______,    _______, KC_HYPR, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI, _______,
  _______, KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_F13 , _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
[OMEGA] = LAYOUT(
  _______, _______    , _______       , _______    , _______       , _______,                   _______, _______, _______           , _______         , _______       , _______,
  _______, _______    , _______       , _______    , _______       , _______, _______, _______, _______, _______, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, _______       , _______,
  _______, KC_WWW_BACK, KC_WWW_REFRESH, KC_WWW_STOP, KC_WWW_FORWARD, _______, _______, _______, _______, KC_MPRV, KC_VOLD           , KC_VOLU         , KC_MNXT       , _______,
  _______, _______    , _______       , _______    , _______       , _______, _______, _______, _______, KC_MUTE, KC_MPLY           , KC_MSTP         , _______       , _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  )
};

layer_state_t
layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, BETA, ETA, OMEGA);
  state = update_tri_layer_state(state, GAMMA, ZETA, PSI);
  state = update_tri_layer_state(state, DELTA, EPSILON, UPSILON);
  return state;
}

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
    case CKC_SKIM:
      if (record->event.pressed) {
        SEND_STRING("$(sk)");
      }
      break;
    }
    return true;
};

/* vim: set ts=2 sw=2 et: */
