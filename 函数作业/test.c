#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include  "Add.h"

//导入静态库
#pragma comment(lib, "Add.lib")

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
//			printf("%d是闰年\n", i);
//		}
//		else
//		{
//			printf("%d不是闰年\n", i);
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
//	printf("交换前：a = %d, b = %d\n", a, b);
//	exange(&a, &b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//}

//void Print(int x)
//{
//	int i = 0;
//	for (i = 1; i <= x; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%2d=%-4d", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a + b = %d\n", Add(a, b));
//	return 0;
//}

double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1.0;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	while (1)
	{
		scanf("%d%d", &n, &k);
		printf("%lf", Pow(n, k));
	}
	return 0;
}