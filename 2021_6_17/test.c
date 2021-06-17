#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// leetcode - 72
//int min(int x, int y, int z)
//{
//    int min = 0;
//    if (x < y)
//    {
//        min = x;
//    }
//    else
//    {
//        min = y;
//    }
//
//    if (z < min)
//    {
//        min = z;
//    }
//    return min;
//}
//
//int minDistance(char* word1, char* word2) {
//    int m = strlen(word1);
//    int n = strlen(word2);
//    int dp[m + 1][n + 1];
//    dp[0][0] = 0;
//    for (int i = 0; i < m + 1; i++)
//    {
//        dp[i][0] = i;
//    }
//    for (int i = 0; i < n + 1; i++)
//    {
//        dp[0][i] = i;
//    }
//    for (int i = 1; i < m + 1; i++)
//    {
//        for (int j = 1; j < n + 1; j++)
//        {
//            if (word1[i - 1] == word2[j - 1])//注意这里是对字符进行判断
//            {
//                dp[i][j] = dp[i - 1][j - 1];
//            }
//            else
//            {
//                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1;
//            }
//        }
//    }
//    return dp[m][n];
//}