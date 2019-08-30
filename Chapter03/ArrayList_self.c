#include <stdio.h>
#include "ArrayList.h"

void ListInit(List* plist)
{
	(plist->numOfData) = 0;
	(plist->curPositon) = -1;
}

void LInsert(List* plist, LData data)
{
	if ((plist->numOfData) >= LIST_LEN)
	{
		printf("더 이상 저장할 수 없습니다");
		return;
	}
	(plist->arr[(plist->numOfData)]) = data;
	(plist->numOfData)++;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->numOfData == 0)
		return FALSE;

	(plist->curPositon) = 0;
	pdata = &(plist->arr[0]);
	return TRUE;
}

int LNext(List* plist, LData* pdata)
{
	if ((plist->curPositon) >= (plist->numOfData)-1)
		return FALSE;

	(plist->curPositon)++;
	pdata = &(plist->arr[plist->curPositon]);
	return TRUE;
}

LData LRemove(List* plist)
{
	int rpos = plist->curPositon;
	int num = plist->numOfData;
	LData rdata = plist->arr[rpos];

	for (int i = rpos; i < num - 1; i++)
		plist->arr[i] = plist->arr[i + 1];

	(plist->numOfData)--;
	(plist->curPositon)--;
	return rdata;
}

int LCount(List* plist)
{
	
}