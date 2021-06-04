

// 重写一遍kmp
#include <stdio.h>
#include <string.h>
void InitNext(int *next, char *str2)
{
    next[0] = 0;
    int i = 0;
    int j = 1;
    while (j < strlen(str2))
    {
        if (str2[i] == str2[j])
        {
            next[j] = next[j - 1] + 1;
            i++;
            j++;
        }
        else
        {
            while (str2[i] != str2[j] && i != 0)
            {
                i = next[i - 1];
                if (str2[i] == str2[j])
                {
                    //处理
                    next[j] = next[i] + 1;
                    i++;
                    j++;
                    break;
                }
            }
            if (i == 0)
            {
                next[j] = 0;
                j++;
            }
        }
    }
}
void kmp(char *str1, char *str2) //st2代表模式串
{
    int i = 0;
    int j = 0;
    int next[100] = {0};
    InitNext(next, str2);
    while (i < strlen(str1))
    {
        //当主串没走完都要一直匹配
        if (str1[i] == str2[j])
        {
            i++;
            j++;
        }
        else
        {
            //如果不想等，当j为0的时候只要i动，j不为0的时候回溯
            if (j == 0)
            {
                i++;
            }
            else
            {
                //把j传送到next[j-1]
                j = next[j - 1];
            }
        }

        if (j == strlen(str2) && j != 0)
        {
            printf("找到了");
            break;
        }
    }
    if (i >= strlen(str1) && j != strlen(str2))
    {
        printf("没找到");
    }
}
int main()
{
    char str1[] = "bcxabcdabxabcdabcdabccy";
    char str2[] = "";
    kmp(str1, str2);
    return 0;
}