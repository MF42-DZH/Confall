#ifndef GAME_H_
#define GAME_H_

#include "components.h"
#include "colrdef.h"

#define FIELD_WIDTH  12
#define FIELD_HEIGHT 16

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

int getmatches( Field* field, int x, int y );
void clearflags( Field* field );

void deleteallflagged( Field* field );

int dogravity( Field* field );

#endif // GAME_H_
