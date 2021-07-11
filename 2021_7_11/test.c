#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//清华大学计算机考研复试 - 二叉树遍历
//定义树的存储数据类型
//typedef char TreeElementType;
//
//typedef struct BTNode
//{
//    TreeElementType val; //数据
//    struct BTNode* left; //左子树
//    struct BTNode* right; //右子树
//}BTNode;
//
//BTNode* BuildTree(char* str, int* i)
//{
//    if (str[*i] == '#')
//    {
//        (*i)++;
//        return NULL;
//    }
//    BTNode* root = (BTNode*)malloc(sizeof(BTNode));
//    if (root == NULL)
//    {
//        printf("malloc失败");
//        exit(-1);
//    }
//    root->val = str[*i];
//    (*i)++;
//    root->left = BuildTree(str, i);
//    root->right = BuildTree(str, i);
//
//    return root;
//}
//
//void InOrder(BTNode* root)
//{
//    if (!root)
//    {
//        return;
//    }
//
//    InOrder(root->left);
//    printf("%c ", root->val);
//    InOrder(root->right);
//}
//
//void DestoryTree(BTNode* root)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    DestoryTree(root->left);
//    DestoryTree(root->right);
//    free(root);
//    root->left = NULL;
//    root->right = NULL;
//}
//
//int main()
//{
//    char str[101];
//    gets(str);
//
//    int i = 0;
//    BTNode* root = BuildTree(str, &i);
//    InOrder(root);
//
//    return 0;
//}

//leetcode - 100. 相同的树
//int NodeSize(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    return NodeSize(root->left) + NodeSize(root->right) + 1;
//}
//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (q == NULL && p == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if ((isSameTree(p->left, q->left)) && (isSameTree(p->right, q->right)) && (p->val == q->val))
//    {
//        return true;
//    }
//
//    return false;
//}

//leetcode - 101. 对称二叉树
//int NodeSize(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    return NodeSize(root->left) + NodeSize(root->right) + 1;
//}
//
//bool _isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if (_isSameTree(p->left, q->left) && _isSameTree(p->right, q->right) && (p->val == q->val))
//    {
//        return true;
//    }
//    return false;
//}
//
//void reverseTree(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    struct TreeNode* temp = root->left;
//    root->left = root->right;
//    root->right = temp;
//    reverseTree(root->left);
//    reverseTree(root->right);
//}
//
//bool isSymmetric(struct TreeNode* root) {
//
//    reverseTree(root->left);
//    if (_isSameTree(root->left, root->right))
//    {
//        return true;
//    }
//
//    return false;
//}