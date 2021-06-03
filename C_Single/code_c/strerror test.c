//strerror() - 错误 报告函数
//把错误码翻译成错误信息
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
    //No error
    // char *str = strerror(0);
    //Operation not permitted
    // char *str = strerror(1);
    // No such file or directory
    // char *str = strerror(2);
    //errno 是一个全局的错误码变量
    //当c语言的库函数在执行过程中发生了错误，就会把对应的错误码赋值到errno中
    //char *str = strerror(errno);

    //举个例子
    //打开文件
    FILE *pf = fopen("test.txt", "r");
    if (pf == NULL)
    {
        printf("%s\n", strerror(errno));
    }
    else
    {
        printf("Open file success\n");
    }
    return 0;
}