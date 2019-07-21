#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6001)
#pragma warning(disable : 6061)

//시간 복잡도 - 순차 탐색 알고리즘

//int LSearch(int ar[], int len, int target)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (ar[i] == target)
//			return i;
//	}
//	return -1;
//}
//
//int main(void)
//{
//	int arr[] = { 3, 5, 2, 4, 9 };
//	int idx;
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("탐색 실패 \n");
//	else
//		printf("타겟 저장 인덱스 : %d \n", idx);
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("탐색 실패 \n");
//	else
//		printf("타겟 저장 인덱스 : %d \n", idx);
//
//	return 0;
//}


//이진 탐색 알고리즘

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;

		if (target == ar[mid])
		{
			return mid;
		}
		else
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;
}

int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 : %d \n", idx);

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 : %d \n", idx);

	return 0;
}