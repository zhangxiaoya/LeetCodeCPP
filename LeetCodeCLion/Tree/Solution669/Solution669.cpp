
#include "Solution669.h"

TreeNode *Solution669::trimBST(TreeNode *root, int L, int R)
{
    TreeNode* t = nullptr;
    if(L> root->val)
        t = trimBST(root->right, L,R);
    else if(R < root->val)
        t = trimBST(root->left, L,R);
    else
    {
        t = root;
        TreeNode* p = t;
        while(p->left)
        {
            if(p->left->val >L)
                p = p->left;
            else
                p->left = p->left->right;
        }
        p = t;
        while (p->right)
        {
            if (p->right->val< R)
                p = p->right;
            else
                p->right = p->right->left;
        }
    }
    return t;
}