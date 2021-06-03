// #include <stdio.h>
// #include <string.h>
// int sum = 0;
// int fac(int kid[], int N)
// {
//     int kids[100];
//     int j, k, b, a;
//     for (j = 0; j < N; j++)
//     {
//         kid[j] = kid[j] / 2;
//         kids[j] = kid[j];
//     }
//     for (k = 1; k <= N; k++)
//     {
//         if (k == N)
//             kid[0] = kids[0] + kids[k - 1];
//         kid[k] = kids[k] + kids[k - 1];
//     }
//     for (a = 0; a < N; a++)
//     {
//         if (kid[a] % 2 != 0)
//         {
//             kid[a] = kid[a] + 1;
//             sum++;
//         }
//     }
//     for (b = 0; b < N; b++)
//     {
//         if (kid[b] != kid[b + 1])
//             break;
//     }
//     if (b == N)
//     {
//         return (sum);
//     }
//     else
//     {
//         fac(kid, N);
//     }
// }
// int main(void)
// {
//     int N, i, k;
//     int kid[100];
//     scanf("%d", &N);
//     for (i = 0; i < N; i++)
//     {
//         scanf("%d", &kid[i]);
//     }
//     k = fac(kid, N);
//     printf("%d", k);
//     return 0;
// }
#include <stdio.h>
#include <ctype.h>
int main()
{
    char arr[100];
    int i = 0;
    char ch;
    while (scanf("%c", &ch), ch != '\n')
    {
        if (isalpha(ch))
        {
            arr[i] = ch;
            i++;
        }
    }
    for (int j = 0; j < i; j++)
    {
        printf("%c", arr[j]);
    }
    return 0;
}