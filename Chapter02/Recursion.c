#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)


//��� �Լ�

//void Recursive(int num)
//{
//	if (num <= 0)
//		return;
//	printf("Recursive call! %d \n", num);
//	Recursive(num - 1);
//}
//
//int main(void)
//{
//	Recursive(3);
//
//	return 0;
//}


//��� �Լ��� �̿��Ͽ� ���丮�� ����

//int Factorial(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}
//
//int main(void)
//{
//	printf("1! = %d \n", Factorial(1));
//	printf("2! = %d \n", Factorial(2));
//	printf("3! = %d \n", Factorial(3));
//	printf("4! = %d \n", Factorial(4));
//	printf("9! = %d \n", Factorial(9));
//
//	return 0;
//}


//�Ǻ���ġ ����

//int Fibo(int n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return Fibo(n - 1) + Fibo(n - 2);
//}
//
//int main(void)
//{
//	for (int i = 0; i < 15; i++)
//		printf("%d ", Fibo(i));
//
//	return 0;
//}


//�Ǻ���ġ ���� (ȣ����� ����)

//int Fibo(int n)
//{
//	printf("func call param %d \n", n);
//
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return Fibo(n - 1) + Fibo(n - 2);
//}
//
//int main(void)
//{
//	Fibo(7);
//
//	return 0;
//}


//���� Ž�� �˰�����

//int BSearchRecur(int ar[], int first, int last, int target)
//{
//	int mid;
//	if (first > last)
//		return -1;
//	
//	mid = (first + last) / 2;
//
//	if (ar[mid] == target)
//		return mid;
//	else if (target < ar[mid])
//		return BSearchRecur(ar, first, mid-1, target);
//	else
//		return BSearchRecur(ar, mid+1, last, target);
//}
//
//int main(void)
//{
//	int arr[] = { 1, 3, 4, 7, 9 };
//	int idx;
//
//	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
//	if (idx == -1)
//		printf("Ž�� ���� \n");
//	else
//		printf("Ÿ�� ���� �δ콺 : %d \n", idx);
//
//	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
//	if (idx == -1)
//		printf("Ž�� ���� \n");
//	else
//		printf("Ÿ�� ���� �δ콺 : %d \n", idx);
//
//	return 0;
//}


//�ϳ��� Ÿ��

void HanoiTowermove(int num, char from, char by, char to)
{
	if (num == 1)
		printf("����1�� %c���� %c�� �̵� \n", from, to);
	else
	{
		HanoiTowermove(num - 1, from, to, by);
		printf("����%d�� %c���� %c�� �̵� \n", num, from, to);
		HanoiTowermove(num - 1, by, from, to);
	}
}

int main(void)
{
	HanoiTowermove(3, 'A', 'B', 'C');

	return 0;
}