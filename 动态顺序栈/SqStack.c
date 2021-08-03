#define _CRT_SECURE_NO_WARNINGS 1
#include "SqStack.h"

void InitStack(SqStack* ps)
{
	ps->Stack = (StackElement*)malloc(N * sizeof(StackElement));
	int i = 0;
	for (i = 0; i < N; i++)
	{
		*((ps->Stack) + i) = 0;
	}
	ps->capacity = N;
	ps->top = 0;
}

void ExpanStack(SqStack* ps)
{
	ps->capacity = 2 * ps->capacity;
	//注意sizeof算的是类型的字节数，sizeof(ps->Stack)算的是指针的字节数，要么是4要么是8
	ps->Stack = realloc((ps->Stack), (ps->capacity) * sizeof(StackElement));
	if ((ps->Stack) == NULL)
	{
		exit(-1);
	}
}

void PushStack(SqStack* ps, StackElement x)
{
	//首先判断栈是否满
	//如果满需要扩容
	//通过栈顶指针来判断
	if (ps->top == ps->capacity - 1)
	{
		ExpanStack(ps);
	}

	ps->Stack[ps->top++] = x;
	//ps->top++;
}

void PrintStack(SqStack* ps)
{
	//打印栈
	//从栈顶开始
	int i = 0;
	for (i = ps->top - 1; i >= 0; i--)
	{
		printf("%d\n", ps->Stack[i]);
	}
}

StackElement PopStack(SqStack* ps)
{
	if (ps->top > 0)
	{
		StackElement ret = ps->Stack[ps->top - 1];
		ps->top--;
		return ret;
	}
}

bool EmptyStack(SqStack* ps)
{
	if (ps->top > 0)
	{
		return false;
	}

	return true;
}

StackElement TopStack(SqStack* ps)
{
	if (ps->top > 0)
	{
		return ps->Stack[ps->top - 1];
	}
}