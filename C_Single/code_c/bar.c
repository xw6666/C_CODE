#include <stdio.h>
int main()
{
    //先读取行列，n行n列
    int n;
    scanf("%d", &n);
    int arr[100][100];
    //用循环把数据读入数组
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            //读入
            scanf("%d", &arr[i][j]);
        }
    }
    //求值
    // 主对角线从arr[0][0]开始一直到arr[n-1][n-1];
    int ret = 0;
    for (i = 0, j = 0; i <= n - 1; i++, j++)
    {
        ret += arr[i][j];
    }
    //输出结果
    printf("%d\n", ret);
    return 0;
}