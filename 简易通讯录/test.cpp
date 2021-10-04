#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void menu()
{
	printf("***************************************************\n");
	printf("***************************************************\n");
	printf("************ 1. 进入通讯录 ************************\n");
	printf("************ 0. 退出       ************************\n");
	printf("***************************************************\n");
	printf("***************************************************\n");
}

void AddressBook()
{
	
}

void test1()
{
	menu();
	printf("请输入:>");
	int input = 0;
	do
	{
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			//进入通讯录
			break;
		case 0:
			printf("退出!");
			break;
		default :
			printf("输入错误！请重新输入:>");
		}
	} while (input);
}

int main()
{
	test1();
	return 0;
}

