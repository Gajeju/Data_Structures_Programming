#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#include "ArrayList.h"

//순차 리스트

//int main(void)
//{
//	//ArrayList 생성 및 초기화
//	List list;
//	int data;
//	ListInit(&list);
//
//	//5개의 데이터 저장
//	LInsert(&list, 11);	LInsert(&list, 11);
//	LInsert(&list, 22);	LInsert(&list, 22);
//	LInsert(&list, 33);
//
//	//저장된 데이터의 전체 출력
//	printf("현재 데이터의 수 : %d \n", LCount(&list));
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
//	//숫자 22를 모두 탐색하여 삭제
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
//	//삭제 후 남은 데이터 전체 출력
//	printf("현재 데이터의 수 : %d \n", LCount(&list));
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


//배열기반 리스트 사용연습

//int main(void)
//{
//	//ArrayList의 생성 및 초기화
//	List list;
//	int  data;
//	ListInit(&list);
//
//	//데이터 저장
//	for (int i = 0; i < 20; i++)
//	{
//		LInsert(&list, i);
//	}
//
//	//데이터 출력
//	printf("저장된 데이터 수 : %d \n", LCount(&list));
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
//	//홀수 삭제
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
//	//데이터 출력
//	printf("저장된 데이터 수 : %d \n", LCount(&list));
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
//	//리스트 생성 및 초기화
//	List list;
//	ListInit(&list);
//
//	//정수 저장
//	for (int i = 1; i < 10; i++)
//		LInsert(&list, i);
//	printf("현재 데이터의 수 : %d \n", LCount(&list));
//
//	//데이터 참조 후 덧셈 연산
//	if (LFirst(&list, &data))
//	{
//		result += data;
//		while (LNext(&list, &data))
//			result += data;
//	}
//	printf("리스트 데이터의 총 합 : %d \n", result);
//
//	//2의 배수와 3의 배수 삭제
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
//	//출력
//	printf("현재 데이터의 수 : %d \n", LCount(&list));
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


//포인터 변수의 저장

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
//	//4개의 데이터 저장
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
//	//저장된 데이터 출력
//	printf("현재 데이터 수 : %d \n", LCount(&list));
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
//	//xpos가 2인 데이터 삭제
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
//	//삭제 후 남은 데이터 출력
//	printf("현재 데이터의 수 : %d \n", LCount(&list));
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
//	pcard = MakeNameCard("이진수", "010-1111-2222");
//	LInsert(&list, pcard);
//
//	pcard = MakeNameCard("한지영", "010-2222-5555");
//	LInsert(&list, pcard);
//
//	pcard = MakeNameCard("조수진", "010-3333-7777");
//	LInsert(&list, pcard);
//	
//	//한지영 정보 출력
//	if (LFirst(&list, &pcard))
//	{
//		if (!Namecompare(pcard, "한지영"))
//			ShowNameCardInfo(pcard);
//		else
//		{
//			while (LNext(&list, &pcard))
//			{
//				if (!Namecompare(pcard, "한지영"))
//				{
//					ShowNameCardInfo(pcard);
//					break;
//				}
//			
//			}
//		}
//	}
//
//	//이수진 정보 변경
//	if (LFirst(&list, &pcard))
//	{
//		if (!Namecompare(pcard, "이수진"))
//		{
//			ChangePhoneNum(pcard, "010-9999-9999");
//		}
//		else
//		{
//			while (LNext(&list, &pcard))
//			{
//				if (!Namecompare(pcard, "이수진"))
//				{
//					ChangePhoneNum(pcard, "010-9999-9999");
//					break;
//				}
//			}
//		}
//	}
//
//	//조수진의 정보를 삭제
//	if (LFirst(&list, &pcard))
//	{
//		if (!Namecompare(pcard, "조수진"))
//		{
//			pcard = LRemove(&list);
//			free(pcard);
//		}
//		else
//		{
//			while (LNext(&list, &pcard))
//			{
//				if (!Namecompare(pcard, "조수진"))
//				{
//					pcard = LRemove(&list);
//					free(pcard);
//					break;
//				}
//			}
//		}
//	}
//
//	//출력
//
//	printf("현재 데이터의 수 : %d \n", LCount(&list));
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