#define _CRT_SECURE_NO_WARNINGS 1


//leetcode - 20. ��Ч������
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#define N 10
//typedef struct Stack
//{
//    char* arr;
//    int top;
//    int capacity;
//}Stack;
//
////��ʼ��ջ
//void InitStack(Stack* ps)
//{
//    ps->arr = (char*)malloc(N * sizeof(char));
//    ps->top = 0;
//    ps->capacity = N;
//}
//
////����
//void ExpanStack(Stack* ps)
//{
//    ps->capacity = 2 * (ps->capacity);
//    ps->arr = realloc(ps->arr, ps->capacity * sizeof(char));
//}
//
////��ջ
//void PushStack(Stack* ps, char x)
//{
//    if (ps->top = ps->capacity - 1)
//    {
//        ExpanStack(ps);
//    }
//    ps->arr[ps->top++] = x;
//}
//
////��ջ
//void PopStack(Stack* ps)
//{
//    if (ps->top > 0)
//    {
//        ps->top--;
//    }
//}
//
//bool isValid(char* s) {
//    //�ȸ�һ��ջ
//    Stack S;
//    InitStack(&S);
//    int len = strlen(s);
//    for (int i = 0; i < len; i++)
//    {
//        if ((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
//        {
//            PushStack(&S, s[i]);
//        }
//        else
//        {
//            if (S.top == 0)
//            {
//                return false;
//            }
//            else if (((S.arr[S.top - 1]) == '(') && s[i] == ')')
//            {
//                //ƥ��ɹ� ��ջ
//                PopStack(&S);
//            }
//            else if (((S.arr[S.top - 1]) == '{') && s[i] == '}')
//            {
//                PopStack(&S);
//            }
//            else if (((S.arr[S.top - 1]) == '[') && s[i] == ']')
//            {
//                PopStack(&S);
//            }
//            else
//            {
//                //ʣ�¶�ƥ�䲻��
//                return false;
//            }
//        }
//    }
//
//    return true;
//}
//
//int main()
//{
//    char arr[100] = "{[]}";
//    isValid(arr);
//    return 0;
//}