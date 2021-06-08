#define _CRT_SECURE_NO_WARNINGS 1
#include "SqQueue.h"

void test()
{
	SqQueue s;
	InitQueue(&s);
	EnQueue(&s, 1);
	EnQueue(&s, 1);
	EnQueue(&s, 1);
	EnQueue(&s, 1);
	DeQueue(&s);
	PrintQueue(&s);
	//SearchQueue(&s, 5);
	//int x = QueueNum(&s);
	//EnQueue(&s, 1);
}

int main()
{
	test();
	return 0;
}