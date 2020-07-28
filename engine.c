#include "engine.h"

// Game variables

Field mainfield;
Field visualfield;
Randomizer randomizer;

Block queue[ 12 ];

int difficulty;
int level;

const int LEVEL_LINES[ 21 ] = {
    30, 40, 50, 60,
    80, 100, 120, 140,
    170, 200, 230, 260,
    300, 340, 380, 420,
    470, 520, 570, 666,
    -1
};

const int LEVEL_START_LINES[ 21 ] = {
    3, 3, 3, 4,
    5, 5, 5, 6,
    7, 7, 7, 8,
    9, 9, 9, 10,
    11, 11, 11, 12,
    12
};

int linesleft;

// Game funtions

int getNextColor() {
    return getcolorset( difficulty )[ r_next( &randomizer, difficulty ) ];
}

void statelevelstart( int* state );

void statelevel( int* state );

void statelevelend( int* state );

void initgame( int diff, int* state ) {
    // Set difficulty
    difficulty = diff;

    // Initialise random
    srand( time( NULL ) );

    initrandomizer( &randomizer, 4, 2 );
    initfield( &mainfield );
    initfield( &visualfield );

    for ( int i = 0; i < FIELD_WIDTH; ++i ) initblock( queue + i );

    *state = STATE_LEVELSTART;
}

void updateall( int* state ) {
    switch ( *state ) {
        case STATE_LEVELSTART:
            statelevelstart( state );
            break;
        case STATE_LEVEL:
            statelevel( state );
            break;
        case STATE_LEVELEND:
            statelevelend( state );
            break;
        default:
            break;
    }

    // Game runs at 60 updates per second.
    usleep( 1000000 / 60 );
}

void renderall( void ) {
    renderfield( &visualfield, 1, 1 );
}

void denitgame( void ) {
    freehistory( &( randomizer.history ) );
}
