#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	//ǰ���auto���ǿ���ʡ�Ե�
//	int a = 10;//�ֲ����� - �Զ�����
//	return 0;
//}

//int main()
//{
//	//�����100����ڼĴ����У������ɱ����������Ų���
//	register int num = 100;
//	return 0;
//}


//��c�����У�static�������÷�
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//void test()
//{
//	//static���ξֲ����� - �ı��˱������������ڣ���Ӱ��������
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
//��������
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
////�����  ����     ����
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 5;
//	int b = 7;
//	int c = MAX(a + 2, b);//�����˼򵥵��滻
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