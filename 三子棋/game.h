#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col);

//�����
void PlayerMove(char board[ROW][COL], int row, int col);

//������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ϸ�Ƿ����
//������Ӯ�˷���'o'
//����Ӯ�˷���'x'
//ƽ�ַ���'Q'
//û��������'C'
char* IsWin(char board[ROW][COL], int row, int col);