#include <stdio.h>
void pyramid(int range);
int main(void)
{
    int n;
    scanf("%d", &n);
    pyramid(n);

    return 0;
}

void pyramid(int range)
{
    int a, b, c;
    int range1 = range;
    int i = 1;
    for (a = 0; a < range; a++)
    {
        for (b = 0; b < range1 - 1; b++)
        {
            printf(" ");
        }
        range1--;
        for (c = 0; c < i; c++)
        {
            printf("* ");
        }
        i++;
        printf("\n");
    }
}
