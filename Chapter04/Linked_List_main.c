#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)


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
//