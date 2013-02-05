#ifndef __COLORS_H__
#define __COLORS_H__

#define COL_BLACK 0x0000
#define COL_BLUE 0x0100
#define COL_GREEN 0x0200
#define COL_CYAN 0x0300
#define COL_RED 0x0400
#define COL_PURPLE 0x0500
#define COL_BROWN 0x0600
#define COL_WHITE 0x0700
#define COL_GREY 0x0800
#define COL_LIGHT_BLUE 0x0900
#define COL_LIGHT_GREEN 0x0a00
#define COL_LIGHT_CYAN 0x0b00
#define COL_LIGHT_RED 0x0c00
#define COL_LIGHT_PURPLE 0x0d00
#define COL_YELLOW 0x0e00
#define COL_BRIGHT_WHITE 0x0f00
#define COL_BG_BLACK 0x0000
#define COL_BG_BLUE 0x1000
#define COL_BG_GREEN 0x2000
#define COL_BG_CYAN 0x3000
#define COL_BG_RED 0x4000
#define COL_BG_PURPLE 0x5000
#define COL_BG_BROWN 0x6000
#define COL_BG_WHITE 0x7000
#define COL_FG_BLINK 0x8000

#define CLR_BLACK_BROWN		COLOR_PAIR(5)
#define CLR_BLACK_RED		COLOR_PAIR(3)
#define CLR_BLACK_WHITE		COLOR_PAIR(4)
#define CLR_BLUE_BLACK		COLOR_PAIR(6)
#define CLR_BLUE_WHITE		COLOR_PAIR(7)
#define CLR_BRIGHT_WHITE_BLACK	COLOR_PAIR(17)|A_BOLD
#define CLR_BRIGHT_WHITE_BLUE	COLOR_PAIR(18)|A_BOLD
#define CLR_BRIGHT_WHITE_RED	COLOR_PAIR(19)|A_BOLD
#define CLR_BROWN_BLACK		COLOR_PAIR(21)
#define CLR_BROWN_RED		COLOR_PAIR(23)
#define CLR_BROWN_WHITE		COLOR_PAIR(24)
#define CLR_CYAN_BLACK		COLOR_PAIR(8)
#define CLR_GREEN_BLACK		COLOR_PAIR(9)
#define CLR_GREEN_BROWN		COLOR_PAIR(12)
#define CLR_GREEN_RED		COLOR_PAIR(11)
#define CLR_GREY_BLACK		COLOR_PAIR(1)|A_BOLD
#define CLR_GREY_BROWN		COLOR_PAIR(5)|A_BOLD
#define CLR_GREY_GREEN		COLOR_PAIR(2)|A_BOLD
#define CLR_GREY_RED		COLOR_PAIR(3)|A_BOLD
#define CLR_GREY_WHITE		COLOR_PAIR(4)|A_BOLD
#define CLR_LIGHT_BLUE_BLACK	COLOR_PAIR(6)|A_BOLD
#define CLR_LIGHT_BLUE_WHITE	COLOR_PAIR(7)|A_BOLD
#define CLR_LIGHT_GREEN_BLACK	COLOR_PAIR(9)|A_BOLD
#define CLR_LIGHT_GREEN_BLUE	COLOR_PAIR(10)|A_BOLD
#define CLR_LIGHT_PURPLE_BLACK	COLOR_PAIR(13)|A_BOLD
#define CLR_LIGHT_RED_BLACK	COLOR_PAIR(15)|A_BOLD
#define CLR_LIGHT_RED_WHITE	COLOR_PAIR(16)|A_BOLD
#define CLR_PURPLE_BLACK	COLOR_PAIR(13)
#define CLR_PURPLE_WHITE	COLOR_PAIR(14)
#define CLR_RED_BLACK		COLOR_PAIR(15)
#define CLR_RED_WHITE		COLOR_PAIR(16)
#define CLR_WHITE_BLACK		COLOR_PAIR(17)
#define CLR_WHITE_BLUE		COLOR_PAIR(18)
#define CLR_WHITE_BROWN		COLOR_PAIR(20)
#define CLR_WHITE_RED		COLOR_PAIR(19)
#define CLR_YELLOW_BLACK	COLOR_PAIR(21)|A_BOLD
#define CLR_YELLOW_BLUE		COLOR_PAIR(22)|A_BOLD
#define CLR_YELLOW_BROWN	COLOR_PAIR(25)|A_BOLD
#define CLR_YELLOW_WHITE	COLOR_PAIR(24)|A_BOLD

extern void clrgen_init (void);

#endif // __COLORS_H__