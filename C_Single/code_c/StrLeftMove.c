//实现一个函数，可以左移字符串中的k个字符
// #include <stdio.h>
// #include <string.h>
// void leftMove(char *arr, int k);
// int main()
// {
//     char arr[] = "abcdef";
//     int k = 0;
//     scanf("%d", &k);
//     leftMove(arr, k);
//     printf("%s\n", arr);
//     return 0;
// }
// void leftMove(char *arr, int k)
// {
//     //把第一个元素储存在临时变量
//     //后面的每个元素移位
//     //把第一个元素放在原来最后一个元素的位置上
//     //该过程重复k次
//     int sz = strlen(arr);
//     int i = 0;
//     for (i = 0; i < k; i++)
//     {
//         //储存
//         char tmp = *arr;
//         //移位
//         int j = 0;
//         for (j = 0; j < sz - 1; j++)
//         {
//             *(arr + j) = *(arr + j + 1);
//         }
//         //赋值
//         *(arr + sz - 1) = tmp;
//     }
// }

//StrRightMOve
// #include <stdio.h>
// #include <string.h>
// void rightMove(char *arr, int k)
// {
//     //把最后一个字符储存在临时变量内
//     //右移每一位字符
//     //将临时变量放入首元素位置
//     //该过程重复k次
//     int len = strlen(arr);
//     int i = 0;
//     for (i = 0; i < k; i++)
//     {
//         //储存
//         char tmp = *(arr + len - 1);
//         //移位
//         int j = 0;
//         for (j = 0; j < len - 1; j++)
//         {
//             *(arr + len - 1 - j) = *(arr + len - 2 - j);
//         }
//         //放入
//         *arr = tmp;
//     }
// }
// int main()
// {
//     char arr[] = "abcdefg";
//     int k = 0;
//     scanf("%d", &k);
//     rightMove(arr, k);
//     printf("%s", arr);
//     return 0;
// }

//判断字符串是否通过移动得到
//把主字符串复制一遍，判断另一个字符串是不是它的子串
// #include <stdio.h>
// #include <string.h>
// int isLeftMove(char *str1, char *str2)
// {
//     int len1 = strlen(str1);
//     int len2 = strlen(str2);
//     if (len1 != len2)
//     {
//         return 0;
//     }
//     //叠加
//     strncat(str1, str1, len1);
//     char *ret = strstr(str1, str2);
//     if (ret == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }
// int main()
// {
//     char arr[20] = "abcdefg";
//     char arr1[] = "abefgab";
//     if (isLeftMove(arr, arr1))
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

//直观方法解决判断字符串是否通过左移得到
//把字符串每次左移1位以后判断是否与另一个字符串相等
//该过程重复位数-1次
#include <stdio.h>
int isLeftMove(char *str1,char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1!=len2)
    {
        return 0;
    }
    int i = 0;
    for(i = 0;i<len1-1;i++)
    {
        //左移
    }
}
int main()
{
    char arr[] = "abcdef";
    char arr1[] = "cdefab";
    isLeftMove(arr,arr1);
    return 0;
}