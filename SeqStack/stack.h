#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#define MAX_SIZE 10
typedef int StackDataType;

typedef struct Stack
{
    int data[MAX_SIZE];
    int top1;
    int top2;
} Stack;

//初始化栈
void InitStack(Stack *s);
//进栈
void PushStack(Stack *s, StackDataType x, int StackNum);
//打印栈元素
void PrintStack(Stack *s, int StackNum);
//出栈
void PopStack(Stack *s, int StackNum);