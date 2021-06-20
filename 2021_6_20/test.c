#define _CRT_SECURE_NO_WARNINGS 1

//leetcode - 121买股票的最佳时机
//#define MAX(a,b) ((a) > (b) ? (a) :(b))
//int maxProfit(int* prices, int pricesSize) {
//    if (pricesSize == 1)
//    {
//        return 0;
//    }
//    int m = pricesSize;
//    int dp[m][2]; //dp表示这天结束时，手上现金最大为x，持股状态为j
//    dp[0][0] = 0;
//    dp[0][1] = -prices[0];
//    //注意，今天要是持股了，昨天没持股的话现金数是(-price[i]) -> 今天买了股票花了price[i]元
//    for (int i = 1; i < m; i++)
//    {
//        dp[i][0] = MAX(dp[i - 1][0], dp[i - 1][1] + prices[i]);
//        dp[i][1] = MAX(-prices[i], dp[i - 1][1]);
//    }
//
//    return dp[m - 1][0];
//}

//leetcode - 338比特位计数
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//int getDight(int x)
//{
//    int cnt = 0;
//    while (x > 0)
//    {
//        if (x & 1 == 1)
//        {
//            cnt++;
//        }
//        x = x >> 1;
//    }
//    return cnt;
//}
//
//int* countBits(int n, int* returnSize) {
//
//    *returnSize = n + 1;
//    int* nums = (int*)malloc((n + 1) * sizeof(int));
//    for (int i = 0; i <= n; i++)
//    {
//        nums[i] = getDight(i);
//    }
//    return nums;
//}