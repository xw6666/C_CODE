#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("************************************\n");
	printf("*********** 1. ������Ϸ ************\n");
	printf("*********** 0. �˳���Ϸ ************\n");
	printf("************************************\n");
}

void game()
{	
	int guess = 0;
	//1.���������
	//srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//2.������
	printf("�����е��������һ�����֣����ܲµ�������:>\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��µ�����ʵ�ʵ�С\n");
		}
		else if (guess > ret)
		{
			printf("��µ�����ʵ�ʵĴ�\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}

void test()
{
	//��������Ϸ
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}