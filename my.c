#include <stdio.h>
int myStrlen(char arr[])
{
    if (arr[0] == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + myStrlen(++arr);
    }
}
int main()
{
    char arr[] = "abcvgvdef";
    printf("%d", myStrlen(arr));
    return 0;
}