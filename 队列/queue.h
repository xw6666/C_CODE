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

//初始化队列
void InitQueue(QueueHead* ps);

//获得一个新节点
Node* GetNewNode();

//入队 - 尾插一个节点
void PushQueue(QueueHead* ps, QueueElement x);

//打印队列元素
void PrintQueue(QueueHead* ps);

//出队并返回出队元素
QueueElement PopQueue(QueueHead* ps);