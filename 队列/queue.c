//#define _CRT_SECURE_NO_WARNINGS 1
//#include "queue.h"
//void InitQueue(QueueHead* ps)
//{
//	//����ͷ�ÿ�
//	(*ps) = NULL;
//}
//
//Node* GetNewNode()
//{
//	//mallocһ���ڵ�
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	return newNode;
//}
//
//void PushQueue(QueueHead* ps, QueueElement x)
//{
//	//�ȸ�һ���ڵ�װԪ��
//	Node* newNode = GetNewNode();
//	newNode->data = x;
//	newNode->next = NULL;
//	//���ڵ�����β
//	if ((*ps) == NULL)
//	{
//		//˵��newNodeͷ���
//		(*ps) = newNode;
//	}
//	else
//	{
//		//���������һ���ڵ㣬����β��
//		Node* cur = (*ps);
//		while (cur->next)
//		{
//			cur = cur->next;
//		}
//		//�������һ���ڵ㴦
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