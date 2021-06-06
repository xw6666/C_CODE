#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAX_CAPACITY 4
typedef char StackDataType;

//设置操作符优先级
enum Operator
{
	RIGHT_PEREN,
	ADD,
	MIN,
	MUL,
	DIV,
	LEFT_PEREN
};

//设置栈;
typedef struct Stack
{
	StackDataType* data;
	int top;
	int capacity;
}Stack;

//初始化栈
void InitStack(struct Stack* s);
//进栈
void PushStack(struct Stack* s, StackDataType x);
//扩容
Stack* ExpanStack(Stack* s);
//出栈,返回出栈的值
StackDataType PopStack(Stack* s);
//将字符转化成可以对比优先级的形式
int Exchange(char* ch);
