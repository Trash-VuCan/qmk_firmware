#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
//qmk compile -e CONVERT_TO=liatris -kb splitkb/aurora/sofle_v2 -km vujeku
//qmk compile -e -kb splitkb/aurora/sofle_v2 -km vujeku


void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
	KC_ESC, 		KC_1, 		KC_2, 		KC_3, 		KC_4, 		KC_5, 								KC_6, 		KC_7, 		KC_8, 		KC_9, 		KC_0, 		KC_GRV,
	KC_TAB, 		KC_Q, 		KC_W, 		KC_E, 		KC_R, 		KC_T, 								KC_Y, 		KC_U, 		KC_I, 		KC_O, 		KC_P, 		KC_SLSH,
	KC_LSFT, 		KC_A, 		KC_S, 		KC_D, 		KC_F, 		KC_G, 								KC_H, 		KC_J, 		KC_K, 		KC_L, 		KC_SCLN,	KC_BSPC,
	KC_LCTL, 		KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_B, 	  KC_MUTE, 	KC_PSCR,		KC_N, 		KC_M, 		KC_COMM,	KC_DOT, 	KC_LALT,	KC_RSFT,
										KC_LALT, KC_LGUI, MO(3), MO(1),   KC_SPC,   KC_ENT, 		MO(2), KC_ESC, KC_ESC, KC_DEL),
	[1] = LAYOUT(
	KC_TRNS, 		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 							KC_TRNS, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_TRNS, 		KC_EXLM, 	KC_AT, 		KC_HASH, 	KC_DLR 	, 	KC_PERC, 							KC_CIRC, 	KC_AMPR, 	KC_ASTR, 	KC_QUES,	KC_PIPE, 	KC_TRNS,
	KC_TRNS, 		LSFT(KC_QUOT), KC_QUOT	, KC_LCBR	, 	KC_RCBR, KC_EQL	,							KC_LBRC, 	KC_LPRN, 	KC_RPRN,    KC_RBRC, 	LSFT(KC_SCLN),KC_TRNS,
        KC_TRNS, 		KC_GRV, 	LSFT(KC_GRV),KC_SLSH , 	KC_UNDS, 	KC_BSLS,  KC_TRNS,  KC_TRNS,  		KC_PLUS, KC_MINS	, 	LSFT(KC_COMMA), 	LSFT(KC_DOT), KC_TRNS, KC_TRNS,
										KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(
	KC_TRNS, 		KC_F1, 		KC_F2, 		KC_F3, 		KC_F4, 		KC_F5, 								KC_F6, 		KC_F7, 		KC_F8, 		KC_F9, 		KC_F10, 	KC_NO,
	KC_TRNS, 		KC_F11, 	KC_F12, 	KC_NO, 		KC_NO, 		KC_NO, 								KC_NUM, 	KC_P7, 		KC_P8, 		KC_P9, 		KC_9, 		KC_NO,
	KC_TRNS, 		RALT(KC_Q), RALT(KC_S), RALT(KC_Y), RALT(KC_P), RALT(KC_NO), 						KC_NO, 		KC_P4, 		KC_P5, 		KC_P6, 		KC_P0, 		KC_NO,
	KC_TRNS, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,    KC_TRNS,  KC_TRNS, 		KC_NO, 		KC_P1,	 	KC_P2, 		KC_P3, 		KC_NO, 		KC_NO,
										KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(
	KC_NO, 			KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 								KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		RGB_MOD, 	RGB_TOG,
  KC_NO, 			KC_MPRV, 	KC_MNXT, 	KC_PSCR, 	KC_SCRL, 	KC_PAUS, 							KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		RGB_VAD, 	RGB_VAI,
  KC_NO, 			KC_MPLY, 	KC_NO, 		KC_INS, 	KC_HOME, 	KC_PGUP, 							KC_LEFT, 	KC_DOWN, 	KC_UP, 		KC_RGHT, 	RGB_SAD, 	RGB_SAI,
        KC_NO, 			KC_NO, 		KC_NO, 		KC_DEL, 	KC_END, 	KC_PGDN,  KC_NO,KC_NO,LCTL(LGUI(KC_LEFT)), 	LCTL(LGUI(KC_RIGHT)), 	KC_NO, 	KC_NO, 	RGB_HUD,    RGB_HUI,
						               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

// #if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {



// };
// #endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
/*
#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
  if (!encoder_update_user(index, clockwise)) {
    return false;
  }
  // 0 is left-half encoder,
  // 1 is right-half encoder
  if (index == 0) {
    // Volume control
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } else if (index == 1) {
    // Page up/Page down
    if (clockwise) {
      tap_code16(LCTL(KC_PPLS));
        } else {
            tap_code16(LCTL(KC_PPLS));
        }
  }
  return true;
}
#endif
*/