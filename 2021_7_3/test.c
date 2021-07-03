#define _CRT_SECURE_NO_WARNINGS 1


//leetcode - 20. 有效的括号
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
////初始化栈
//void InitStack(Stack* ps)
//{
//    ps->arr = (char*)malloc(N * sizeof(char));
//    ps->top = 0;
//    ps->capacity = N;
//}
//
////扩容
//void ExpanStack(Stack* ps)
//{
//    ps->capacity = 2 * (ps->capacity);
//    ps->arr = realloc(ps->arr, ps->capacity * sizeof(char));
//}
//
////入栈
//void PushStack(Stack* ps, char x)
//{
//    if (ps->top = ps->capacity - 1)
//    {
//        ExpanStack(ps);
//    }
//    ps->arr[ps->top++] = x;
//}
//
////出栈
//void PopStack(Stack* ps)
//{
//    if (ps->top > 0)
//    {
//        ps->top--;
//    }
//}
//
//bool isValid(char* s) {
//    //先给一个栈
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
//                //匹配成功 出栈
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
//                //剩下都匹配不上
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