#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)


//배열기반 리스트의 한계

//int main(void)
//{
//	int arr[10];
//	int readCount = 0;
//	int readData;
//	
//	while (1)
//	{
//		printf("자연수 입력 : ");
//		scanf("%d", &readData);
//		if (readData < 1)
//			break;
//
//		arr[readCount++] = readData;
//	}
//
//	for (int i = 0; i < readCount; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}


//동적할당 기반의 리스트

//typedef struct _node
//{
//	int data;
//	struct _node* next;	//리스트를 연결하는 도구
//} Node;
//
//int main(void)
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* cur = NULL;
//
//	Node* newNode = NULL;
//	int readData;
//
//	//데이터 입력
//	while (1)
//	{
//		printf("자연수 입력 : ");
//		scanf("%d", &readData);
//		if (readData < 1)
//			break;
//
//		//노드의 추가
//		newNode = (Node*)malloc(sizeof(Node));
//		newNode->data = readData;
//		newNode->next = NULL;
//		
//		if (head == NULL)
//			head = newNode;
//		else
//			tail->next = newNode;
//
//		tail = newNode;
//	}
//	puts("");
//
//	//데이터 출력
//	printf("입력 받은 데이터의 전체출력 \n");
//	if (head == NULL)
//	{
//		printf("저장된 자연수가 존재하지 않습니다 \n");
//	}
//	else
//	{
//		cur = head;
//		printf("%d ", cur->data);
//
//		while (cur->next != NULL)
//		{
//			cur = cur->next;
//			printf("%d ", cur->data);
//		}
//	}
//	puts("");
//
//	//메모리의 해제과정
//	if (head == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		Node* delNode = head;
//		Node* delNextNode = head->next;
//
//		printf("%d을(를) 삭제합니다 \n", head->data);
//		free(delNode);
//
//		while (delNextNode != NULL)
//		{
//			delNode = delNextNode;
//			delNextNode = delNextNode->next;
//
//			printf("%d을(를) 삭제합니다 \n", delNode->data);
//			free(delNode);
//		}
//	}
//
//	return 0;
//}


//practice 1

//typedef struct _node
//{
//	int data;
//	struct _node* next;
//} Node;
//
//int main(void)
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* cur = NULL;
//	
//	Node* newNode = NULL;
//	int readData;
//
//	//데이터 입력
//	while (1)
//	{
//		printf("자연수 입력 : ");
//		scanf("%d", &readData);
//		
//		if (readData < 1)
//			break;
//		
//		//노드 추가
//		newNode = (Node*)malloc(sizeof(Node));
//		(newNode->data) = readData;
//		newNode->next = NULL;
//
//		if (head == NULL)
//		{
//			head = newNode;
//			tail = newNode;
//		}
//		else
//		{
//			newNode->next = head;
//			head = newNode;
//		}
//
//	}
//
//	//참조
//	
//	printf("출력 \n");
//	
//	if (head == NULL)
//		printf("데이터가 존재하지 않습니다");
//	else
//	{
//		cur = head;
//		printf("%d ", cur->data);
//
//		while (cur->next != NULL)
//		{
//			cur = cur->next;
//			printf("%d ", cur->data);
//		}
//	}
//
//	return 0;
//}


//practice 2

//typedef struct _node
//{
//	int data;
//	struct _node* next;
//} Node;
//
//int main(void)
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* cur = NULL;
//
//	Node* newNode = NULL;
//	int readData;
//	
//	//더미노드 삽입
//	head = (Node*)malloc(sizeof(Node));
//	tail = head;
//
//	//데이터 입력
//	while (1)
//	{
//		printf("자연수 입력 : ");
//		scanf("%d", &readData);
//
//		if (readData < 1)
//		{
//			break;
//		}
//		else
//		{
//			newNode = (Node*)malloc(sizeof(Node));
//			newNode->data = readData;
//			newNode->next = NULL;
//
//			tail->next = newNode;
//			tail = newNode;
//		}
//	}
//
//	//참조
//	printf("출력 : ");
//
//	if (head == tail)
//		printf("데이터가 없습니다 \n");
//	else
//	{
//		cur = head->next;
//		printf("%d ", cur->data);
//		while (cur->next != NULL)
//		{
//			cur = cur->next;
//			printf("%d ", cur->data);
//		}
//	}
//
//	puts("");
//
//	//메모리의 해제과정
//	if (head == tail)
//	{
//		return 0;
//	}
//	else
//	{
//		Node* delNode = head;
//		Node* delNextNode = delNode->next;
//
//		while (delNextNode != NULL)
//		{
//			delNode = delNextNode;
//			delNextNode = delNextNode->next;
//
//			printf("%d을(를) 삭제합니다 \n", delNode->data);
//			free(delNode);
//		}
//	}
//
//	return 0;
//}


//더미노드기반 연결리스트 구현

#include "DLinkedList.h"

int main(void)
{
	//초기화
	List list;
	int data;
	ListInit(&list);

	//데이터 저장
	LInsert(&list, 11);	LInsert(&list, 11);
	LInsert(&list, 22);	LInsert(&list, 22);
	LInsert(&list, 33);	LInsert(&list, 33);

	//출력
	printf("데이터 수 : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	puts("");

	//숫자 22 모두 삭제
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

	//출력
	printf("데이터 수 : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	puts("");

	return 0;
}



//포인터 변수의 저장

//#include "Point.h"
//#include "DLinkedList.h"
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
