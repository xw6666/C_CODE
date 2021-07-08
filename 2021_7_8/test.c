#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#define INT_PTR int*
//typedef int* int_ptr;
//int main()
//{
//	int* arr[5] = { 0 };
//	int* a = NULL;
//	int* b = NULL;
//	arr[0] = a;
//	arr[1] = b;
//	
//	return 0;
//}

//int main()
//{
//	int arr[4][4] = {
//					1,2,8,9,
//					2,4,9,12,
//					4,7,10,13,
//					6,8,11,15
//	};
//	int target = 0;   //目标元素
//	scanf("%d", &target);
//	int i = 0;
//	int j = 3;
//	while ((i >= 0 && j >= 0) && (arr[i][j] != target))
//	{
//		if (arr[i][j] > target)
//		{
//			j--;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	if (i < 0 || j < 0)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//}

//int cnt;
//int main(void)
//{
//	//int e = 10;
//	//INT_PTR a, b;
//	//int_ptr c, d;
//	//printf("%p\n%p\n%p\n%p\n", a, b, c, d);
//	//int* p = d;
//	printf("%d\n", cnt);
//	return 0;
//}

//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	} 
//	printf("%d\n", a);
//}
typedef char BTDataType;
//定义二叉树
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

////前序遍历
//void PrevOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		printf("NULL ");
//		return;
//	}
//	printf("%c ", root->data);
//	PrevOrder(root->left);
//	PrevOrder(root->right);
//}
//
////中序遍历
//void InOrder(BTNode* root)
//{
//
//	if (root == NULL)
//	{
//		printf("NULL ");
//		return;
//	}
//
//	InOrder(root->left);
//	printf("%c ", root->data);
//	InOrder(root->right);
//}
//
////后序遍历
//void PostOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		printf("NULL ");
//		return 0;
//	}
//	PostOrder(root->left);
//	PostOrder(root->right);
//	printf("%c ", root->data);
//}
//
//int main()
//{
//	BTNode* A = (BTNode *)malloc(sizeof(BTNode));
//	A->data = 'A';
//	A->left = NULL;
//	A->right = NULL;
//
//	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
//	B->data = 'B';
//	B->left = NULL;
//	B->right = NULL;
//
//	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
//	C->data = 'C';
//	C->left = NULL;
//	C->right = NULL;
//
//	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
//	D->data = 'D';
//	D->left = NULL;
//	D->right = NULL;
//
//	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
//	E->data = 'E';
//	E->left = NULL;
//	E->right = NULL;
//	
//	A->left = B;
//	A->right = C;
//	B->left = D;
//	B->right = E;
//	A->right = C;
//	//PrevOrder(A);
//	//InOrder(A);
//	PostOrder(A);
//	return 0;
//}

//leetcode - 707. 设计链表
//typedef struct MyLinkedList {
//    int val;
//    struct MyLinkedList* next;
//} MyLinkedList;
//
//
///** Get a new Node for you. */
//MyLinkedList* getNewNode()
//{
//    MyLinkedList* newNode = (MyLinkedList*)malloc(sizeof(MyLinkedList));
//    newNode->next = NULL;
//    newNode->val = 0;
//    return newNode;
//}
///** Initialize your data structure here. */
//MyLinkedList* myLinkedListCreate() {
//    MyLinkedList* s = (MyLinkedList*)malloc(sizeof(MyLinkedList));
//    s->next = NULL;
//    s->val = 0;
//    return s;
//}
//
///** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
//int myLinkedListGet(MyLinkedList* obj, int index) {
//    if (index < 0)
//    {
//        return -1;
//    }
//    MyLinkedList* cur = obj->next;
//    int i = 0;
//    while (cur && cur->next && i < index)
//    {
//        cur = cur->next;
//        i++;
//    }
//    if (i == index && cur)
//    {
//        return (cur->val);
//    }
//
//    return -1;
//}
//
///** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
//void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
//    assert(obj != NULL);
//    MyLinkedList* cur = obj;
//    MyLinkedList* newNode = getNewNode();
//    newNode->val = val;
//    newNode->next = cur->next;
//    cur->next = newNode;
//}
//
///** Append a node of value val to the last element of the linked list. */
//void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
//    assert(obj != NULL);
//    MyLinkedList* cur = obj;
//    MyLinkedList* newNode = getNewNode();
//    newNode->val = val;
//    newNode->next = NULL;
//    while (cur->next)
//    {
//        cur = cur->next;
//    }
//    cur->next = newNode;
//}
//
///** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
//void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
//    if (myLinkedListGet(obj, index) != -1)
//    {
//        int i = 0;
//        MyLinkedList* cur = obj->next;
//        MyLinkedList* prev = obj;
//        while (i < index)
//        {
//            prev = cur;
//            cur = cur->next;
//            i++;
//        }
//        MyLinkedList* newNode = getNewNode();
//        newNode->val = val;
//        newNode->next = cur;
//        prev->next = newNode;
//    }
//    else
//    {
//        //是否能进行尾插 头插
//        int i = 0;
//        MyLinkedList* cur = obj->next;
//        MyLinkedList* prev = obj->next;
//        while (cur)
//        {
//            prev = cur;
//            cur = cur->next;
//            i++;
//        }
//        if (i == index && prev != NULL)
//        {
//            //进行尾插
//            MyLinkedList* newNode = getNewNode();
//            newNode->val = val;
//            prev->next = newNode;
//        }
//        if (cur == NULL && prev == NULL)
//        {
//            //进行头插
//            cur = obj;
//            MyLinkedList* newNode = getNewNode();
//            newNode->val = val;
//            cur->next = newNode;
//        }
//    }
//}
//
///** Delete the index-th node in the linked list, if the index is valid. */
//void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
//    if (myLinkedListGet(obj, index) != -1)
//    {
//        MyLinkedList* cur = obj->next;
//        MyLinkedList* prev = obj;
//        int i = 0;
//        while (i < index)
//        {
//            prev = cur;
//            cur = cur->next;
//            i++;
//        }
//        //cur到达index处
//        prev->next = prev->next->next;
//        // cur->next = NULL;
//        // free(cur);
//        // cur->next = NULL;
//    }
//}
//
//void myLinkedListFree(MyLinkedList* obj) {
//    if (obj->next)
//    {
//        myLinkedListFree(obj->next);
//        obj->next = NULL;
//    }
//}
//
///**
// * Your MyLinkedList struct will be instantiated and called as such:
// * MyLinkedList* obj = myLinkedListCreate();
// * int param_1 = myLinkedListGet(obj, index);
//
// * myLinkedListAddAtHead(obj, val);
//
// * myLinkedListAddAtTail(obj, val);
//
// * myLinkedListAddAtIndex(obj, index, val);
//
// * myLinkedListDeleteAtIndex(obj, index);
//
// * myLinkedListFree(obj);
//*/