#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
typedef int SListDataType;

typedef struct SListNode
{
    SListDataType data;
    struct SListNode *next;
} SListNode;
// 打印链表
void SListPrint(SListNode *phead);
// 尾插节点
void SListPushBack(SListNode **phead, SListDataType x);
// 获得一个新节点
SListNode *GetNewSListNode();
// 尾删节点
void SListPopBack(SListNode **pphead);
// 头插结点
void SListPushFront(SListNode **phead, SListDataType x);
// 头删结点
void SListPopFront(SListNode **phead);
//查找结点
SListNode *SListFind(SListNode *phead, SListDataType x);
//任意位置插入结点
void SListInsertAfter(SListNode *pos, SListDataType x);
//任意位置删除结点
void SListEraseAfter(SListNode *pos);
