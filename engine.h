#ifndef ENGINE_H_
#define ENGINE_H_

#include <unistd.h>

#include "game.h"
#include "renderer.h"
#include "colrdef.h"

#define STATE_LEVELSTART 0
#define STATE_LEVEL      1
#define STATE_LEVELEND   2

void updateall( Field* field, int state );
void renderall( Field* field );

long getscore( int blocks );
long getbonusscore( int blocks, int lines, int level );

#endif // ENGINE_H_
