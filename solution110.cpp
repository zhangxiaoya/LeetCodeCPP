#include "solution110.h"

Solution110::Solution110()
{
}
int Solution110::abs(int a)
{
    if(a<0)
        a *= -1;
    return a;
}
int Solution110::max(int a,int b)
{
    return a>b?a:b;
}

int Solution110::getDepth(TreeNode* root)
{
    if(root == NULL)
        return 0;
    return max(getDepth(root->left),getDepth(root->right)) + 1;
}

bool Solution110::isBalanced(TreeNode *root)
{
    if(root == NULL)
        return true;
    int ldepth = getDepth(root->left);
    int rdepth = getDepth(root->right);
    if(abs(ldepth - rdepth) > 1)
        return false;
    return isBalanced(root->left) && isBalanced(root->right);
}
