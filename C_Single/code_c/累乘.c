#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int i;
    long long int sum = 1;
    for (i = 2; i <= n; i++)
    {
        sum *= i;
    }
    printf("%LLd\n", sum);

    return 0;
}