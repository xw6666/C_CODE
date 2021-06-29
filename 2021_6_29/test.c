#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//leecode - 55. 跳跃游戏
//bool canJump(int* nums, int numsSize) {
//    int max = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        // max = i + nums[i];
//        // printf("%d ", max);
//        if (i > max)
//        {
//            return false;;
//        }
//        if (i + nums[i] > max)
//        {
//            max = i + nums[i];
//        }
//        // printf("%d ",max);
//    }
//    return true;
//}

//帮别人


//定义变量养成初始化的习惯
//int main()
//{
//	//【1】读入一串数据以@结尾 
//	char a[100] = { 0 };//字符串数组
//	int i = 0;
//	int n = 0;
//	//for (i = 0; a[i] != '@'; i++)
//	//{
//	//	scanf("%c", &a[i]);
//	//}
//	while (scanf("%c", &a[i]), a[i] != '@')
//	{
//		i++;
//		n++;     //自然求出字符串长度
//	}
//	//n = strlen(a); //strlen函数是以'\0'为标志，这里不能用
//	//printf("%d", n);
//	//【2】 判断长度是奇数还是偶数 
//	//int result, j;
//	//if (n % 2 == 0)//偶数的时候 
//	//{
//	//	for (i = 0; i < n / 2; i++)//abba,n=4,a[0]~a[3],判断a[0]a[3],a[1]a[2]是否相同 
//	//	{
//	//		for (j = n - 1; j >= n / 2; j--)
//	//		{
//	//			if (a[i] != a[j])
//	//			{
//	//				printf("fault");
//	//				break;
//	//			}
//	//		}
//	//	}
//	//	printf("true");
//	//}
//	//else//aba,n=3,a[0],a[1],a[2],判断a[0]a[2]是否相同 
//	//{
//	//	for (i = 0; i < (n - 1) / 2; i++)
//	//	{
//	//		for (j = n - 1; j >= (n + 1) / 2; j--)
//	//		{
//	//			if (a[i] != a[j])
//	//			{
//	//				printf("fault");
//	//				break;
//	//			}
//	//		}
//	//	}
//	//	printf("true");
//	//}
//
//
//	//通过两个指针，一个指向字符串的左边，一个指向最右边
//	//通过循环对比
//	//如果字符相等，左边向右移1，右边向左移1
//	//一直到左边大于等于右边的时候停止对比 ，中途对比不上一定不回文
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		if (a[left] == a[right])
//		{
//			left++;
//			right--;
//		}
//		else
//		{
//			//肯定不是回文
//			break;
//		}
//	}
//	if (left < right)
//	{
//		//说明循环意外停止，不是回文
//		printf("false\n");
//	}
//	else
//	{
//		printf("true\n");
//	}
//	return 0;
//}


//leetcode - 45. 跳跃游戏 II
//int jump(int* nums, int numsSize) {
//    int dp[numsSize];  //dp数组表示从跳到i的最少步数是dp[i]
//
//    //初始化dp
//    dp[0] = 0;  //0号位自然不用跳
//    for (int i = 1; i < numsSize; i++)
//    {
//        //找出跳到i的最少步
//        int min = INT_MAX;
//        for (int j = 0; j < i; j++)
//        {
//            // int min = INT_MAX;
//            if (nums[j] + j >= i)
//            {
//                //说明在j处可以一步跳到i
//                if (dp[j] + 1 < min)
//                {
//                    min = dp[j] + 1;
//                }
//            }
//        }
//        dp[i] = min;
//        // printf("dp[%d] = %d\n", i, dp[i]);
//    }
//
//    return dp[numsSize - 1];
//}
//int jump(int* nums, int numsSize) {
//    int begin = 0;
//    int end = 1;
//    int ans = 0;
//    while (end < numsSize)
//    {
//        int maxpos = 0;
//        for (int i = begin; i < end; i++)
//        {
//            if (i + nums[i] > maxpos)
//            {
//                maxpos = i + nums[i];
//            }
//        }
//        begin = end;
//        end = maxpos + 1;
//        ans++;
//    }
//    return ans;
//}