#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//�������飺�ṹ���в�ֹ����һ���������������ǽṹ���е����һ��Ԫ��
//typedef struct s1
//{
//	int i;
//	int arr[];    //��������
//} s1;
//
//typedef struct s2
//{
//	int i;
//	int arr[0];   //��������
//};
//
//int main()
//{
//	//������������Ľṹ��ʹ�ã�Ҫ���malloc�ȶ�̬�ڴ溯��ʹ��
//	//printf("%d\n", sizeof(s1));    //4byte - ������i
//	
//	s1* parr = (s1*)malloc(sizeof(s1) + 10 * sizeof(int));    //ǰ���sizeof(s1)��i�Ŀռ䣬10��int��arr�Ŀռ�
//	//parr = NULL;
//	if (parr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		parr->arr[i] = i;
//	}
//
//	//��ӡԪ��
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", parr->arr[i]);
//	}
//	printf("\n");
//
//	//�ռ䲻������Ҫ����
//	s1* p = (s1*)realloc(parr, sizeof(s1) + 20 * sizeof(int));
//
//	for (int i = 0; i < 20; i++)
//	{
//		p->arr[i] = i;
//	}
//
//	//��ӡԪ��
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//}

int my_atoi(const char* string)
{
	assert(string);
	int len = strlen(string);
}

#define INT_PTR int*
typedef int* int_ptr;

int main()
{
	INT_PTR a, b;
	int_ptr c, d;
	return 0;
}