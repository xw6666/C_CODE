#include <stdio.h>
void Input(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int GetMin(int arr[], int sz)
{
    //假设首元素就是最小的，只要有更小的就把更小的那个视为最小值，遍历数组
    int MinArr = arr[0]; //MinArr表示最小数组元素
    int MinIndex = 0;    //MinIndex表示最小数组元素的下标
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        //比较
        if (arr[i] < MinArr)
        {
            //如果更小，则记录元素和下标
            MinArr = arr[i];
            MinIndex = i;
        }
    }
    return MinIndex; //返回最小数组元素的下标
}
int GetMax(int arr[], int sz)
{
    //假设首元素就是最大的，只要有更大的就把更大的那个视为最大值，遍历数组
    int MaxArr = arr[0]; //MinArr表示最大数组元素
    int MaxIndex = 0;    //MinIndex表示最大数组元素的下标
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        //比较
        if (arr[i] > MaxArr)
        {
            //如果更大，则记录元素和下标
            MaxArr = arr[i];
            MaxIndex = i;
        }
    }
    return MaxIndex; //返回最大数组元素的下标
}
void change(int arr[], int MinIndex, int MaxIndex)
{
    int tmp = arr[MaxIndex];
    arr[MaxIndex] = arr[MinIndex];
    arr[MinIndex] = tmp;
}
void print(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int sz = 0;
    scanf("%d", &sz); //输入数组的元素个数
    int arr[100];
    Input(arr, sz);                 //输入数组
    int MinIndex = GetMin(arr, sz); //GetMax()用于传回数组中最大元素下标
    int MaxIndex = GetMax(arr, sz);
    change(arr, MinIndex, MaxIndex);
    print(arr, sz); //打印数组元素
    return 0;
}