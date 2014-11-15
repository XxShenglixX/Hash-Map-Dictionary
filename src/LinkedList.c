#include "LinkedList.h"
#include <malloc.h>

void destroyAllLinkedList(LinkedList *firstList)
{
    LinkedList *temp ;
    
    while(firstList->next != NULL)
    {
        temp = firstList->next ;
        free(firstList);
        firstList = temp ;
    }

}