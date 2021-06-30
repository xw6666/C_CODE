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

//leetcode - 8. 字符串转换整数(atoi)
//int myAtoi(char* s) {
//    long long ret = 0;
//    while (*s == ' ')
//    {
//        s++;
//    }
//    if (*s == '-')
//    {
//        s++;
//        if ((*s >= '0' && *s <= '9'))
//        {
//            while ((*s >= '0' && *s <= '9'))
//            {
//                ret = ret * 10 - (*s - '0');
//                s++;
//                if (ret < INT_MIN)
//                {
//                    return INT_MIN;
//                }
//            }
//            return ret;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//    else
//    {
//        if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
//        {
//            //第一个是字母
//            return 0;
//        }
//        else if (*s == '+')
//        {
//            //第一个是加号
//            s++;
//            if ((*s >= '0' && *s <= '9'))
//            {
//                while ((*s >= '0' && *s <= '9'))
//                {
//                    ret = ret * 10 + (*s - '0');
//                    s++;
//                    if (ret > INT_MAX)
//                    {
//                        return INT_MAX;
//                    }
//                }
//                return ret;
//            }
//            else
//            {
//                return 0;
//            }
//
//        }
//        else
//        {
//            //第一个是数字
//            while ((*s >= '0' && *s <= '9'))
//            {
//                ret = ret * 10 + (*s - '0');
//                s++;
//                if (ret > INT_MAX)
//                {
//                    return INT_MAX;
//                }
//            }
//            return ret;
//        }
//    }
//    return 0;
//}


//去重
//int main()
//{
//	char arr[8] = { 'a','a','a','b','b','v','c','c' };//8个元素
//	int num = 8;
//	int begin = 0;
//	while (begin < num - 1)
//	{
//		int search = begin + 1;
//		if (arr[begin] == arr[search])
//		{
//			//相等覆盖
//			while (search < num - 1)
//			{
//				arr[search] = arr[search + 1];
//				search++;
//			}
//			num--;
//		}
//		else
//		{
//			//不相等移位
//			begin++;
//		}
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}


//同学问的问题
//struct student
//{
//	int order;  //学号
//	char name[30];//姓名
//	//成绩
//	float a;
//	float b;
//	float c;
//};
//int main(int argc, char* argv[]) {
//	struct student stu[3] = { 0 };
//	int i = 0;
//	//t代表成绩，需要用浮点型
//	float t = 0;
//	//输入信息
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %s %f %f %f", &(stu[i].order), &(stu[i].name), &(stu[i].a), &(stu[i].b), &(stu[i].c));
//	}
//	for (i = 0; i < 3; i++)
//	{
//		//如果a<b ,t = b,else t = a
//		if (stu[i].a < stu[i].b)
//		{
//			//t = stu[i].a;
//			//只需要找到最大的就行了
//			//stu[i].a = stu[i].b;
//			//stu[i].b = t;
//			t = stu[i].b;
//		}
//		else
//		{
//			t = stu[i].a;
//		}
//		//接下来用t对比，找出三者的最大值
//		if (t < stu[i].c)
//		{
//			t = stu[i].c;
//			//stu[i].a = stu[i].c;
//			//stu[i].c = t;
//		}
//		//执行到这里就找到了第i组的最好成绩了，为t
//		printf("%d %s %f\n", stu[i].order, stu[i].name, t);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	int num = 0;
//	while (scanf("%c", &arr[num]), arr[num] != '@')
//	{
//		num++;
//	}
//	printf("num = %d\n", num);
//	return 0;
//}