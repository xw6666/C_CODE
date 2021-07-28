#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <stdbool.h>

typedef int Mode;

#define ROWS 11
#define COLS 11
#define ROW ROWS - 2
#define COL COLS - 2
#define EASY_COUNT 10
#define PRIME_COUNT 20
#define HARD_COUNT 50

//��ʼ������
void initBoard(char board[ROWS][COLS], int row, int col, char ch);

//��ӡ����
void printBoard(char show[ROWS][COLS], int row, int col);

//������
int putMine(char board[ROWS][COLS], int row, int col);

//ɨ��
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols, int mineCount);