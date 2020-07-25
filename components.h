#ifndef COMPONENTS_H_
#define COMPONENTS_H_

// Includes
#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Debug print. Only active when the DEBUGGING flag is set.
static void debugprint( const char* str ) {
#ifdef DEBUGGING
    char* buffer = ( char* ) malloc( strlen( str ) + 2 );
    strcpy( buffer, str );
    strcat( buffer, "\n" );
    printf( buffer );
    free( buffer );
#endif
}

// Debug print to curses. Only active when the DEBUGGING flag is set.
static void debugprintcurses( const char* str ) {
#ifdef DEBUGGING
    char* buffer = ( char* ) malloc( strlen( str ) + 2 );
    strcpy( buffer, str );
    strcat( buffer, "\n" );
    mvaddstr( 0, 0, buffer );
    refresh();
    free( buffer );
#endif
}

#endif // COMPONENTS_H_
