#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkQueue.h"

LinkNode* GetNewNode()
{
	LinkNode* newNode = (LinkNode*)malloc(sizeof(LinkNode));
	return newNode;
}

void EnterLinkQueue(LinkQueue* s, LQElemType x)
{
	//如果申请失败直接退出
	LinkNode* newNode = GetNewNode();
	if (newNode == NULL)
	{
		printf("%s\n", strerror(errno));
		exit(-1);
	}
	
	//如果linkqueue是空的那么直接当头
	//否则遍历到最后一个结点进行尾插
	newNode->data = x;
	LinkNode* cur = *s;
	if (cur == NULL)
	{
		newNode->next = NULL;
		*s = newNode;
	}
	else
	{
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newNode;
		newNode->next = NULL;
	}
}

void PrintLinkQueue(LinkQueue s)
{
	//遍历到最后一个结点，每个结点打印一次
	LinkNode* cur = s;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

int DeLinkQueue(LinkQueue* s)
{
	if (*s == NULL)
	{
		printf("没有元素");
	}
	else
	{
		LinkNode* prev = *s;
		*s = (*s)->next;
		free(prev);
	}
}