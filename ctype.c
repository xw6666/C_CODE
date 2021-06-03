//这里我测试一些ctype.h中的函数
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    //这些都是字符函数，不是字符串 函数
    //isspace判断是否为空格字符
    //isalnum判断是否为数字或者字母
    //tolower小写转大写
    //toupper大写转小写
    // char ch = 'w';
    // int ret1 = islower(ch);
    // printf("%d\n", ret1);
    // int ret2 = isupper(ch);
    // printf("%d\n", ret2);
    // int ret3 = isalpha(ch);
    // printf("%d\n", ret3);
    // char ch = 'q';
    // printf("%c\n",toupper(ch));

    //把字符串大写字符全部改为小写字母
    char arr[] = "I Am A IronMan";
    // int i = 0;
    // while (arr[i] != '\0')
    // {
    //     if (isupper(arr[i]))
    //     {
    //         arr[i] = tolower(arr[i]);
    //     }
    //     printf("%c", arr[i]);
    //     i++;
    // }
    // int i = 0;
    // for (i = 0; i < strlen(arr); i++)
    // {
    //     printf("%c", tolower(arr[i]));
    // }
    // return 0;
}