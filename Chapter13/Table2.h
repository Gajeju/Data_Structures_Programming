#pragma once

#include "Slot2.h"
#include "DLinkedList.h"

#define MAX_TBL	100

typedef int HashFunc(Key key);

typedef struct _table
{
	List tbl[MAX_TBL];
	HashFunc* hf;
} Table;

void TBLInit(Table* pt, HashFunc* f);
void TBLInsert(Table* pt, Key k, Value v);
Value TBLDelete(Table* pt, Key k);
Value TBLSearch(Table* pt, Key k);