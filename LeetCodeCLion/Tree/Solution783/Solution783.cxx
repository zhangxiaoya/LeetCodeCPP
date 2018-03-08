//
// Created by ynzha on 2018/3/8.
//
#include "Solution783.h"
#include "../../CommonMethod/BasicMacro.h"

int Solution783::minDiffInBST(TreeNode *root)
{
    if(root == NULL)
        return result;
    if(root->left != NULL)
        minDiffInBST(root->left);
    if(pre > 0)
        result = min(result, root->val - pre);
    pre = root->val;

    if(root->right != NULL)
        minDiffInBST(root->right);
    return  result;
}