#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#include "ArrayList.h"

//순차 리스트

int main(void)
{
	//ArrayList 생성 및 초기화
	List list;
	int data;
	ListInit(&list);

	//5개의 데이터 저장
	LInsert(&list, 11);	LInsert(&list, 11);
	LInsert(&list, 22);	LInsert(&list, 22);
	LInsert(&list, 33);

	//저장된 데이터의 전체 출력
	printf("현재 데이터의 수 : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");

	//숫자 22를 모두 탐색하여 삭제
	if (LFirst(&list, &data))
	{
		if (data == 22)
			LRemove(&list);
		
		while (LNext(&list, &data))
		{
			if (data == 22)
				LRemove(&list);
		}
	}

	//삭제 후 남은 데이터 전체 출력
	printf("현재 데이터의 수 : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");

	return 0;
}