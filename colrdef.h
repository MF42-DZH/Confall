#ifndef COLRDEF_H_
#define COLRDEF_H_

// For debug printing and colours
#include "components.h"

// Colour macros
#define BLACK_BLOCK  0b00000001
#define RED_BLOCK    0b00000010
#define ORANGE_BLOCK 0b00000100
#define YELLOW_BLOCK 0b00001000
#define GREEN_BLOCK  0b00010000
#define CYAN_BLOCK   0b00100000
#define BLUE_BLOCK   0b01000000
#define PURPLE_BLOCK 0b10000000
#define WHITE_BLOCK  0b11100111

#define BLACK  0b10000001
#define RED    0b10000011
#define ORANGE 0b10000101
#define YELLOW 0b10001001
#define GREEN  0b10010001
#define CYAN   0b10100001
#define BLUE   0b11000001
#define PURPLE 0b11000011
#define WHITE  0b10011011

#define COLOR_ORANGE 8

void initialisecolours( void );
void mvcoladdstr( int y, int x, short pair, const char* str );
void mvcolwaddstr( WINDOW* window, int y, int x, short pair, const char* str );
void mvcoladdch( int y, int x, short pair, const char chr );
void mvcolwaddch( WINDOW* window, int y, int x, short pair, const char chr );

#endif // COLRDEF_H_
