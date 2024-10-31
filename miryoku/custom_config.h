#define MIRYOKU_NAV_VI

#define MIRYOKU_CLIPBOARD_MAC
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp LGUI     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RCTRL \
&kp LSHFT   K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RSHFT \
U_MT(MEDIA, LALT),   K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RSHFT \
                        K32  K33  K34     K35  K36  K37 

#define MIRYOKU_LAYERMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp GRAVE K00  K01  K02  K03  K04      K05  K06  K07  K08  K09  &kp RCTRL \
&tilde_macro   K10  K11  K12  K13  K14      K15  K16  K17  K18  K19  &kp LALT \
&kp TILDE    K20  K21  K22  K23  K24      K25  K26  K27  K28  K29  &kp RSHFT \
                        K32  K33  K34     K35  K36  K37
 
#define MIRYOKU_LAYER_BASE \
&kp Q,            &kp W,            &kp E,              &kp R,              &kp T,              &kp Y,              &kp U,              &kp I,              &kp O,              &kp P,             \
U_MT(LCTRL, A),   U_MT(LALT, S),    U_MT(LGUI, D),      U_MT(LSHFT, F),     &kp G,              &kp H,              U_MT(LSHFT, J),     U_MT(LGUI, K),      U_MT(LALT, L),      U_MT(LCTRL, SQT),  \
&kp Z,            &kp X,            &kp C,                &kp V,              &kp B,              &kp N,              &kp M,              &kp COMMA,        &kp DOT,            &kp SLASH,\
U_NP,             U_NP,             U_LT(U_MOUSE, ESC), U_LT(U_NAV, SPACE), U_LT(U_BUTTON, TAB), U_LT(U_SYM, RET),   U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),   U_NP,               U_NP

#define MIRYOKU_LAYER_SYM \
&u_to_U_BASE,      &u_to_U_EXTRA,    &u_to_U_TAP,        &kp SEMI,             &kp GRAVE,         &kp EXCL,            &kp AT,           &kp HASH,            &kp DLLR,           &kp PRCNT,       \
&kp LCTRL,         &kp LALT,         &kp LGUI,           &kp LSHFT,          &kp TILDE,      &kp LBKT,           &kp CARET,         &kp LPAR,           &kp RPAR,           &kp RBKT,                   \
&u_to_U_SYM,       &u_to_U_MOUSE,    &tilde_macro,       &kp SLASH,          &kp BACKSLASH,          &kp AMPS,            &kp PIPE,           &kp LBRC,           &kp RBRC,           &g_under,               \
U_NP,              U_NP,             &kp UNDER,          &kp COLON,          &kp QMARK,          U_NA,               U_NA,               U_NA,               U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp N1,           &kp N2,             &kp N3,             &kp N4,            &kp N5,             &kp N6,             &kp N7,             &kp N8,             &kp N9,            &kp N0,            \
&kp LCTRL,         &kp LALT,         &kp LGUI,           &kp LSHFT,            &kp BACKSLASH,      &kp MINUS,          &kp N4,           &kp N5,             &kp N6,            &kp PLUS,    \
 &u_to_U_NUM,        &u_to_U_NAV,        &kp RALT,           U_NA,              U_NA,           &kp ASTRK,         &kp N1,           &kp N2,             &kp N3,              &kp SLASH,            \
U_NP,              U_NP,             &kp DOT,          &kp COMMA,            &kp EQUAL,          U_NA,               U_NA,               U_NA,               U_NP,               U_NP

#define MIRYOKU_LAYER_NAV \
&kp LG(N1),         &kp LG(N2),     &kp LG(N3),           &kp LG(N4),         &kp LG(N5),          &kp LG(N6),          &kp LG(N7),       &kp LG(N8),           &kp LG(N9),        &kp LG(N0),\
&kp LCTRL,         &kp LALT,         &kp LGUI,            &kp LSHFT,       &kp LA(LS(LCTRL)),      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
&kp LG(LSHIFT),   &kp LG(LALT),        &kp LA(LG(LS(LCTRL))),  &kp LA(LG(LSHIFT)),  &kp LG(LS(LCTRL)),   &kp HOME,           &kp PG_DN,          &kp PG_UP,          &kp END,           &kp INS,           \
U_NP,              U_NP,             U_NA,               U_NA,               U_NA,               &kp RET,            &kp BSPC,           &kp DEL,            U_NP,              U_NP


#define MIRYOKU_LAYER_MOUSE \
U_BOOT,         &u_to_U_TAP,      &u_to_U_EXTRA,      &u_to_U_BASE,       U_NA,               U_RDO,              U_PST,              U_CPY,              U_CUT,             U_UND,             \
&kp LCTRL,         &kp LALT,         &kp LGUI,           &kp LSHFT,          U_NA,               U_MS_L,             U_MS_D,             U_MS_U,             U_MS_R,            U_NU,              \
&kp ENTER,        &kp BSPC,           &tilde_macro,       &g_under,           &kp LC(A),          U_WH_L,             U_WH_D,             U_WH_U,             U_WH_R,            U_NU,              \
U_NP,              U_NP,             U_NA,               U_NA,               U_NA,               U_BTN2,             U_BTN1,             U_BTN3,             U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
&kp LG(GRAVE),     &kp LG(LBRC),  &kp LG(RBRC),       &kp LG(LBKT),      &kp LG(RBKT),        &kp Y,              &kp U,              &kp I,              &kp O,              &kp P,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,            &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,               \
&kp LG(LSHIFT),  &kp LG(LALT),     &kp LC(LSHIFT),      &kp LC(LALT),      &kp LC(GRAVE),     &kp N,          &kp M,               &kp COMMA,            &kp DOT,            &kp SLASH,      \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LGUI,         &kp LALT,          &kp LCTRL,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


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
