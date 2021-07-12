#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//leetcode - 111. 二叉树的最小深度
//int minDepth(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    if (root->left == NULL && root->right == NULL)
//    {
//        return 1;
//    }
//
//    int MinDepth = INT_MAX;
//    if (root->left != NULL)
//    {
//        MinDepth = fmin(minDepth(root->left), MinDepth);
//    }
//
//    if (root->right != NULL)
//    {
//        MinDepth = fmin(minDepth(root->right), MinDepth);
//    }
//
//    return MinDepth + 1;
//}