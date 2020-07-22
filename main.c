#include "engine.h"

#define STATE_LEVELSTART 0
#define STATE_LEVEL      1
#define STATE_LEVELEND   2

int main( void ) {
    // INITIALISATION

    initscr();
    noecho();
    cbreak();

    initialisecolours();

    // GAME

    // CLOSING
    endwin();
    return 0;
}