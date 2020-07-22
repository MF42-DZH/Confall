#include "engine.h"

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