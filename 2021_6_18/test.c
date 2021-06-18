#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
// leetcode - 70
//int climbStairs(int n) {
//    if (n <= 2)
//    {
//        return n;
//    }
//    int dp[n + 1];//dp表示爬上n阶楼梯的方法数
//    dp[1] = 1;
//    dp[2] = 2;
//    for (int i = 3; i <= n; i++)
//    {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//    return dp[n];
//}


//leetocde - 63
//int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize) {
//
//    int m = obstacleGridSize;
//    int n = obstacleGridColSize[0];
//    if (m <= 1)
//    {
//        int ret = 1;
//        for (int i = 0; i < n; i++)
//        {
//            if (obstacleGrid[0][i] == 1)
//            {
//                ret = 0;
//            }
//        }
//        return ret;
//    }
//    else if (n <= 1)
//    {
//        int ret = 1;
//        for (int i = 0; i < m; i++)
//        {
//            if (obstacleGrid[i][0] == 1)
//            {
//                ret = 0;
//            }
//        }
//        return ret;
//    }
//    int dp[m][n]; //表示到mn坐标处共有几条路径
//    //如果说obstacleGrid[i][j]是1，那么dp[i][j] = 0;
//    //否则dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
//
//    //初始化
//    for (int i = 0; i < m; i++)
//    {
//        if (obstacleGrid[i][0] == 1)
//        {
//            //碰到障碍
//            for (i = i; i < m; i++)
//            {
//                dp[i][0] = 0;
//            }
//        }
//        else
//        {
//            //第一行第一列都只有一条路可以走到
//            dp[i][0] = 1;
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (obstacleGrid[0][i] == 1)
//        {
//            for (i = i; i < n; i++)
//            {
//                dp[0][i] = 0;
//            }
//        }
//        else
//        {
//            dp[0][i] = 1;
//        }
//    }
//
//    for (int i = 1; i < m; i++)
//    {
//        for (int j = 1; j < n; j++)
//        {
//            if (obstacleGrid[i][j] == 1)
//            {
//                dp[i][j] = 0;
//            }
//            else
//            {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//    }
//
//    return dp[m - 1][n - 1];
//}

//int main()
//{
//	//1 2 3 4 6 7 8 9 10
//	//continue跳过循环体后面的部分，会到i++
//	//for (int i = 1; i <= 10; i++)
//	//{
//	//	if (5 == i)
//	//		continue;
//	//	printf("%d ", i);
//	//}
//
//	//for循环初始化，判断，调整都能省略
//	//如判断条件省略，那么默认判断恒为"真"
//	//尽量不要省略for循环中的条件
//	return 0;
//}

//F10 - 单步执行(逐过程)
//F11 - 单步执行(逐语句) - 遇到自定义函数，想进入函数，可以按下F11


//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double sum = 1.0;
//	for (int i = 2; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%.0lf", sum);
//	return 0;
//}

//double fact(int x)
//{
//	double ret = 1.0;
//	for (int i = 2; i <= x; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += fact(i);
//	}
//	printf("%.0lf", sum);
//	return 0;
//}

//int binsearch(int x, int v[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int mid = (left + right) >> 1;
//		if (v[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid;
//		}
//	}
//	if (v[right] != x)
//	{
//		return -1;//表示没找到
//	}
//	return right;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binsearch(11, arr, sz);
//	if (ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("%d", ret);
//	}
//
//	return 0;
//}

//模拟输入密码
//int main()
//{
//	char id[] = "20136638";
//	char input[16] = { 0 };
//	int len = strlen(id);
//	int i = 3;
//	while (i--)
//	{
//		printf("请输入密码(不大于16位)>:\n");
//		gets(input);
//		if (!(strcmp(id, input)))
//		{
//			printf("密码正确！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入，你还有%d次输入次数\n", i);
//		}
//	}
//	if (i == -1)
//	{
//		printf("退出程序\n");
//	}
//	return 0;
//}


//int main()
//{
//	char str[] = "abcd";
//	int i = 0;
//	for (i = 1; i <=10 ; i++)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "Hello world!";
//	char arr2[] = "************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		printf("%s\n", arr2);
//		Sleep(500);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

