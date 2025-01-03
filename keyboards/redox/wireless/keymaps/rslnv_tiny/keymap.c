#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _SYMB,
};

// layer _QWERTY
// mod taps
#define CKC_A LALT_T(KC_A) // l alt, a
#define CKC_S LGUI_T(KC_S) // l meta, s
#define CKC_D LCTL_T(KC_D) // l control, d
#define CKC_F LSFT_T(KC_F) // l shift, f
#define CKC_G HYPR_T(KC_G) // hyper, g

#define CKC_H HYPR_T(KC_H) // hyper, h
#define CKC_J RSFT_T(KC_J) // r shift, j
#define CKC_K RCTL_T(KC_K) // r control, k
#define CKC_L RGUI_T(KC_L) // r meta, l
#define CKC_SCLN RALT_T(KC_SCLN) // r alt, ;:

#define CKC_BSPC LT(_SYMB, KC_BSPC) // layer _SYMB, backspace
#define CKC_DEL LT(_SYMB, KC_DEL) // layer _SYMB, delete

// combos
const uint16_t PROGMEM combo_grv[] = {CKC_S, CKC_D, COMBO_END}; // `~

const uint16_t PROGMEM combo_tab[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_mins[] = {CKC_D, CKC_F, COMBO_END};
const uint16_t PROGMEM combo_lbrc[] = {KC_C, KC_V, COMBO_END}; // [{

const uint16_t PROGMEM combo_esc[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo_eql[] = {CKC_J, CKC_K, COMBO_END};
const uint16_t PROGMEM combo_rbrc[] = {KC_M, KC_COMM, COMBO_END}; // ]}

const uint16_t PROGMEM combo_quot[] = {CKC_K, CKC_L, COMBO_END}; // '"
const uint16_t PROGMEM combo_bsls[] = {KC_COMM, KC_DOT, COMBO_END}; // \|

combo_t key_combos[] = {
    COMBO(combo_grv, KC_GRV),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_mins, KC_MINS),
    COMBO(combo_lbrc, KC_LBRC),

    COMBO(combo_esc, KC_ESC),
    COMBO(combo_eql, KC_EQL),
    COMBO(combo_rbrc, KC_RBRC),
    COMBO(combo_quot, KC_QUOT),
    COMBO(combo_bsls, KC_BSLS),
};

// layer _SYMB
// mod taps
#define CKC_HOME LGUI_T(KC_HOME) // l meta, home
#define CKC_PGUP LCTL_T(KC_PGUP) // l control, page up
#define CKC_PGDN LSFT_T(KC_PGDN) // l shift, page down

#define CKC_DOWN RSFT_T(KC_DOWN) // r shift, down
#define CKC_UP RCTL_T(KC_UP) // r control, up
#define CKC_RIGHT RGUI_T(KC_RIGHT) // r meta, right

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬─────────┬────────┐                                            ┌────────┬────────┬────────┬────────┬─────────┬────────┐
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX  ,XXXXXXX ,                                             XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX  ,KC_CAPS ,
  //├────────┼────────┼────────┼────────┼─────────┼────────┼─────────┐                         ┌────────┼────────┼────────┼────────┼────────┼─────────┼────────┤
     XXXXXXX ,KC_Q    ,KC_W    ,KC_E    ,KC_R     ,KC_T    ,XXXXXXX  ,                          XXXXXXX ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P     ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼─────────┼────────┼─────────┤                         ├────────┼────────┼────────┼────────┼────────┼─────────┼────────┤
     XXXXXXX ,CKC_A   ,CKC_S   ,CKC_D   ,CKC_F    ,CKC_G   ,XXXXXXX  ,                          XXXXXXX ,CKC_H   ,CKC_J   ,CKC_K   ,CKC_L   ,CKC_SCLN ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼─────────┼────────┼─────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼─────────┼────────┤
     XXXXXXX ,KC_Z    ,KC_X    ,KC_C    ,KC_V     ,KC_B    ,KC_PSCR  ,KC_SCRL ,        KC_PAUS ,KC_INS  ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH  ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼─────┬───┴────┬───┼─────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼─────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,      XXXXXXX ,    CKC_BSPC ,KC_ENT  ,        KC_SPC  ,CKC_DEL ,    XXXXXXX ,     XXXXXXX ,XXXXXXX ,XXXXXXX  ,XXXXXXX
  //└────────┴────────┴────────┴────────┘     └────────┘   └─────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴─────────┴────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────┬────────┬─────────┬─────────┬─────────┬────────┐                                           ┌────────┬─────────┬────────┬──────────┬────────┬────────┐
     XXXXXXX ,KC_F1   ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F5   ,                                            KC_F6   ,KC_F7    ,KC_F8   ,KC_F9     ,KC_F10  ,XXXXXXX ,
  //├────────┼────────┼─────────┼─────────┼─────────┼────────┼────────┐                         ┌────────┼────────┼─────────┼────────┼──────────┼────────┼────────┤
     XXXXXXX ,KC_1    ,KC_2     ,KC_3     ,KC_4     ,KC_5    ,_______ ,                          _______ ,KC_6    ,KC_7     ,KC_8    ,KC_9      ,KC_0    ,XXXXXXX ,
  //├────────┼────────┼─────────┼─────────┼─────────┼────────┼────────┤                         ├────────┼────────┼─────────┼────────┼──────────┼────────┼────────┤
     XXXXXXX ,KC_LALT ,CKC_HOME ,CKC_PGUP ,CKC_PGDN ,KC_END  ,KC_F11  ,                          KC_F12  ,KC_LEFT ,CKC_DOWN ,CKC_UP  ,CKC_RIGHT ,KC_RALT ,XXXXXXX ,
  //├────────┼────────┼─────────┼─────────┼─────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼─────────┼────────┼──────────┼────────┼────────┤
     _______ ,XXXXXXX ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX ,QK_BOOT ,XXXXXXX ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX  ,XXXXXXX ,XXXXXXX   ,XXXXXXX ,_______ ,
  //├────────┼────────┼─────────┼─────────┼────┬────┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬─────┼────────┼──────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX  ,XXXXXXX  ,     _______  ,    _______ ,_______ ,        _______ ,_______ ,    _______ ,      XXXXXXX ,XXXXXXX   ,XXXXXXX ,XXXXXXX
  //└────────┴────────┴─────────┴─────────┘    └─────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘     └────────┴──────────┴────────┴────────┘
  ),
};
