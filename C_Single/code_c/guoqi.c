#include <stdio.h> //分析题目要求，不难得出如果数字存在为7或者被7整除则输出skip

int IsSeven(int num)
{
    int flag = 0;//假设num不需要skip
    if (num % 7 == 0)//判断是否为7的倍数
    {
        flag = 1;
    }
    while (num > 0)//判断每一位是否存在7
    {
        if (num % 10 == 7)
        {
            flag = 1;
            break;
        }
        num /= 10;
    }

    return flag;
}

int main(void)
{
    int amount, num;
    scanf("%d%d", &amount, &num);
    int i;
    int j;

    for (i = 1, j = 1; i <= num; i++, j++)
    {
        printf("%d ", j);//打印人数
        if (j == amount)
        {
            j = 0;
        }

        if (IsSeven(i))
        {
            printf("skip\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}