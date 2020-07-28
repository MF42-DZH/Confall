#ifndef ENGINE_H_
#define ENGINE_H_

#include <unistd.h>

#include "game.h"
#include "renderer.h"
#include "colrdef.h"
#include "history.h"
#include "components.h"

#define STATE_LEVELSTART 0
#define STATE_LEVEL      1
#define STATE_LEVELEND   2

void initgame( int diff, int* state );
void updateall( int* state );
void renderall( void );
void denitgame( void );

long getscore( int blocks );
long getbonusscore( int blocks, int lines, int level );

#endif // ENGINE_H_
