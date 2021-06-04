// #include <stdio.h>
// int MyStrlen(char arr[])
// {
//     int cnt = 0;
//     char *p = arr;  //数组名arr是数组首元素地址
//     while (*p != 0) //当p不等于0时出循环
//     {
//         cnt++;
//         p++;
//     }
//     return cnt;
// }
// int main()
// {
//     char arr[20] = {"xiaowu"};
//     int str = MyStrlen(arr);

//     printf("%d\n", str);
//     return 0;
// }

// #include <stdio.h>
// int myStrlen(char *p)
// {
//     int count = 0; //开始假设字符串中字符数为0
//     while (*p != '\0')
//     {
//         count++; //p解应用得到的不是\0说明遇到了字符
//         p++;     //指针指向下一个元素
//     }
//     return count;
// }
// #include <stdio.h>
// int myStrlen(char *p)
// {
//     if (*p != '\0')
//     {

//         return myStrlen(++p) + 1; //如果不为\0则返回1+从下个字符开始的字符数
//     }
//     else
//     {
//         return 0; //如果*p == \0则返回0个字符
//     }
// }
// #include <stdio.h>
// int myStrlen(char *begin)
// {
//     //指针减指针得到的是相差的元素个数
//     //在例子中就是第一个元素和\0相差的个数,也就是字符个数
//     char *end = begin; //用end指针指到]\0
//     while (*end != '\0')
//     {
//         end++;
//     }
//     return end - begin;
// }
// int main()
// {
//     char arr[10] = "abcid";
//     int ret = myStrlen(arr); //函数作用为返回字符串字符个数
//     printf("%d\n", ret);
//     return 0;
// }

#include <stdio.h>
#include <assert.h>
int myStrlen(char *begin)
{
    //指针减指针得到的是相差的元素个数
    //在例子中就是第一个元素和\0相差的个数,也就是字符个数
    assert(begin != NULL);
    char *end = begin; //用end指针指到]\0
    while (*end != '\0')
    {
        end++;
    }
    return end - begin;
}
int main()
{
    char arr[10] = "abcid";
    int ret = myStrlen(arr); //函数作用为返回字符串字符个数
    printf("%d\n", ret);
    return 0;
}