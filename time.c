#include <stdio.h>
int main(void)
{
    int hour1, minute1;
    int hour2, minute2;
    int hour, minute;
    printf("Input time one(hour, minute):");
    scanf("%d,%d", &hour1, &minute1);
    //printf("\n");
    printf("Input time two(hour, minute):");
    scanf("%d,%d", &hour2, &minute2);
    if (hour1 > hour2)
    {
        if (minute1 - minute2 < 0)
        {
            minute = minute1 + 60 - minute2;
            hour = hour1 - 1 - hour2;
        }
        else
        {
            minute = minute1 - minute2;
            hour = hour1 - hour2;
        }
    }
    else
    {
        if (minute2 - minute1 < 0)
        {
            minute = minute2 + 60 - minute1;
            hour = hour2 - 1 - hour1;
        }
        else
        {
            minute = minute2 - minute1;
            hour = hour2 - hour1;
        }
    }
    printf("%d hour %d minute", hour, minute);
    return 0;
}