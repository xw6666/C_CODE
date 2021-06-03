#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
/* int main(void)
{
    printf("Hello world!\n");

    return 0;
} */

/* int main(void)
{
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter text to be analyzed (| to terminare):\n");
    prev = "\n";
    while ((c = getchar) != STOP)
    {
        n_chars++;
        if (c == '\n')
            n_lines++;
        if (!isspace(c) && !inword)
        {
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword)
            inword = false;
        prev=c;
    }
    return 0;
} */
/* int main()
{
    int y;
    scanf("%d", &y);

    int x = y < 0 ? -y : y;
    printf("|y| = %d\n", x);

    return 0;
} */
/* int main(void)
{
    int n_space = 0;
    int row = 0;
    int n = 0;
    char c;
    while (getchar(c) != '#')
    {
        if (isspace(c))
        {
            n_space++;
        }
        if (c ==)
    }
    return 0;
} */
//
// void print(int x)
// {
//     if (x <= 9)
//     {
//         printf("%d ", x);
//     }
//     else
//     {
//         print(x / 10);
//         printf("%d ", x % 10);
//     }
// }
// int main(void)
// {
//     int xw;
//     scanf("%d",&xw);
//     print(xw);

//     return 0;
// }
// int Ways(int r)
// {
//     if (r <= 2)
//     {
//         return r;
//     }
//     else
//     {
//         return Ways(r - 1) + Ways(r - 2);
//     }
// }
// int main()
// {
//     int r;
//     scanf("%d", &r);
//     int ret = Ways(r);
//     printf("ret = %d\n", ret);
//     return 0;
// }