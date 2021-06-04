#include "SList.h"
void SListTest1()
{
    SListNode *pList = NULL;
    SListPushBack(&pList, 0);
    SListPushBack(&pList, 1);
    SListPushBack(&pList, 2);
    SListPushBack(&pList, 3);
    // SListPopBack(&pList);
    // SListPopBack(&pList);
    // SListPopBack(&pList);
    // SListPopBack(&pList);
    SListPopFront(&pList);
    // SListPushBack(&pList, 3);
    // SListPushBack(&pList, 4);
    SListNode *pos = SListFind(pList, 3);
    if(pos)
    {
        pos->data = 30;
    }
    SListInsertAfter(pos,4);
    pos->data = 3;
    SListEraseAfter(pos);
    SListPrint(pList);
}

int main()
{
    SListTest1();
    return 0;
}