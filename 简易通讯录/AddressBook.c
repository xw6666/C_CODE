#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void add(Contact* contact)
{
	assert(contact);
	if (contact->size == MAXSIZE)
	{
		printf("ͨѶ¼����");
	}
	else
	{
		Person temp = { 0 };
		//���� �Ա� ���� �绰 ��ַ
		printf("��������Ҫ��ӵ���ϵ�˵�����:>");
		//scanf("%s", &(temp.name));
		//printf("\n��������Ҫ��ӵ���ϵ�˵��Ա�:>");
		//scanf("%s", &(temp.sex));
		//printf("\n��������Ҫ��ӵ���ϵ�˵�����:>");
		//scanf("%d", &(temp.age));
		//printf("\n��������Ҫ��ӵ���ϵ�˵ĵ绰:>");
		//scanf("%s", &(temp.tele));
		//printf("\n��������Ҫ��ӵ���ϵ�˵ĵ�ַ:>");
		//scanf("%s", &(temp.address));
		//�������
		//contact->data[contact->size++] = temp;
	}
}