#include "components.h"
#include "colrdef.h"

#include <unistd.h>

int main( void ) {
    // INITIALISATION

    initscr();
    noecho();
    cbreak();

    initialisecolours();

    // ENTRY POINT
#if 0
    mvcoladdch( 0, 0, RED, 'R' );
    mvcoladdch( 0, 1, ORANGE, 'O' );
    mvcoladdch( 0, 2, YELLOW, 'Y' );
    mvcoladdch( 0, 3, GREEN, 'G' );
    mvcoladdch( 0, 4, CYAN, 'C' );
    mvcoladdch( 0, 5, BLUE, 'B' );
    mvcoladdch( 0, 6, PURPLE, 'P' );
    mvcoladdch( 0, 7, WHITE, 'W' );

    mvcoladdch( 1, 0, RED_BLOCK, '#' );
    mvcoladdch( 1, 1, ORANGE_BLOCK, '#' );
    mvcoladdch( 1, 2, YELLOW_BLOCK, '#' );
    mvcoladdch( 1, 3, GREEN_BLOCK, '#' );
    mvcoladdch( 1, 4, CYAN_BLOCK, '#' );
    mvcoladdch( 1, 5, BLUE_BLOCK, '#' );
    mvcoladdch( 1, 6, PURPLE_BLOCK, '#' );
    mvcoladdch( 1, 7, WHITE_BLOCK, '#' );

    if ( !can_change_color() ) mvaddstr( 3, 0, "Use a better terminal, idiot." );
    else {
        char buf[ 16 ];
        sprintf( buf, "COLORS: %d", COLORS );
        mvaddstr( 3, 0, buf );
    }

    refresh();
#endif

    // CLOSING
    endwin();
    return 0;
}