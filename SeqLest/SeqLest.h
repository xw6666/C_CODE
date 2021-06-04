#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#pragma once
// 顺序表，有效数据在数组中必须是连续的
// 动态顺序表设计(大小可变)
typedef int SLDataType;
typedef struct SeqList
{
    SLDataType *array;
    int size;
    int capacity; //容量 - 空间大小
} SL;
//初始化
void SeqListInit(SL *ps);
//销毁
void SeqListDestory(SL *ps);
//尾插
void SeqListPushBack(SL *ps, SLDataType x);
//尾删
void SeqListPopBack(SL *ps);
//头插
void SeqListPushFront(SL *ps, SLDataType x);
//头删
void SeqListPopFront(SL *ps);
// 任意位置插入
void SeqListInset(SL *ps, int pos, SLDataType x);
// 任意位置删除
void SeqListErase(SL *ps, int pos);
//打印数据
void SeqListPrint(const SL *ps);
//扩容
void SeqListExpan(SL *ps);
//查找
void SeqListFind(SL *ps, SLDataType x);