#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)


//�迭��� ����Ʈ�� �Ѱ�

//int main(void)
//{
//	int arr[10];
//	int readCount = 0;
//	int readData;
//	
//	while (1)
//	{
//		printf("�ڿ��� �Է� : ");
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


//�����Ҵ� ����� ����Ʈ

//typedef struct _node
//{
//	int data;
//	struct _node* next;	//����Ʈ�� �����ϴ� ����
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
//	//������ �Է�
//	while (1)
//	{
//		printf("�ڿ��� �Է� : ");
//		scanf("%d", &readData);
//		if (readData < 1)
//			break;
//
//		//����� �߰�
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
//	//������ ���
//	printf("�Է� ���� �������� ��ü��� \n");
//	if (head == NULL)
//	{
//		printf("����� �ڿ����� �������� �ʽ��ϴ� \n");
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
//	//�޸��� ��������
//	if (head == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		Node* delNode = head;
//		Node* delNextNode = head->next;
//
//		printf("%d��(��) �����մϴ� \n", head->data);
//		free(delNode);
//
//		while (delNextNode != NULL)
//		{
//			delNode = delNextNode;
//			delNextNode = delNextNode->next;
//
//			printf("%d��(��) �����մϴ� \n", delNode->data);
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
//	//������ �Է�
//	while (1)
//	{
//		printf("�ڿ��� �Է� : ");
//		scanf("%d", &readData);
//		
//		if (readData < 1)
//			break;
//		
//		//��� �߰�
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
//	//����
//	
//	printf("��� \n");
//	
//	if (head == NULL)
//		printf("�����Ͱ� �������� �ʽ��ϴ�");
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
//	//���̳�� ����
//	head = (Node*)malloc(sizeof(Node));
//	tail = head;
//
//	//������ �Է�
//	while (1)
//	{
//		printf("�ڿ��� �Է� : ");
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
//	//����
//	printf("��� : ");
//
//	if (head == tail)
//		printf("�����Ͱ� �����ϴ� \n");
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
//	//�޸��� ��������
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
//			printf("%d��(��) �����մϴ� \n", delNode->data);
//			free(delNode);
//		}
//	}
//
//	return 0;
//}


//���̳���� ���Ḯ��Ʈ ����

#include "DLinkedList.h"

int main(void)
{
	//�ʱ�ȭ
	List list;
	int data;
	ListInit(&list);

	//������ ����
	LInsert(&list, 11);	LInsert(&list, 11);
	LInsert(&list, 22);	LInsert(&list, 22);
	LInsert(&list, 33);	LInsert(&list, 33);

	//���
	printf("������ �� : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	puts("");

	//���� 22 ��� ����
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

	//���
	printf("������ �� : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	puts("");

	return 0;
}



//������ ������ ����

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
