#include <stdio.h>
int main(void)
{
    int a, b;
    int i = 1;
    scanf("%d", &b);

    for (a = 1; a <= i; a++)
    {
        printf("%-2d* %-2d= %-2d ", a, i, a * i);
        if (a == i)
        {
            i++;
            printf("\n");
            a = 0;
        }
        if (i == b + 1)
        {
            break;
        }
    }

    return 0;
}