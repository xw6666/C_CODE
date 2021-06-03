#include <stdio.h>
#include <string.h>
int main()
{
    //点分十进制
    char str[] = "123@234.@234";
    //strtok函数可以去掉字符
    //参数是两个字符指针，返回一个字符指针
    //第一个参数指向字符串，第二个参数是要去除的字符
    //一次只会去除一个字符，返回切割出来的首元素地址

    char *p = ".";
    char *ret = NULL;
    for (ret = strtok(str, p); ret != NULL; ret = strtok(NULL, p))
    {
        printf("%s ", ret);
    }

    return 0;
}