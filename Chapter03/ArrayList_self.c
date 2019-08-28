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

}

int LCount(List* plist)
{
	return (plist->numOfData);
}