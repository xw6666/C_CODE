#include <stdio.h>
#include <math.h>
int IsPrime(int x)
{
    int flag = 1;
    if (x < 2)
    {
        flag = 0;
    }
    int i;
    for (i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
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
            int sum = 0;
            int cup1 = i;
            while (cup1 > 0)
            {
                sum = sum + cup1 % 10;
                cup1 /= 10;
            }
            if (IsPrime(sum))
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}