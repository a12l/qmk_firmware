#ifdef COMBO_TERM_PER_COMBO
    uint16_t
    get_combo_term(uint16_t index, combo_t *combo) {
        // decide by combo->keycode
        switch (combo->keycode) {
            case KC_X:
                return 50;
        }
        // or with combo index, i.e. its name from enum.
        switch (index) {
            case COMBO_NAME_HERE:
                return 9001;
        }
        // And if you're feeling adventurous, you can even decide by the keys in the chord,
        // i.e. the exact array of keys you defined for the combo.
        // This can be useful if your combos have a common key and you want to apply the
        // same combo term for all of them.
        if (combo->keys[0] == KC_ENT) { // if first key in the array is Enter
            return 150;
        }
        return COMBO_TERM;
    }
#endif

#ifdef QUICK_TAP_TERM_PER_KEY
    uint16_t
    get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
        switch (keycode) {
            case SFT_T(KC_SPC):
                return QUICK_TAP_TERM - 20;
            default:
                return QUICK_TAP_TERM;
        }
    }
#endif
