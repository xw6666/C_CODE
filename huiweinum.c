#include <stdio.h>
int DigitSum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum = sum + x % 10;
        x /= 10;
    }
    return sum;
}
int Digit(int x)
{
    int cnt = 0;
    while (x > 0)
    {
        x /= 10;
        cnt++;
    }
    return cnt;
}
void keep(int arr[], int digit, int x)
{
    int i;
    for (i = 0; i < digit; i++)
    {
        arr[i] = x % 10;
        x /= 10;
    }
}
int equal(int arr[], int arr1[], int digit)
{
    int i;
    int flag = 1;
    for (i = 0; i < digit; i++)
    {
        if (arr[i] != arr1[i])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int IsHuiWen(int x)
{
    int arr[10];
    int arr1[10];
    int digit = Digit(x);
    keep(arr, digit, x);
    int i;
    int j = digit - 1;
    for (i = 0; i < digit; i++, j--)
    {
        arr1[i] = arr[j];
    }
    if (equal(arr, arr1, digit))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int cnt = 0;
    int n;
    scanf("%d", &n);
    int i;
    for (i = 10000; i <= 999999; i++)
    {
        if (DigitSum(i) == n)
        {
            if (IsHuiWen(i))
            {
                printf("%d\n", i);
                cnt++;
            }
        }
    }
    if (cnt == 0)
    {
        printf("-1\n");
    }
    return 0;
}