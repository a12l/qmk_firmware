enum
combos {
    AI2ARNG,
    AE2ADIA,
    OE2ODIA
};

/* */
const uint16_t PROGMEM
    ai_combo[] = {LGUI_T(SE_A), LALT_T(SE_I), COMBO_END},
    ae_combo[] = {LGUI_T(SE_A), RSFT_T(SE_E), COMBO_END},
    oe_combo[] = {RGUI_T(SE_O), RSFT_T(SE_E), COMBO_END};

/*  */
combo_t
key_combos[] = {
    [AI2ARNG] = COMBO(ai_combo, SE_ARNG),
    [AE2ADIA] = COMBO(ae_combo, SE_ADIA),
    [OE2ODIA] = COMBO(oe_combo, SE_ODIA),
};

