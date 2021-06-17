#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//dp例题一
//你有三种硬币，分别面值2元，5元，7元每种硬币都有足够多
//买一本书需要27元
//如何用最少的硬币组合正好付清，不需要找钱

//第一步，确定状态
//1.最后一步
//虽然我们不知道最优策略是什么，但是最优策略肯定是k枚硬币，加起来为27
//所以一定有最后一枚硬币ak
//除掉这枚硬币，剩下硬币面值为27 - ak
//因为是最优策略，所以27 - ak硬币数一定要最少，否则就矛盾了
//2.子问题出现
//要求最少用多少枚硬币可以拼出27 - ak
//(我们把原问题转化成了一个子问题，而且规模更小)
//为了简化定义，我们设状态f(x) = 最少用多少枚硬币拼出x

//第二步，转移方程
//根据上述分析
//我们可以写出f(27) = min{f(27 - 2), f(27 - 5), f(27 - 7)}
//代入x  f(x) = min{f(x - 2), f(x - 5), f(x - 7}

//第三步，考虑初始条件和边界情况
//显然，初始条件为f(0) = 0
//我们定如果不能拼出f(x),那么f(x) = 正无穷

//第四步，写循环
//计算f(0) f(1) f(2)一直到f(27)


//leapyear

//void leapYear(int x)
//{
//	//跟着题目描述来
//	if ((x % 4 == 0) && (x % 100 != 0))
//	{
//		printf("normal leap year\n");
//	}
//	else if ((x % 100 == 0) && (x % 400 == 0))
//	{
//		printf("century leap year\n");
//	}
//	else
//	{
//		printf("normal year\n");
//	}
//}
//
//int main(void)
//{
//	int n = 0;
//	//n表示有几组案例，通过scanf读入
//	scanf("%d", &n);
//	//开辟一个类型为int，元素个数为n个的数组用于存放读入的年份
//	int* nums = (int*)malloc(n * sizeof(int));
//	int num = 0;
//	while (n--)
//	{
//		//通过循环读取n组数据
//		scanf("%d", &nums[num]);
//		num++;
//	}
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		//leapYear函数用于判断哪种年份并输出题目要求
//		leapYear(nums[i]);
//	}
//	return 0;
//}

//int main(void)
//{
//	//ch是字符，row是行数
//	char ch = 0;
//	int row = 0;
//	scanf(" %c", &ch);
//	scanf("%d", &row);
//	
//	//两层循环，外层循环用于控制打印层数，内层循环用于打印每行的内容
//	int i = 0;
//	for (i = 1; i <= row; i++)
//	{
//		//第一行打印row-1个空格，第二行打印row-2个，所以是row-i
//		int j = 0;
//		for (j = 0; j < row - i; j++)
//		{
//			printf(" ");
//		}
//		//打印字符
//		//第i行打印i个字符
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", ch);
//		}
//		//打印完空格和字符记得换行
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	//读入评委数
	scanf("%d", &n);
	double score[100];
	//读入每个评委分数
	int num = 0;
	for (num = 0; num < n; num++)
	{
		scanf("%lf", &score[num]);
	}

	//找到最大最小值，把他们改成0，之后相加除以n-2得到平均分
	//max min分别为最大最小值，maxRes minRes分别为最大最小值的数组下标
	double max = 0;
	int maxRes = 0;
	double min = 0;
	int minRes = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (score[i] > max)
		{
			//什么？你比max大？那你就是max了
			max = score[i];
			maxRes = i;
		}
		if (score[i] < min)
		{
			min = score[i];
			minRes = i;
		}
	}

	score[maxRes] = 0;
	score[minRes] = 0;
	//开始求平均
	double sum = 0.0;
	for (i = 0; i < n; i++)
	{
		sum += score[i];
	}

	double ret = sum / (n - 2);
	printf("%.1f", ret);

	return 0;
}