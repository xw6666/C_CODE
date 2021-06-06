#define _CRT_SECURE_NO_WARNINGS 1
#include "Caculator.h"

void InitStack(struct Stack* s)
{
	assert(s != NULL);
	//�����ȸ�ջ�ĸ��ռ�
	s->data = (StackDataType*)malloc(MAX_CAPACITY * (sizeof(StackDataType)));//ע��һ������
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
		printf("����ʧ��");
		exit(-1);
	}
	return s;
}

void PushStack(struct Stack* s, StackDataType x)
{
	//�ж��Ƿ�����
	if (s->top + 1 == s->capacity)
	{
		//����
		ExpanStack(&s);
	}
	//��Ԫ��
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