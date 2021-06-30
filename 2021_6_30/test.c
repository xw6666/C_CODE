#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//leetcode - 121. 买卖股票的最佳时机
//int maxProfit(int* prices, int pricesSize) {
//    if (pricesSize < 2)
//    {
//        return 0;
//    }
//    int maxProfit = 0;
//
//    int dp[pricesSize][2];
//    dp[0][0] = 0;
//    dp[0][1] = -prices[0];
//    for (int i = 1; i < pricesSize; i++)
//    {
//        dp[i][0] = fmax(dp[i - 1][0], dp[i - 1][1] + prices[i]);
//        dp[i][1] = fmax(-prices[i], dp[i - 1][1]);
//        if (dp[i][0] > maxProfit)
//        {
//            maxProfit = dp[i][0];
//        }
//    }
//    return maxProfit;
//}
//int maxProfit(int* prices, int pricesSize) {
//    int maxProfit = 0;
//    int min = INT_MAX;
//    for (int i = 0; i < pricesSize; i++)
//    {
//        //找出左边的最小值
//        min = fmin(min, prices[i]);
//        //计算最大利润
//        maxProfit = fmax(maxProfit, prices[i] - min);
//    }
//    return maxProfit;
//}

//leetcode - 122. 买卖股票的最佳时机 II
//int maxProfit(int* prices, int pricesSize) {
//    int maxProfit = 0;
//    if (pricesSize < 2)
//    {
//        return 0;
//    }
//    int dp[pricesSize][2];
//    dp[0][0] = 0;
//    dp[0][1] = -prices[0];
//    for (int i = 1; i < pricesSize; i++)
//    {
//        dp[i][0] = fmax(dp[i - 1][0], dp[i - 1][1] + prices[i]);
//        dp[i][1] = fmax(dp[i - 1][0] - prices[i], dp[i - 1][1]);
//        if (dp[i][0] > maxProfit)
//        {
//            maxProfit = dp[i][0];
//        }
//    }
//
//    return maxProfit;
//}

//exange
//void exange(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main(void)
//{
//	int a = 5;
//	int b = 3;
//	exange(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}