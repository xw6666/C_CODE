#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void menu()
{
	printf("**************************************\n");
	printf("**** 1.����                2.ɾ�� ****\n");
	printf("**** 3.�޸�                4.���� ****\n");
	printf("**** 5.չʾ                6.���� ****\n");
	printf("*************** 0.�˳� ***************\n");
	printf("**************************************\n");
}

void test1()
{
	menu();  //��ӡ�˵�
	Contact contact;//��ʼ��ͨѶ¼
	printf("������:>");
	int input = 0;
	do
	{
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case ADD:
			//����
			add(&contact);
			break;
		case DEL:
			//ɾ��
			break;
		case MODIFY:
			//�޸�
			break;
		case SEARCH:
			//����
			break;
		case SHOW:
			//չʾ
			break;
		case SORT:
			//����
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

