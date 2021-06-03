#include <stdio.h>
void isperfact(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        isperfact(i);
    }

    return 0;
}

void isperfact(int n)
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
    if (n == sum)
    {
        printf("%d ", sum);
    }
}
