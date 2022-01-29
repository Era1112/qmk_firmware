## Copyright 2022 Era James (@era1112)
## SPDX-License-Identifier: GPL-2.0-or-later

# DEFAULT STATEMENTS
# ==================

SRC += muse.c


# ADDED STATEMENTS
# ================

AUDIO_ENABLE = yes          # Audio output on
TAP_DANCE_ENABLE = yes		# For double-tap tapdances
DYNAMIC_MACRO_ENABLE = yes	# For dynamic macros
RGBLIGHT_ENABLE = yes		# For RGB lighting functions
ENCODER_ENABLE = yes		# For Rotary encoders


# Firmware minimization
CONSOLE_ENABLE = no
LTO_ENABLE = yes
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
MAGIC_ENABLE = no
