#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAX_CAPACITY 4
typedef char StackDataType;

//���ò��������ȼ�
enum Operator
{
	RIGHT_PEREN,
	ADD,
	MIN,
	MUL,
	DIV,
	LEFT_PEREN
};

//����ջ;
typedef struct Stack
{
	StackDataType* data;
	int top;
	int capacity;
}Stack;

//��ʼ��ջ
void InitStack(struct Stack* s);
//��ջ
void PushStack(struct Stack* s, StackDataType x);
//����
Stack* ExpanStack(Stack* s);
//��ջ,���س�ջ��ֵ
StackDataType PopStack(Stack* s);
//���ַ�ת���ɿ��ԶԱ����ȼ�����ʽ
int Exchange(char* ch);
