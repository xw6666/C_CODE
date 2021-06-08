#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkQueue.h"

void test()
{
	LinkQueue s = NULL;
	EnterLinkQueue(&s, 0);
	EnterLinkQueue(&s, 1);
	EnterLinkQueue(&s, 2);
	EnterLinkQueue(&s, 3);
	DeLinkQueue(&s);
	DeLinkQueue(&s);
	DeLinkQueue(&s);
	DeLinkQueue(&s);
	DeLinkQueue(&s);
	PrintLinkQueue(s);
}

int main()
{
	test();
	return 0;
}