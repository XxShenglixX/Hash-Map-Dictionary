#ifndef LinkedList_H
#define LinkedList_H

typedef struct LinkedList LinkedList;

struct LinkedList
{
    LinkedList *next ;
    void *data ;
};


void addLinkedList(LinkedList **listPtr,LinkedList *newList);
void removeLinkedList(LinkedList **listPtr,LinkedList  *listToRemove);
void findLinkedList(LinkedList **listPtr,void *data, int (*compare)(void *dataInCollection,void *data));


void destroyAllLinkedList(LinkedList *firstList);
#endif // LinkedList_H
