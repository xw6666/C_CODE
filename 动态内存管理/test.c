#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//柔性数组：结构体中不止数组一个东西，且数组是结构体中的最后一个元素
//typedef struct s1
//{
//	int i;
//	int arr[];    //柔性数组
//} s1;
//
//typedef struct s2
//{
//	int i;
//	int arr[0];   //柔性数组
//};
//
//int main()
//{
//	//包含柔性数组的结构体使用，要配合malloc等动态内存函数使用
//	//printf("%d\n", sizeof(s1));    //4byte - 不包含i
//	
//	s1* parr = (s1*)malloc(sizeof(s1) + 10 * sizeof(int));    //前面的sizeof(s1)是i的空间，10个int是arr的空间
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
//	//打印元素
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", parr->arr[i]);
//	}
//	printf("\n");
//
//	//空间不够，想要更大
//	s1* p = (s1*)realloc(parr, sizeof(s1) + 20 * sizeof(int));
//
//	for (int i = 0; i < 20; i++)
//	{
//		p->arr[i] = i;
//	}
//
//	//打印元素
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