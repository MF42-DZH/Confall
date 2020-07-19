#include "renderer.h"

void renderblock( Block* blk, int x, int y ) {
    int truex = x * 2;
    mvcoladdch( y, truex, blk->color, ' ' );
    mvcoladdch( y, truex + 1, blk->color, ' ' );
}

void rendercursor( Field* field, int x, int y, int xoffset, int yoffset ) {
    int colr = getblockcolor( field, x, y );
    switch ( colr ) {
        case BLACK_BLOCK:
            colr = WHITE;
            break;
        case RED_BLOCK:
            colr = RED;
            break;
        case ORANGE_BLOCK:
            colr = ORANGE;
            break;
        case YELLOW_BLOCK:
            colr = YELLOW;
            break;
        case GREEN_BLOCK:
            colr = GREEN;
            break;
        case CYAN_BLOCK:
            colr = CYAN;
            break;
        case BLUE_BLOCK:
            colr = BLUE;
            break;
        case PURPLE_BLOCK:
            colr = PURPLE;
            break;
        case WHITE_BLOCK:
            colr = BLACK;
            break;
    }

    int truex = 2 * ( x + xoffset );
    mvcoladdstr( y, truex, colr, ".." );
}

void renderfield( Field* field, int xoffset, int yoffset ) {
    int truex = xoffset * 2;

    for ( int ymul = 0; ymul <= FIELD_HEIGHT; ++ymul ) {
        for ( int xmul = -1; xmul <= FIELD_WIDTH; ++xmul ) {
            int xpos = xoffset + xmul;
            int ypos = ymul + yoffset;

            if ( ymul == FIELD_HEIGHT || xmul == -1 || xmul == FIELD_WIDTH ) mvcoladdstr( ypos, xpos * 2, BLACK, "  " );
            else renderblock( getblock( field, xmul, ymul ), xpos, ypos );
        }
    }
}