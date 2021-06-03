#include <stdio.h>
void input(int arr[100][100], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
int main(void)
{
    int arr[100][100];
    int m, n;
    scanf("%d%d", &m, &n);
    input(arr, m, n);
    int x, y;
    char s;
    int cnt;
    scanf("%d%d %c%d", &x, &y, &s, &cnt);
    int i = 0;
    for (i = 1; i <= cnt; i++)
    {

        if (arr[x][y] == 0)
        {
            arr[x][y] = 1;
            switch (s)
            {
            case 'U':
                s = 'L';
                y--;
                break;
            case 'L':
                s = 'D';
                x++;
                break;
            case 'D':
                s = 'R';
                y++;
                break;
            case 'R':
                s = 'U';
                x--;
                break;
            }
        }
        else
        {
            arr[x][y] = 0;
            switch (s)
            {
            case 'U':
                s = 'R';
                y++;
                break;
            case 'L':
                s = 'U';
                x--;
                break;
            case 'D':
                s = 'L';
                y--;
                break;
            case 'R':
                s = 'D';
                x++;
                break;
            }
        }
    }
    printf("%d  %d", x, y);
    return 0;
}