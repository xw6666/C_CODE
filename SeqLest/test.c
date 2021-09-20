//#include "SeqLest.h"
//
////测试头尾插入删除
//void testSeqList1()
//{
//    SL s;
//    SeqListInit(&s);
//    SeqListPushBack(&s, 1);
//    SeqListPushFront(&s,0);
//    SeqListPushBack(&s, 2);
//    SeqListPushBack(&s, 3);
//
//    SeqListPrint(&s);
//    // SeqListFind(&s,1);
//
//    SeqListDestory(&s);
//}
////测试任意位置插入 - 从0开始
//void testSeqList2()
//{
//    SL s;
//    SeqListInit(&s);
//    SeqListInset(&s, 0, 1);
//    SeqListInset(&s, 0, 0);
//    SeqListInset(&s, 2, 3);
//    SeqListInset(&s, 3, 4);
//    SeqListErase(&s, 0);
//    SeqListErase(&s, 1);
//    SeqListPrint(&s);
//}
//
//int main()
//{
//    testSeqList1();
//    // testSeqList2();
//
//    return 0;
//}