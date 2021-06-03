#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("请输入数字的范围：");
    int m, n, i;
    float c;
    c = 3.14159;
    scanf("%d %d", &m, &n);
    printf("    number    number2    number3\n");
    for (i = m; i <= n; i++)
    {
        printf("    %-d        %-d        %-d\n", i, i * i, i * i * i);
    }
    printf("c= %f \n",c);

    return 0;
}