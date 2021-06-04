//memset(地址，想放进去的东西，字节数)
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[10] = {0};
    memset(arr, '*', 10);
    for (int i; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}