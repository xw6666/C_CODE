#include "LinkStack.h"

void InitLinkStack(LinkStack *s)
{
    //top就是所谓的栈顶指针 - 头指针
    s->top = NULL;
    s->count = 0;
}

void PushLinkStack(LinkStack *s, LinkStackType x)
{
    //给一个新结点进行头插
    LinkNode *node = (LinkNode *)malloc(sizeof(LinkNode));
    if (node == NULL)
    {
        exit(-1);
    }
    else
    {
        node->data = x;
        node->next = s->top;
        s->top = node;
        s->count++;
    }
}

void PrintLinkStack(LinkStack *s)
{
    //从栈顶开始遍历
    LinkNode *cur = s->top;
    while (cur)
    {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
}

void PopLinkStack(LinkStack *s)
{
    //其实就是头删
    if (s->top == NULL)
    {
        printf("err\n");
    }
    else
    {
        LinkNode *temp = s->top;
        s->top = s->top->next;
        free(temp);
        s->count--;
    }
}