// #include <stdio.h>
// #include <string.h>
// int isHuiwen(char *begin, char *end)
// {
//     char arr1[100] = {0};
//     char arr2[100] = {0};
//     int i = 0;
//     char *p = NULL;
//     for (p = begin; p <= end; p++, i++)
//     {
//         arr1[i] = *p;
//     }
//     i = 0;
//     p--;
//     for (p = p; p >= begin; p--, i++)
//     {
//         arr2[i] = *p;
//     }
//     for (i = 0; i < strlen(arr1); i++)
//     {
//         if (arr1[i] != arr2[i])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     char arr[100] = {0};
//     scanf("%s", arr);
//     int ret = 0;
//     int max = 0;
//     int i = 0;
//     for (i = 0; i < strlen(arr); i++)
//     {

//         int j = 0;
//         for (j = i + 1; j < strlen(arr); j++)
//         {
//             if (isHuiwen(&arr[i], &arr[j]))
//             {
//                 if (j > max)
//                 {
//                     ret = j;
//                     max = j;
//                 }
//             }
//         }
//         j = i;
//         if (j != ret)
//         {
//             for (j = i; j <= ret; j++)
//             {
//                 printf("%c", arr[j]);
//             }
//             break;
//         }
//     }
// //     // int j = 0;
// //     // for (j = 1; i < strlen(arr); i++)
// //     // {
// //     //     if (isHuiwen(arr, &arr[i]))
// //     //     {
// //     //         if (i + 1 > max)
// //     //         {
// //     //             ret = i + 1;
// //     //             max = i + 1;
// //     //         }
// //     //     }
// //     // }

// //     // for (i = 0; i < ret; i++)
// //     // {
// //     //     printf("%c", arr[i]);
// //     // }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int ret[100] = {0};
//     int num = 0;
//     int i = 0;
//     scanf("%d", &num);
//     for (i = 0; i <= num; i++)
//     {
//         int tmp = i;
//         while (tmp> 0)
//         {
//             // printf("%d ", num & 1);
//             // num = num >> 1;
//             if (tmp& 1)
//             {
//                 ret[i]++;
//             }
//             tmp = tmp >> 1;
//         }
//     }
//     for (i = 0; i <= num; i++)
//     {
//         printf("%d ", ret[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[100];
//     int n;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// unsigned long long num[1000];
// int n;
// scanf("%d", &n);
// int i = 0;
// for (i = 0; i < n; i++)
// {
//     scanf("%llu", &num[i]);
// }
//     int count = 0;
//     for (i = n - 1; i >= 0; i--)
//     {
//         if (num[i] == 0)
//         {
//             ++count;
//         }
//         else
//         {
//             if (num[i] >= count)
//             {
//                 count = 0;
//             }
//             else
//             {
//                 count++;
//             }
//         }
//     }

//     if (count == 0)
//     {
//         printf("1\n");
//     }
//     else
//     {
//         printf("0\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int f(int nums[], int len)
// {
//     int n = 1;
//     int i;
//     for (i = len - 2; i >= 0; i--)
//     {
//         if (nums[i] >= n)
//         {
//             n = 1;
//         }
//         else
//         {
//             n++;
//         }
//         if (i == 0 && n > 1)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {

//     int nums[1000];
//     int n;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &nums[i]);
//     }
//     printf("%d", f(nums, n));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[200]; //-1代表关闭
//     int i = 0;
//     for (i = 0; i < 200; i++)
//     {
//         arr[i] = -1;
//     }
//     for (i = 0; i < n; i++)
//     {
//         int j;
//         for (j = 0; j + i < n-1; j++)
//         {
//             if (i == n - 1)
//             {
//                 arr[n - 1] = -arr[n - 1];
//                 break;
//             }
//             else
//             {
//                 arr[j + i] = -arr[j + i];
//             }
//         }
//     }
//     int cnt = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             cnt++;
//         }
//     }
//     printf("%d", cnt);
//     return 0;
// }



