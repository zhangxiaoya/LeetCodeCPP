
#include "Solution538.h"

TreeNode *Solution538::convertBST(TreeNode *root)
{
    curSum = 0;
    rightInorder(root);
    return root;
}

void Solution538::rightInorder(TreeNode *root)
{
    if (root == nullptr)
        return;
    if(root->right)
        rightInorder(root->right);
    curSum += root->val;
    root->val = curSum;
    if(root->left)
        rightInorder(root->left);
}
