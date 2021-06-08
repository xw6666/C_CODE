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


//���
void EnterLinkQueue(LinkQueue* s, LQElemType x);
//���һ���½��
LinkNode* GetNewNode();
//��ӡ����Ԫ��
void PrintLinkQueue(LinkQueue s);
//���Ӳ����س���Ԫ��
int DeLinkQueue(LinkQueue *s);