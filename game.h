#ifndef GAME_H_
#define GAME_H_

#include <time.h>

#include "components.h"
#include "colrdef.h"
#include "history.h"

#define FIELD_WIDTH  12
#define FIELD_HEIGHT 16

#define COLORSET_EASY    3
#define COLORSET_NORMAL  4
#define COLORSET_HARD    5
#define COLORSET_EXTREME 6

typedef struct Block {
    int color;
    int flag;
} Block;

typedef struct Field {
    Block contents[ FIELD_HEIGHT ][ FIELD_WIDTH ];
} Field;

void initfield( Field* field );
void initblock( Block* block );

Block* getblock( Field* field, int x, int y );
int setblock( Field* field, int x, int y, const Block* block );

int getblockcolor( Field* field, int x, int y );
int gettextcolorfromid( int id );
int getblockcolorfromid( int id );

int getmatches( Field* field, int x, int y );
void clearflags( Field* field );

void deleteallflagged( Field* field );

int dogravity( Field* field );

const int* getcolorset( int set );

typedef struct Randomizer {
    History history;
    int rolls;
} Randomizer;

void initrandomizer( Randomizer* randomizer, int historylength, int rolls );
int r_next( Randomizer* randomizer, int max );

#endif // GAME_H_
