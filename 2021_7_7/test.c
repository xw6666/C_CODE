#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//leetcode - 54. 螺旋矩阵
//int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
//    int n = matrixColSize[0];
//    int m = matrixSize;
//    //m行 n列
//    int* ret = (int*)malloc((m * n * 2) * sizeof(int));
//    *returnSize = m * n;
//    int startx = 0;
//    int starty = 0;
//    //选择长边做循环次数
//    int loop = (m < n ? m : n) / 2;
//    // printf("m = %d n = %d\n",m,n);
//    int i = 0;
//    int j = 0;
//    int offset = 1;
//    int pos = 0; //ret数组的填充位置
//    while (loop--)
//    {
//        //更新填充起点
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
//        //奇数边
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

//leetcode - 59. 螺旋矩阵 II
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
//    int loop = n / 2;//循环次数
//    int count = 1;//填充数字使用的参数
//    while (loop--)
//    {
//        //更新填充起点
//        i = startx;
//        j = starty;
//        //左上到右上左闭右开
//        for (j = starty; j < starty + n - offset; j++)
//        {
//            matrix[i][j] = count++;
//        }
//        //从右上到右下 左闭右开
//        for (i = startx; i < startx + n - offset; i++)
//        {
//            matrix[i][j] = count++;
//        }
//        //从右下到左下
//        for (; j > starty; j--)
//        {
//            matrix[i][j] = count++;
//        }
//        //从左下到左上
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

//剑指 Offer 29. 顺时针打印矩阵
//int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
//    if (matrixSize == 0 || matrixColSize[0] == 0)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//    int n = matrixColSize[0];
//    int m = matrixSize;
//    //m行 n列
//    int* ret = (int*)malloc((m * n * 2) * sizeof(int));
//    *returnSize = m * n;
//    int startx = 0;
//    int starty = 0;
//    //选择长边做循环次数
//    int loop = (m < n ? m : n) / 2;
//    // printf("m = %d n = %d\n",m,n);
//    int i = 0;
//    int j = 0;
//    int offset = 1;
//    int pos = 0; //ret数组的填充位置
//    while (loop--)
//    {
//        //更新填充起点
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
//        //奇数边
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