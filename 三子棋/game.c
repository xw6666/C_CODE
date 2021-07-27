#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void PrintBoard(char board[ROW][COL], int row, int col)
{
	system("cls");
	int i = 0;
	//外层循环控制打印层数
	for (i = 0; i < row; i++)
	{
		//打印元素
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印分隔符
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	//x y为玩家坐标
	int x = 0;
	int y = 0;
	printf("请输入坐标:>");
	while (1)
	{
		//在循环中判断坐标合法性
		scanf("%d %d", &x, &y);
		printf("\n");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//可能是合法坐标
			if (board[x - 1][y - 1] == ' ')
			{
				//合法坐标
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入:>");
			}
		}
		else
		{
			printf("坐标超出范围，请重新输入:>");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		//判断随机生成坐标的合法性
		if (board[x][y] == ' ')
		{
			board[x][y] = 'x';
			break;
		}
	}
}

char* IsWin(char board[ROW][COL], int row, int col)
{
	int flag = 0; //首先假设游戏还能继续
	int i = 0;
	int j = 0;
	//检查行
	for(i = 0;i < row;i++)
	{
		char temp = board[i][0];
		for (j = 0; j < col; j++)
		{
			if (temp != board[i][j] || board[i][j] == ' ')
			{
				break;
			}
		}
		if (j == col)
		{
			//说明这一行所有元素相等且都不为空格
			return temp;
		}
	}

	//检查列
	for (j = 0; j < col; j++)
	{
		char temp = board[0][j];
		for (i = 0; i < row; i++)
		{
			if (temp != board[i][j] || board[i][j] == ' ')
			{
				break;
			}
		}
		if (i == row)
		{
			//说明这一列元素都相等且都不为空格
			return temp;
		}
	}
	
	//检查对角线
	i = 0;
	int temp = board[i][i];
	for (i = 0; i < row; i++)
	{
		if (temp != board[i][i] || board[i][i] == ' ')
		{
			break;
		}
	}
	if (i == row)
	{
		return temp;
	}
	i = 0;
	temp = board[i][row - i - 1];
	for (i = 0; i < row; i++)
	{
		if (temp != board[i][row - i - 1] || board[i][row - i - 1] == ' ')
		{
			break;
		}
	}

	if (i == row)
	{
		return temp;
	}
	else
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (board[i][j] == ' ')
				{
					return 'C';
				}
			}
		}

		return 'Q';
	}
}