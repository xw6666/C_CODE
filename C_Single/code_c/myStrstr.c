#include <stdio.h>
#include <assert.h>
char *myStrstr(char *p1, char *p2)
{
    assert(p1 != NULL);
    char *s1 = p1;
    char *s2 = p2;
    char *cur = p1;
    //如果p1是空字符串直接返回
    if (!*p2)
    {
        return p1;
    }
    //当p1不为'\0'时进循环
    while (*cur)
    {
        s1 = cur;
        s2 = p2;
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return cur;
        }
        cur++;
    }
    return NULL;
}
int main()
{
    char *str1 = "abbbdbbc";
    char *str2 = "abb";
    if (myStrstr(str1, str2) == NULL)
    {
        printf("不是\n");
    }
    else
    {
        printf("是\n");
    }
    return 0;
}