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
	//���ѭ�����ƴ�ӡ����
	for (i = 0; i < row; i++)
	{
		//��ӡԪ��
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
		//��ӡ�ָ���
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
	//x yΪ�������
	int x = 0;
	int y = 0;
	printf("����������:>");
	while (1)
	{
		//��ѭ�����ж�����Ϸ���
		scanf("%d %d", &x, &y);
		printf("\n");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�����ǺϷ�����
			if (board[x - 1][y - 1] == ' ')
			{
				//�Ϸ�����
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������:>");
			}
		}
		else
		{
			printf("���곬����Χ������������:>");
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
		//�ж������������ĺϷ���
		if (board[x][y] == ' ')
		{
			board[x][y] = 'x';
			break;
		}
	}
}

char* IsWin(char board[ROW][COL], int row, int col)
{
	int flag = 0; //���ȼ�����Ϸ���ܼ���
	int i = 0;
	int j = 0;
	//�����
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
			//˵����һ������Ԫ������Ҷ���Ϊ�ո�
			return temp;
		}
	}

	//�����
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
			//˵����һ��Ԫ�ض�����Ҷ���Ϊ�ո�
			return temp;
		}
	}
	
	//���Խ���
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