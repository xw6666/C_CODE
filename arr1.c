// #include <stdio.h>
// void enter1(int arr[], int n)
// {
//     int i = 0;
//     for (i = 0; n > 0; i++, n--)
//     {
//         scanf("%d", &arr[i]);
//     }
// }
// void bubbleSort(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n - 1; i++)
//     {
//         int j;
//         for (j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int cup = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = cup;
//             }
//         }
//     }
// }
// double aver(int arr[], int n)
// {
//     double sum = 0.0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum / n;
// }
// double median(int arr[], int n)
// {
//     if (n % 2 == 0)
//     {
//         return (arr[n / 2] + arr[n / 2 - 1]) / 2.0
//     }
// }
// int mode(int arr[], int n)
// {
// }
// int main()
// {
//     int arr[100];
//     int n;
//     scanf("%d", &n);
//     enter1(arr, n);
//     // int i = 0;
//     // while (n > 0) //存入每个元素
//     // {
//     //     scanf("%d", &arr[i]);
//     //     i++;
//     //     n--;
//     // }
//     bubbleSort(arr, n);
//     // for (int i; i < n; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     double ave = aver(arr, n);
//     double media = median(arr, n);
//     int mode1 = mode(arr, n);
//     return 0;
// }
#include <stdio.h>
// void print1(int arr[][4], int row, int col)
// {
//     int i, j;
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// void print2(int (*p)[4], int row, int col)
// {
//     int i, j;
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             printf("%d ", *(*(p + i) + j));
//             printf("%d ", (*(p + i))[j]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int arr[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {5, 3, 6, 4}};
//     // print1(arr, 3, 4);
//     print2(arr, 3, 4);
//     return 0;
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     // int *p = arr;
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", *(arr + i));
//     }
//     return 0;
// }