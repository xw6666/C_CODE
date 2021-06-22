#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("************************************\n");
	printf("*********** 1. 进入游戏 ************\n");
	printf("*********** 0. 退出游戏 ************\n");
	printf("************************************\n");
}

void game()
{	
	int guess = 0;
	//1.生成随机数
	//srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//2.猜数字
	printf("我心中的已想好了一个数字，你能猜到吗，试试:>\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("你猜的数比实际的小\n");
		}
		else if (guess > ret)
		{
			printf("你猜的数比实际的大\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

void test()
{
	//猜数字游戏
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		//打印菜单
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏。\n");
			game();
			break;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}