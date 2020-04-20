#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6011)
#pragma warning (disable : 6031)


//#include "SimpleHeap.h"
//
//int main(void)
//{
//	Heap heap;
//	HeapInit(&heap);
//
//	HInsert(&heap, 'A', 1);
//	HInsert(&heap, 'B', 2);
//	HInsert(&heap, 'C', 3);
//	printf("%c \n", HDelete(&heap));
//
//	HInsert(&heap, 'A', 1);
//	HInsert(&heap, 'B', 2);
//	HInsert(&heap, 'C', 3);
//	printf("%c \n", HDelete(&heap));
//
//	while (!HIsEmpty(&heap))
//	{
//		printf("%c \n", HDelete(&heap));
//	}
//
//	return 0;
//}

 
#include "UsefulHeap.h"

int DataPriorityComp(char ch1, char ch2)
{
    return ch2 - ch1;
}

int main(void)
{
    Heap heap;
    HeapInit(&heap, DataPriorityComp);

   	HInsert(&heap, 'A');
   	HInsert(&heap, 'B');
   	HInsert(&heap, 'C');
   	printf("%c \n", HDelete(&heap));
    
   	HInsert(&heap, 'A');
   	HInsert(&heap, 'B');
   	HInsert(&heap, 'C');
   	printf("%c \n", HDelete(&heap));
    
   	while (!HIsEmpty(&heap))
   	{
   		printf("%c \n", HDelete(&heap));
   	}

    return 0;
}