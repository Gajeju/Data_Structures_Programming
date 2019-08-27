#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#include "Point.h"
#include "NameCard.h"

#define TRUE	1
#define FALSE	0

#define LIST_LEN	100
typedef int LData;
//typedef Point* LData;
//ypedef NameCard* LData;

typedef struct __ArrayList
{
	LData arr[LIST_LEN];
	int numOfData;
	int curPositon;
} ArrayList;

typedef ArrayList List;

void ListInit(List* plist);
void LInsert(List* plist, LData);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

#endif