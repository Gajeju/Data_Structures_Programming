#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)

//�迭��� ���� Queue�� ����

//#include "CircularQueue.h"
//
//int main(void)
//{
//	Queue q;
//	QueueInit(&q);
//
//	Enqueue(&q, 1);	Enqueue(&q, 2);
//	Enqueue(&q, 3);	Enqueue(&q, 4);
//	Enqueue(&q, 5);
//
//	while (!QIsEmpty(&q))
//	{
//		printf("%d ", Dequeue(&q));
//	}
//
//	return 0;
//}


//���Ḯ��Ʈ ��� ť

#include "ListBaseQueue.h"

int main(void)
{
	Queue q;
	QueueInit(&q);

	Enqueue(&q, 1);	Enqueue(&q, 2);
	Enqueue(&q, 3);	Enqueue(&q, 4);
	Enqueue(&q, 5);

	while (!QIsEmpty(&q))
	{
		printf("%d ", Dequeue(&q));
	}

	return 0;
}