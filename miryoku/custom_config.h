#define MIRYOKU_NAV_VI

#define MIRYOKU_CLIPBOARD_MAC
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RCTRL \
&kp GRAVE K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp LALT \
&kp LSHFT K20  K21  K22  K23  K24      K25  K26  K27  K28  K29  &kp RSHFT \
                      K32 K33 K34      K35  K36  K37 


#define MIRYOKU_LAYERMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&tilde_macro  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RCTRL \
&kp GRAVE K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp LALT \
&kp TILDE K20  K21  K22  K23  K24      K25  K26  K27  K28  K29  &kp RSHFT \
                      K32 K33 K34      K35  K36  K37


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,              &kp R,              &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LCTRL, A),    U_MT(LALT, S),     U_MT(LGUI, D),      U_MT(LSHFT, F),     &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LGUI, K),    U_MT(LALT, L),     U_MT(LCTRL, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_LT(U_MEDIA, C),   &kp V,              &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MOUSE, TAB), U_LT(U_NAV, SPACE), U_LT(U_BUTTON, ESC),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_SYM \
&kp EXCL,          &kp AT,           &kp HASH,         &kp DLLR,          &kp PRCNT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp LBKT,          &kp LPAR,         &kp RPAR,         &kp RBKT,          &kp CARET,          &kp BACKSLASH,     &kp LSHFT,         &kp LGUI,         &kp LALT,          &kp LCTRL,          \
&kp AMPS,          &kp LBRC,         &kp RBRC,         &g_under,         &kp PIPE,            &kp BACKSLASH,     &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,             &kp QMARK,        &kp COLON,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp N0,            &kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp N6,            &kp N7,            &kp N8,            &kp N9,                  \
&kp MINUS,         &kp N4,            &kp N5,            &kp N6,            &kp PLUS,          &kp BACKSLASH,     &kp LSHFT,         &kp LGUI,         &kp LALT,          &kp LCTRL,          \
&kp ASTRK,         &kp N7,            &kp N8,            &kp N9,            &kp SLASH,         &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              U_NA,\
U_NP,              U_NP,              &kp COMMA,          &kp DOT,          &kp EQUAL,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_NAV \
&kp LG(GRAVE),        &kp RET,           &kp BSCP,             U_NA,             U_NA,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LCTRL,          &kp LALT,          &kp LGUI,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &kp LG(LBRC),      &kp LG(RBRC),       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
&kp GRAVE,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LCTRL,          &kp LALT,          &kp LGUI,         &kp LSHFT,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
U_NA,              U_NA,              &tilde_macro,      &g_under,          &kp LC(A),         U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

// Combo definitions
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40
