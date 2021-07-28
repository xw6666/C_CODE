#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void initBoard(char board[ROWS][COLS], int row, int col, char ch)
{
    //初始化棋盘
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ch;
        }
    }
}

void printBoard(char board[ROWS][COLS], int row, int col)
{
    system("cls");
    int i;
    int j;
    int flag = 0;
    printf("  ");
    for (i = 1; i <= row; i++)
    {
        printf("% d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++) 
    {
        printf("%d ", i);
        for (j = 1; j <= col; j++) 
        {
            printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
}

Mode modeChoose(void)
{
    printf("****************      1.简单模式      ****************\n");
    printf("****************      2.普通模式      ****************\n");
    printf("****************      3.困难模式      ****************\n");
    printf("请选择:>");
    int mode = 0;
    int n = 0;
    do
    {
        scanf("%d", &mode);
        switch (mode)
        {
        case 1:
            n = EASY_COUNT;
            break;
        case 2:
            n = PRIME_COUNT;
            break;
        case 3:
            n = HARD_COUNT;
            break;
        default:
            printf("输入非法，请重新输入:>\n");
            break;
        }
    } while (mode != 1 && mode != 2 && mode != 3);

    return n;
}

int putMine(char board[ROWS][COLS], int row, int col)
{
    int cnt = modeChoose();//得到需要放置雷的数量
    int ret = cnt;
    while (cnt > 0)
    {
        int x = 0;
        int y = 0;
        while (1)
        {
            //随机生成雷坐标
            x = rand() % row + 1;
            y = rand() % col + 1;
            if (board[x][y] == '0')
            {
                board[x][y] = '1';
                cnt--;
                break;
            }
        }
    }

    return ret;
}

void moveMine(char mine[ROWS][COLS], int x, int y)
{
    int x1 = 0;
    int y1 = 0;
    while (1)
    {
        x1 = rand() % (ROW) + 1;
        y1 = rand() % (COL) + 1;
        if (mine[x1][y1] == '0')
        {
            mine[x1][y1] = '1';
            break;
        }
    }

    mine[x][y] = '0';
}

int getMineCount(char mine[ROWS][COLS], int x, int y)
{
    int count = 0;
    if (x < 1 || x > ROWS - 2 || y < 1 || y > COLS - 2)
    {
        return 0;
    }

    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if (mine[i][j] == '1')
            {
                count++;
            }
        }
    }

    return count;
}

bool isEnd(char show[ROWS][COLS], int mineCount)
{
    int count = 0;
    int i = 0;
    int j = 0;
    for (i = 1; i <= ROW; i++)
    {
        for (j = 1; j <= COL; j++)
        {
            if (show[i][j] == '*')
            {
                count++;
            }
        }
    }

    if (count == mineCount)
    {
        return true;
    }

    return false;
}

void zeroMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
    if (0 == getMineCount(mine, x, y))
    {
        //展开
        show[x][y] = ' ';
        
        if ((x - 1 >= 1 && x - 1 <= (ROW) && y - 1 >= 1 && y - 1 <= (COL)) && show[x - 1][y - 1] == '*')
        {
            zeroMine(mine, show, x - 1, y - 1);
        }

        if ((x - 1 >= 1 && x - 1 <= (ROW) && y >= 1 && y <= (COL)) && show[x - 1][y] == '*')
        {
            zeroMine(mine, show, x - 1, y);
        }

        if ((x - 1 >= 1 && x - 1 <= (ROW) && y + 1 >= 1 && y + 1 <= (COL)) && show[x - 1][y + 1] == '*')
        {
            zeroMine(mine, show, x - 1, y + 1);
        }

        if ((x >= 1 && x <= (ROW) && y - 1 >= 1 && y - 1 <= (COL)) && show[x][y - 1] == '*')
        {
            zeroMine(mine, show, x, y - 1);
        }
        
        if ((x >= 1 && x <= (ROW) && y + 1 >= 1 && y + 1 <= (COL)) && show[x][y + 1] == '*')
        {
            zeroMine(mine, show, x, y + 1);
        }

        if ((x + 1 >= 1 && x + 1<= (ROW) && y - 1 >= 1 && y - 1 <= (COL)) && show[x + 1][y - 1] == '*')
        {
            zeroMine(mine, show, x + 1, y - 1);
        }

        if ((x + 1 >= 1 && x + 1 <= (ROW) && y >= 1 && y <= (COL)) && show[x + 1][y] == '*')
        {
            zeroMine(mine, show, x + 1, y);
        }

        if ((x + 1 >= 1 && x + 1 <= (ROW) && y + 1 >= 1 && y + 1 <= (COL)) && show[x + 1][y + 1] == '*')
        {
            zeroMine(mine, show, x + 1, y + 1);
        }
    }
    else
    {
        show[x][y] = getMineCount(mine, x, y) + '0';
    }
}

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols, int mineCount)
{
    int second = 0;
    int x = 0;
    int y = 0;
    while (1)
    {
        printf("请选择要排查雷的坐标:>");
        while (1)
        {
            scanf("%d%d", &x, &y);
            printf("\n");
            if (x < 1 || x > rows - 2 || y < 1 || y > cols - 2)
            {
                printf("该坐标超出范围，请重新选择:>");
            }

            if (show[x][y] != '*')
            {
                printf("该坐标已被排查，请重新选择:>");
            }
            else
            {
                break;
            }
        }

        second++;   //一定会走了一步
        //x y 为合法坐标
        //second == 1时表示第一步
        if (mine[x][y] == '1' && second == 1)
        {
            //如果第一步是雷那么要移动雷
            moveMine(mine, x, y);
        }

        if (mine[x][y] == '1')
        {
            printBoard(mine, ROW, COL);
            printf("很遗憾，你被炸死了！\n");
            break;
        }
        else
        {
            //统计九宫格雷的数量
            int count = getMineCount(mine, x, y);
            if (count == 0)
            {
                zeroMine(mine, show, x, y);
            }
            else
            {
                show[x][y] = '0' + count;
            }
        }

        //判断是否结束
        if (isEnd(show, mineCount))
        {
            printBoard(mine, ROW, COL);
            printf("恭喜你完成游戏!\n");
            break;
        }
        else
        {
            printBoard(show, ROW, COL);
        }
        
    }
    system("pause");
}