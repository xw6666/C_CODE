//递归打印杨辉三角
// #include <stdio.h>
// int print(int x, int y)
// {
//     if (x == 0 || y == 0 || x == y)
//     {
//         return 1;
//     }
//     else
//         return print(x - 1, y - 1) + print(x - 1, y);
// }
// int main(void)
// {
//     int n; //n表示层数
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         int j = 0;
//         for (j = 0; j < i + 1; j++)
//         {
//             if (j == 0 || i == j)
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("%d ", print(i, j));
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

//循环打印杨辉三角
#include <stdio.h>
int main()
{
    int arr[50][50];
    int n;
    scanf("%d", &n);
    //把1输入数组
    int i = 0;
    int j = 0;
    for (i = 1; i <= n; i++)
    {
        int j = 0;
        for (j = 1; j <= i; j++)
        {
            if (i == j || j == 1)
            {
                arr[i][j] = 1;
            }
        }
    }

    //补充其他数字进入数组
    //第二行开始一直到第n行
    for (i = 2; i <= n; i++)
    {
        //j从第二个元素开始一直到第i-1个元素
        for (j = 2; j <= i - 1; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
    //打印三角形
    for (i = 1; i <= n; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}