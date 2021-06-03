#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')

    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
//ch = getchar();
        scanf("%c", &ch);
    }
    putchar(ch);

    return 0;
}