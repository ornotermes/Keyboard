/*
  Keyboard.h

  Copyright (c) 2015, Arduino LLC
  Original code (pre-library): Copyright (c) 2011, Peter Barrett

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef KEYBOARD_h
#define KEYBOARD_h

#include "HID.h"

#if !defined(_USING_HID)

#warning "Using legacy HID core (non pluggable)"

#else

//================================================================================
//================================================================================
//  Keyboard

// Modifiers
#define KEY_LEFT_CTRL     0x80
#define KEY_LEFT_SHIFT    0x81
#define KEY_LEFT_ALT      0x82
#define KEY_LEFT_GUI      0x83
#define KEY_RIGHT_CTRL    0x84
#define KEY_RIGHT_SHIFT   0x85
#define KEY_RIGHT_ALT     0x86
#define KEY_RIGHT_GUI     0x87

// Misc keys
#define KEY_UP_ARROW      0xDA
#define KEY_DOWN_ARROW    0xD9
#define KEY_LEFT_ARROW    0xD8
#define KEY_RIGHT_ARROW   0xD7
#define KEY_BACKSPACE     0xB2
#define KEY_TAB           0xB3
#define KEY_RETURN        0xB0
#define KEY_MENU          0xED // "Keyboard Application" in USB standard
#define KEY_ESC           0xB1
#define KEY_INSERT        0xD1
#define KEY_DELETE        0xD4
#define KEY_PAGE_UP       0xD3
#define KEY_PAGE_DOWN     0xD6
#define KEY_HOME          0xD2
#define KEY_END           0xD5
#define KEY_CAPS_LOCK     0xC1
#define KEY_PRINT_SCREEN  0xCE // Print Screen / SysRq
#define KEY_SCROLL_LOCK   0xCF
#define KEY_PAUSE         0xD0 // Pause / Break

// Numeric keypad
#define KEY_NUM_LOCK      0xDB
#define KEY_KP_SLASH      0xDC
#define KEY_KP_ASTERISK   0xDD
#define KEY_KP_MINUS      0xDE
#define KEY_KP_PLUS       0xDF
#define KEY_KP_ENTER      0xE0
#define KEY_KP_1          0xE1
#define KEY_KP_2          0xE2
#define KEY_KP_3          0xE3
#define KEY_KP_4          0xE4
#define KEY_KP_5          0xE5
#define KEY_KP_6          0xE6
#define KEY_KP_7          0xE7
#define KEY_KP_8          0xE8
#define KEY_KP_9          0xE9
#define KEY_KP_0          0xEA
#define KEY_KP_DOT        0xEB

// Function keys
#define KEY_F1            0xC2
#define KEY_F2            0xC3
#define KEY_F3            0xC4
#define KEY_F4            0xC5
#define KEY_F5            0xC6
#define KEY_F6            0xC7
#define KEY_F7            0xC8
#define KEY_F8            0xC9
#define KEY_F9            0xCA
#define KEY_F10           0xCB
#define KEY_F11           0xCC
#define KEY_F12           0xCD
#define KEY_F13           0xF0
#define KEY_F14           0xF1
#define KEY_F15           0xF2
#define KEY_F16           0xF3
#define KEY_F17           0xF4
#define KEY_F18           0xF5
#define KEY_F19           0xF6
#define KEY_F20           0xF7
#define KEY_F21           0xF8
#define KEY_F22           0xF9
#define KEY_F23           0xFA
#define KEY_F24           0xFB

// Keys defined with raw scan codes
//#define KEY_F13 104,1
#define KEY_TOOLS 104,1 //Opens settings atleast on some Linux distros.
//#define KEY_F14 105,1
#define KEY_LAUNCH5 105,1
//#define KEY_F15 106,1
#define KEY_LAUNCH6 106,1
//#define KEY_F16 107,1
#define KEY_LAUNCH7 107,1
//#define KEY_F17 108,1
#define KEY_LAUNCH8 108,1
//#define KEY_F18 109,1
#define KEY_LAUNCH9 109,1
//#define KEY_F19 110,1
//110 is F19, NoSymbol on pop-os
//#define KEY_F20 111,1
#define KEY_MUTE_MIC 111,1
//#define KEY_F21 112,1
#define KEY_TOUCH_TOGGLE 112,1
//#define KEY_F22 113,1
#define KEY_TOUCH_ENABLE 113,1
//#define KEY_F23 114,1
#define KEY_TOUCH_DISABLE 114,1
//#define KEY_F24 115,1
//115 is F24, NoSymbol on pop-os

#define KEY_EXECUTE 116,1
#define KEY_HELP 117,1
#define KEY_MENU 118,1
#define KEY_SELECT 119,1
#define KEY_STOP 120,1
#define KEY_AGAIN 121,1
#define KEY_UNDO 122,1
#define KEY_CUT 123,1
#define KEY_COPY 124,1
#define KEY_PASTE 125,1
#define KEY_FIND 126,1

#define KEY_MUTE 127,1
#define KEY_VOL_UP 128,1
#define KEY_VOL_DOWN 129,1

#define KEY_CAPS_LOCK 130,1
#define KEY_NUM_LOCK 131,1
#define KEY_SCROLL_LOCK 132,1

#define KEY_KP_COMMA 133,1
#define KEY_KP_EQUAL 134,1
//135-143 INTERNATIONAL1-9
//144-152 LANG1-9
#define KEY_ALT_ERASE 153,1
#define KEY_SYSREQ 154,1
#define KEY_CANCEL 155,1
#define KEY_CLEAR 156,1
#define KEY_PRIOR 157,1
#define KEY_RETURN 158,1
#define KEY_SEPARATOR 159,1
#define KEY_OUT 160,1
#define KEY_OPER 161,1
#define KEY_CLEAR_AGAIN 162,1
#define KEY_CRSEL_PROPS 163,1
#define KEY_EXSEL 164,1
//165-175 Reserved
#define KEY_KP_00 176,1
#define KEY_KP_000 177,1
#define KEY_SEP_THOUSAND 178,1
#define KEY_SEP_DECIMAL 179,1
#define KEY_CURRENCY_UNIT 180,1
#define KEY_CURRENCY_SUB 181,1
#define KEY_KP_PARENTHESIS_OPEN 182,1
#define KEY_KP_PARENTHESIS_CLOSE 183,1
#define KEY_KP_CURLY_BRACE_OPEN 184,1
#define KEY_KP_CURLY_BRACE_CLOSE 185,1
#define KEY_KP_TAB 186,1
#define KEY_KP_BACKSPACE 187,1
#define KEY_KP_A 188,1
#define KEY_KP_B 189,1
#define KEY_KP_C 190,1
#define KEY_KP_D 191,1
#define KEY_KP_E 192,1
#define KEY_KP_F 193,1
#define KEY_KP_XOR 194,1
#define KEY_KP_CARET 195,1
#define KEY_KP_EXPONENT 195,1
#define KEY_KP_PERCENT 196,1
#define KEY_KP_MODULUS 197,1
#define KEY_KP_LESSTHAN 198,1
#define KEY_KP_MORETHAN 199,1
#define KEY_KP_AMPERSAND 200,1
#define KEY_KP_BITWISE_AND 200,1
#define KEY_KP_LOGIC_AND 201,1
#define KEY_KP_BITWISE_OR 202,1
#define KEY_KP_LOGIC_OR 202,1
#define KEY_KP_COLON 203,1
#define KEY_KP_OCTOTHORPE 204,1
#define KEY_KP_HASH 204,1
#define KEY_KP_SPACE 205,1
#define KEY_KP_AT 206,1
#define KEY_KP_EXCLAMATION 207,1
#define KEY_KP_MEM_STORE 208,1
#define KEY_KP_MEM_RECALL 209,1
#define KEY_KP_MEM_CLEAR 210,1
#define KEY_KP_MEM_ADD 211,1
#define KEY_KP_MEM_SUBTRACT 212,1
#define KEY_KP_MEM_MULTIPLY 213,1
#define KEY_KP_MEM_DIVIDE 214,1
#define KEY_KP_PLUS_MINUS 215,1
#define KEY_KP_CLEAR 216,1
#define KEY_KP_CLEAR_ENTRY 217,1
#define KEY_KP_BINARY 218,1
#define KEY_KP_OCTAL 219,1
#define KEY_KP_DECIMAL 220,1
#define KEY_KP_HEXADECIMAL 221,1
//222-223 Reserved
//224-231 Modifier keys
#define KEY_MEDIA_PLAYPAUSE 232,1
#define KEY_MEDIA_STOPCD 233,1
#define KEY_MEDIA_NEXTSONG 234,1
#define KEY_MEDIA_PREVIOUSSONG 235,1
#define KEY_MEDIA_EJECTCD 236,1
#define KEY_MEDIA_VOLUMEUP 237,1
#define KEY_MEDIA_VOLUMEDOWN 238,1
#define KEY_MEDIA_MUTE 239,1
#define KET_MEDIA_WWW 240,1
#define KEY_MEDIA_BACK 241,1
#define KEY_MEDIA_FORWARRD 242,1
#define KEY_MEDIA_STOP 243,1
#define KEY_MEDIA_FIND 244,1
#define KEY_MEDIA_SCROLLUP 245,1
#define KEY_MEDIA_SCROLLDOWN 246,1
#define KEY_MEDIA_EDIT 247,1
#define KEY_MEDIA_SLEEP 248,1
#define KEY_MEDIA_COFFEE 249,1
#define KEY_MEDIA_REFRESH 250,1
#define KEY_MEDIA_CALC 251,1

#define KEY_CODE_252 252,1
#define KEY_CODE_253 253,1
#define KEY_CODE_254 254,1
#define KEY_CODE_255 255,1

// Supported keyboard layouts
extern const uint8_t KeyboardLayout_de_DE[];
extern const uint8_t KeyboardLayout_en_US[];
extern const uint8_t KeyboardLayout_es_ES[];
extern const uint8_t KeyboardLayout_fr_FR[];
extern const uint8_t KeyboardLayout_it_IT[];
extern const uint8_t KeyboardLayout_pt_PT[];
extern const uint8_t KeyboardLayout_sv_SE[];
extern const uint8_t KeyboardLayout_da_DK[];
extern const uint8_t KeyboardLayout_hu_HU[];

// Low level key report: up to 6 keys and shift, ctrl etc at once
typedef struct
{
  uint8_t modifiers;
  uint8_t reserved;
  uint8_t keys[6];
} KeyReport;

class Keyboard_ : public Print
{
private:
  KeyReport _keyReport;
  const uint8_t *_asciimap;
  void sendReport(KeyReport* keys);
public:
  Keyboard_(void);
  void begin(const uint8_t *layout = KeyboardLayout_en_US);
  void end(void);
  size_t write(uint8_t k);
  size_t write(const uint8_t *buffer, size_t size);
  size_t press(uint8_t k, uint8_t raw=0);
  size_t release(uint8_t k, uint8_t raw=0);
  void releaseAll(void);
};
extern Keyboard_ Keyboard;

#endif
#endif
