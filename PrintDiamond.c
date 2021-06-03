//打印菱形
#include <stdio.h>
int main()
{
    int n; //n为层数且n是正奇数
    scanf("%d", &n);
    int up = (n + 1) / 2; //上半部分层数
    int down = n / 2;     //下半部分层数
    //打印上半部分
    int i = 0, j = 0;
    for (i = 0; i < up; i++)
    {
        //打印空格
        for (j = 0; j < n - 1 - 2 * i; j++)
        {
            printf(" ");
        }
        //打印符号
        for (j = 0; j < 1 + 2 * i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //打印下半部分
    for (i = 0; i < down; i++)
    {
        //打印空格
        for (j = 0; j < 2 + 2 * i; j++)
        {
            printf(" ");
        }
        //打印符号
        for (j = 0; j < n - 2 - 2 * i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}