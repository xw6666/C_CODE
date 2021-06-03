#include <stdio.h>
#include <math.h>

int main(void)
{
    int xw[7];
    int i;
    int a = 1;
    for (i = 0; i <= 7; i++)
    {
        xw[i] = pow(2, a);
        a++;
    }
    i = 0;
    do
    {
        printf("%d ", xw[i]);
        i++;
    } while (i <= 7);

    return 0;
}