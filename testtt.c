
// #include <stdio.h>
// int main()
// {
//     //整型提升，有符号按符号位提升，无符号补0,，计算完截断
//     unsigned char a = 100;
//     unsigned char b = 200;
//     unsigned char c = a + b;
//     printf("%d %d", a + b, c);
//     return 0;
// }
//00000000000000000000000011001000
//00000000000000000000000001100100
//00000000000000000000000100101100

// #include <stdio.h>
// int main()
// {
//     int arr[100] = {0};
//     //输入数据 按下回车，再按ctrl+z后按下回车取消输入
//     int count = 0;
//     while (scanf("%d", &arr[count]) != EOF)
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

// 陈yz的问题
// #include <stdio.h>
// #include <math.h>
// //这个数乘以10的几次方的个位数
// int main()
// {
//     int arr[6], i = 0, t, n, j, m; //t:输入的数 几行,x:每次输入的数,n:是小数点后第几位
//                                    //i:保留下标 0 1 2 3 ;
//     scanf("%d", &t);
//     j = t; //j用来保留起始t值
//     while (t > 0)
//     {
//         double x;
//         double k;               //x是每次输入的数
//         scanf("%lf%d", &x, &n); //x是小数所以要用浮点型
//         //arr[]来存数（结果）
//         k = x * pow(10, n);
//         m = (int)k;
//         arr[i] = m % 10;
//         i++;
//         t--;
//     }
//     for (i = 0; i < j; i++)
//     {
//         printf("%d\n", arr[i]); //输出每次的结果
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char arr[50];
//     char ret[50] = {0};
//     int j = 0;
//     while (n--)
//     {
//         int x = 0;
//         scanf("%s", arr);
//         scanf("%d", &x);
//         int i = 0;
//         for (i = 0; i < strlen(arr); i++)
//         {
//             if (arr[i] == '.')
//             {
//                 break;
//             }
//         }
//         ret[j] = arr[i + x];
//         j++;
//     }
//     //打印结果
//     int i = 0;
//     for (i = 0; i < j; i++)
//     {
//         printf("%c\n", ret[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int comb(int m, int k); //定义函数
// double Fact(int n);
// long long Facttwo(int n);
// int main()
// {
//     int m, k;
//     do
//     {
//         printf("Please input m,k(m>=k>0):"); //去除非法因素
//         scanf("%d,%d", &m, &k);
//     } while (m <= 0 || k <= 0 || m < k);
//     printf("%d\n", comb(m, k));
//     return 0;
// }
// int comb(int m, int k)
// {
//     return Fact(m) / (Fact(k) * Fact(m - k));
// }
// double Fact(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     int i;
//     double result = 1;
//     for (i = 2; i <= n; i++)
//     {
//         result *= i;
//     }
//     return result;
// #include <stdbool.h>
// #include <stdio.h>
// bool checkZeroOnes(char *s)
// {
//     int oneCount = 0;
//     int zeroCount = 0;
//     int i = 0;
//     while (s[i] != '\0')
//     {
//         if (s[i] == '1')
//         {
//             oneCount++;
//         }
//         else
//         {
//             zeroCount++;
//         }
//         i++;
//     }
//     return (oneCount > zeroCount ? true : false);
// }

// int main()
// {
//     char s[] = "011000111";
//     // checkZeroOnes(s);

//     printf("%d",checkZeroOnes(s));
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[200], b[200];
//     scanf("%s", a);
//     int i, j, len;
//     j = 0;
//     len = strlen(a);
//     for (i = 0; i < len; i++)
//     {
//         if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
//         {
//             b[j] = a[i];
//             j++;
//         }
//     }
//     b[j] = '\0';
//     // puts(b);
//     for (int i = 0; i < strlen(b); i++)
//     {
//         printf("%c", b[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int s2 = 0; //乌龟的路程
    int s1 = 0; //兔子的路程
    int v1 = 0; //兔子的速度
    int v2 = 0; //乌龟的速度
    int time = 0;
    int t = 0;
    int s = 0;
    int l = 0;
    scanf("%d%d%d%d%d", &v1, &v2, &t, &s, &l);
    //当没到终点进循环
    while (s1 < l && s2 < l)
    {
        //如果距离差距大于等于t
        if (s1 - s2 >= t)
        {
            //用s的值做循环，保证每一次循环t加1
            int temp = s;
            while (temp--)
            {
                s2 = s2 + v2;
                time++;
                if (s2 >= l)
                {
                    break;
                }
            }
        }
        else
        {
            s1 = s1 + v1;
            s2 = s2 + v2;
            time++;
        }
    }
    if (s2 > s1)
    {
        printf("T\n");
    }
    else if (s2 < s1)
    {
        printf("R\n");
    }
    else
    {
        printf("D\n");
    }
    printf("%d\n", s2/v2);
    return 0;
}