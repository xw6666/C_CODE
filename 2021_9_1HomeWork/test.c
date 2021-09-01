#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//动态创建数组输入并输出
int main()
{
	int n = 0;  //n表示要输出数的个数
	scanf("%d", &n);
	int* nums = (int*)malloc(sizeof(int) * n);  //动态开辟数组

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);  //读入数字
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}

	return 0;
}

//汉诺塔

//void hanoi(int n, char a, char b, char c)
//{
//	//明确函数意义 - 打印将n块盘子char a 通过char b移动到char c的步骤
//	if (0 == n)
//	{
//		//如果只有0块盘子，不用移动
//		return;
//	}
//	else
//	{
//		//有盘子
//
//		//先打印n-1块盘子从a通过c移动到b的步骤
//		hanoi(n - 1, a, c, b);
//		//将第n块盘子从a直接移动到c
//		printf("%c2%c\n", a, c);
//		//最后打印n-1块盘子从b通过a移动到c的过程
//		hanoi(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;  //表示有n个盘子
//	scanf("%d", &n);
//
//	//定义盘子
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//
//	hanoi(n, a, b, c);   //打印将n块盘子从a通过b移动到c的步骤
//
//	return 0;
//}