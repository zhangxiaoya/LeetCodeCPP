//
// Created by ynzha on 2018/3/9.
//

#include "Solution112.h"

bool Solution112::hasPathSum(TreeNode *root, int sum)
{
    if(root == NULL)
        return false;
    if(root->right == root->left && root->val == sum)
        return true;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}
