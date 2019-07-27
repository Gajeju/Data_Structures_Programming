#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)


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

typedef struct _node
{
	int data;
	struct _node* next;
} Node;

int main(void)
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	//데이터 입력
	while (1)
	{
		printf("자연수 입력 : ");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		//노드의 추가
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;
		
		if (head == NULL)
			head = newNode;
		else
			tail->next = newNode;

		tail = newNode;
	}
	puts("");

	//데이터 출력
	printf("입력 받은 데이터의 전체출력 \n");
	if (head == NULL)
	{
		printf("저장된 자연수가 존재하지 않습니다 \n");
	}
	else
	{
		cur = head;
		printf("%d ", cur->data);

		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	puts("");

	//메모리의 해제과정
	if (head == NULL)
	{
		return 0;
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d을(를) 삭제합니다 \n", head->data);
		free(delNode);

		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d을(를) 삭제합니다 \n", delNode->data);
			free(delNode);
		}
	}

	return 0;
}
