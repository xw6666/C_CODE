#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    printf("请输入一个单词：");
    scanf("%s", ch);
    int i = strlen(ch);

    for (i = i; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }

    return 0;
}