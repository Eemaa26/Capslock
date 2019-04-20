// Generated by TKG at 2019-04-21 02:16:46

#include "keymap_common.h"

#define KEYMAP_TKG( \
    K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N, \
    K4A, K4B, K4C,      K4E, K4F, K4G,      K4I, K4J, K4K, K4L, K4M, K4N  \
) { \
    { KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F, KC_##K0G, KC_##K0H, KC_##K0I, KC_##K0J, KC_##K0K, KC_##K0L, KC_##K0M, KC_##K0N }, \
    { KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N }, \
    { KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_##K2N }, \
    { KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_##K3M, KC_##K3N }, \
    { KC_##K4A, KC_##K4B, KC_##K4C, KC_NO,    KC_##K4E, KC_##K4F, KC_##K4G, KC_NO,    KC_##K4I, KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N }  \
}

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    [0] = KEYMAP_TKG(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ESC, ENT,  \
        LSFT,RCTL,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN7, RSFT, \
        LCTL,LGUI,LALT,     FN1, FN0, SPC,      FN4, INS, FN2, FN3, FN5, FN6),
    [1] = KEYMAP_TKG(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
        TRNS,PSCR,SLCK,PAUS,TRNS,VOLU,TRNS,PGUP,HOME,END, PGDN,INS, DEL, TRNS, \
        ESC, LEFT,DOWN,UP,  RGHT,MUTE,TRNS,LEFT,DOWN,UP,  DOWN,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,VOLD,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN7, TRNS, \
        TRNS,TRNS,TRNS,     FN1, FN0, TRNS,     FN4, TRNS,FN2, FN3, FN5, FN6),
    [2] = KEYMAP_TKG(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,PAST,7,   8,   9,   PSLS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,PPLS,4,   5,   6,   PMNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,0,   1,   2,   3,   PEQL,TRNS,TRNS,TRNS,TRNS,TRNS,FN7, TRNS, \
        TRNS,TRNS,TRNS,     FN1, FN0, PENT,     FN4, TRNS,FN2, FN3, FN5, FN6),
    [3] = KEYMAP_TKG(
        TRNS,PWR, SLEP,WAKE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,BTN5,BTN4,BTN1,BTN3,BTN2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,MS_L,MS_D,MS_U,MS_R,ACL1,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,ACL2,TRNS,TRNS,TRNS,TRNS,TRNS,FN7, TRNS, \
        TRNS,TRNS,TRNS,     FN1, FN0, TRNS,     FN4, TRNS,FN2, FN3, FN5, FN6),
    [4] = KEYMAP_TKG(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN7, TRNS, \
        TRNS,TRNS,TRNS,     FN1, FN0, TRNS,     FN4, TRNS,FN2, FN3, FN5, FN6),
    [5] = KEYMAP_TKG(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN7, TRNS, \
        TRNS,TRNS,TRNS,     FN1, FN0, TRNS,     FN4, TRNS,FN2, FN3, FN5, FN6),
    [6] = KEYMAP_TKG(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN7, TRNS, \
        TRNS,TRNS,TRNS,     FN1, FN0, TRNS,     FN4, TRNS,FN2, FN3, FN5, FN6),
    [7] = KEYMAP_TKG(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN7, TRNS, \
        TRNS,TRNS,TRNS,     FN1, FN0, TRNS,     FN4, TRNS,FN2, FN3, FN5, FN6),
};

#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_LAYER_MOMENTARY(2),
    [3] = ACTION_LAYER_MOMENTARY(3),
    [4] = ACTION_LAYER_MOMENTARY(4),
    [5] = ACTION_LAYER_MOMENTARY(5),
    [6] = ACTION_LAYER_MOMENTARY(6),
    [7] = ACTION_LAYER_MOMENTARY(7),
};