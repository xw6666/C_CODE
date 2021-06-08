#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX_SIZE 5
typedef int QElemType;//将int类型作为队列元素

typedef struct SqQueue
{
	QElemType data[5];
	int front;//前面的
	int rear;//后面的
}SqQueue;

//初始化队列
void InitQueue(SqQueue* s);
//入队
void EnQueue(SqQueue* s, QElemType x);
//打印队列元素
void PrintQueue(SqQueue* s);
//出队并返回出队元素
int DeQueue(SqQueue* s);
//返回队列元素个数
int QueueNum(SqQueue* s);
//查找队列元素并返回下标
int SearchQueue(SqQueue* s, QElemType x);