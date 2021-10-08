#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<stdio.h>//因为有getchar 
using namespace std;
#define M 100
//将字母直接输出，将运算符存入栈内 比较
//判断与栈顶符号的优先级，是右括号或优先级不高于栈顶符号则栈顶元素依次出栈并输出栈顶，并将当前符号进栈
//最终输出后缀表达式为止。 
//定义栈的结构体
typedef struct stack
{
	int* elems;
	int top, base;
}Stack;

int Init(Stack& S)
{
	S.elems = new int[M];//创建一个数组 
	if (!S.elems)
		return 0;
	S.top = S.base = 0;
	return 1;
}

int push(Stack& S, char elem)//放考虑是否栈满 ,放入元素 元素不改变没有& 
{
	if (S.top - S.base == M)
		return 0;
	S.elems[S.top] = elem;
	S.top++;
	return 1;
}

int pop(Stack& S, char elem)
{
	if (S.top == S.base)
		return 0;
	--S.top;
	elem = S.elems[S.top];
	return 1;
}
int look(Stack S, char& elem)//
{
	if (S.top == S.base)
		return 0;
	elem = S.elems[S.top - 1];
	return 1;
}

int isOp(char c)
{
	if (c >= 'a' && c <= 'z')
		return 0;
	else
		return 1;
}

typedef struct ops
{
	char op;
	int level;
}Ops;
Ops levels[9] = {
  {'(',0},
  {'#',0},
  {'+',1},
  {'-',1},
  {'*',2},
  {'/',2},
  {'^',3},
};
int getLevel(char c)
{
	for (int i = 0; i < 6; i++)
	{
		if (levels[i].op == c)
			return levels[i].level;
	}
}
int main()
{
	Stack fu;
	Init(fu);
	push(fu, '#');
	//
	char c, e;
	c = getchar();
	//
	while (c != EOF)
	{
		if (c == '(')//直接送入栈顶。
			push(fu, c);
		else if (c == ')')
		{
			look(fu, e);
			while (e != '(')
			{
				pop(fu, e);
				cout << e << 1;
				break;
			}
			look(fu, e);
			pop(fu, e);
		}
		else if (isOp(c))//是运算符 
		{
			look(fu, e);//e是栈顶 
			if (getLevel(c) > getLevel(e))
				push(fu, c);
			else//>
			{
				pop(fu, e);
				cout << e << 2;
				push(fu, c);
			}
		}
		else
			cout << c << 3; //字母直接输出 
		c = getchar();
	}
	//栈内还有运算符
	look(fu, e);
	while (e != '#')
	{
		pop(fu, e);
		cout << e << 4 << endl;
	}
	return 0;
}