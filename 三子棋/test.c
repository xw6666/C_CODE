#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("******************************************\n");
	printf("******************************************\n");
	printf("*               1.进入游戏               *\n");
	printf("*               0.退出游戏               *\n");
	printf("******************************************\n");
	printf("******************************************\n");
}

void game()
{
	srand((unsigned)time(NULL));
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	PrintBoard(board, ROW, COL);
	//游戏过程是一个玩家走后电脑走的重复过程
	int ret = 0;

	while (1)
	{
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}

	if (ret == 'x')
	{
		printf("你输了！\n");
	}
	else if (ret == 'o')
	{
		printf("恭喜你，你赢了!\n");
	}
	else
	{
		printf("平局!\n");
	}
	system("pause");
	system("cls");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			printf("进入游戏!\n");
			Sleep(600);
			game();
			break;
		case 0:
			system("cls");
			printf("退出成功!\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			Sleep(700);
			system("cls");
			break;
		}
	} while (input);

	return 0;
}