//#include <stdio.h>
//
//void InserSrot(int arr[], int n)
//{
//	int insData;
//	int i, j;
//
//	for (i = 1; i < n; i++)
//	{
//		insData = arr[i];
//
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (arr[j] > insData)
//				arr[j + 1] = arr[j];
//			else
//				break;
//		}
//		arr[j + 1] = insData;
//	}
//}
//
//
//int main(void)
//{
//	int arr[5] = { 5, 3, 2, 4, 1 };
//	
//	InserSrot(arr, sizeof(arr) / sizeof(int));
//
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}