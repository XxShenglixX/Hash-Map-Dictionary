#include "Map.h"
#include "LinkedList.h"
#include <malloc.h>



Map *createMap(int size)
{
    Map *map = malloc(sizeof(Map)) ;
    map->size = size ;
    map->table = malloc(sizeof(LinkedList *) * size);

    return map ;
}

void destroyMap(Map *map)
{
    int i ;
    if (map!= NULL)
    {
        for ( i = 0 ; i < map->size ; i ++ )
            destroyAllLinkedList(map->table[i]);
    }
    free(map->table);
    free(map);

}

void addMap(Map *map, void *data, int (*hash)(void *))
{
    int hashValue = hash(data);
    

}