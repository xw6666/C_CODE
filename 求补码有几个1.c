#include <stdio.h>
int main(void)
{
    int num = 0;
    int count = 0;
    scanf("%d", &num);
    int i = 1;

    for (i = 0; i < 32; i++)
    {
        count >> i;
        if (num & 1 == 1)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}