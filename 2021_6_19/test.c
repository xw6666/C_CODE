#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
//leetcode - 5最长回文子串
//char* longestPalindrome(char* s) {
//    int stringLen = strlen(s);
//    if (stringLen < 2)
//    {
//        return s;
//    }
//    int maxLen = 1;
//    int maxI = 0;
//    int maxJ = 0;
//    int m = stringLen;
//    int n = m;
//    int dp[m][n];
//    for (int i = 0; i < m; i++)
//    {
//        dp[i][i] = 1;
//    }
//    //dp[i][j] = dp[i + 1][j - 1] - 由左下角元素得来
//    //如果s[i] != s[j] - dp[i][j] =0
//    //如果相等 j-i<2 ,给1，j-i>=2用状态转移方程
//    for (int j = 1; j < n; j++)
//    {
//        int i = 0;
//        for (i = 0; i < j; i++)
//        {
//            if (s[i] != s[j])
//            {
//                dp[i][j] = 0;
//            }
//            else
//            {
//                if (j - i < 2)
//                {
//                    dp[i][j] = 1;
//                }
//                else
//                {
//                    dp[i][j] = dp[i + 1][j - 1];
//                }
//            }
//            //如果是1，我们记录一下长度并挑选出最长长度记录下标
//            if (dp[i][j])
//            {
//                int len = j - i + 1;
//                if (len > maxLen)
//                {
//                    maxLen = len;
//                    maxI = i;
//                    maxJ = j;
//                }
//            }
//        }
//    }
//    // char ret[maxLen];
//    // for(int i = 0;i < maxLen;i++,maxI++)
//    // {
//    //     ret[i] = s[maxI];
//    // }
//    s[maxJ + 1] = '\0';
//    return (s + maxI);
//}

//9的个数
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	//个位为9或者十位为9
//	for (i = 9; i < 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			ret++;
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}

//分数求和
//int main()
//{	
//	double sum = 0.0;
//	
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + pow(-1.0, i - 1) / i;
//	}
//
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}

//求10个整数的最大值
//int main()
//{
//	int nums[10] = { -4,-3,6,2,7,8,10,5,-7,4 };
//	int max = 0;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (nums[i] > max)
//		{
//			max = nums[i];
//		}
//	}
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//打印99乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int target = 0;
//	scanf("%d", &target);
//
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (left + right + 1) >> 1;
//		if (arr[mid] > target)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid;
//		}
//	}
//
//	if (arr[right] == target)
//	{
//		printf("%d\n", right);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}

//leetcode - 91解码方法
//int numDecodings(char* s) {
//    int len = strlen(s);
//    if (s[0] == '0')
//    {
//        return 0;
//    }
//    if (len <= 1)
//    {
//        if (s[0] == '0')
//        {
//            return 0;
//        }
//        return 1;
//    }
//
//    int dp[len];  //dp数组表示0到Len-1长度的编码有dp[len-1]种解码方案
//
//    //初始化dp[0],dp[1]
//    dp[0] = 1;
//    if (s[1] == '0' && s[0] <= '2')
//    {
//        dp[1] = 1;
//    }
//    else if (s[1] == '0' && s[0] > '2')
//    {
//        dp[1] = 0;
//    }
//    else if (s[0] <= '2')
//    {
//        if (s[0] == '1')
//        {
//            dp[1] = 2;
//        }
//        else if (s[0] == '2' && s[1] <= '6')
//        {
//            dp[1] = 2;
//        }
//        else
//        {
//            dp[1] = 1;
//        }
//    }
//    else
//    {
//        dp[1] = 1;
//    }
//
//    for (int i = 2; i < len; i++)
//    {
//        if (s[i] == '0')
//        {
//            if (s[i - 1] == '0')
//            {
//                dp[i] = 0;
//            }
//            else if (s[i - 1] <= '2')
//            {
//                dp[i] = dp[i - 2];
//            }
//            else
//            {
//                dp[i] = 0;
//            }
//        }
//        else if (s[i] <= '6')
//        {
//            if (s[i - 1] == '0')
//            {
//                dp[i] = dp[i - 1];
//
//            }
//            else if (s[i - 1] <= '2')
//            {
//                dp[i] = dp[i - 1] + dp[i - 2];
//            }
//            else
//            {
//                dp[i] = dp[i - 1];
//
//            }
//        }
//        else if (s[i] > '6')
//        {
//            if (s[i - 1] == '1')
//            {
//                dp[i] = dp[i - 1] + dp[i - 2];
//            }
//            else
//            {
//                dp[i] = dp[i - 1];
//            }
//        }
//    }
//
//
//    return dp[len - 1];
//}