#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//#include <stdio.h>
//int isTarget(int x)
//{
//    if (x < 10)
//    {
//        return 0;
//    }
//    int base = x % 10;
//    x /= 10;
//    while (x % 10 == base)
//    {
//        x /= 10;
//    }
//    base = x % 10;
//    while (x % 10 == base)
//    {
//        x /= 10;
//    }
//    if (x == 0)
//    {
//        return 1;
//    }
//    return 0;
//}
//int main()
//{
//    int num = 0;
//    while (scanf("%d", &num) != 0)
//    {
//        int temp = num;
//        
//        while (1)
//        {
//            temp = temp + num;
//            //printf("%d ", temp);
//            if (isTarget(temp))
//            {
//                printf("%d: %d\n", num, temp);
//                break;
//            }
//        }
//    }
//
//    return 0;
//}

//int main(void)
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= (n + 1); i++)
//		{
//			//ǰ�벿��
//			int j = 0;
//			for (j = 1; j <= n + 2 - i; j++)
//			{
//				printf("* ");
//			}
//			//��ӡ�ո�
//			for (j = 1; j <= i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//
//		for (i = 1; i <= n; i++)
//		{
//			//��벿��
//			int j = 0;
//			for (j = 1; j <= i + 1; j++)
//			{
//				printf("* ");
//			}
//			//��ӡ�ո�
//			for (j = 1; j <= n - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//leetcode - 1482. ���� m �����������������
//#include <stdio.h>
//#include <stdlib.h>
//int minDays(int* bloomDay, int bloomDaySize, int m, int k) {
//    if (bloomDaySize < m * k)
//    {
//        //说明花园的花不够用
//        return -1;
//    }
//
//    int left = 0;
//    int right = INT_MAX;
//    int ret[bloomDaySize];
//    while (left < right)
//    {
//        int mid = (left + right) >> 1;
//        int i = 0;
//        for (i = 0; i < bloomDaySize; i++)
//        {
//            if (bloomDay[i] <= mid)
//            {
//                //花开了
//                ret[i] = 1;
//            }
//            else
//            {
//                //花没开
//                ret[i] = 0;
//            }
//        }
//        //求ret数组中的连续1,每组要有k个1，计算组数之后和m比较
//        int cnt = 0; //表示组数
//        i = 0;
//        while (i < bloomDaySize)
//        {
//            if (ret[i] == 1)
//            {
//                int j = 1;//j开始记录本组连续的1数
//                i++;
//                //j=k表示本次以及够形成一组花
//                while ((i < bloomDaySize) && (ret[i] == 1) && (j < k))
//                {
//                    j++;
//                    i++;
//                }
//
//                if (j == k)
//                {
//                    cnt++;
//                }
//            }
//            else
//            {
//                i++;
//            }
//        }
//
//        //判断组数
//        if (cnt >= m)
//        {
//            //说明还可以缩短时间
//            //且有可能这就是最短时间
//            right = mid;
//        }
//        else
//        {
//            //说明加长时间
//            left = mid + 1;
//        }
//    }
//    return right;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int m = 0;
//    int k = 0;
//    int bloomDay[n];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &bloomDay[i]);
//    }
//    scanf("%d %d", &m, &k);
//    int ret = minDays(bloomDay, n, m, k);
//    printf("%d\n", ret);
//    return 0;
//}

//int main(void)
//{
//	char arr[4] = { 0 };
//	scanf("%s", &arr);
//	int ret = 0;
//	if (arr[0] >= 'A' && arr[0] <= 'F')
//	{
//		ret = ret + (arr[0] - 'A' + 10);
//	}
//	else
//	{
//		ret = ret + (arr[0] - '0');
//	}
//	ret = ret * 10 + (arr[1] - '0');
//	printf("%d\n", ret);
//	return 0;
//}