#include "SeqLest.h"
void SeqListExpan(SL *ps)
{
    ps->capacity *= 2;
    //注意realooc第一个参数是扩容的位置，第二个参数是要扩大到多大，单位为字节
    ps->array = (SLDataType *)realloc(ps->array, sizeof(SLDataType) * ps->capacity);
    if (ps->array == NULL)
    {
        printf("%s", strerror(errno));
        exit(-1);
    }
}
void SeqListInit(SL *ps)
{
    ps->array = (SLDataType *)malloc(sizeof(SLDataType) * 4);
    if (ps->array == NULL)
    {
        printf("%s", strerror(errno));
        exit(-1);
    }
    ps->size = 0;
    ps->capacity = 4;
}

void SeqListDestory(SL *ps)
{
    free(ps->array);
    ps->array = NULL;
    ps->size = 0;
    ps->capacity = 0;
}

void SeqListPushBack(SL *ps, SLDataType x)
{
    assert(ps != NULL);
    if (ps->size >= ps->capacity)
    {
        SeqListExpan(ps);
    }
    ps->array[ps->size] = x;
    ps->size++;
}

void SeqListPrint(const SL *ps)
{
    assert(ps != NULL);
    for (int i = 0; i < ps->size; i++)
    {
        printf("%d ", ps->array[i]);
    }
}

void SeqListPopBack(SL *ps)
{
    //尾删
    assert(ps != NULL);
    ps->size--;
}

void SeqListPushFront(SL *ps, SLDataType x)
{
    //头插
    assert(ps != NULL);
    if (ps->size >= ps->capacity)
    {
        SeqListExpan(ps);
    }
    int end = ps->capacity - 1;
    while (end >= 0)
    {
        //搬数据
        ps->array[end + 1] = ps->array[end];
        end--;
    }
    ps->array[0] = x;
    ps->size++;
}

void SeqListPopFront(SL *ps)
{
    assert(ps != NULL);
    //头删 - 往前覆盖
    int start = 0;
    for (start = 0; start < ps->size - 1; start++)
    {
        ps->array[start] = ps->array[start + 1];
    }
    ps->size--;
}

void SeqListInset(SL *ps, int pos, SLDataType x)
{
    assert(ps != NULL);
    assert(pos < ps->size && pos >= 0);
    if (ps->size >= ps->capacity)
    {
        SeqListExpan(ps);
    }
    int end = ps->size - 1;
    while (end >= pos)
    {
        //往后覆盖
        ps->array[end + 1] = ps->array[end];
        end--;
    }
    ps->array[pos] = x;
    ps->size++;
}

void SeqListErase(SL *ps, int pos)
{
    assert(ps != NULL);
    assert(pos < ps->size && pos >= 0);
    int begin = pos;
    while (begin < ps->size - 1)
    {
        ps->array[begin] = ps->array[begin + 1];
        begin++;
    }
    ps->size--;
}

void SeqListFind(SL *ps, SLDataType x)
{
    assert(ps != NULL);
    for (int i = 0; i < ps->size; i++)
    {
        if (ps->array[i] == x)
        {
            printf("%d ", i);
        }
    }
}