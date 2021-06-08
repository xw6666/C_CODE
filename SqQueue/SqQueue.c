#define _CRT_SECURE_NO_WARNINGS 1
#include "SqQueue.h"

void InitQueue(SqQueue* s)
{
	assert(s != NULL);
	s->front = 0;
	s->rear = 0;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		s->data[i] = 0;
	}
}

void EnQueue(SqQueue* s, QElemType x)
{
	assert(s != NULL);
	if ((s->rear + 1) % MAX_SIZE == s->front)
	{
		printf("����������\n");
	}
	else
	{
		s->data[s->rear] = x;
		s->rear++;
	}
}

void PrintQueue(SqQueue* s)
{
	if (s->front == s->rear)
	{
		printf("����Ϊ�գ�\n");
	}
	else
	{
		int i = s->front;
		while (i % MAX_SIZE != s->rear)
		{
			printf("%d ", s->data[i % MAX_SIZE]);
			i++;
		}
	}
}

int DeQueue(SqQueue* s)
{
	//����Ϊ�շ���
	//��Ϊ�ն�ͷ�ƶ�һλ��ע��ѭ�����е�����ṹ
	if (s->front == s->rear)
	{
		printf("����Ϊ�գ�\n");
	}
	else
	{
		int x = s->data[s->front];
		s->front = (s->front + 1) % MAX_SIZE;
		return x;
	}
}

int QueueNum(SqQueue* s)
{
	return (s->rear - s->front + MAX_SIZE) % MAX_SIZE;
}

int SearchQueue(SqQueue* s, QElemType x)
{
	int i = s->front;
	while (i % MAX_SIZE != s->rear)
	{
		if (s->data[i] == x)
		{
			return i;
		}
		i++;
	}
	if (i % MAX_SIZE == s->rear)
	{
		printf("û�ҵ���\n");
	}
}