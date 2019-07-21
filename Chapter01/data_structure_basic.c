#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6001)
#pragma warning(disable : 6061)

//½Ã°£ º¹Àâµµ - ¼øÂ÷ Å½»ö ¾Ë°í¸®Áò

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
//		printf("Å½»ö ½ÇÆĞ \n");
//	else
//		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º : %d \n", idx);
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("Å½»ö ½ÇÆĞ \n");
//	else
//		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º : %d \n", idx);
//
//	return 0;
//}


//ÀÌÁø Å½»ö ¾Ë°í¸®Áò

//int BSearch(int ar[], int len, int target)
//{
//	int first = 0;
//	int last = len - 1;
//	int mid;
//
//	while (first <= last)
//	{
//		mid = (first + last) / 2;
//
//		if (target == ar[mid])
//		{
//			return mid;
//		}
//		else
//		{
//			if (target < ar[mid])
//				last = mid - 1;
//			else
//				first = mid + 1;
//		}
//	}
//	return -1;
//}
//
//int main(void)
//{
//	int arr[] = { 1, 3, 5, 7, 9 };
//	int idx;
//
//	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("Å½»ö ½ÇÆĞ \n");
//	else
//		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º : %d \n", idx);
//
//	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("Å½»ö ½ÇÆĞ \n");
//	else
//		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º : %d \n", idx);
//
//	return 0;
//}


//O(logn) ÀÇ ¿¬»êÈ½¼ö

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0;

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
		opCount += 1;
	}
	printf("ºñ±³¿¬»êÈ½¼ö : %d \n", opCount);
	return -1;
}

int main(void)
{
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
	if (idx == -1)
		printf("Å½»ö ½ÇÆĞ \n\n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎ´ì½º : %d \n", idx);

	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
	if (idx == -1)
		printf("Å½»ö ½ÇÆĞ \n\n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎ´ì½º : %d \n", idx);

	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
	if (idx == -1)
		printf("Å½»ö ½ÇÆĞ \n\n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎ´ì½º : %d \n", idx);


	return 0;
}