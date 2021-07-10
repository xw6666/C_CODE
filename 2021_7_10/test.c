#define _CRT_SECURE_NO_WARNINGS 1

//leetcode - 104. 二叉树的最大深度
//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
//}

//leetcode - 110. 平衡二叉树
//int TreeDeep(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return fmax(TreeDeep(root->left), TreeDeep(root->right)) + 1;
//    }
//    // return fmax(TreeDeep(root->left), TreeDeep(root->right)) + 1;
//}
//
//bool isBalanced(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    else
//    {
//        return fabs(TreeDeep(root->left) - TreeDeep(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
//    }
//}