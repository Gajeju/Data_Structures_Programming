#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)

//#include "CLinkedList.h"

//int main(void)
//{
//	List list;
//	int data;
//	int nodeNum;
//	ListInit(&list);
//
//	//삽입
//	LInsert(&list, 3);
//	LInsert(&list, 4);
//	LInsert(&list, 5);
//	LInsertFront(&list, 2);
//	LInsertFront(&list, 1);
//	LInsertFront(&list, 0);
//
//	//연속 3회 출력
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		for (int i = 0; i < LCount(&list) * 3 - 1; i++)
//		{
//			if (LNext(&list, &data))
//				printf("%d ", data);
//		}
//
//	}
//	puts("");
//
//	//2의 배수 삭제
//	nodeNum = LCount(&list);
//
//	if (nodeNum != 0)
//	{
//		LFirst(&list, &data);
//		if (data % 2 == 0)
//			LRemove(&list);
//		for (int i = 0; i < nodeNum - 1; i++)
//		{
//			LNext(&list, &data);
//			if (data % 2 == 0)
//				LRemove(&list);
//		}
//
//	}
//
//	//출력
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		for(int i = 0; i < LCount(&list) - 1; i++)
//		{
//			if (LNext(&list, &data))
//				printf("%d ", data);
//		}
//	}
//
//	return 0;
//}


//practice 1

//#include "employee.h"
//
//Employee* WhoIsNext(List* list, char* name, int day);
//void ShowEmployee(Employee* employee);
//
//int main(void)
//{
//	List list;
//	Employee* pemp;
//	ListInit(&list);
//
//	//삽입
//	pemp = (Employee*)malloc(sizeof(Employee));
//	strcpy(pemp->name, "Sunny");
//	pemp->empNum = 222222;
//	LInsert(&list, pemp);
//
//	pemp = (Employee*)malloc(sizeof(Employee));
//	strcpy(pemp->name, "Noa");
//	pemp->empNum = 333333;
//	LInsert(&list, pemp);
//
//	pemp = (Employee*)malloc(sizeof(Employee));
//	strcpy(pemp->name, "Loa");
//	pemp->empNum = 444444;
//	LInsert(&list, pemp);
//
//	pemp = (Employee*)malloc(sizeof(Employee));
//	strcpy(pemp->name, "Jery");
//	pemp->empNum = 555555;
//	LInsert(&list, pemp);
//
//	//출력
//	if (LFirst(&list, &pemp))
//	{
//		ShowEmployee(pemp);
//
//		for (int i = 0; i < LCount(&list) - 1; i++)
//		{
//			if (LNext(&list, &pemp))
//				ShowEmployee(pemp);
//		}
//	}
//
//	//Noa 2일 뒤
//	pemp = WhoIsNext(&list, "Noa", 2);
//	ShowEmployee(pemp);
//
//	//Jery 15일 뒤
//	pemp = WhoIsNext(&list, "Jery", 15);
//	ShowEmployee(pemp);
//
//	//삭제
//	if (LFirst(&list, &pemp))
//	{
//		free(pemp);
//
//		for (int i = 0; i < LCount(&list) - 1; i++)
//		{
//			if (LNext(&list, &pemp))
//				free(pemp);
//		}
//	}
//
//	return 0;
//}
//
//Employee* WhoIsNext(List* plist, char* name, int day)
//{
//	int i;
//	Employee* ret;
//	int num = LCount(plist);
//
//	LFirst(plist, &ret);
//
//	if (strcmp(ret->name, name) != 0)
//	{
//		for (i = 0; i < num - 1; i++)
//		{
//			LNext(plist, &ret);
//			if (strcmp(ret->name, name) == 0)
//				break;
//		}
//		if (i >= num - 1)
//			return NULL;
//	}
//	for (i = 0; i < day; i++)
//		LNext(plist, &ret);
//
//	return ret;
//}
//
//void ShowEmployee(Employee * employee)
//{
//	printf("이름 : %s \n", employee->name);
//	printf("사번 : %d \n", employee->empNum);
//	puts("");
//}
