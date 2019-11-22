#include <stdio.h>
#include <stdlib.h>

//배열기반

//#include "ArrayBaseStack.h"
//
//void StackInit(Stack* pstack)
//{
//	pstack->topIndex = -1;
//}
//
//int SIsEmpty(Stack* pstack)
//{
//	if (pstack->topIndex == -1)
//		return TRUE;
//	else
//		return FALSE;
//}
//
//void SPush(Stack* pstack, Data data)
//{
//	pstack->topIndex += 1;
//	pstack->stackArr[pstack->topIndex] = data;
//}
//
//Data SPop(Stack* pstack)
//{
//	int rIdx;
//
//	if (SIsEmpty(pstack))
//	{
//		printf("Stack Memory Error !");
//		exit(-1);
//	}
//
//	rIdx = pstack->topIndex;
//	pstack->topIndex -= 1;
//	
//	return pstack->stackArr[rIdx];
//}
//
//Data Speek(Stack* pstack)
//{
//	if (SIsEmpty(pstack))
//	{
//		printf("Stack Memory Error !");
//		exit(-1);
//	}
//	return pstack->stackArr[pstack->topIndex];
//}


//연결리스트 기반
//#include "ListBaseStack.h"
//
//void StackInit(Stack* pstack)
//{
//	pstack->head = NULL;
//}
//
//int SIsEmpty(Stack* pstack)
//{
//	if (pstack->head == NULL)
//		return TRUE;
//	else
//		return FALSE;
//}
//
//void SPush(Stack* pstack, Data data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//
//	newNode->data = data;
//	newNode->next = pstack->head;
//
//	pstack->head = newNode;
//	
//}
//
//Data SPop(Stack* pstack)
//{
//	Node* rnode;
//	Data rdata;
//
//	if (SIsEmpty(pstack))
//	{
//		printf("Stack Memory Error !");
//		exit(-1);
//	}
//
//	rnode = pstack->head;
//	rdata = rnode->data;
//
//	pstack->head = pstack->head->next;
//	free(rnode);
//
//	return rdata;
//}
//
//Data SPeek(Stack* pstack)
//{
//	if (SIsEmpty(pstack))
//	{
//		printf("Stack Memory Error !");
//		exit(-1);
//	}
//
//	return pstack->head->data;
//}


//원형리스트 기반

#include "CLinkedList.h"
#include "CLLBaseStack.h"

void StackInit(Stack* pstack)
{
	pstack->plist = (List*)malloc(sizeof(List));
	ListInit(pstack->plist);
}

int SIsEmpty(Stack* pstack)
{
	if (LCount(pstack->plist))
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack* pstack, Data data)
{
	LInsertFront(pstack->plist);
}

Data SPop(Stack* pstack)
{
	Data data;
	LFirst(pstack->plist, &data);
	LRemove(pstack->plist);
	return data;
}

Data SPeek(Stack* pstack)
{
	Data data;
	LFirst(pstack->plist, &data);
	return data;
}






