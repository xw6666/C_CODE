#include <stdio.h>
int main()
{
    double m, n;
    printf("请输入两个浮点数:");

    while (scanf("%lf %lf", &m, &n) == 2)
    {
        printf("%f-%f=%f\n%f*%f=%f\n", m, n, m - n, m, n, m * n);
    }

    return 0;
}