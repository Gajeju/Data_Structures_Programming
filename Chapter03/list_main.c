#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#include "ArrayList.h"

//���� ����Ʈ

//int main(void)
//{
//	//ArrayList ���� �� �ʱ�ȭ
//	List list;
//	int data;
//	ListInit(&list);
//
//	//5���� ������ ����
//	LInsert(&list, 11);	LInsert(&list, 11);
//	LInsert(&list, 22);	LInsert(&list, 22);
//	LInsert(&list, 33);
//
//	//����� �������� ��ü ���
//	printf("���� �������� �� : %d \n", LCount(&list));
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d", data);
//
//		while (LNext(&list, &data))
//			printf("%d ", data);
//	}
//	printf("\n\n");
//
//	//���� 22�� ��� Ž���Ͽ� ����
//	if (LFirst(&list, &data))
//	{
//		if (data == 22)
//			LRemove(&list);
//		
//		while (LNext(&list, &data))
//		{
//			if (data == 22)
//				LRemove(&list);
//		}
//	}
//
//	//���� �� ���� ������ ��ü ���
//	printf("���� �������� �� : %d \n", LCount(&list));
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//			printf("%d ", data);
//	}
//	printf("\n\n");
//
//	return 0;
//}


//�迭��� ����Ʈ ��뿬��

//int main(void)
//{
//	//ArrayList�� ���� �� �ʱ�ȭ
//	List list;
//	int  data;
//	ListInit(&list);
//
//	//������ ����
//	for (int i = 0; i < 20; i++)
//	{
//		LInsert(&list, i);
//	}
//
//	//������ ���
//	printf("����� ������ �� : %d \n", LCount(&list));
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//			printf("%d ", data);
//	}
//	puts("");
//
//	//Ȧ�� ����
//	if (LFirst(&list, &data))
//	{
//		if (data % 2 == 1)
//			LRemove(&list);
//
//		while (LNext(&list, &data))
//		{
//			if (data % 2 == 1)
//				LRemove(&list);
//		}
//	}
//
//	//������ ���
//	printf("����� ������ �� : %d \n", LCount(&list));
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//			printf("%d ", data);
//	}
//
//	return 0;
//}


//practice 1

//int main(void)
//{
//	int data;
//	int result = 0;
//
//	//����Ʈ ���� �� �ʱ�ȭ
//	List list;
//	ListInit(&list);
//
//	//���� ����
//	for (int i = 1; i < 10; i++)
//		LInsert(&list, i);
//	printf("���� �������� �� : %d \n", LCount(&list));
//
//	//������ ���� �� ���� ����
//	if (LFirst(&list, &data))
//	{
//		result += data;
//		while (LNext(&list, &data))
//			result += data;
//	}
//	printf("����Ʈ �������� �� �� : %d \n", result);
//
//	//2�� ����� 3�� ��� ����
//	if(LFirst(&list, &data))
//	{
//		if ((data % 2) == 0 || (data % 3) == 0)
//			LRemove(&list);
//		while (LNext(&list, &data))
//		{
//			if ((data % 2) == 0 || (data % 3) == 0)
//				LRemove(&list);
//		}
//	}
//
//	//���
//	printf("���� �������� �� : %d \n", LCount(&list));
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//		while (LNext(&list, &data))
//			printf("%d ", data);
//	}
//	puts("");
//
//	return 0;
//}


//������ ������ ����

//#include "Point.h"
//
//int main(void)
//{
//	List list;
//	Point compPos;
//	Point* ppos;
//
//	ListInit(&list);
//
//	//4���� ������ ����
//	ppos = (Point*)malloc(sizeof(Point));
//	SetPointPos(ppos, 2, 1);
//	LInsert(&list, ppos);
//
//	ppos = (Point*)malloc(sizeof(Point));
//	SetPointPos(ppos, 2, 2);
//	LInsert(&list, ppos);
//
//	ppos = (Point*)malloc(sizeof(Point));
//	SetPointPos(ppos, 3, 1);
//	LInsert(&list, ppos);
//
//	ppos = (Point*)malloc(sizeof(Point));
//	SetPointPos(ppos, 3, 2);
//	LInsert(&list, ppos);
//
//	//����� ������ ���
//	printf("���� ������ �� : %d \n", LCount(&list));
//
//	if (LFirst(&list, &ppos))
//	{
//		ShowPointPos(ppos);
//
//		while (LNext(&list, &ppos))
//			ShowPointPos(ppos);
//	}
//	puts("");
//
//	//xpos�� 2�� ������ ����
//	compPos.xpos = 2;
//	compPos.ypos = 0;
//
//	if (LFirst(&list, &ppos))
//	{
//		if (PointComp(ppos, &compPos) == 1)
//		{
//			ppos = LRemove(&list);
//			free(ppos);
//		}
//
//		while (LNext(&list, &ppos))
//		{
//			if (PointComp(ppos, &compPos) == 1)
//			{
//				ppos = LRemove(&list);
//				free(ppos);
//			}
//		}
//	}
//
//	//���� �� ���� ������ ���
//	printf("���� �������� �� : %d \n", LCount(&list));
//
//	if (LFirst(&list, &ppos))
//	{
//		ShowPointPos(ppos);
//
//		while (LNext(&list, &ppos))
//			ShowPointPos(ppos);
//	}
//	puts("");
//
//	return 0;
//}


//practice 2

//#include "NameCard.h"
//
//int main(void)
//{
//	List list;
//	NameCard* pcard;
//	ListInit(&list);
//
//	pcard = MakeNameCard("������", "010-1111-2222");
//	LInsert(&list, pcard);
//
//	pcard = MakeNameCard("������", "010-2222-5555");
//	LInsert(&list, pcard);
//
//	pcard = MakeNameCard("������", "010-3333-7777");
//	LInsert(&list, pcard);
//	
//	//������ ���� ���
//	if (LFirst(&list, &pcard))
//	{
//		if (!Namecompare(pcard, "������"))
//			ShowNameCardInfo(pcard);
//		else
//		{
//			while (LNext(&list, &pcard))
//			{
//				if (!Namecompare(pcard, "������"))
//				{
//					ShowNameCardInfo(pcard);
//					break;
//				}
//			
//			}
//		}
//	}
//
//	//�̼��� ���� ����
//	if (LFirst(&list, &pcard))
//	{
//		if (!Namecompare(pcard, "�̼���"))
//		{
//			ChangePhoneNum(pcard, "010-9999-9999");
//		}
//		else
//		{
//			while (LNext(&list, &pcard))
//			{
//				if (!Namecompare(pcard, "�̼���"))
//				{
//					ChangePhoneNum(pcard, "010-9999-9999");
//					break;
//				}
//			}
//		}
//	}
//
//	//�������� ������ ����
//	if (LFirst(&list, &pcard))
//	{
//		if (!Namecompare(pcard, "������"))
//		{
//			pcard = LRemove(&list);
//			free(pcard);
//		}
//		else
//		{
//			while (LNext(&list, &pcard))
//			{
//				if (!Namecompare(pcard, "������"))
//				{
//					pcard = LRemove(&list);
//					free(pcard);
//					break;
//				}
//			}
//		}
//	}
//
//	//���
//
//	printf("���� �������� �� : %d \n", LCount(&list));
//
//	if (LFirst(&list, &pcard))
//	{
//		ShowNameCardInfo(pcard);
//
//		while (LNext(&list, &pcard))
//			ShowNameCardInfo(pcard);
//	}
//
//	return 0;
//}