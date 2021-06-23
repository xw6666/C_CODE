#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void menu()
{
	printf("*************************************\n");
	printf("************ 1. 进入游戏 ************\n");
	printf("************ 0. 退出游戏*************\n");
	printf("*************************************\n");
}

void game()
{
	system("cls");
	printf("进入游戏！\n");
	//设计游戏主体，首先需要生成随机数
	//随机数范围设置在1到100
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	int inputNum = 0;//存储玩家猜的数
	int time = 0;//记录次数
	printf("我已经想好了一个1到100的数字，猜猜看，看你是否能猜到:>\n");
	while (1)
	{
		scanf("%d", &inputNum);
		time++;
		if (inputNum > ret)
		{
			printf("你猜的数偏大，请重试:>\n");
		}
		else if (inputNum < ret)
		{
			printf("你猜的数偏小，请重试:>\n");
		}
		else
		{
			if (time <= 7)
			{
				printf("恭喜你猜对了，你一共猜了%d次！\n", time);
			}
			else
			{
				printf("恭喜你猜对了，你一共猜了%d次，再试试看能不能使用更少次数猜出数字!\n", time);
			}
			break;
		}
	}
}

int main()
{
	//给出菜单让玩家选择
	int input = 0;
	//在这里设置好随机数的生成起点,通过时间戳
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
			//进入游戏
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);

	return 0;
}