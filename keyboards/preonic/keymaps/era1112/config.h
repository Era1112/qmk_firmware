// Copyright 2022 Era James(@era1112)
// SPDX - License - Identifier: GPL - 2.0 - or -later

#pragma once


//----------- Default statements -----------//
//------------------------------------------//
#define MUSIC_MASK (keycode < 0xFF)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/
#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
// #define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2


//----------- Added statements -------------//
//------------------------------------------//
#define TAPPING_TERM 200                        // For tapdances

#define DYNAMIC_MACRO_NO_NESTING                // Improve dynamic macro stability

#ifdef AUDIO_ENABLE
	#define AUDIO_INIT_DELAY                    // to make startup audio work
	#define STARTUP_SONG SONG(PLANCK_SOUND)
	#define AUDIO_CLICKY                        // enable clicky mode

    // Clicky mode parameter deviations
    // #define AUDIO_CLICKY_FREQ_MIN          60.0f       // Default 65
    // #define AUDIO_CLICKY_FREQ_DEFAULT      715.0f      // Default 440
    // #define AUDIO_CLICKY_FREQ_MAX          1500.0f     // Default 1500
    // #define AUDIO_CLICKY_FREQ_FACTOR	     1.18921f    // Default 1.18921
    // #define AUDIO_CLICKY_FREQ_RANDOMNESS   1.0f        // Default 0.05
    // #define AUDIO_CLICKY_DELAY_DURATION    1           // Default 1

#endif  //AUDIO_ENABLE

#define RGBLIGHT_SLEEP                  // RGB lights turn off when host sleeps

// Firmware minimization
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT        // Limits keymap to 8 layers
#undef RGBLIGHT_ANIMATIONS      // Removes rgb animations
#define NO_ACTION_ONESHOT
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
