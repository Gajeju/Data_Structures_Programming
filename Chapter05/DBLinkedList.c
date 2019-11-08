#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)
#pragma warning (disable : 6001)

//#include "DBLinkedList.h"
//void ListInit(List* plist)
//{
//	plist->head = NULL;
//	plist->numOfData = 0;
//}
//
//void LInsert(List* plist, Data data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = data;
//
//	newNode->next = plist->head;
//	if (plist->head != NULL)
//		plist->head->prev = newNode;
//
//	newNode->prev = NULL;
//	plist->head = newNode;
//
//	(plist->numOfData)++;
//}
//
//int LFirst(List* plist, Data* pdata)
//{
//	if (plist->head == NULL)
//		return FALSE;
//
//	plist->cur = plist->head;
//	*pdata = plist->cur->data;
//
//	return TRUE;
//}
//
//int LNext(List* plist, Data* pdata)
//{
//	if (plist->cur->next == NULL)
//		return FALSE;
//
//	plist->cur = plist->cur->next;
//	*pdata = plist->cur->data;
//
//	return TRUE;
//}
//
//int LPrevious(List* plist, Data* pdata)
//{
//	if (plist->cur->prev == NULL)
//		return FALSE;
//	
//	plist->cur = plist->cur->prev;
//	*pdata = plist->cur->data;
//
//	return TRUE;
//}
//
//int LCount(List* plist)
//{
//	return plist->numOfData;
//}


//더미노드 기반

#include "DBLinkedListDum.h"

void ListInit(List* plist)
{
	plist->head = (Node*)malloc(sizeof(Node));;
	plist->tail = (Node*)malloc(sizeof(Node));;

	plist->head->prev = NULL;
	plist->head->next = plist->tail;

	plist->tail->prev = plist->head;
	plist->tail->next = NULL;

	plist->numOfData = 0;
}

void LInsert(List* plist, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->tail;
	newNode->prev = plist->tail->prev;

	plist->tail->prev->next = newNode;
	plist->tail->prev = newNode;

	(plist->numOfData)++;
}

int LFirst(List* plist, Data* pdata)
{
	if (plist->head->next == plist->tail)
		return FALSE;

	plist->cur = plist->head->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LNext(List * plist, Data * pdata)
{
	if (plist->cur->next == plist->tail)
		return FALSE;

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LPrevious(List * plist, Data * pdata)
{
	if (plist->cur->prev == plist->head)
		return FALSE;

	plist->cur = plist->cur->prev;
	*pdata = plist->cur->data;

	return TRUE;
}

Data LRemove(List * plist)
{
	Node* rpos = plist->cur;
	Data remv = plist->cur->data;

	plist->cur->prev->next = plist->cur->next;
	plist->cur->next->prev = plist->cur->prev;

	plist->cur = plist->cur->prev;

	free(rpos);
	(plist->numOfData)--;

	return remv;
}

int LCount(List * plist)
{
	return plist->numOfData;
}