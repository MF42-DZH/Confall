#include "engine.h"

Field mainfield;
Field visualfield;
Randomizer randomizer;

void statelevelstart( int* state );

void statelevel( int* state );

void statelevelend( int* state );

void initgame( int* state ) {
    // Initialise random
    srand( time( NULL ) );

    initrandomizer( &randomizer, 4, 2 );
    initfield( &mainfield );
    initfield( &visualfield );

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
}

void renderall( void ) {
    renderfield( &visualfield, 1, 1 );
}

void denitgame( void ) {
    freehistory( &( randomizer.history ) );
}
