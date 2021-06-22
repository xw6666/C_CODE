#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//extern int a;
//int main()
//{
//	printf("a = %d\n", a);
//	return 0;
//}


//leetcode - 509.斐波那契数
//int fib(int n) {
//    if (n <= 1)
//    {
//        return n;
//    }
//    int dp[n + 1];
//    dp[0] = 0;
//    dp[1] = 1;
//    for (int i = 2; i <= n; i++)
//    {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    return dp[n];
//}

//leetcode - 300. 最长递增子序列(不太会，明天继续)
//int lengthOfLIS(int* nums, int numsSize) {
//    if (numsSize == 1)
//    {
//        return 1;
//    }
//
//    int dp[numsSize];        //dp表示到下标为i的元素中严格递增子序列长度为dp[i]
//    // dp[0] = 1;
//    // printf("%d ",dp[0]);
//    for (int i = 0; i < numsSize; i++)
//    {
//        dp[i] = 1;
//    }
//    // 每次遍历到一个元素
//    //要与前面每个dp值对应对应的下标的nums[i]对比如果nums[i]更大
//    //那么可以构成更长的子序列，为遍历到的dp值加1，再这些里面选一个最小大的
//    int maxdp = 1;
//    for (int i = 1; i < numsSize; i++)
//    {
//        int max = 1;
//        for (int j = 0; j < i; j++)
//        {
//            // int max = 0;
//            if (nums[i] > nums[j])
//            {
//                if (max < dp[j] + 1)
//                {
//                    max = dp[j] + 1;
//                }
//                // printf("%d ",dp[i]);
//            }
//        }
//        dp[i] = max;
//        if (dp[i] > maxdp)
//        {
//            maxdp = dp[i];
//        }
//        // printf("%d ",dp[i]);
//    }
//
//    return maxdp;
//}

//leetcode - 746. 使用最小花费爬楼梯
//int minCostClimbingStairs(int* cost, int costSize) {
//    if (costSize == 2)
//    {
//        return (cost[0] < cost[1] ? cost[0] : cost[1]);
//    }
//
//    int dp[costSize + 1];
//    dp[0] = 0;
//    dp[1] = 0;
//    for (int i = 2; i <= costSize; i++)
//    {
//        dp[i] = fmin(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//        // printf("%d ",dp[i]);
//    }
//    return dp[costSize];
//}

//leetcode - 343. 整数拆分
//int integerBreak(int n) {
//    if (n <= 6)
//    {
//        int ret = 0;
//        switch (n)
//        {
//        case 2:
//            ret = 1;
//            break;
//        case 3:
//            ret = 2;
//            break;
//        case 4:
//            ret = 4;
//            break;
//        case 5:
//            ret = 6;
//            break;
//        case 6:
//            ret = 9;
//            break;
//        }
//        return ret;
//    }
//
//    int dp[n + 1];  //dp表示正整数n最大乘积为dp[n]
//    dp[2] = 1;
//    dp[3] = 2;
//    dp[4] = 4;
//    dp[5] = 6;
//    dp[6] = 9;
//    for (int i = 7; i <= n; i++)
//    {
//        int max = 0;
//        for (int j = 2; j < i; j++)
//        {
//            if (dp[j] * (i - j) > max)
//            {
//                max = dp[j] * (i - j);
//            }
//        }
//        dp[i] = max;
//        // printf("%d ",dp[i]);
//    }
//
//    return dp[n];
//}
int main()
{
	int n = 5;
	while (n--)
	{
		int ret = rand() % 100 + 1;
		printf("ret = %d\n", ret);
	}
	return 0;
}