#define XXXXXXX &none
#define _______ &none

#define WIN_UNDO &kp LC(Z)
#define WIN_REDO &kp LC(Y)
#define WIN_COPY &kp LC(C)
#define WIN_PASTE &kp LC(V)
#define WIN_CUT &kp LC(X)
#define WIN_SELECT_ALL &kp LC(A)

// #define MAC_UNDO &kp LG(Z)
// #define MAC_REDO &kp LS(LG(Z))
// #define MAC_COPY &kp LG(C)
// #define MAC_PASTE &kp LG(V)
// #define MAC_CUT &kp LG(X)
// #define MAC_SELECT_ALL &kp LG(A)

#define _T_NAV_ &lt NAV T
#define _T_SHFT &bht LEFT_SHIFT T
#define SPC_NAV &lt NAV SPACE
#define SPC_SFT &mt LEFT_SHIFT SPACE
#define _X_SYS_ &lt SYS X
#define osSHCAP &td_shift_capsword

/*
// Home Row Mods
#define s__D___ &lh_pht LSFT D
#define c__N___ &lh_pht LCTL N
#define g__S___ &lh_pht LGUI S
#define a__R___ &lh_pht LALT R
#define s__A___ &rh_pht LSFT A
#define c__E___ &rh_pht LCTL E
#define g__I___ &rh_pht LGUI I
#define a__H___ &rh_pht LALT H
*/


#define ___A___ &kp A
#define ___B___ &kp B
#define ___C___ &kp C
#define ___D___ &kp D
#define ___E___ &kp E
#define ___F___ &kp F
#define ___G___ &kp G
#define ___H___ &kp H
#define ___I___ &kp I
#define ___J___ &kp J
#define ___K___ &kp K
#define ___L___ &kp L
#define ___M___ &kp M
#define ___N___ &kp N
#define ___O___ &kp O
#define ___P___ &kp P
#define ___Q___ &kp Q
#define ___R___ &kp R
#define ___S___ &kp S
#define ___T___ &kp T
#define ___U___ &kp U
#define ___V___ &kp V
#define ___W___ &kp W
#define ___X___ &kp X
#define ___Y___ &kp Y
#define ___Z___ &kp Z

#define ___0___ &kp N0
#define ___1___ &kp N1
#define ___2___ &kp N2
#define ___3___ &kp N3
#define ___4___ &kp N4
#define ___5___ &kp N5
#define ___6___ &kp N6
#define ___7___ &kp N7
#define ___8___ &kp N8
#define ___9___ &kp N9

#define _LPARN_ &mm_parens
#define _RPARN_ &kp RIGHT_PARENTHESIS
#define _LCBRC_ &mm_braces
#define _RCBRC_ &kp RIGHT_BRACE
#define _LBRAC_ &mm_brackets
#define _RBRAC_ &kp RIGHT_BRACKET
#define _LABRC_ &mm_lt_gt
#define _RABRC_ &kp GREATER_THAN

#define __DOT__ &kp DOT
#define _COMMA_ &kp COMMA
#define _SQUOT_ &kp SINGLE_QUOTE
#define _DQUOT_ &kp DOUBLE_QUOTES
#define _COLON_ &kp COLON
#define _SCOLN_ &kp SEMICOLON
#define _TILDE_ &kp TILDE
#define _GRAVE_ &kp GRAVE
#define _UNDRS_ &kp UNDERSCORE
#define _EQUAL_ &mm_equals_arrow
#define _MINUS_ &mm_minus_plus
#define _PLUS__ &kp PLUS
#define _STAR__ &kp STAR
#define _HASH__ &kp HASH
#define _DOLLR_ &kp DOLLAR
#define _SLASH_ &mm_slashes
#define _BSLSH_ &kp BACKSLASH
#define _PERCT_ &kp PERCENT
#define _AMPRS_ &kp AMPERSAND
#define _QUEST_ &kp QUESTION
#define _EXCLM_ &kp EXCLAMATION
#define _CARET_ &kp CARET
#define _PIPE__ &kp PIPE
#define __AT___ &kp AT

#define _LEFT__ &kp LEFT
#define __UP___ &kp UP
#define _DOWN__ &kp DOWN
#define _RIGHT_ &kp RIGHT

#define _SPACE_ &kp SPACE
#define __TAB__ &kp TAB
#define _ENTER_ &kp ENTER
#define _BKSPC_ &kp BACKSPACE
#define _BKSPW_ &kp LC(BACKSPACE)
#define __DEL__ &kp DELETE
#define __ESC__ &kp ESCAPE
#define __END__ &kp END
#define _HOME__ &kp HOME
#define _CAPSL_ &kp CAPSLOCK
#define _CAPWD_ &caps_word


#define _LSHFT_ &kp LEFT_SHIFT
#define _LCTRL_ &kp LEFT_CONTROL
#define _LALT__ &kp LEFT_ALT
#define _LGUI__ &kp LEFT_GUI

// One Shot Mods (Callum Style)
#define os_SHFT &sk LEFT_SHIFT
#define os_CTRL &sk LEFT_CONTROL
#define os_ALT_ &sk LEFT_ALT
#define os_GUI_ &sk LEFT_GUI
// One Shot Mods (Quick Release)
#define osqSHFT &skq LEFT_SHIFT

// Function Keys
#define __F1___ &kp F1
#define __F2___ &kp F2
#define __F3___ &kp F3
#define __F4___ &kp F4
#define __F5___ &kp F5
#define __F6___ &kp F6
#define __F7___ &kp F7
#define __F8___ &kp F8
#define __F9___ &kp F9
#define __F10__ &kp F10
#define __F11__ &kp F11
#define __F12__ &kp F12

#define _BTCLR_ &bt BT_CLR
#define _BT_00_ &bt BT_SEL 0
#define _BT_01_ &bt BT_SEL 1
#define _BT_02_ &bt BT_SEL 2





//#define MAC_PASTE_MATCH LSFT(LOPT(LCMD(KC_C)))

#define _BRIMN_ KC_F14
#define _BRIMX_ KC_F15

#define _DSKT1_ HYPR(___1___)
#define _DSKT2_ HYPR(___2___)
#define _DSKT3_ HYPR(___3___)
#define _DSKT4_ HYPR(___4___)
#define _DSKT5_ HYPR(___5___)
#define _DSKT6_ HYPR(___6___)

#define _SCRSH_ LCMD(LSFT(___4___))