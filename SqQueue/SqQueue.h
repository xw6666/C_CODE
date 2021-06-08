#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX_SIZE 5
typedef int QElemType;//��int������Ϊ����Ԫ��

typedef struct SqQueue
{
	QElemType data[5];
	int front;//ǰ���
	int rear;//�����
}SqQueue;

//��ʼ������
void InitQueue(SqQueue* s);
//���
void EnQueue(SqQueue* s, QElemType x);
//��ӡ����Ԫ��
void PrintQueue(SqQueue* s);
//���Ӳ����س���Ԫ��
int DeQueue(SqQueue* s);
//���ض���Ԫ�ظ���
int QueueNum(SqQueue* s);
//���Ҷ���Ԫ�ز������±�
int SearchQueue(SqQueue* s, QElemType x);