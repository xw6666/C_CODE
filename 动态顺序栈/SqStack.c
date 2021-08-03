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
	//ע��sizeof��������͵��ֽ�����sizeof(ps->Stack)�����ָ����ֽ�����Ҫô��4Ҫô��8
	ps->Stack = realloc((ps->Stack), (ps->capacity) * sizeof(StackElement));
	if ((ps->Stack) == NULL)
	{
		exit(-1);
	}
}

void PushStack(SqStack* ps, StackElement x)
{
	//�����ж�ջ�Ƿ���
	//�������Ҫ����
	//ͨ��ջ��ָ�����ж�
	if (ps->top == ps->capacity - 1)
	{
		ExpanStack(ps);
	}

	ps->Stack[ps->top++] = x;
	//ps->top++;
}

void PrintStack(SqStack* ps)
{
	//��ӡջ
	//��ջ����ʼ
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