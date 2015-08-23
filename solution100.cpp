#include "solution100.h"

Solution100::Solution100()
{
}

bool Solution100::isSameTree(TreeNode *p, TreeNode *q)
{
    if(p == NULL && q == NULL)
        return true;
    if(p == NULL || q == NULL)
        return false;
    if(p->val != q->val)
        return false;
    return isSameTree(p->left,q->left) &&  isSameTree(p->right,q->right);
}
