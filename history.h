#ifndef HISTORY_H_
#define HISTORY_H_

#include <stdlib.h>

typedef struct History {
    int* container;
    int length;
} History;

void inithistory( History* history, int length );
void freehistory( History* history );

int history_enqueue( History* history, int item );
int history_contains( History* history, int item );

#endif // HISTORY_H_
