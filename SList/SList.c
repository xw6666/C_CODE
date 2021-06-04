#include "SList.h"

SListNode *GetNewSListNode()
{
    // 申请一个结点
    SListNode *NewNode = (SListNode *)malloc(sizeof(SListNode));
    // 申请失败，直接退出，简单粗暴
    if (NewNode == NULL)
    {
        printf("%s", strerror(errno));
        exit(-1);
    }
    return NewNode;
}

void SListPrint(SListNode *pphead)
{
    SListNode *cur = pphead;
    while (cur)
    {
        printf("%d->", cur->data);//遍历每个结点并且打印data
        cur = cur->next;
    }
    printf("NULL\n");
}

void SListPushBack(SListNode **pphead, SListDataType x)
{
    if (*pphead == NULL)
    {
        *pphead = GetNewSListNode();
        (*pphead)->data = x;
        (*pphead)->next = NULL;
    }
    else
    {
        SListNode *NewNode = GetNewSListNode();
        SListNode *tail = *pphead;
        //循环找到一个节点，这个节点中的节点指针是NULL
        //循环找到NULL
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        NewNode->data = x;
        NewNode->next = NULL;
        tail->next = NewNode;
    }
}

void SListPopBack(SListNode **pphead)
{
    // 1.空
    // 2.只有一个结点
    // 3.一个以上结点
    if (*pphead == NULL)
    {
        return;
    }
    else if ((*pphead)->next == NULL)
    {
        free(*pphead);
        *pphead = NULL;
    }
    else
    {
        SListNode *tail = *pphead;
        SListNode *pre = tail; //记录最后一个结点的前一个结点
        //通过循环找到最后一个结点
        while (tail->next != NULL)
        {
            pre = tail;
            tail = tail->next;
        }
        //释放掉tail
        free(tail);
        tail = NULL;
        // 之前倒数第二个结点成为了最后一个结点，置NULL
        pre->next = NULL;
    }
}

void SListPushFront(SListNode **pphead, SListDataType x)
{
    SListNode *NewNode = GetNewSListNode();
    NewNode->data = x;
    // 新插入结点中存放的地址为之前第一个结点的地址
    NewNode->next = *pphead;
    //把NewNode作为第一个结点
    *pphead = NewNode;
}

void SListPopFront(SListNode **pphead)
{
    // 1.没有结点
    // 2.有1个结点+ 3.有1个以上结点
    if (*pphead == NULL)
    {
        //没有要删的
        return;
    }
    else
    {
        // 1.保存头指针指向的下一个结点地址
        // 2.free掉头指针
        // 3.将头指针与下一个地址重新连接
        SListNode *next = (*pphead)->next;
        free(*pphead);
        *pphead = next;
    }
}

SListNode *SListFind(SListNode *phead, SListDataType x)
{
    SListNode *cur = phead;
    while (cur != NULL)
    {
        if (cur->data == x)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

void SListInsertAfter(SListNode *pos, SListDataType x)
{
    assert(pos);
    SListNode *NewNode = GetNewSListNode();
    NewNode->data = x;
    NewNode->next = pos->next;
    pos->next = NewNode;
}

void SListEraseAfter(SListNode *pos)
{
    assert(pos);
    if (pos->next)
    {
        SListNode *next = pos->next;
        SListNode *nextnext = pos->next->next;
        pos->next = nextnext;
        free(next);
    }
}