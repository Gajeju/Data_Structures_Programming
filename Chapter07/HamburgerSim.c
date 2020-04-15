//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include "CircularQueue.h"
//#pragma warning (disable : 4996)
//#pragma warning (disable : 6001)
//#pragma warning (disable : 6031)
//#pragma warning (disable : 6011)
//
//#define CUS_COM_TERM 15
//
//#define CHE_BUR	0
//#define BUL_BUR	1
//#define DUB_BUR	2
//
//#define CHE_TERM	12
//#define BUL_TERM	15
//#define DUB_TERM	23
//
//int main(void)
//{
//	int makeProc = 0;
//	int cheOrder = 0;
//	int bulOrder = 0;
//	int dubOrder = 0;
//	int sec;
//
//	Queue que;
//	
//	QueueInit(&que);
//	srand(time(NULL));
//
//	for (sec = 0; sec < 3600; sec++)
//	{
//		if (sec % CUS_COM_TERM == 0)
//		{
//			switch (rand() % 3)
//			{
//			case CHE_BUR:
//				Enqueue(&que, CHE_TERM);
//				cheOrder += 1;
//				break;
//			case BUL_BUR:
//				Enqueue(&que, BUL_TERM);
//				bulOrder += 1;
//				break;
//			case DUB_BUR:
//				Enqueue(&que, DUB_TERM);
//				dubOrder += 1;
//				break;
//
//			}
//		}
//		if (makeProc <= 0 && !QIsEmpty(&que))
//			makeProc = Dequeue(&que);
//		makeProc--;
//	}
//
//	printf(" - Cheese burger: %d \n", cheOrder);
//	printf(" - Bulgogi burger: %d \n", bulOrder);
//	printf(" - Double burger: %d \n", dubOrder);
//	printf(" - waiting room size: %d \n", QUE_LEN);
//
//	return 0;
//}