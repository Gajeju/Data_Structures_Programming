#include <stdio.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)
#pragma warning (disable : 6000)

//#include "DBLinkedList.h"
//
//int main(void)
//{
//	List list;
//	int data;
//	ListInit(&list);
//
//	LInsert(&list, 1);	LInsert(&list, 2);
//	LInsert(&list, 3);	LInsert(&list, 4);
//	LInsert(&list, 5);	LInsert(&list, 6);
//	LInsert(&list, 7);	LInsert(&list, 8);
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//			printf("%d ", data);
//
//		puts("");
//
//		while (LPrevious(&list, &data))
//			printf("%d ", data);
//		puts("");
//	}
//
//	return 0;
//}


//더미노드 기반

#include "DBLinkedListDum.h"

int main(void)
{
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 1);	LInsert(&list, 2);
	LInsert(&list, 3);	LInsert(&list, 4);
	LInsert(&list, 5);	LInsert(&list, 6);

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);

		puts("");
	}

	//삭제
	if (LFirst(&list, &data))
	{
		if (data % 2 == 0)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data % 2 == 0)
				LRemove(&list);
		}
	}

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
		puts("");
	}

	return 0;
}