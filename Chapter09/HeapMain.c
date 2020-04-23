#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6011)
#pragma warning (disable : 6031)

//#include "simpleheap.h"
//
//int main(void)
//{
//	Heap heap;
//	HeapInit(&heap);
//
//	HInsert(&heap, 'a', 1);
//	HInsert(&heap, 'b', 2);
//	HInsert(&heap, 'c', 3);
//	printf("%c \n", HDelete(&heap));
//
//	HInsert(&heap, 'a', 1);
//	HInsert(&heap, 'b', 2);
//	HInsert(&heap, 'c', 3);
//	printf("%c \n", HDelete(&heap));
//
//	while (!HIsEmpty(&heap))
//	{
//		printf("%c \n", HDelete(&heap));
//	}
//
//	return 0;
//}

 
//#include "UsefulHeap.h"
//
//int DataPriorityComp(char ch1, char ch2)
//{
//    return ch2 - ch1;
//}
//
//int main(void)
//{
//    Heap heap;
//    HeapInit(&heap, DataPriorityComp);
//
//   	HInsert(&heap, 'A');
//   	HInsert(&heap, 'B');
//   	HInsert(&heap, 'C');
//   	printf("%c \n", HDelete(&heap));
//    
//   	HInsert(&heap, 'A');
//   	HInsert(&heap, 'B');
//   	HInsert(&heap, 'C');
//   	printf("%c \n", HDelete(&heap));
//    
//    printf("%c \n", HDelete(&heap));
//    printf("%c \n", HDelete(&heap));
//    printf("%c \n", HDelete(&heap));
//    printf("%c \n", HDelete(&heap));
//
//    return 0;
//}


//#include "PriorityQueue.h"
//
//int DataPriorityComp(char ch1, char  ch2)
//{
//    return ch2 - ch1;
//}
//
//int main(void)
//{
//    PQueue pq;
//    PQueueInit(&pq, DataPriorityComp);
//
//    PEnqueue(&pq, 'A');
//    PEnqueue(&pq, 'B');
//    PEnqueue(&pq, 'C');
//    printf("%c \n", PDequeue(&pq));
//
//    PEnqueue(&pq, 'A');
//    PEnqueue(&pq, 'B');
//    PEnqueue(&pq, 'C');
//    printf("%c \n", PDequeue(&pq));
//
//    while (!PQIsEmpty(&pq))
//        printf("%c \n", PDequeue(&pq));
//     
//
//    return 0;
//}



#include "PriorityQueue.h"
#include <String.h>

int DataPriorityComp(char* str1, char* str2)
{
    return strlen(str1) - strlen(str2);
}

int main(void)
{
    PQueue pq;
    PQueueInit(&pq, DataPriorityComp);

    PEnqueue(&pq, "Good Morning");
    PEnqueue(&pq, "AAA");
    PEnqueue(&pq, "BBBB");


    PEnqueue(&pq, "Good Morning");
    PEnqueue(&pq, "AAA");
    PEnqueue(&pq, "BBBB");

    while (!PQIsEmpty(&pq))
        printf("%s \n", PDequeue(&pq));

    return 0;
}