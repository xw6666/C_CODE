#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//leetcode - 54. ��������
//int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
//    int n = matrixColSize[0];
//    int m = matrixSize;
//    //m�� n��
//    int* ret = (int*)malloc((m * n * 2) * sizeof(int));
//    *returnSize = m * n;
//    int startx = 0;
//    int starty = 0;
//    //ѡ�񳤱���ѭ������
//    int loop = (m < n ? m : n) / 2;
//    // printf("m = %d n = %d\n",m,n);
//    int i = 0;
//    int j = 0;
//    int offset = 1;
//    int pos = 0; //ret��������λ��
//    while (loop--)
//    {
//        //����������
//        i = startx;
//        j = starty;
//        for (j = starty; j < starty + n - offset; j++)
//        {
//            // matrix[i][j];
//            ret[pos++] = matrix[i][j];
//            // printf("%d ",matrix[i][j]);
//        }
//        for (i = startx; i < startx + m - offset; i++)
//        {
//            ret[pos++] = matrix[i][j];
//            // printf("2");
//            // printf("%d ",matrix[i][j]);
//
//        }
//        for (; j > starty; j--)
//        {
//            ret[pos++] = matrix[i][j];
//            // printf("%d ",matrix[i][j]);
//            // printf("3");
//        }
//        for (; i > startx; i--)
//        {
//            ret[pos++] = matrix[i][j];
//            // printf("4");
//            // printf("%d ",matrix[i][j]);
//        }
//        startx++;
//        starty++;
//        offset += 2;
//    }
//    int shortside = (m > n ? n : m);
//    if (shortside % 2 == 1)
//    {
//        //������
//        if (m > n)
//        {
//            i = startx;
//            j = starty;
//            for (i = startx; i < startx + m - n + 1; i++)
//            {
//                ret[pos++] = matrix[i][j];
//            }
//        }
//        else
//        {
//            i = startx;
//            j = starty;
//            for (j = starty; j < starty + n - m + 1; j++)
//            {
//                ret[pos++] = matrix[i][j];
//            }
//        }
//    }
//    return ret;
//}

//leetcode - 59. �������� II
//int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
//    int** matrix = malloc(sizeof(int*) * n);
//    *returnSize = n;
//    *returnColumnSizes = malloc(sizeof(int) * n);
//    for (int i = 0; i < n; i++) {
//        matrix[i] = malloc(sizeof(int) * n);
//        memset(matrix[i], 0, sizeof(int) * n);
//        (*returnColumnSizes)[i] = n;
//    }
//    int startx = 0;
//    int starty = 0;
//    int i = 0;
//    int j = 0;
//    int offset = 1;
//    int loop = n / 2;//ѭ������
//    int count = 1;//�������ʹ�õĲ���
//    while (loop--)
//    {
//        //����������
//        i = startx;
//        j = starty;
//        //���ϵ���������ҿ�
//        for (j = starty; j < starty + n - offset; j++)
//        {
//            matrix[i][j] = count++;
//        }
//        //�����ϵ����� ����ҿ�
//        for (i = startx; i < startx + n - offset; i++)
//        {
//            matrix[i][j] = count++;
//        }
//        //�����µ�����
//        for (; j > starty; j--)
//        {
//            matrix[i][j] = count++;
//        }
//        //�����µ�����
//        for (; i > startx; i--)
//        {
//            matrix[i][j] = count++;
//        }
//        startx++;
//        starty++;
//        offset += 2;
//    }
//
//    if (n % 2 == 1)
//    {
//        matrix[n / 2][n / 2] = count;
//    }
//
//    return matrix;
//}

//��ָ Offer 29. ˳ʱ���ӡ����
//int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
//    if (matrixSize == 0 || matrixColSize[0] == 0)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//    int n = matrixColSize[0];
//    int m = matrixSize;
//    //m�� n��
//    int* ret = (int*)malloc((m * n * 2) * sizeof(int));
//    *returnSize = m * n;
//    int startx = 0;
//    int starty = 0;
//    //ѡ�񳤱���ѭ������
//    int loop = (m < n ? m : n) / 2;
//    // printf("m = %d n = %d\n",m,n);
//    int i = 0;
//    int j = 0;
//    int offset = 1;
//    int pos = 0; //ret��������λ��
//    while (loop--)
//    {
//        //����������
//        i = startx;
//        j = starty;
//        for (j = starty; j < starty + n - offset; j++)
//        {
//            // matrix[i][j];
//            ret[pos++] = matrix[i][j];
//            // printf("%d ",matrix[i][j]);
//        }
//        for (i = startx; i < startx + m - offset; i++)
//        {
//            ret[pos++] = matrix[i][j];
//            // printf("2");
//            // printf("%d ",matrix[i][j]);
//
//        }
//        for (; j > starty; j--)
//        {
//            ret[pos++] = matrix[i][j];
//            // printf("%d ",matrix[i][j]);
//            // printf("3");
//        }
//        for (; i > startx; i--)
//        {
//            ret[pos++] = matrix[i][j];
//            // printf("4");
//            // printf("%d ",matrix[i][j]);
//        }
//        startx++;
//        starty++;
//        offset += 2;
//    }
//    int shortside = (m > n ? n : m);
//    if (shortside % 2 == 1)
//    {
//        //������
//        if (m > n)
//        {
//            i = startx;
//            j = starty;
//            for (i = startx; i < startx + m - n + 1; i++)
//            {
//                ret[pos++] = matrix[i][j];
//            }
//        }
//        else
//        {
//            i = startx;
//            j = starty;
//            for (j = starty; j < starty + n - m + 1; j++)
//            {
//                ret[pos++] = matrix[i][j];
//            }
//        }
//    }
//    return ret;
//}