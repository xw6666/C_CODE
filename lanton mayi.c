#include <stdio.h>
int arr[200][200];
void f(int x, int y, char s, int k)
{
    if (k == 0)
    {
        printf("%d  %d", x, y);
        return;
    }
    if (arr[x][y] == 1)
    {
        arr[x][y] = 0;
        switch (s)
        {
        case 'U':
            s = 'R';
            y++;
            k--;
            f(x, y, s, k);
            break;
        case 'D':
            s = 'L';
            y--;
            k--;
            f(x, y, s, k);
            break;
        case 'L':
            s = 'U';
            x--;
            k--;
            f(x, y, s, k);
            break;
        case 'R':
            s = 'D';
            x++;
            k--;
            f(x, y, s, k);
            break;
        }
    }
    else
    {
        arr[x][y] = 0;
        switch (s)
        {
        case 'U':
            s = 'L';
            y--;
            k--;
            f(x, y, s, k);
            break;
        case 'R':
            s = 'U';
            x--;
            k--;
            f(x, y, s, k);
            break;
        case 'D':
            s = 'R';
            y++;
            k--;
            f(x, y, s, k);
            break;
        case 'L':
            s = 'D';
            x++;
            k--;
            f(x, y, s, k);
            break;
        }
    }
}

int main(void)
{
    int row, col;
    scanf("%d%d", &row, &col);
    int i;
    for (i = 0; i < row; i++)
    {
        int j;
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x, y, s, k;
    scanf("%d%d %c%d", &x, &y, &s, &k);
    f(x, y, s, k);
    return 0;
}