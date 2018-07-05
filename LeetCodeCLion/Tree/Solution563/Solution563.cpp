
#include "Solution563.h"

int Solution563::findTilt(TreeNode *root)
{
    int res = 0;
    sumSubTree(root,res);
    return res;
}

int Solution563::sumSubTree(TreeNode *root, int &res)
{
    if(root == nullptr)
        return 0;
    int sumleft = sumSubTree(root->left,res);
    int sumright = sumSubTree(root->right, res);
    res += abs(sumleft - sumright);
    return sumleft + sumright + root->val;
}