
#include "Solution701.h"

TreeNode *Solution701::insertIntoBST(TreeNode *root, int val)
{
    if (root == nullptr)
    {
        root = new TreeNode(val);
        return root;
    }
    auto p = root;
    TreeNode *pp;
    if (p->val > val)
        pp = p->left;
    else
        pp = p->right;
    while (pp)
    {
        p = pp;
        if (p->val > val)
            pp = p->left;
        else
            pp = p->right;
    }
    if (p->val > val)
        p->left = new TreeNode(val);
    else
        p->right = new TreeNode(val);
    return root;
}