#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
    printf("******************************************************\n");
    printf("****************      1.������Ϸ      ****************\n");
    printf("****************      0.�˳���Ϸ      ****************\n");
    printf("******************************************************\n");
}
void game()
{
    //���������������ڴ洢����
    char mine[ROWS][COLS] = { 0 };
    char show[ROWS][COLS] = { 0 };
    //��ʼ����������
    initBoard(mine, ROWS, COLS, '0');
    initBoard(show, ROWS, COLS, '*');
    //����
    int mineCount = putMine(mine, ROW, COL);
    Sleep(500);
    //��ӡ����
    printBoard(show, ROW, COL);
    //ɨ�׹���
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
        printf("��ѡ��:>");
        scanf("%d", &input);
        printf("\n");
        switch (input)
        {
        case 1:
            Sleep(300);
            system("cls");
            printf("��ʼ��Ϸ!\n");
            game();
            break;
        case 0:
            system("cls");
            printf("�˳���Ϸ!\n");
            system("pause");
            break;

        default:
            printf("�����������������!\n");
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