#include <stdio.h>
void input(int arr[], int n)
{
    int i = 0;
    while (n > 0)
    {
        scanf("%d", &arr[i]);
        i++;
        n--;
    }
}
int over(int arr[], int n)
{
    int flag = 1;
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[0] != arr[i])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
void round(int arr[], int arr1[], int n)
{
    int j;
    for (j = 0; j < n; j++)
    {
        if (j < n - 1)
        {
            arr1[j + 1] = arr[j] / 2;
            arr[j] /= 2;
        }
        else
        {
            arr1[0] = arr[j] / 2;
            arr[j] /= 2;
        }
    } //排好两个数组
}
int main()
{ //建立第二个数组，错位
    int n;
    scanf("%d", &n);
    int arr[100];
    int arr1[100];
    input(arr, n);
    int cnt = 0;
    int i; //循环，每个数组元素除一半后赋值给下一个数组，最后一组要赋值给第一组
    while (over(arr, n) == 0)
    {
        round(arr, arr1, n);
        for (i = 0; i < n; i++)
        {
            arr[i] = arr[i] + arr1[i];
            if ((arr[i] % 2) != 0)
            {
                arr[i]++;
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}