#include <stdio.h>
int main()
{
    char xw[99];
    int i;
    for (i = 0; i < 100; i++)
    {
        putchar(xw[i]);
        if (i % 4 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}