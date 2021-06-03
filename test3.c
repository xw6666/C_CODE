#include <stdio.h>
int GetMin(int arr[], int n)
{
    int ar = 0; //用ar存数组下标
    //先假设最小元素是arr[0]
    int min = arr[0];
    int i;
    for (i = 0; i < n; i++) //
    {
        //如果数组下标为i的元素更小，则把这个元素看作最小的，记录它的下标
        if (min > arr[i])
        {
            ar = i;
        }
    }
    return ar; //返回数组下标
}
int GetMax(int arr[], int n)
{
    //思路和上面的函数差不多，就是找最大元素的下标返回
    int ar = 0;
    int max = arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            ar = i;
        }
    }
    return ar;
}
int main()
{
    int arr[100];
    int n;
    scanf("%d", &n); //n表示要输入几个数字
    //将n个数存入数组中
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    int min = GetMin(arr, n); //GetMin()返回最小元素的数组下标
    int max = GetMax(arr, n); //GetMax()返回最大元素数组的下标
    //交换数组最大最小元素
    int tmp = arr[min]; //用临时变量暂时存最小元素
    arr[min] = arr[max];
    arr[max] = tmp;
    //输出数组
    int j;
    for (j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
//注意这里不能走一趟冒牌排序的规则，因为如果一开始第一个元素更小，后面两两比较出来的右边值一定比第一个元素大
//应该假设第一个元素为最小元素并记录其下标，然后往右对比，有碰到更小的就记录下来