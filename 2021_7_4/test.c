#define _CRT_SECURE_NO_WARNINGS 1

//leetcode - 225. 用队列实现栈
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
////定义队列
//typedef struct Node
//{
//    int data;
//    struct Node* next;
//}Node;
//
////得到一个新节点
//Node* getNewNode(void)
//{
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    return  newNode;
//}
//
////初始化队列
//void initQueue(Node* ps)
//{
//    ps = NULL;
//    ps = getNewNode();
//    ps->next = NULL;
//    ps->data = 0;
//}
//
////入队 - 尾插
//void PushQueue(Node* ps, int x)
//{
//    assert(ps != NULL);
//    Node* cur = ps;
//    while (cur->next)
//    {
//        cur = cur->next;
//    }
//    //到了最后一个结点
//    Node* newNode = getNewNode();
//    newNode->next = NULL;
//    newNode->data = x;
//    cur->next = newNode;
//}
//
////出队 - 头删
//int PopQueue(Node* ps)
//{
//    assert(ps && ps->next);
//    Node* temp = ps->next;
//    int ret = temp->data;
//    ps->next = ps->next->next;
//    free(temp);
//    return ret;
//}
//
////返回队头元素
//int TopQueue(Node* ps)
//{
//    return (ps->next->data);
//}
//
//typedef struct {
//    Node* q1;
//    Node* q2;
//} MyStack;
//
///** Initialize your data structure here. */
//
//MyStack* myStackCreate() {
//    MyStack* s = (MyStack*)malloc(sizeof(MyStack));
//    initQueue(s->q1);
//    initQueue(s->q2);
//    return s;
//}
//
///** Push element x onto stack. */
//void myStackPush(MyStack* obj, int x) {
//    if (((obj->q1->next) == NULL) && ((obj->q2->next) == NULL))
//    {
//        //两个队列都空
//        PushQueue(obj->q1, x);
//    }
//    else if (obj->q1->next == NULL)
//    {
//        //1队列空
//        PushQueue(obj->q2, x);
//    }
//    else
//    {
//        //2队列空
//        PushQueue(obj->q1, x);
//    }
//}
//
///** Removes the element on top of the stack and returns that element. */
//int myStackPop(MyStack* obj) {
//    if (obj->q1->next == NULL)
//    {
//        //1队列空
//        //将2队列元素转移到1队列
//        Node* cur = obj->q2->next;
//        while (cur->next)
//        {
//            int x = PopQueue(cur);
//            //把出队的x入1队
//            PushQueue(obj->q1, x);
//        }
//        //返回2队列的最后一个元素
//        int ret = PopQueue(cur);
//        return ret;
//    }
//    else
//    {
//        //2队列空
//        Node* cur = obj->q1->next;
//        while (cur->next)
//        {
//            int x = PopQueue(cur);
//            PushQueue(obj->q2, x);
//        }
//        int ret = PopQueue(cur);
//        return ret;
//    }
//}
//
///** Get the top element. */
//int myStackTop(MyStack* obj) {
//    if (obj->q1->next == NULL)
//    {
//        //1队列空
//        //将2队列元素转移到1队列
//        Node* cur = obj->q2->next;
//        while (cur->next)
//        {
//            int x = PopQueue(cur);
//            //把出队的x入1队
//            PushQueue(obj->q1, x);
//        }
//        //返回2队列的最后一个元素
//        int ret = PopQueue(cur);
//        PushQueue(obj->q1, ret);
//        return ret;
//    }
//    else
//    {
//        //2队列空
//        Node* cur = obj->q1->next;
//        while (cur->next)
//        {
//            int x = PopQueue(cur);
//            PushQueue(obj->q2, x);
//        }
//        int ret = PopQueue(cur);
//        PushQueue(obj->q2, ret);
//        return ret;
//    }
//}
//
///** Returns whether the stack is empty. */
//bool myStackEmpty(MyStack* obj) {
//    if ((obj->q1->next == NULL) && (obj->q2->next == NULL))
//    {
//        return true;
//    }
//    return false;
//}
//
//void myStackFree(MyStack* obj) {
//    free(obj->q1->data);
//    obj->q1->data = NULL;
//    free(obj->q1);
//    obj->q1 = NULL;
//    free(obj->q2->data);
//    obj->q2->data = NULL;
//    free(obj->q2);
//    obj->q2 = NULL;
//    free(obj);
//    obj = NULL;
//}
//

//typedef int QueueElement;
//
//typedef struct Queue
//{
//    QueueElement data;
//    struct Queue* next;
//}Node, * QueueHead;
//
//void InitQueue(QueueHead* ps)
//{
//    //将队头置空
//    (*ps) = NULL;
//}
//
//Node* GetNewNode()
//{
//    //malloc一个节点
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    return newNode;
//}
//
//void PushQueue(QueueHead* ps, QueueElement x)
//{
//    //先给一个节点装元素
//    Node* newNode = GetNewNode();
//    newNode->data = x;
//    newNode->next = NULL;
//    //将节点接入队尾
//    if ((*ps) == NULL)
//    {
//        //说明newNode头结点
//        (*ps) = newNode;
//    }
//    else
//    {
//        //遍历到最后一个节点，进行尾插
//        Node* cur = (*ps);
//        while (cur->next)
//        {
//            cur = cur->next;
//        }
//        //到达最后一个节点处
//        cur->next = newNode;
//    }
//}
//
//void PrintQueue(QueueHead* ps)
//{
//    Node* cur = (*ps);
//    while (cur)
//    {
//        printf("%d->", cur->data);
//        cur = cur->next;
//    }
//
//    printf("NULL\n");
//}
//
//QueueElement PopQueue(QueueHead* ps)
//{
//    assert("ps != NULL");
//    int ret = ((*ps)->data);
//    Node* temp = (*ps);
//    (*ps) = (*ps)->next;
//    free(temp);
//
//    return ret;
//}
//
//typedef struct {
//    QueueHead q1;
//    QueueHead q2;
//} MyStack;
//
///** Initialize your data structure here. */
//
//MyStack* myStackCreate() {
//    //做出一个栈
//    MyStack* s = (MyStack*)malloc(sizeof(MyStack));
//    //初始化
//    InitQueue(&s->q1);
//    InitQueue(&s->q2);
//    return s;
//}
//
///** Push element x onto stack. */
//void myStackPush(MyStack* obj, int x) {
//    if ((obj->q1 == NULL) && (obj->q2 == NULL))
//    {
//        //入q1
//        PushQueue(&obj->q1, x);
//    }
//    else if (obj->q1 == NULL)
//    {
//        //入q2
//        // PopQueue(&obj->q2);
//        PushQueue(&obj->q2, x);
//    }
//    else
//    {
//        // PopQueue(&obj->q1);
//        PushQueue(&obj->q1, x);
//    }
//}
//
///** Removes the element on top of the stack and returns that element. */
//int myStackPop(MyStack* obj) {
//    int ret = 0;
//    if (obj->q1 == NULL)
//    {
//        //2->1
//        while ((obj->q2)->next)
//        {
//            int x = PopQueue(&obj->q2);
//            PushQueue(&obj->q1, x);
//        }
//        //剩最后一个元素
//        ret = PopQueue(&obj->q2);
//    }
//    else
//    {
//        //1->2
//        while ((obj->q1)->next)
//        {
//            int x = PopQueue(&obj->q1);
//            PushQueue(&obj->q2, x);
//        }
//        //剩最后一个元素
//        ret = PopQueue(&obj->q1);
//    }
//    return ret;
//}
//
///** Get the top element. */
//int myStackTop(MyStack* obj) {
//    int ret = 0;
//    if (obj->q1 == NULL)
//    {
//        while ((obj->q2)->next)
//        {
//            int x = PopQueue(&obj->q2);
//            PushQueue(&obj->q1, x);
//        }
//        ret = PopQueue(&obj->q2);
//        PushQueue(&obj->q1, ret);
//    }
//    else
//    {
//        while ((obj->q1)->next)
//        {
//            int x = PopQueue(&obj->q1);
//            PushQueue(&obj->q2, x);
//        }
//        //剩最后一个元素
//        ret = PopQueue(&obj->q1);
//        PushQueue(&obj->q2, ret);
//    }
//    return ret;
//}
//
///** Returns whether the stack is empty. */
//bool myStackEmpty(MyStack* obj) {
//    if ((obj->q1 == NULL) && (obj->q2 == NULL))
//    {
//        return true;
//    }
//    return false;
//}
//
//void myStackFree(MyStack* obj) {
//    free(obj->q1->data);
//    obj->q1->data = NULL;
//    free(obj->q1);
//    obj->q1 = NULL;
//    free(obj->q2->data);
//    obj->q2->data = NULL;
//    free(obj->q2);
//    obj->q2 = NULL;
//    free(obj);
//    obj = NULL;
//}
//
//void test()
//{
//    MyStack* s = myStackCreate();
//    myStackPush(s, 1);
//    myStackPush(s, 2);
//    myStackPush(s, 3);
//    myStackPush(s, 4);
//    int ret = myStackTop(s);
//    printf("%d", ret);
//}
//
//int main()
//{
//    test();
//    return 0;
//}