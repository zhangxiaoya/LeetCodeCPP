//
// Created by ynzha on 2018/3/8.
//

#include "Solution530.h"
#include "../../CommonMethod/BasicMacro.h"

int Solution530::getMinimumDifference(TreeNode *root)
{
    if(root == NULL)
        return result;
    if(root->left != NULL)
        getMinimumDifference(root->left);
    if(pre >= 0)
        result = min(result, root->val - pre);
    pre = root->val;
    if(root->right != NULL)
        getMinimumDifference(root->right);
    return result;
}
