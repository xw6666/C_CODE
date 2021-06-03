#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {
        printf("%d is not a perfect number\n", n);
    }

    return 0;
}