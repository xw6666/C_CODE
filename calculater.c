#include <stdio.h>
void menu()
{
    printf("**************************\n");
    printf("***1.加************2.减***\n");
    printf("***3.乘************4.除***\n");
    printf("**********0.退出**********\n");
    printf("**************************\n");
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
int main()
{
    int x, y;
    int input;
    int (*parr[5])(int, int) = {0, Add, Sub, Mul, Div};//parr是一个函数指针数组
    do
    {
        menu();
        printf("请输出:>\n");
        scanf("%d", &input);
        if (input >= 1 && input <= 4)
        {
            printf("请输入操作数:>\n");
            scanf("%d%d", &x, &y);
            int ret = (*(parr[input]))(x, y);
            printf("%d\n", ret);
        }
        else if (input == 0)
        {
            printf("退出程序\n");
        }
        else
        {
            printf("输入非法，请再次输入:>\n");
        }
    } while (input);

    return 0;
}
//通过这个程序可以很好地利用函数指针数组
//这个叫做转移表