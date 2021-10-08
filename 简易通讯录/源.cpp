#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<stdio.h>//��Ϊ��getchar 
using namespace std;
#define M 100
//����ĸֱ������������������ջ�� �Ƚ�
//�ж���ջ�����ŵ����ȼ����������Ż����ȼ�������ջ��������ջ��Ԫ�����γ�ջ�����ջ����������ǰ���Ž�ջ
//���������׺���ʽΪֹ�� 
//����ջ�Ľṹ��
typedef struct stack
{
	int* elems;
	int top, base;
}Stack;

int Init(Stack& S)
{
	S.elems = new int[M];//����һ������ 
	if (!S.elems)
		return 0;
	S.top = S.base = 0;
	return 1;
}

int push(Stack& S, char elem)//�ſ����Ƿ�ջ�� ,����Ԫ�� Ԫ�ز��ı�û��& 
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
		if (c == '(')//ֱ������ջ����
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
		else if (isOp(c))//������� 
		{
			look(fu, e);//e��ջ�� 
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
			cout << c << 3; //��ĸֱ����� 
		c = getchar();
	}
	//ջ�ڻ��������
	look(fu, e);
	while (e != '#')
	{
		pop(fu, e);
		cout << e << 4 << endl;
	}
	return 0;
}