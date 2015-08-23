#include "solution101.h"

Solution101::Solution101()
{
}

bool rightequalleft(TreeNode* left,TreeNode* right)
{
    if(left == NULL && right == NULL)
        return true;
    else if(left == NULL || right == NULL)
        return false;
    if(left->val != right->val)
        return false;
    return rightequalleft(left->left,right->right) && rightequalleft(left->right,right->left);
}

bool Solution101::isSymmetric(TreeNode *root)
{
    if(root == NULL)
        return true;
    return rightequalleft(root->left,root->right);
}
