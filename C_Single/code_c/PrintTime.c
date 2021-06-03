#include <stdio.h>
int main(void)
{
    int hour = 0, minute = 0;
    while (1)
    {
        printf("%d:%d\n", hour, minute);
        minute += 15;
        if (minute == 60)
        {
            minute = 0;
            hour++;
        }
        if (hour == 24)
        {
            break;
        }
    }

    return 0;
}