#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 4
typedef int StackElement;

typedef struct SqStack
{
	StackElement* Stack;//ջ
	int top; //ջ��ָ�� 
	int capacity;//����
}SqStack;

//��ʼ��ջ
void InitStack(SqStack* ps);

//����
void ExpanStack(SqStack* ps);

//��ջ
void PushStack(SqStack* ps, StackElement x);

//��ӡջ��Ԫ�� - ջ����ջ��
void PrintStack(SqStack* ps);

//��ջ
void PopStack(SqStack* ps);