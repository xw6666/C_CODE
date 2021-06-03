#include <stdio.h>
#include <string.h>
int main(void)
{
    char xw[99];
    char xw_1[99];
    while (1)
    {
        scanf("%s", &xw);
        scanf("%s", &xw_1);
        int i;
        int is = 1;

        for (i = 0; i < strlen(xw); i++)
        {
            if (xw[i] > xw_1[i])
            {
                xw_1[i] += 32;
            }
            else if (xw[i] < xw_1[i])
            {
                xw_1[i] += 32;
            }
            if (xw[i] != xw_1[i])
            {
                printf("NO\n");
                is = 0;
                break;
            }
        }
        if (is == 1)
        {
            printf("YES\n");
        }
    }

    return 0;
}