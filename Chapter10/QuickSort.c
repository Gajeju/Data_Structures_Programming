//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable : 4996)
//#pragma warning (disable : 6001)
//#pragma warning (disable : 6011)
//#pragma warning (disable : 6031)
//
////void Swap(int arr[], int idx1, int idx2)
////{
////	int temp = arr[idx1];
////	arr[idx1] = arr[idx2];
////	arr[idx2] = temp;
////}
////
////int Partition(int arr[], int left, int right)
////{
////	int pivot = arr[left];
////	int low = left + 1;
////	int high = right;
////
////	while (low <= high)
////	{
////		while (pivot >= arr[low] && low <=right)
////			low++;
////		while (pivot <= arr[high] && high >= (left +1))
////			high--;
////		
////		if (low <= high)
////			Swap(arr, low, high);
////	}
////	Swap(arr, left, high);
////	return high;
////}
////
////void QuickSort(int arr[], int left, int right)
////{
////	if (left <= right)
////	{
////		int pivot = Partition(arr, left, right);
////		QuickSort(arr, left, pivot - 1);
////		QuickSort(arr, pivot + 1, right);
////	}
////}
////
////int main(void)
////{
////	int arr[7] = { 3, 2, 4, 1, 7, 6, 5 };
////	//int arr[5] = { 2,3,3,3,5 };
////	int len = sizeof(arr) / sizeof(int);
////
////	QuickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);
////
////	for (int i = 0; i < len; i++)
////		printf("%d ", arr[i]);
////
////	return 0;
////}
//
//
////문제 10-1 pivot 선택
//
//void Swap(int arr[], int idx1, int idx2)
//{
//	int temp = arr[idx1];
//	arr[idx1] = arr[idx2];
//	arr[idx2] = temp;
//}
//
//int Pivot(int arr[], int left, int right)
//{
//	int sample[3] = { (left + right) / 2, left, right };
//	
//	if (arr[sample[0]] > arr[sample[1]])
//		Swap(sample, 0, 1);
//	if (arr[sample[1]] > arr[sample[2]])
//		Swap(sample, 1, 2);
//	if (arr[sample[0]] > arr[sample[1]])
//		Swap(sample, 0, 1);
//
//	return sample[1];
//}
//
//int Partition(int arr[], int left, int right)
//{
//	int pIdx = Pivot(arr, left, right);
//	int pivot = arr[pIdx];
//	int low = left + 1;
//	int high = right;
//
//	printf("피벗 : %d \n", pivot);
//	Swap(arr, left, pIdx);
//
//	while (low <= high)
//	{
//		while (pivot >= arr[low] && low <= right)
//			low++;
//		while (pivot <= arr[high] && high >= (left + 1))
//			high--;
//
//		if (low <= high)
//			Swap(arr, low, high);
//	}
//	Swap(arr, left, high);
//	return high;
//}
//
//void QuickSort(int arr[], int left, int right)
//{
//	if (left <= right)
//	{
//		int pivot = Partition(arr, left, right);
//		QuickSort(arr, left, pivot - 1);
//		QuickSort(arr, pivot + 1, right);
//	}
//}
//
//int main(void)
//{
//	int arr[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	int len = sizeof(arr) / sizeof(int);
//
//	QuickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);
//
//	for (int i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}