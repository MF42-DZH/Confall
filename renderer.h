#ifndef RENDERER_H_
#define RENDERER_H_

#include "game.h"

void renderblock( Block* blk, int x, int y );
void rendercursor( Field* field, int x, int y, int xoffset, int yoffset );
void renderfield( Field* field, int xoffset, int yoffset );

#endif // RENDERER_H_
