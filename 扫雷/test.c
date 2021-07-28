#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
    printf("******************************************************\n");
    printf("****************      1.进入游戏      ****************\n");
    printf("****************      0.退出游戏      ****************\n");
    printf("******************************************************\n");
}
void game()
{
    //创建两个数组用于存储数据
    char mine[ROWS][COLS] = { 0 };
    char show[ROWS][COLS] = { 0 };
    //初始化两个数组
    initBoard(mine, ROWS, COLS, '0');
    initBoard(show, ROWS, COLS, '*');
    //放雷
    int mineCount = putMine(mine, ROW, COL);
    Sleep(500);
    //打印数组
    printBoard(show, ROW, COL);
    //扫雷过程
    findMine(mine, show, ROWS, COLS, mineCount);
}

void test()
{
    int input = 0;
    srand((unsigned)time(NULL));
    do
    {
        system("cls");
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        printf("\n");
        switch (input)
        {
        case 1:
            Sleep(300);
            system("cls");
            printf("开始游戏!\n");
            game();
            break;
        case 0:
            system("cls");
            printf("退出游戏!\n");
            system("pause");
            break;

        default:
            printf("输入错误，请重新输入!\n");
            Sleep(600);
            system("cls");
            break;
        }
    } while (input);
}
int main(void)
{
    test();

    return 0;
}