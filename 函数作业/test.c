#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//bool isPrime(int x)
//{
//	if (x < 2)
//	{
//		return false;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 2; i <= sqrt(x); i++)
//		{
//			if (x % i == 0)
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (isPrime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//bool isLeapYear(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (isLeapYear(i))
//		{
//			printf("%d������\n", i);
//		}
//		else
//		{
//			printf("%d��������\n", i);
//		}
//	}
//	return 0;
//}

//void exange(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int a = 5;
//	int b = -6;
//	printf("����ǰ��a = %d, b = %d\n", a, b);
//	exange(&a, &b);
//	printf("������a = %d, b = %d\n", a, b);
//}

void Print(int x)
{
	int i = 0;
	for (i = 1; i <= x; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%2d=%-4d", j, i, j * i);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	return 0;
}