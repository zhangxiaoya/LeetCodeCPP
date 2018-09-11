
#include "Solution700.h"

TreeNode *Solution700::searchBST(TreeNode *root, int val)
{
    auto p = root;
    while (p)
    {
        if (p->val == val)
            return p;
        if (p->val > val)
            p = p->left;
        else
            p = p->right;
    }
    return nullptr;
}