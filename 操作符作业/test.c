#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &n, &m);
//    
//    int* matrix = (int*)malloc(sizeof(int) * m * n);
//    int size = 0;
//    int i = 0;
//    for (i = 0; i < n * m; i++)
//    {
//        scanf("%d", &matrix[size]);
//        size++;
//    }
//    size = 0;
//    for (i = 0; i < n * m; i++)
//    {
//
//        int temp = 0;
//        scanf("%d", &temp);
//        if (temp != matrix[size])
//        {
//            printf("No\n");
//            return 0;
//        }
//        size++;
//    }
//
//    printf("Yes\n");
//    
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//
//
//	int** matrix = (int**)malloc(n * sizeof(int*));
//	for (int i = 0; i < n; i++)
//	{
//		matrix[i] = (int*)malloc(sizeof(int) * m);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &matrix[i][j]);
//		}
//	}
//
//	for (int j = 0; j < m; j++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	
//	
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#define MAX 5
//int main()
//{
//	int arr[MAX] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (int i = 0; i < MAX; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int temp = a;
//
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += a;
//		a = a * 10 + temp;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int _getDigit(int x)
{
	int ret = 0;
	while (x)
	{
		ret++;
		x /= 10;
	}

	return ret;
}

bool isTarget(int x)
{
	int digit = _getDigit(x);
	if (digit == 1)
	{
		return true;
	}
	int sum = 0;
	int temp = x;
	while (temp)
	{
		sum = sum + pow(temp % 10, digit);
		temp /= 10;
	}

	if (sum == x)
	{
		return true;
	}

	return false;
}

int main()
{
	for (int i = 0; i <= 100000; i++)
	{
		if (isTarget(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}