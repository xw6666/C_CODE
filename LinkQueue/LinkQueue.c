#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkQueue.h"

LinkNode* GetNewNode()
{
	LinkNode* newNode = (LinkNode*)malloc(sizeof(LinkNode));
	return newNode;
}

void EnterLinkQueue(LinkQueue* s, LQElemType x)
{
	//�������ʧ��ֱ���˳�
	LinkNode* newNode = GetNewNode();
	if (newNode == NULL)
	{
		printf("%s\n", strerror(errno));
		exit(-1);
	}
	
	//���linkqueue�ǿյ���ôֱ�ӵ�ͷ
	//������������һ��������β��
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
	//���������һ����㣬ÿ������ӡһ��
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
		printf("û��Ԫ��");
	}
	else
	{
		LinkNode* prev = *s;
		*s = (*s)->next;
		free(prev);
	}
}