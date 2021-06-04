/* #include <stdio.h>
void bubble_sort(int arr[], int sz); //函数传递数组只是传递它的首元素地址，所以要把sz传进去
int main(void)
{
    int arr[] = {1, 6, 8345, 7532, 65783234, 3};
    int sz = sizeof(arr) / sizeof(arr[0]); //sz表示数组元素的个数
    bubble_sort(arr, sz);
    int i;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void bubble_sort(int arr[], int sz) //若此处没有传入sz，则函数中计算出的sz会等于1
{
    int i;
    for (i = 0; i < sz - 1; i++) //n个元素要排序最多只需要n-1趟
    {
        int j;
        int flag = 1;                    //flag假设此序列已经有序
        for (j = 0; j < sz - 1 - i; j++) //每趟会生成一个排好的数，故sz-1-i
        {
            if (arr[j] > arr[j + 1])
            {
                int cup = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = cup;
                flag = 0; //进入if说明序列需要排序，故让flag=0；
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
} */
#include <stdio.h>
void bubbleSort(int arr[], int sz)
{
    int i;

    for (i = 0; i < sz - 1; i++)
    {
        int flag = 1;
        int j;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int cup = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = cup;
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}

int main(void)
{
    int arr[10] = {1, 2, 29, 57, 4, 25, 488, 46, 3, 111};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, sz);
    int *p = arr;
    int i;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}