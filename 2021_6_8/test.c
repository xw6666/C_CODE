#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	//前面加auto，是可以省略的
//	int a = 10;//局部变量 - 自动变量
//	return 0;
//}

//int main()
//{
//	//建议把100存放在寄存器中，最终由编译器决定放不放
//	register int num = 100;
//	return 0;
//}


//在c语言中：static分三种用法
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//void test()
//{
//	//static修饰局部变量 - 改变了变量的生命周期，不影响作用域
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//声明函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//#define num 100
//
////定义宏  宏名     宏体
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 5;
//	int b = 7;
//	int c = MAX(a + 2, b);//宏做了简单的替换
//	//int c = (a+2>b?a+2:b);
//	printf("%d\n", c);
//	return 0;
//}

#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>

typedef  struct  Node {
    char  data;
    struct  Node* next;
}Node, * LinkList;

LinkList  InitList()
{
    LinkList  L = (LinkList)malloc(sizeof(Node));
    L->next = NULL;
    return  L;
}
void  CreatList(LinkList  L)
{
    char data = 0;
    while (scanf(" %c", & data), data != '#')
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = L->next;
        L->next = newNode;
    }
}
void  Print(LinkList  L)
{
    L = L->next;
    while (L)
    {
        printf("%c ", L->data);
        L = L->next;
    }
}

int  main()
{
    LinkList  L;
    L = InitList();
    CreatList(L);
    Print(L);
    return  0;
}