#include <stdio.h>
#include <stdlib.h>

typedef int LinkStackType;

typedef struct LinkNode
{
    LinkStackType data;
    struct LinkNode *next;
} LinkNode, *LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count;
} LinkStack;

//栈的初始化
void InitLinkStack(LinkStack *s);
//进栈
void PushLinkStack(LinkStack *s, LinkStackType x);
//打印栈中元素
void PrintLinkStack(LinkStack *s);
//出栈
void PopLinkStack(LinkStack *s);