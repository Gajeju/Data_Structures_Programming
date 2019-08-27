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

}
int LNext(List* plist, LData* pdata)
{

}

LData LRemove(List* plist)
{

}

int LCount(List* plist)
{

}