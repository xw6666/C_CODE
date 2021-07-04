#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <Windows.h>
typedef int QueueElement;

typedef struct Queue
{
	QueueElement data;
	struct Queue* next;
}Node, * QueueHead;


//*QueueHead == Node;
//QueueHead == Node *

//��ʼ������
void InitQueue(QueueHead* ps);

//���һ���½ڵ�
Node* GetNewNode();

//��� - β��һ���ڵ�
void PushQueue(QueueHead* ps, QueueElement x);

//��ӡ����Ԫ��
void PrintQueue(QueueHead* ps);

//���Ӳ����س���Ԫ��
QueueElement PopQueue(QueueHead* ps);