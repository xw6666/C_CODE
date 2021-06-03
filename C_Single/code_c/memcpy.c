//memcpy函数能拷贝各种类型的变量
//演示
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[5] = {0};
//     memcpy(arr2, arr1, sizeof(arr1));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", *(arr2 + i));
//     }
// }

//实现
#include <stdio.h>
#include <assert.h>
#include <string.h>
void *myMemcpy(void *dest, const void *rsc, unsigned int num)
{
    assert(dest != NULL);
    assert(rsc != NULL);
    char *pdest = (char *)dest;
    char *prsc = (char *)rsc;
    int i = 0;
    for (i = 0; i < num; i++)
    {
        *pdest++ = *prsc++;
    }
    return dest;
}
// struct stu
// {
//     char name[20];
//     int age;
// };
// int main()
// {
//     // int arr1[] = {1, 2, 3, 4, 5};
//     // int arr2[5] = {0};
//     // myMemcpy(arr2, arr1, sizeof(arr1));
//     // int sz = sizeof(arr2) / sizeof(arr2[0]);
//     // int i = 0;
//     // for (i = 0; i < sz; i++)
//     // {
//     //     printf("%d ", arr2[i]);
//     // }
//     struct stu s1[] = {{"张三", 20}, {"李四", 21}};
//     struct stu s2[2] = {0};
//     myMemcpy(s2, s1, sizeof(s1));
//     printf("%s", s2);
//     return 0;
// }

//memmove函数用来处理重叠拷贝
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int i = 0;
//     memmove(arr + 2, arr, 16);
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

//c语言标准
//memcpy只要处理不重复内存的拷贝
//memmove处理重复内存和不重复内存的拷贝

//memmove实现

void *myMemmove(void *dest, void *rsc, unsigned num)
{
    assert(dest != NULL);
    assert(rsc != NULL);
    char *pdest = (char *)dest;
    char *prsc = (char *)rsc;
    int i = 0;
    if (dest > rsc)
    {
        //向后拷贝
        pdest += num - 1;
        prsc += num - 1;
        for (i = 0; i < num; i++)
        {
            *pdest-- = *prsc--;
        }
    }
    else
    {
        //向前拷贝
        for (i = 0; i < num; i++)
        {
            *pdest++ = *prsc++;
        }
    }
    return dest;
}
//test
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // myMemmove(arr + 2, arr, 16); //向后拷贝
    // myMemmove(arr, arr + 2, 16); //向前拷贝

    //测试是否能不同数组拷贝
    int arr1[] = {4, 3, 2, 1};
    myMemmove(arr, arr1, 16);
    int i = 0;
    for (i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}