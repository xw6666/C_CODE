#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    //打印前一半
    int i = 0;
    for (i = 0; i < n; i++)
    {
        //打印空格
        int j = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }
        //打印符号
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //打印下半部分
    int j = 0;
    for (j = 0; j < n - 1; j++)
    {
        //打印空格
        int i = 0;
        for (i = 0; i < j + 1; i++)
        {
            printf(" ");
        }
        //打印符号
        for (i = 0; i < 2 * (n - 1 - j) - 1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}