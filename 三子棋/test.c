#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("******************************************\n");
	printf("******************************************\n");
	printf("*               1.������Ϸ               *\n");
	printf("*               0.�˳���Ϸ               *\n");
	printf("******************************************\n");
	printf("******************************************\n");
}

void game()
{
	srand((unsigned)time(NULL));
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	PrintBoard(board, ROW, COL);
	//��Ϸ������һ������ߺ�����ߵ��ظ�����
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
		printf("�����ˣ�\n");
	}
	else if (ret == 'o')
	{
		printf("��ϲ�㣬��Ӯ��!\n");
	}
	else
	{
		printf("ƽ��!\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			printf("������Ϸ!\n");
			Sleep(600);
			game();
			break;
		case 0:
			system("cls");
			printf("�˳��ɹ�!\n");
			break;
		default:
			printf("����������������룡\n");
			Sleep(700);
			system("cls");
			break;
		}
	} while (input);

	return 0;
}