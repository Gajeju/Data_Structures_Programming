#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#include "ArrayList.h"

//���� ����Ʈ

int main(void)
{
	//ArrayList ���� �� �ʱ�ȭ
	List list;
	int data;
	ListInit(&list);

	//5���� ������ ����
	LInsert(&list, 11);	LInsert(&list, 11);
	LInsert(&list, 22);	LInsert(&list, 22);
	LInsert(&list, 33);

	//����� �������� ��ü ���
	printf("���� �������� �� : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");

	//���� 22�� ��� Ž���Ͽ� ����
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

	//���� �� ���� ������ ��ü ���
	printf("���� �������� �� : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");

	return 0;
}