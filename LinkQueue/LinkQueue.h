#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int LQElemType;

typedef struct LinkNode
{
	LQElemType* data;
	struct LinkNode* next;
}LinkNode, * LinkQueue;


//入队
void EnterLinkQueue(LinkQueue* s, LQElemType x);
//获得一个新结点
LinkNode* GetNewNode();
//打印队列元素
void PrintLinkQueue(LinkQueue s);
//出队并返回出队元素
int DeLinkQueue(LinkQueue *s);