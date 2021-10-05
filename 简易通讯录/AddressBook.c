#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void add(Contact* contact)
{
	assert(contact);
	if (contact->size == MAXSIZE)
	{
		printf("通讯录已满");
	}
	else
	{
		Person temp = { 0 };
		//姓名 性别 年龄 电话 地址
		printf("请输入需要添加的联系人的姓名:>");
		//scanf("%s", &(temp.name));
		//printf("\n请输入需要添加的联系人的性别:>");
		//scanf("%s", &(temp.sex));
		//printf("\n请输入需要添加的联系人的年龄:>");
		//scanf("%d", &(temp.age));
		//printf("\n请输入需要添加的联系人的电话:>");
		//scanf("%s", &(temp.tele));
		//printf("\n请输入需要添加的联系人的地址:>");
		//scanf("%s", &(temp.address));
		//存放数据
		//contact->data[contact->size++] = temp;
	}
}