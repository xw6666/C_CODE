#include <stdio.h>
int main(void)
{
    printf("请输入你要打印的字母，范围为A到Z：");
    char ch; //ch为用户输入的字母
    scanf("%c", &ch);
    int range = ch - 'A' + 1; //range为要打印的层数
    int a, b, c, d;
    int range1 = range; //range1给后面的循环使用
    int i = 1;

    for (a = 0; a < range; a++) //外层循环用于换行
    {
        for (b = 0; b < range1 - 1; b++)
        {
            printf(" "); //打印每层中的空格
        }
        range1--;
        char character = 'A';

        for (c = 0; c < i; c++, character++) //正序打印字母
        {
            printf("%c", character);
        }
        character--;                //正序打完后会使character加1，所以要减掉
        for (d = 0; d < i - 1; d++) //逆序打印字母
        {
            printf("%c", --character);
        }

        i++; //i控制每层打印字母的数量
        printf("\n");
    }
    getchar();

    return 0;
}