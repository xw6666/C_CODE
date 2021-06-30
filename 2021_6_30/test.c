#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//leetcode - 121. ������Ʊ�����ʱ��
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
//        //�ҳ���ߵ���Сֵ
//        min = fmin(min, prices[i]);
//        //�����������
//        maxProfit = fmax(maxProfit, prices[i] - min);
//    }
//    return maxProfit;
//}

//leetcode - 122. ������Ʊ�����ʱ�� II
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

//leetcode - 8. �ַ���ת������(atoi)
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
//            //��һ������ĸ
//            return 0;
//        }
//        else if (*s == '+')
//        {
//            //��һ���ǼӺ�
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
//            //��һ��������
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


//ȥ��
//int main()
//{
//	char arr[8] = { 'a','a','a','b','b','v','c','c' };//8��Ԫ��
//	int num = 8;
//	int begin = 0;
//	while (begin < num - 1)
//	{
//		int search = begin + 1;
//		if (arr[begin] == arr[search])
//		{
//			//��ȸ���
//			while (search < num - 1)
//			{
//				arr[search] = arr[search + 1];
//				search++;
//			}
//			num--;
//		}
//		else
//		{
//			//�������λ
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


//ͬѧ�ʵ�����
//struct student
//{
//	int order;  //ѧ��
//	char name[30];//����
//	//�ɼ�
//	float a;
//	float b;
//	float c;
//};
//int main(int argc, char* argv[]) {
//	struct student stu[3] = { 0 };
//	int i = 0;
//	//t����ɼ�����Ҫ�ø�����
//	float t = 0;
//	//������Ϣ
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %s %f %f %f", &(stu[i].order), &(stu[i].name), &(stu[i].a), &(stu[i].b), &(stu[i].c));
//	}
//	for (i = 0; i < 3; i++)
//	{
//		//���a<b ,t = b,else t = a
//		if (stu[i].a < stu[i].b)
//		{
//			//t = stu[i].a;
//			//ֻ��Ҫ�ҵ����ľ�����
//			//stu[i].a = stu[i].b;
//			//stu[i].b = t;
//			t = stu[i].b;
//		}
//		else
//		{
//			t = stu[i].a;
//		}
//		//��������t�Աȣ��ҳ����ߵ����ֵ
//		if (t < stu[i].c)
//		{
//			t = stu[i].c;
//			//stu[i].a = stu[i].c;
//			//stu[i].c = t;
//		}
//		//ִ�е�������ҵ��˵�i�����óɼ��ˣ�Ϊt
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