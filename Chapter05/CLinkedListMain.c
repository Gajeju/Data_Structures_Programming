#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)

#include "CLinkedList.h"

int main(void)
{
	List list;
	int data;
	int nodeNum;
	ListInit(&list);

	//삽입
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsertFront(&list, 2);
	LInsertFront(&list, 1);
	LInsertFront(&list, 0);

	//연속 3회 출력
	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		for (int i = 0; i < LCount(&list) * 3 - 1; i++)
		{
			if (LNext(&list, &data))
				printf("%d ", data);
		}

	}
	puts("");

	//2의 배수 삭제
	nodeNum = LCount(&list);

	if (nodeNum != 0)
	{
		LFirst(&list, &data);
		if (data % 2 == 0)
			LRemove(&list);
		for (int i = 0; i < nodeNum - 1; i++)
		{
			LNext(&list, &data);
			if (data % 2 == 0)
				LRemove(&list);
		}

	}

	//출력
	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		for(int i = 0; i < LCount(&list) - 1; i++)
		{
			if (LNext(&list, &data))
				printf("%d ", data);
		}
	}

	return 0;
}