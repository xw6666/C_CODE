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
//    int dp[n + 1];//dp��ʾ����n��¥�ݵķ�����
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
//    int dp[m][n]; //��ʾ��mn���괦���м���·��
//    //���˵obstacleGrid[i][j]��1����ôdp[i][j] = 0;
//    //����dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
//
//    //��ʼ��
//    for (int i = 0; i < m; i++)
//    {
//        if (obstacleGrid[i][0] == 1)
//        {
//            //�����ϰ�
//            for (i = i; i < m; i++)
//            {
//                dp[i][0] = 0;
//            }
//        }
//        else
//        {
//            //��һ�е�һ�ж�ֻ��һ��·�����ߵ�
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
//	//continue����ѭ�������Ĳ��֣��ᵽi++
//	//for (int i = 1; i <= 10; i++)
//	//{
//	//	if (5 == i)
//	//		continue;
//	//	printf("%d ", i);
//	//}
//
//	//forѭ����ʼ�����жϣ���������ʡ��
//	//���ж�����ʡ�ԣ���ôĬ���жϺ�Ϊ"��"
//	//������Ҫʡ��forѭ���е�����
//	return 0;
//}

//F10 - ����ִ��(�����)
//F11 - ����ִ��(�����) - �����Զ��庯��������뺯�������԰���F11


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
//		return -1;//��ʾû�ҵ�
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
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("%d", ret);
//	}
//
//	return 0;
//}

//ģ����������
//int main()
//{
//	char id[] = "20136638";
//	char input[16] = { 0 };
//	int len = strlen(id);
//	int i = 3;
//	while (i--)
//	{
//		printf("����������(������16λ)>:\n");
//		gets(input);
//		if (!(strcmp(id, input)))
//		{
//			printf("������ȷ��\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룬�㻹��%d���������\n", i);
//		}
//	}
//	if (i == -1)
//	{
//		printf("�˳�����\n");
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

