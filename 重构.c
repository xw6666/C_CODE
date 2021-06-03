#include <stdio.h>
int main(void)
{
    int a, b, c, d, sum;
    int i;
    scanf("%d", &d);
    a = d % 10;
    b = d / 100;
    c = (d % 100 - a) / 10;
    for (i = 1; i <= 2; i++)
    {
        if (a <= b)
        {
            int cup = a;
            a = b;
            b = cup;
        }
        if (b <= c)
        {
            int cup = b;
            b = c;
            c = cup;
        }
    }
    sum = a * 100 + b * 10 + c;
    printf("%d", sum);

    return 0;
}