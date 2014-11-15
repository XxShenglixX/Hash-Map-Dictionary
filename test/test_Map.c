#include "unity.h"
#include "LinkedList.h"
#include "Map.h"
#include "Student.h"
#include "mock_HashFunction.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_createMap_should_return_amap()
{
	Map *map = createMap(10);
    
    TEST_ASSERT_NOT_NULL(map);
    TEST_ASSERT_NOT_NULL(map->table);
    TEST_ASSERT_EQUAL(10,map->size);
}


void test_addMap_given_ali_should_add_in_slot_4()
{
    LinkedList *firstList ;
    
    Student ali = {.name = "ali", .age = 10 };
    Map *map = createMap(10);
    
    hash_ExpectAndReturn((void *)&ali,4);
    
    addMap(map,(void *)&ali,hash);
    
    firstList = map->table[4];
    
    TEST_ASSERT_NOT_NULL(map->table[4]);
    TEST_ASSERT_EQUAL_PTR(&ali,(Student *)(firstList->data));
}