#ifndef Map_H
#define Map_H

#include <LinkedList.h>

typedef struct Map Map;

struct Map
{
    int size ;
    LinkedList **table ;
};

void addMap(Map *map, void *data, int (*hash)(void *));
void *findMap(Map *map, void *data, int (*hash)(void *));
void *delMap(Map *map, void *data, int (*hash)(void *));

Map *createMap(int size);
void destroyMap(Map *map);


#endif // LinkedList_H
