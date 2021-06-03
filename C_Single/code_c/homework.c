// #include <stdio.h> //写一篇博客
// int cnt = 0;
// //换汽水，汽水两块钱一瓶，两个瓶盖可以换一瓶汽水
// int amount(int cnt)
// {
//     if (cnt == 2)
//     {
//         return 1;
//     }
//     else if (cnt < 2)
//     {
//         return 0;
//     }
//     else
//     {
//         return cnt / 2 + amount(cnt / 2 + cnt % 2);
//     }
// }
// int main()
// {
//     int money;
//     scanf("%d", &money);
//     cnt = money;             //cnt代表空瓶数
//     cnt = cnt + amount(cnt); //amount用于返回这么多数量的空瓶能得到多少瓶汽水
//     printf("%d\n", cnt);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// double f(double x, int n)
// {
//     if (n == 1) //一层根号直接开平方
//     {
//         return sqrt(x);
//     }
//     else if (n == 0) //0层根号就是它本身
//     {
//         return x;
//     }
//     else
//     {
//         return sqrt(x + f(x, n - 1));
//     }
// }
// int main()
// {
//     double x;
//     int n;
//     scanf("%lf %d", &x, &n);
//     double ret = f(x, n); //函数目的是返回x的n层嵌套根号值
//     printf("%lf", ret);
//     return 0;
// }

//逆序输出
// #include <stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int arr[50] = {0};
//     int num = 0;
//     while (n > 0)
//     {
//         double x = 0.0;
//         int digit = 0;
//         scanf("%lf %d", &x, &digit);
//         while (digit > 0)
//         {
//             x *= 10;
//             digit--;
//         }
//         arr[num] = (int)x % 10;
//         num++;
//         n--;
//     }
//     int j = 0;
//     for (j = 0; j < num; j++)
//     {
//         printf("%d\n", arr[j]);
//     }

//     return 0;
// }

//大数版本3的倍数
// #include <stdio.h>
// int main()
// {
//     char arr[300] = {0};
//     //读入数组
//     int num = 0;
//     while (scanf("%c", &arr[num]), arr[num] != '\n')
//     {
//         num++;
//     }
//     int ret = 0;
//     int i = 0;
//     for (i = 0; i < num; i++)
//     {
//         ret = ret + arr[i] - '0';
//     }
//     if (ret % 3 == 0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     while (num % 10 == 0)
//     {
//         num /= 10;
//     }
//     while (num > 0)
//     {
//         printf("%d", num % 10);
//         num /= 10;
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int arr[20] = {0};
//     int num = 0;
//     while (n > 0)
//     {
//         double x;
//         int t; //小数点位数
//         scanf("%lf%d", &x, &t);
//         while (t > 0)
//         {
//             x *= 10;
//             t--;
//         }
//         int ret = (int)x % 10;
//         arr[num] = ret;
//         num++;
//         n--;
//     }

//     int i = 0;
//     for(i = 0;i<num;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char ch;
//     int t, i, n, len;
//     char str[115];
//     scanf("%d", &t);
//     ch = getchar();
//     while (t--)
//     {
//         scanf("%s%d", &str, &n);
//         len = strlen(str);
//         for (i = 0; str[i] != '\0'; i++)
//         {
//             if (str[i] == '.' && i + n <= len - 1)
//             {
//                 printf("%c\n", str[i + n]);
//                 break;
//             }
//             else if (str[i] == '.' && i + n > len - 1)
//             {
//                 printf("0");
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[100] = {0};
//     //输入数据 按下回车，再按ctrl+z后按下回车取消输入
//     int count = 0;
//     while (scanf("%d", &arr[count]) != 0)
//     {
//         count++;
//     }
//     int i = 0;
//     for (i = 0; i < count; i++)
//     {
//         if (arr[i] % 3 == 0)
//         {
//             printf("YES\n");
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }
//     return 0;
// }

//debug