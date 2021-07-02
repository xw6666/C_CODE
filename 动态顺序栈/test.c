#define _CRT_SECURE_NO_WARNINGS 1
#include "SqStack.h"
//¶¯Ì¬Ë³ÐòÕ»
void test1()
{
	SqStack s;
	InitStack(&s);
	PushStack(&s, 1);
	PushStack(&s, 2);
	PushStack(&s, 7);
	PushStack(&s, 4);
	for (int i = 0; i < 100; i++)
	{
		PushStack(&s, i);
	}
	PushStack(&s, 5);
	PopStack(&s);
	for (int i = 0; i < 50; i++)
	{
		PopStack(&s);
	}
	PrintStack(&s);
}

int main()
{
	test1();
	return 0;
}