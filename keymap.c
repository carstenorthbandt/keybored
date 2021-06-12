#include QMK_KEYBOARD_H
#include "print.h"

#define _COLY0 0
#define _COLY1 1
#define _COLY2 2

enum custom_keycodes {
  COLY0 = SAFE_RANGE,
  COLY1,
  COLY2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLY0] = LAYOUT(
     KC_ESCAPE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_PGUP,
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_PGDN,
     KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_UP  ,  KC_RSFT,
     KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,         KC_RALT,  KC_N,    KC_M, KC_BSPACE , KC_LEFT, KC_DOWN , KC_RGHT,
                                       KC_LGUI,   KC_SPC, COLY1,            COLY1, KC_ENTER, KC_RCTL
  ),
  [_COLY1] = LAYOUT(
     KC_ESCAPE, KC_VOLD, KC_VOLU, KC_MPLY, KC_MNXT, KC_QUES,                            KC_AMPR, KC_CIRC, KC_TILD, KC_DLR,  KC_HASH, KC_BSPACE,
     KC_TAB,    KC_RPRN, KC_RBRACKET, KC_RCBR, KC_GRAVE, KC_UNDS,                      KC_ASTR, KC_SLASH, KC_BSLS, KC_EQL,  KC_PIPE, KC_HOME,
     KC_LSFT,   KC_LPRN, KC_LBRACKET, KC_LCBR, KC_DQUO, KC_QUOT,                      KC_PLUS,  KC_MINS,  KC_PERC, KC_EXLM, KC_UP,   KC_END,
     KC_LCTL,   KC_DOT,  KC_COMMA,    KC_COLN, KC_SCLN, KC_AT, KC_LALT,       KC_RALT, KC_LABK, KC_RABK,  KC_DEL,  KC_LEFT, KC_DOWN , KC_RGHT,   
                                       KC_LGUI,   KC_SPC, COLY2,            COLY2, KC_ENTER, KC_RCTL
  ),
  [_COLY2] = LAYOUT(
     KC_F12,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                            KC_F7,   KC_F8,    KC_F9,    KC_F10,      KC_F11,      
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,       KC_O,    KC_P,     KC_PGUP,
     KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,       KC_L,    KC_UP  ,  KC_PGDN,
     KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,         KC_RALT,  KC_N,    KC_M,    KC_DEL , KC_LEFT, KC_DOWN , KC_RGHT,
                                       KC_LGUI,   KC_SPC, COLY2,            COLY2, KC_ENTER, KC_RCTL
  ),
/*

  [_COLY0] = LAYOUT(
     KC_ESCAPE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,       KC_9,    KC_0,     KC_SLASH,
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,       KC_O,    KC_P,     KC_PGUP,
     KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,       KC_L,    KC_UP  ,  KC_PGDN,
     KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,         KC_RALT,  KC_N,    KC_M,    KC_BSPACE , KC_LEFT, KC_DOWN , KC_RGHT,
                                           COLY1,   COLY2,   KC_SPC,         KC_ENTER,  KC_LGUI, KC_RCTL
  ),
  [_COLY1] = LAYOUT(
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                            KC_F7,   KC_F8,    KC_F9,    KC_F10,      KC_F11,      KC_F12,
     KC_TRNS, KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT,                          KC_QUOT, KC_GRAVE, KC_LPRN,  KC_LBRACKET, KC_LCBR,     KC_HOME,
     KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_ACL2,                          KC_DQUO, KC_TILDE, KC_SCLN,  KC_COMMA,    KC_TRNS,     KC_END,
     KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_ACL0, KC_TRNS,        KC_TRNS, KC_LABK, KC_RABK,  KC_DEL,   KC_TRNS,     KC_TRNS,     KC_TRNS,
                                         COLY1,    KC_RSFT, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_COLY2] = LAYOUT(
     _______,  SWIN(KC_1), SWIN(KC_2), SWIN(KC_3), SWIN(KC_4), SWIN(KC_5),   SWIN(KC_6), SWIN(KC_7), SWIN(KC_8), SWIN(KC_9), SWIN(KC_0), _______,
     KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_PIPE,    KC_UNDS,     KC_RPRN,  KC_RBRACKET, KC_RCBR,    KC_HOME,
     KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,                  KC_PLUS,    KC_MINS,     KC_COLN,    KC_DOT,    KC_TRNS, KC_END,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_EQL, KC_BSLS,   KC_DEL,   KC_TRNS,   KC_TRNS, KC_TRNS,
                                    KC_RSFT, COLY2, KC_TRNS,                    KC_TRNS,  KC_TRNS, KC_TRNS
  )
  */
/*
  [_COLY1] = LAYOUT(
     KC_F1,   KC_F2,      KC_F3,   KC_F4,   KC_F5,  KC_F6,                            KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
     KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       UC(0x27),    UC(0x60),    UC(0x2f),    UC(0x5b),    UC(0x5d),    KC_HOME,
     KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,                  UC(0x22),    UC(0x7e),    UC(0x3b),    UC(0x2c),    KC_TRNS, KC_END,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, UC(0x3c), UC(0x3e),   KC_DEL,   KC_TRNS,   KC_TRNS, KC_TRNS,
                                    COLY1, _______, KC_TRNS,                    KC_TRNS,  KC_TRNS, KC_TRNS
  ),

  [_COLY2] = LAYOUT(
     KC_F1,   KC_F2,      KC_F3,   KC_F4,   KC_F5,  KC_F6,                            KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
     KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       UC(0x2a),    UC(0x5f),    UC(0x5c),    UC(0x7b),    UC(0x7d),    KC_HOME,
     KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,                  UC(0x2b),    UC(0x2d),    UC(0x3a),    UC(0x2e),    KC_TRNS, KC_END,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, UC(0x3d), UC(0x21),   KC_DEL,   KC_TRNS,   KC_TRNS, KC_TRNS,
                                    _______, COLY2, KC_TRNS,                    KC_TRNS,  KC_TRNS, KC_TRNS
  )
  */
};

uint8_t current_real_keys_down=0;

uint8_t resetkeys_down=0;

uint16_t base_color=0;
uint16_t base_brightness=200;
uint16_t idle_level=0;
uint8_t cur_hue=29;
uint8_t tgt_hue=30;
uint8_t idle_hue=20;
uint8_t cur_sat=0;
uint8_t tgt_sat=0;
uint8_t cur_lvl=0;
uint8_t tgt_lvl=255;
uint8_t scantickidx=0;

void byteupd(uint8_t* v,uint8_t t) {
   int curv=(int)(*v);
   int tgtv=(int)(t);
   curv=((curv*63)+tgtv)/64;
   if(curv<tgtv) {
      curv++;
   };
   if(curv>tgtv) {
      curv--;
   };
      *v=(uint8_t)curv;
}

void co_update_light(bool bPressed) {
   if(bPressed){
      idle_level=0;
   }
   bool bLPreset=false;
   tgt_sat=80;
   if(idle_level<10) {
      tgt_lvl=255;
      idle_hue=10;
//      rgblight_sethsv_noeeprom(180, 0, 255);
   } else {
      int idl=(idle_level-10)/50;
      if(idl>235) {
         idl=235;
      };
      idle_hue=10+(idl*210)/235;
      tgt_sat=80+(idl*(255-80))/235;
      tgt_lvl=255-idl;
      if(idle_level>20000) {
         tgt_lvl=0;
      };
//      rgblight_sethsv_noeeprom(180, 0, 50);
   }

//      uprintf("DbgL : %d %d\n",layer_state,bPressed);
   if(layer_state==0) {
//      uprintf("DbgL 0\n");
//           rgblight_sethsv_noeeprom(180, 0, iVal); 
      if(!bLPreset) {
         tgt_hue=idle_hue;
      };
   }
   if(layer_state&(1UL <<_COLY1)) {
//      uprintf("DbgL 1\n");
//           rgblight_sethsv_noeeprom(160, 180, iVal); 
         tgt_hue=0;
         tgt_sat=250;

   }
   if(layer_state&(1UL <<_COLY2)) {
//      uprintf("DbgL 2\n");
//           rgblight_sethsv_noeeprom(60, 180, iVal); 
         tgt_hue=80;
         tgt_sat=250;
   }
   if((tgt_lvl!=cur_lvl)||(tgt_hue!=cur_hue)||(tgt_sat!=cur_sat)){
      byteupd(&cur_lvl,tgt_lvl);
      byteupd(&cur_hue,tgt_hue);
      byteupd(&cur_sat,tgt_sat);
      rgblight_sethsv_noeeprom(cur_hue, cur_sat, cur_lvl);
   }
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
//  debug_enable=true;
//  debug_matrix=false;
  rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv_noeeprom(180, 0, 200); // sets the color to teal/cyan without saving
  rgblight_mode_noeeprom(0); // sets mode to Fast breathing without saving
  //debug_keyboard=true;
  //debug_mouse=true;
  co_update_light(true);
}

void matrix_scan_user(void) {
   scantickidx++;
   if(scantickidx>=20) {
      scantickidx=0;
      if(idle_level<32767){
         idle_level++;
         co_update_light(false);
      }
   }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   int r=record->event.key.row;
   int c=record->event.key.col;
   bool p=record->event.pressed;

   bool bAnyPressed=p;

   if((r==0)&&(c==0)){
      if(p){resetkeys_down|=0x1;}else{resetkeys_down&=~0x1;};
   }
   if((r==3)&&(c==0)){
      if(p){resetkeys_down|=0x2;}else{resetkeys_down&=~0x2;};
   }
   if((r==5)&&(c==0)){
      if(p){resetkeys_down|=0x4;}else{resetkeys_down&=~0x4;};
   }
   if((r==8)&&(c==0)){
      if(p){resetkeys_down|=0x8;}else{resetkeys_down&=~0x8;};
   }
   if(resetkeys_down==0xf){
      rgblight_sethsv_noeeprom(0, 255, 255); // sets the color to teal/cyan without saving
      wait_ms(100);
      rgblight_sethsv_noeeprom(180, 255, 255); // sets the color to teal/cyan without saving
      wait_ms(100);
      reset_keyboard();
      return false;
   }

   /*
   if(record->event.key.row==8){
      if(record->event.key.col==0){
           rgblight_sethsv_noeeprom(180, 255, 255); // sets the color to teal/cyan without saving
      };
      if(record->event.key.col==1){
  rgblight_sethsv_noeeprom(255, 255, 255); // sets the color to teal/cyan without saving
      };
      if(record->event.key.col==2){
  rgblight_sethsv_noeeprom(255, 255, 0); // sets the color to teal/cyan without saving
      };
   };
   */
  switch (keycode) {
    case COLY0:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLY0);
      }
      co_update_light(bAnyPressed);
      return false;
      break;
    case COLY1:
      if (record->event.pressed) {
        layer_on(_COLY1);
//        update_tri_layer(_COLY1, _COLY2, _COLY2);
      } else {
        layer_off(_COLY1);
//        update_tri_layer(_COLY1, _COLY2, _COLY2);
      }
      co_update_light(bAnyPressed);
      return false;
      break;
    case COLY2:
      if (record->event.pressed) {
        layer_on(_COLY2);
//        update_tri_layer(_COLY1, _COLY2, _COLY2);
      } else {
        layer_off(_COLY2);
//        update_tri_layer(_COLY1, _COLY2, _COLY2);
      }
      co_update_light(bAnyPressed);
      return false;
      break;
  }
  if(bAnyPressed) {
   current_real_keys_down++;
  } else {
   current_real_keys_down--;
  };
      co_update_light(bAnyPressed);
  return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
}
