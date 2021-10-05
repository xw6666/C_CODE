#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void menu()
{
	printf("**************************************\n");
	printf("**** 1.增添                2.删除 ****\n");
	printf("**** 3.修改                4.查找 ****\n");
	printf("**** 5.展示                6.排序 ****\n");
	printf("*************** 0.退出 ***************\n");
	printf("**************************************\n");
}

void test1()
{
	menu();  //打印菜单
	Contact contact;//初始化通讯录
	printf("请输入:>");
	int input = 0;
	do
	{
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case ADD:
			//增加
			add(&contact);
			break;
		case DEL:
			//删除
			break;
		case MODIFY:
			//修改
			break;
		case SEARCH:
			//查找
			break;
		case SHOW:
			//展示
			break;
		case SORT:
			//排序
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

