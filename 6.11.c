#include <stdio.h>
int main(void)
{
    char xw[8];
    scanf("%s", xw);//%s用于读取一个字符串，但是字符串中的字符 全部为数字
    int i;

    for (i = 7; i >= 0; i--)
    {
        printf("%c", xw[i]);//%c用于输出数组中的字符，由循环控制倒序输出
    }

    return 0;
}