#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void menu()
{
	printf("***************************************************\n");
	printf("***************************************************\n");
	printf("************ 1. ����ͨѶ¼ ************************\n");
	printf("************ 0. �˳�       ************************\n");
	printf("***************************************************\n");
	printf("***************************************************\n");
}

void AddressBook()
{
	
}

void test1()
{
	menu();
	printf("������:>");
	int input = 0;
	do
	{
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			//����ͨѶ¼
			break;
		case 0:
			printf("�˳�!");
			break;
		default :
			printf("�����������������:>");
		}
	} while (input);
}

int main()
{
	test1();
	return 0;
}

