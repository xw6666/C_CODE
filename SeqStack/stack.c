#include "stack.h"

void InitStack(Stack *s)
{
    //两栈共享空间
    s->top1 = -1;
    s->top2 = MAX_SIZE;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        s->data[i] = 0;
    }
}

void PushStack(Stack *s, StackDataType x, int StackNum)
{
    // 1.栈满 - top1+1 == top2
    // 2.栈没满
    if (s->top1 + 1 == s->top2)
    {
        printf("栈已满\n");
    }
    else
    {
        //入栈
        if (StackNum == 1)
        {
            s->top1++;
            s->data[s->top1] = x;
        }
        else if (StackNum == 2)
        {
            s->top2--;
            s->data[s->top2] = x;
        }
        else
        {
            printf("栈号输入错误\n");
        }
    }
}

void PrintStack(Stack *s, int StackNum)
{
    //打印栈中元素
    if (StackNum == 1)
    {
        if (s->top1 == -1)
        {
            printf("err\n");
        }
        else
        {
            for (int i = 0; i <= s->top1; i++)
            {
                printf("%d\n", s->data[i]);
            }
        }
    }
    else if (StackNum == 2)
    {
        if (s->top2 == MAX_SIZE)
        {
            printf("err\n");
        }
        else
        {
            for (int i = MAX_SIZE - 1; i >= s->top2; i--)
            {
                printf("%d\n", s->data[i]);
            }
        }
    }
    else
    {
        printf("err\n");
    }
}

void PopStack(Stack *s, int StackNum)
{
    //判断栈号
    //判断是否为空
    if (StackNum == 1)
    {
        if (s->top1 == -1)
        {
            printf("err\n");
        }
        else
        {
            s->top1--;
        }
    }
    else if (StackNum == 2)
    {
        if (s->top2 == MAX_SIZE)
        {
            printf("err\n");
        }
        else
        {
            //注意是加
            s->top2++;
        }
    }
    else
    {
        printf("err\n");
    }
}