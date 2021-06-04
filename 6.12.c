// #include <stdio.h>
// int main(void)
// {
//     int n;
//     do
//     {
//         scanf("%d", &n);
//         int i;
//         double sum = 0.0;

//         for (i = 1; i <= n; i++)
//         {
//             if (i % 2 == 1)
//             {
//                 sum += 1.0 / i;
//             }
//             else
//             {
//                 sum += 1.0 / (-i);
//             }
//         }
//         printf("%lf", sum);
//     } while (n > 0);

//     return 0;
// }
// #include <stdio.h>
// float price(float payment)
// {
//     float c = payment / 100;
//     if (c >= 10)
//     {
//         return payment - 0.15 * payment;
//     }
//     else if (c >= 5)
//     {
//         return payment - 0.1 * payment;
//     }
//     else if (c >= 2)
//     {
//         return payment - 0.08 * payment;
//     }
//     else if (c >= 1)
//     {
//         return payment - 0.05 * payment;
//     }
//     else
//     {
//         return payment;
//     }
// }
// int main()
// {
//     printf("Input payment:");
//     float payment;
//     scanf("%f", &payment);
//     float price1 = price(payment);
//     printf("price = %.1f\n", price1);
//     return 0;
// }
//逆序打印字符串
// #include <stdio.h>
// #include <string.h>
// void back(char *left)//逆序不需要用两个数组简单排序，可以用前后元素交换的方式，通过指针实现
// {
//     char *right = left + strlen(left) - 1;//right指向的是left加上长度减一
//     while (left < right)//当小于right的时候进入循环，假设是奇数个字符，则最后到中间left等于fight
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     char arr[100];
//     gets(arr);//输入输出字符串可以用gets/puts函数，这样可以读取字符串中的空格
//                 //如果用scanf函数则碰到第一个空格的时候相等于识别到了\0停止输入
//     back(arr);
//     puts(arr);

//     return 0;
// }