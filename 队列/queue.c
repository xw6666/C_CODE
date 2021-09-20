//#define _CRT_SECURE_NO_WARNINGS 1
//#include "queue.h"
//void InitQueue(QueueHead* ps)
//{
//	//将队头置空
//	(*ps) = NULL;
//}
//
//Node* GetNewNode()
//{
//	//malloc一个节点
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	return newNode;
//}
//
//void PushQueue(QueueHead* ps, QueueElement x)
//{
//	//先给一个节点装元素
//	Node* newNode = GetNewNode();
//	newNode->data = x;
//	newNode->next = NULL;
//	//将节点接入队尾
//	if ((*ps) == NULL)
//	{
//		//说明newNode头结点
//		(*ps) = newNode;
//	}
//	else
//	{
//		//遍历到最后一个节点，进行尾插
//		Node* cur = (*ps);
//		while (cur->next)
//		{
//			cur = cur->next;
//		}
//		//到达最后一个节点处
//		cur->next = newNode;
//	}
//}
//
//void PrintQueue(QueueHead* ps)
//{
//	Node* cur = (*ps);
//	while (cur)
//	{
//		printf("%d->", cur->data);
//		Sleep(500);
//		cur = cur->next;
//	}
//
//	printf("NULL\n");
//}
//
//QueueElement PopQueue(QueueHead* ps)
//{
//	assert("ps != NULL");
//	int ret = (*ps)->data;
//	Node* temp = (*ps);
//	(*ps) = (*ps)->next;
//	free(temp);
//
//	return ret;
//}