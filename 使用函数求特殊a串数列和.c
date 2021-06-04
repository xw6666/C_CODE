//给定两个均不超过9的正整数a和n，要求编写函数求a+aa+aaa++⋯+aa⋯a（n个a）之和。
#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}

int fn(int a, int n) //n为位数，a为主数
{
    int i;
    int x = a;
    for (i = 1; i < n; i++)
    {
        a = a * 10 + x;
    }

    return a;
}
int SumA(int a, int n)
{
    int sum = 0;
    int i = 1;
    int x = a;
    for (i = 1; i <= n; i++)
    {
        sum += a;
        a = a * 10 + x;
    }

    return sum;
}