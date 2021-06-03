// // 1.findSpy
// #include <stdio.h>
// int main()
// {
//     int arr[10] = {0};
//     int odd = 0;
//     int even = 0;
//     int *podd = &arr[0];
//     int *peven = &arr[0];
//     //读入
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (arr[i] % 2 == 0)
//         {
//             even++;
//             peven = &arr[i];
//         }
//         else
//         {
//             odd++;
//             podd = &arr[i];
//         }
//     }
//     if (even == 1)
//     {
//         printf("%d\n", *peven);
//     }
//     else
//     {
//         printf("%d\n", *podd);
//     }
//     return 0;
// }

// 2.fly very long
// #include <stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int tarr[100];
//     int num = 0;
//     while (n--)
//     {
//         scanf("%d", &tarr[num]);
//         num++;
//     }

//     int i = 0;
//     for (i = 0; i < num; i++)
//     {
//         long long s = 0;

//         int j = 1;
//         int k = 0;
//         for (j = 1, k = 0; k < tarr[i]; j += 2, k++)
//         {
//             s += j;
//         }
//         printf("%lld\n", s % 10000);
//     }
//     return 0;
// }

//字符串去重
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[100] = {0};
//     int len = 0;
//     while (scanf("%c", &arr[len]) != EOF)
//     {
//         len++;
//     }
//     int i = 0;
//     for (i = 0; i < len; i++)
//     {
//         char ch = arr[i];
//         int cnt = 0; //记录要去重的次数
//         int j = 0;
//         for (j = i + 1; j < len; j++)
//         {
//             if (arr[j] == ch)
//             {
//                 cnt++;
//             }

//             int j = 0;
//             for (j = 0; j < cnt; j++)
//             {
//                 int k = 0;
//                 for (k = i + 1; k < len; k++)
//                 {
//                     if (arr[k] == ch)
//                     {
//                         int l = 0;
//                         for (l = k; l < len; l++)
//                         {
//                             arr[l] = arr[l + 1];
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     for (i = 0; i < len; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// char a[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
// void f(int n)
// {
//     if (n == 1)
//     {
//         printf("%c", 'A');
//     }
//     else
//     {
//         f(n - 1);
//         printf("%c", a[n - 1]);
//         f(n - 1);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     f(n);
//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100][100] = {0};
//     int num = 0;
//     scanf(scanf("%s", str + num) != EOF)
//     {
//         num++;
//     }
//     qsort()
//     return 0;
// }
