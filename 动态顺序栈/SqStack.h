#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 4
typedef int StackElement;

typedef struct SqStack
{
	StackElement* Stack;//栈
	int top; //栈顶指针 
	int capacity;//容量
}SqStack;

//初始化栈
void InitStack(SqStack* ps);

//扩容
void ExpanStack(SqStack* ps);

//入栈
void PushStack(SqStack* ps, StackElement x);

//打印栈中元素 - 栈顶到栈底
void PrintStack(SqStack* ps);

//出栈
void PopStack(SqStack* ps);