#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedListDum.h"
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)
#pragma warning (disable : 6001)

void ListInit(List* plist)
{
	Node* Dum1 = (Node*)malloc(sizeof(Node));
	Node* Dum2 = (Node*)malloc(sizeof(Node));

	plist->head = Dum1;
	plist->tail = Dum2;

	plist->head->prev = NULL;
	plist->head->next = Dum2;

	plist->tail->prev = Dum1;
	plist->tail->next = NULL;

	plist->numOfData = 0;
}

void LInsert(List* plist, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->prev = plist->head;
	newNode->next = plist->head->next;

	plist->head->next->prev = newNode;
	plist->head->next = newNode;

	(plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
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

Data LRemove(List* plsit)
{

}

int LCount(List * plist)
{
	return plist->numOfData;
}

