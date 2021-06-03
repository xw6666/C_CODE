//实现一个统计整数中指定数字的个数的简单函数。
//其中number是不超过长整型的整数，digit为[0, 9]区间内的整数。函数CountDigit应返回number中digit出现的次数。
#include <stdio.h>

int CountDigit(int number, int digit);

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit(int number, int digit)
{
    int cnt = 0;
    if (number < 0)
    {
        number = -number;
    }
    while (number > 0)
    {
        if (number % 10 == digit)
        {
            cnt += 1;
        }
        number /= 10;
    }

    return cnt;
}