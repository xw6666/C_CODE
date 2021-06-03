#include <stdio.h>
int main(void)
{
    double n;
    scanf("%lf", &n);

    printf("c=%.2f", 5 * (n - 32) / 9);

    return 0;
}

