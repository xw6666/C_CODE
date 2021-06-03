// //拷贝字符串,包括'\0'
// #include <stdio.h>
// #include <string.h>
// #include <assert.h>
// char *myStrcpy(char *dest, const char *rsc)
// {
//     assert(dest != NULL);
//     char *ret = dest;
//     while (*dest++ = *rsc++)
//     {
//         ;
//     }
//     return ret;
// }
// int main()
// {
//     char arr[] = "xiaowuniubi";
//     char arr1[] = "abcd";
//     // int count = strlen(arr);
//     char *parr = myStrcpy(arr, arr1);
//     printf("%s\n",arr);//打印拷贝后的
//     printf("%s",parr);
//     return 0;
// }
//实现strncpy
#include <stdio.h>
#include <assert.h>
char *myStrncpy(char *dest, const char *rsc, int n)
{
    assert(dest != NULL);
    assert(rsc != NULL);
    char *ret = dest;
    //找到追加点
    while (*dest != '\0')
    {
        dest++;
    }
    //求字符串长度
    int len = 0;
    char *cnt = rsc;
    while (*cnt != '\0')
    {
        len++;
        cnt++;
    }
    //追加
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (i <= len)
        {
            *dest = *rsc;
            rsc++;
            dest++;
        }
        else
        {
            *dest = '\0';
            dest++;
        }
    }
    return ret;
}
int main()
{
    char arr[10] = "abcdef";
    char arr1[10] = "xiao";
    int n = 5;
    myStrncpy(arr, arr1, n);
    printf("%s",arr);
    return 0;
}