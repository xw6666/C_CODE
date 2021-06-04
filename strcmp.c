//测试memcmp函数和实现memcmp函数
#include <stdio.h>
#include <assert.h>
#include <string.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};    //01 00 00 00 02 00 00 00 03 00 00 00...
    int arr2[] = {1, 2, 5, 4, 3};    //01 00 00 00 02 00 00 00 05 00 00 00...
    int ret = memcmp(arr1, arr2, 9); //8个字节前内存完全相同，返回0，99个字节03<05，返回-1
    printf("%d\n", ret);
    return 0;
}