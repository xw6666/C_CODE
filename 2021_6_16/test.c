#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//递归
//long long fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret = fib(n);
//	printf("%lld", ret);
//	return 0;
//}

//动态规划
//long long fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	int dp[500] = { 0 };
//	dp[1] = 1;
//	dp[2] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	return dp[n];
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	long long ret = fib(n);
//	printf("ret = %lld\n", ret);
//	return 0;
//}


//青蛙跳台
//long long f(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	int dp[501];
//	dp[0] = 0;
//	dp[1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	return dp[n];
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret = f(n);
//	printf("ways = %lld", ret);
//	return 0;
//}

//leetcode - 62
//int uniquePaths(int m, int n) {
//    if (m <= 0 || n <= 0)
//    {
//        return 0;
//    }
//    int** dp = (int**)malloc(m * sizeof(int));
//    for (int i = 0; i < m; i++)
//    {
//        dp[i] = (int*)malloc(n * sizeof(*dp));
//    }
//    for (int i = 0; i < m; i++)
//    {
//        dp[i][0] = 1;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        dp[0][i] = 1;
//    }
//
//    //dp[m][n] = dp[m-1][n] +dp[m][n-1];
//    for (int i = 1; i < m; i++)
//    {
//        for (int j = 1; j < n; j++)
//        {
//            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//        }
//    }
//    return dp[m - 1][n - 1];
//}
//
//int main()
//{
//    int ret = uniquePaths(7, 3);
//    printf("%d\n", ret);
//    return 0;
//}

//leetcode -64
int minPathSum(int** grid, int gridSize, int* gridColSize) {
    int rows = gridSize, columns = gridColSize[0];
    if (rows == 0 || columns == 0) {
        return 0;
    }
    int dp[rows][columns];
    //初始化dp数组
    dp[0][0] = grid[0][0];
    for (int i = 1; i < rows; i++)
    {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    for (int i = 1; i < columns; i++)
    {

        dp[0][i] = dp[0][i - 1] + grid[0][i];
    }

    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < columns; j++)
        {
            int min = 0;
            if (dp[i - 1][j] < dp[i][j - 1])
            {
                min = dp[i - 1][j];
            }
            else
            {
                min = dp[i][j - 1];
            }
            dp[i][j] = min + grid[i][j];
        }
    }
    return dp[rows - 1][columns - 1];
}