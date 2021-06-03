//杨氏矩阵 每行元素不断增大 每列元素不断增大
//要求在给定矩阵中找一个数字
#include <stdio.h>
int findNum(int arr[3][3], int k, int *px, int *py)
{
    //从矩阵的左下角元素开始找
    //如果元素比k大，则划掉一行，如果元素比k小，则划掉一列
    //循环一直到右上角元素的下标
    // int x = row - 1;
    // int y = 0;
    // while (x >= 0 && y <= 2)
    // {
    //     if (arr[x][y] > k)
    //     {
    //         x--;
    //     }
    //     else if (arr[x][y] < k)
    //     {
    //         y++;
    //     }
    //     else
    //     {
    //         return 1;
    //     }
    // }
    // return 0;
    //从矩阵的右上角元素开始找
    //如果元素比k大，则划掉一列，如果元素比k小，则划掉一行
    //循环一直到左下角元素的下标
    int x = 0;
    int y = *py - 1;
    while (x <= *px - 1 && y >= 0)
    {
        if (arr[x][y] > k)
        {
            y--;
        }
        else if (arr[x][y] < k)
        {
            x++;
        }
        else
        {
            *px = x;
            *py = y;
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {2, 3, 6}, {9, 29, 99}};
    int k = 0;
    scanf("%d", &k);
    int x = 3;
    int y = 3;
    //返回型参数
    int ret = findNum(arr, k, &x, &y);
    if (ret == 1)
    {
        printf("找到了\n");
        printf("数组下标为%d,%d", x, y);
    }
    else
    {
        printf("没找到\n");
    }
    return 0;
}