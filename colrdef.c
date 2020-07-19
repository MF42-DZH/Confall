#include "colrdef.h"

void initialisecolours( void ) {
    start_color();

    // Initialise custom colours
    init_color( COLOR_RED    , 1000,    0,    0 );
    init_color( COLOR_ORANGE , 1000,  500,    0 );
    init_color( COLOR_YELLOW , 1000, 1000,    0 );
    init_color( COLOR_GREEN  ,    0, 1000,    0 );
    init_color( COLOR_CYAN   ,    0, 1000, 1000 );
    init_color( COLOR_BLUE   ,    0,    0, 1000 );
    init_color( COLOR_MAGENTA, 1000,    0, 1000 );
    init_color( COLOR_WHITE  , 1000, 1000, 1000 );

    // Initialise basic colour pairs
    init_pair( BLACK_BLOCK , COLOR_BLACK  , COLOR_BLACK   );
    init_pair( RED_BLOCK   , COLOR_RED    , COLOR_RED     );
    init_pair( ORANGE_BLOCK, COLOR_ORANGE , COLOR_ORANGE  );
    init_pair( YELLOW_BLOCK, COLOR_YELLOW , COLOR_YELLOW  );
    init_pair( GREEN_BLOCK , COLOR_GREEN  , COLOR_GREEN   );
    init_pair( CYAN_BLOCK  , COLOR_CYAN   , COLOR_CYAN    );
    init_pair( BLUE_BLOCK  , COLOR_BLUE   , COLOR_BLUE    );
    init_pair( PURPLE_BLOCK, COLOR_MAGENTA, COLOR_MAGENTA );
    init_pair( WHITE_BLOCK , COLOR_WHITE  , COLOR_WHITE   );

    init_pair( BLACK , COLOR_BLACK  , COLOR_WHITE );
    init_pair( RED   , COLOR_RED    , COLOR_BLACK );
    init_pair( ORANGE, COLOR_ORANGE , COLOR_BLACK );
    init_pair( YELLOW, COLOR_YELLOW , COLOR_BLACK );
    init_pair( GREEN , COLOR_GREEN  , COLOR_BLACK );
    init_pair( CYAN  , COLOR_CYAN   , COLOR_BLACK );
    init_pair( BLUE  , COLOR_BLUE   , COLOR_BLACK );
    init_pair( PURPLE, COLOR_MAGENTA, COLOR_BLACK );
    init_pair( WHITE , COLOR_WHITE  , COLOR_BLACK );

    debugprintcurses( "Colour initialisation success." );
}

void mvcoladdstr( int y, int x, short pair, const char* str ) {
    attron( COLOR_PAIR( pair ) );
    mvaddstr( y, x, str );
    attroff( COLOR_PAIR( pair ) );
}

void mvcolwaddstr( WINDOW* window, int y, int x, short pair, const char* str ) {
    attron( COLOR_PAIR( pair ) );
    mvwaddstr( window, y, x, str );
    attroff( COLOR_PAIR( pair ) );
}

void mvcoladdch( int y, int x, short pair, const char chr ) {
    attron( COLOR_PAIR( pair ) );
    mvaddch( y, x, chr );
    attroff( COLOR_PAIR( pair ) );
}

void mvcolwaddch( WINDOW* window, int y, int x, short pair, const char chr ) {
    attron( COLOR_PAIR( pair ) );
    mvwaddch( window, y, x, chr );
    attroff( COLOR_PAIR( pair ) );
}
