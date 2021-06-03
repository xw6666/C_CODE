// #include <stdio.h>
// int xw(int row, int col)
// {
//     return (col == 1 || col == row) ? 1 : xw(row - 1, col - 1) + xw(row - 1, col); //递归
// }
// int main()
// {
//     int i, j, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n + 1; i++) //打印层数
//     {
//         for (j = 1; j <= n + 1 - i; j++) //打印*
//             printf("  ");
//         for (j = 1; j <= i; j++) //打印数字
//             if (j != i)
//             {
//                 printf("%d   ", xw(i, j)); //xw()表示打印第i行第j列的元素
//             }
//             else
//             {
//                 printf("%d", xw(i, j)); //打印每行最后一个元素不需要后面跟**
//             }
//         printf("\n");
//     }
//     return 0;
// }

//         1
//       1   1
//     1   2   1
//   1   3   3   1
// 1   4   6   4   1   //这是杨辉三角
// 把它变形一下，变成下面这样】

//1
//11
//121
//1331
//14641
//这样变的目的是很好的存入二维数组，比如arr[0][0] = 1;arr[2][1] = arr[1][1] +arr[1][0] = 2
//并且有规律 - arr[i][0]和arr[i][i]都等于1
#include <stdio.h>
int main()
{
    //打印第n行数据
    int n;
    scanf("%d", &n);
    int arr[50][50];
    //填入1
    int i = 0;
    for (i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    //填入其他数据 - 从arr[2][1]开始 - 一行中的第一个元素和最后一个元素已经是1，不用填
    //前两行全是1，不用填
    for (i = 2; i < n; i++)
    {
        //i行有i+1个元素 - 注意i有第0行
        int j = 0;
        for (j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }

    //打印最后一行
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[n - 1][i]);
    }
    return 0;
}