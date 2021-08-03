#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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

//出栈并返回栈顶元素
StackElement PopStack(SqStack* ps);

//判断栈是否为空 1为空
bool EmptyStack(SqStack* ps);

//查看栈顶元素
StackElement TopStack(SqStack* ps);
