#include <stdio.h>
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int rec = fact(n);
    printf("%d\n", rec);
    return 0;
}

// #include <stdio.h>
// int fib(int n)
// {
//     if (n <= 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ret = fib(n);
//     printf("%d\n", ret);
//     return 0;
// }
//上述效率太低，我们改用循环
// #include <stdio.h>
// int fib(int n)
// {
//     if (n <= 2)//斐波那契数列前两项都是1
//     {
//         return 1;
//     }
//     else
//     {
//         int a=1;
//         int b=1;
//         int cup;
//         int c;//c表示第n项斐波那契数列的值
//         while(n>2)
//         {//每次a与b相加得到c，b与c变为原来的ab，分析可知算第三项需要1次循环，故跳出循环条件设置为n>2
//             cup=b;
//             c=a+b;
//             b=c;
//             a=cup;
//             n--;
//         }
//         return c;
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ret = fib(n);
//     printf("%d\n", ret);
//     return 0;
// }

//青蛙跳台问题
// int func(int n)
// {
//     if (n <= 2)
//     {
//         return n;
//     }
//     else
//     {
//         return func(n - 1) + func(n - 2);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ret = func(n);
//     printf("%d", ret);
//     return 0;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     //fact函数用于计算并返回n的阶乘
//     int rec = fact(n);
//     return;
// }