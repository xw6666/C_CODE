#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void menu()
{
	printf("*************************************\n");
	printf("************ 1. ������Ϸ ************\n");
	printf("************ 0. �˳���Ϸ*************\n");
	printf("*************************************\n");
}

void game()
{
	system("cls");
	printf("������Ϸ��\n");
	//�����Ϸ���壬������Ҫ���������
	//�������Χ������1��100
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	int inputNum = 0;//�洢��Ҳµ���
	int time = 0;//��¼����
	printf("���Ѿ������һ��1��100�����֣��²¿��������Ƿ��ܲµ�:>\n");
	while (1)
	{
		scanf("%d", &inputNum);
		time++;
		if (inputNum > ret)
		{
			printf("��µ���ƫ��������:>\n");
		}
		else if (inputNum < ret)
		{
			printf("��µ���ƫС��������:>\n");
		}
		else
		{
			if (time <= 7)
			{
				printf("��ϲ��¶��ˣ���һ������%d�Σ�\n", time);
			}
			else
			{
				printf("��ϲ��¶��ˣ���һ������%d�Σ������Կ��ܲ���ʹ�ø��ٴ����³�����!\n", time);
			}
			break;
		}
	}
}

int main()
{
	//�����˵������ѡ��
	int input = 0;
	//���������ú���������������,ͨ��ʱ���
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
			//������Ϸ
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);

	return 0;
}