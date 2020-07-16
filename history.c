#include "history.h"

void inithistory( History* history, int length ) {
    if ( history == NULL ) return;
    else {
        history->length = length;
        history->container = ( int* ) calloc( length, sizeof( int ) );
    }
}

void freehistory( History* history ) {
    free( history->container );
    history->container = NULL;
}

int history_enqueue( History* history, int item ) {
    for ( int i = 1; i < history->length; ++i ) history->container[ i - 1 ] = history->container[ i ];
    history->container[ history->length - 1 ] = item;
}

int history_contains( History* history, int item ) {
    for ( int i = 0; i < history->length; ++i ) if ( history->container[ i ] == item ) return 1;
    return 0;
}
