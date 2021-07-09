#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//typedef struct
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA;
//int main()
//{
//	//int a[2][] = { {1,2},{3,4} };    //省略列是不行的
//	//int ret = sizeof(AA);
//	//printf("ret = %d\n", ret);
//	//int a = 10;
//	//a += a *= a -= a / 3;
//	//printf("a = %d\n", a);
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	if (i < 1)
//	//		continue;
//	//	if (5 == i)
//	//		break;
//	//	i++;
//	//}
//	
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char str[40] = { 0 };
//	gets(str);
//	int len = strlen(str);
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		if (str[i] == ' ')
//		{
//			//处理
//			int j = i;
//			//找到字符串的最末未
//			while (str[j] != '\0')
//			{
//				j++;
//			}
//			j--;
//			//开始移位
//			while (j != i)
//			{
//				str[j + 2] = str[j];
//				j--;
//			}
//			//追加%20
//			str[j++] = '%';
//			str[j++] = '2';
//			str[j++] = '0';
//		}
//		i++;
//	}
//
//	printf("%s\n", str);
//	
//	return 0;
//}

//long long fib(int x)
//{
//	if (x < 3)
//	{
//		//前两项值为1
//		return 1;
//	}
//	long long* dp = (long long*)malloc((x + 1) * sizeof(long long));
//	dp[0] = -1;
//	dp[1] = 1;
//	dp[2] = 1;
//	int i = 0;
//	for (i = 3; i <= x; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//
//	return dp[x];
//}
//
//void test()
//{
//	long long ret =  fib(10);
//	printf("%lld\n", ret);
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main(void)
//{
//	char acHello = "hello\0world";
//	char acNew[15] = { 0 };
//	strcpy(acNew, acHello);
//
//	printf("%d %d\n", strlen(acNew), sizeof(acHello));
//	return 0;
//}

//leetcode - 94. 二叉树的中序遍历
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
//void InOrder(struct TreeNode* root, int* returnSize, int* res)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    InOrder(root->left, returnSize, res);
//    res[(*returnSize)] = root->val;
//    *returnSize = *returnSize + 1;
//    InOrder(root->right, returnSize, res);
//}
//
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//    int* res = malloc(sizeof(int) * 501);
//    *returnSize = 0;
//    InOrder(root, returnSize, res);
//    return res;
//}

//leetcode - 144. 二叉树的前序遍历
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
//void PreOrder(struct TreeNode* root, int* returnSize, int* res)
//{
//    if (!root)
//    {
//        return;
//    }
//
//    res[*returnSize] = root->val;
//    *returnSize = *returnSize + 1;
//    PreOrder(root->left, returnSize, res);
//    PreOrder(root->right, returnSize, res);
//}
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    int* res = (int*)malloc(sizeof(int) * 100);
//    *returnSize = 0;
//    PreOrder(root, returnSize, res);
//    return res;
//}