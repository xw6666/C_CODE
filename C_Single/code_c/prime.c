#include <stdio.h>
int prime(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    int i = prime(n);
    printf("%d", i);

    return 0;
}

int prime(int n)
{
    int isprime = 1;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i != n)
    {
        isprime = 0;
        return isprime;
    }
}