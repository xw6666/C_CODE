#define _CRT_SECURE_NO_WARNINGS 1
#include "Caculator.h"

void InitStack(struct Stack* s)
{
	assert(s != NULL);
	//首先先给栈四个空间
	s->data = (StackDataType*)malloc(MAX_CAPACITY * (sizeof(StackDataType)));//注意一下这里
	s->capacity = MAX_CAPACITY;
	s->top = -1;
}

Stack* ExpanStack(Stack* s)
{
	assert(s != NULL);
	s->capacity = s->capacity * 2;
	s->data = (StackDataType*)realloc(s->data, (s->capacity) * sizeof(StackDataType));
	if (s->data == NULL)
	{
		printf("扩容失败");
		exit(-1);
	}
	return s;
}

void PushStack(struct Stack* s, StackDataType x)
{
	//判断是否满了
	if (s->top + 1 == s->capacity)
	{
		//扩容
		ExpanStack(&s);
	}
	//放元素
	s->top++;
	s->data[s->top] = x;
}

StackDataType PopStack(Stack* s)
{
	StackDataType ret = s->data[s->top];
	s->top--;
	return ret;
}

int Exchange(char* ch)
{
	if (ch == '+')
	{
		return ADD;
	}
	else if(ch == '-')
	{
		return MIN;
	}
	else if (ch == '*')
	{
		return MUL;
	}
	else if(ch == '/')
	{
		return DIV;
	}
	else if( ch == '(')
	{
		return LEFT_PEREN;
	}
	else
	{
		return RIGHT_PEREN;
	}
	
}