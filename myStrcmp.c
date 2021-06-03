//模拟实现vs和linux环境下的strcmp()
#include <stdio.h>
#include <assert.h>
//vs下
// int myStrcmp(const char *str1, const char *str2)
// {
//     assert(str1 != NULL);
//     assert(str2 != NULL);
//     while (*str1 == *str2)
//     {
//         //相等
//         if (*str1 == '\0')
//         {
//             return 0;
//         }
//         str1++;
//         str2++;
//     }
//     //比较
//     if (*str1 > *str2)
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }
//linux下
int myStrcmp(const char *str1, const char *str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);
    while (*str1 == *str2)
    {
        //相等
        if (*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    //比较
    return *str1 - *str2;
}
int main()
{
    char *p1 = "abcde";
    char *p2 = "abcdee";
    int ret = myStrcmp(p1, p2);
    printf("%d", ret);
    return 0;
}