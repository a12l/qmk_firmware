SRC += a12l.c

# Remove RGB encoding to save space on flash
RGB_MATRIX_ENABLE = no

# Enable Link Time Optimization to save space on flash.
LTO_ENABLE = yes

# Enable key combos
COMBO_ENABLE = yes
INTROSPECTION_KEYMAP_C += combos.c

CAPS_WORD_ENABLE = yes

CONSOLE_ENABLE = no
