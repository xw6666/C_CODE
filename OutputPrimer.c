#include <stdio.h>

int IsPrime(int n)
{
    int i;
    int flag = 1;
    if (n <= 1)
    {
        flag = 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int i;

    for (i = 1; i <= n; i++)
    {
        if (IsPrime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}