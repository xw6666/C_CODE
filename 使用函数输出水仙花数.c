//函数narcissistic判断number是否为水仙花数，是则返回1，否则返回0。
//函数PrintN则打印开区间(m, n)内所有的水仙花数，每个数字占一行。题目保证100≤m≤n≤10000。
#include <stdio.h>
#include <math.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic(int number)
{
    int is;
    int n = number; //用n去判断numbe是几位数
    int i = 0;      //i为次数
    int sum = 0;
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    n = number;
    while (n > 0)
    {
        int k = n % 10;
        n /= 10;
        sum += pow(k, i);
    }
    if (sum == number)
    {
        is = 1;
    }
    else
    {
        is = 0;
    }

    return is;
}

void PrintN(int m, int n)
{
    int i;
    for (i = m + 1; i < n; i++)
    {
        if (narcissistic(i))
        {
            printf("%d\n", i);
        }
    }
}
