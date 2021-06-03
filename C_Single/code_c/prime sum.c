
#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++)
    {
        if (prime(p))
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int p)
{
    int i;
    int isprime = 1;
    if (p < 2)
    {
        isprime = 0;
    }
    else
    {
        for (i = 2; i < p; i++)
        {
            if (p % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }

    return isprime;
}

int PrimeSum(int m, int n)
{
    if (m < 2)
    {
        m = 2;
    }
    int sum = 0;
    int i;
    for (i = m; i <= n; i++)
    {
        if (prime(i))
        {
            sum += i;
        }
    }

    return sum;
}