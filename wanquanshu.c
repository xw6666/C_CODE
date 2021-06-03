#include <stdio.h>
int FactorSum(int n)
{
    int sum = 0;
    int i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}
int main(void)
{
    int n;
    scanf("%d", &n);

    int i;
    for (i = 2; i <= n; i++)
    {
        if (i == FactorSum(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}