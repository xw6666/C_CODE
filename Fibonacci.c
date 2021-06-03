#include <stdio.h>
int fib(int n)
{
    if (n <= 2 && n > 0)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ret = fib(n);
    printf("fib(%d)=%d\n", n, ret);
    return 0;
}