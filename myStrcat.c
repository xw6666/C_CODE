//模拟实现strcat函数
//函数作用为把字符串追加到另一个字符串后面
#include <stdio.h>
#include <assert.h>
char *myStrcat(char *dest, const char *rsc)
{
    assert(dest != NULL);
    assert(rsc != NULL);
    char *ret = dest;
    //找到目的地字符串的结尾处
    while (*dest != '\0')
    {
        dest++;
    }
    //追加
    while (*dest++ = *rsc++)
    {
        ;
    }
    return ret;
}
int main()
{
    char arr[20] = "xiaowu";
    char arr1[] = "niubi";
    myStrcat(arr, arr1);
    printf("%s\n", arr);
    // printf("%s\n", myStrcat(arr, arr1));
    return 0;
}