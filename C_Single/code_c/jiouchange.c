#include <stdio.h>
//把数组奇数放一边偶数放一边输出
//辣鸡版简单排序
// int move1(int arr[], int arr1[], int sz)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < sz; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             arr1[j] = arr[i];
//             j++;
//         }
//     }
//     return j;
// }
// int move2(int arr[], int arr1[], int sz)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < sz; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             arr1[j] = arr[i];
//             j++;
//         }
//     }
//     return j;
// }
// void print(int *arr, int sz)
// {
//     int i;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", *(arr + i));
//     }
// }
// int main(void)
// {
//     int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//     int arr1[100];
//     int arr2[100];
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int sz1 = move1(arr, arr1, sz);
//     int sz2 = move2(arr, arr2, sz);
//     print(arr1, sz1);
//     print(arr2, sz2);
//     return 0;
// }
void move(int arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left < right)
    {
        //找偶数
        while ((left < right) && (arr[left] % 2 == 1)) //时刻加上限定条件left<right
        {
            left++;
        }
        //找奇数
        while ((left < right) && (arr[right] % 2 == 0))
        {
            right--;
        }
        //交换
        if (left < right)
        {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
    }
}
void print(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int sz = sizeof(arr) / sizeof(arr[0]);
    int sz;
    scanf("%d", &sz);
    int arr[100] = {0};
    int i;
    for (i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    move(arr, sz);
    print(arr, sz);
    return 0;
}