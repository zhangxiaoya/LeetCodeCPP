#include "solution235.h"

Solution235::Solution235()
{

}

TreeNode* Solution235::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if(root == NULL || p == NULL || q == NULL)
        return root;
    TreeNode* k = root;
//    if(p->val > q->val)
//    {
//        int t = p->val;
//        p->val = q->val;
//        q->val = t;
//    }
    while((k->val > p->val && k->val > q->val) || ((k->val < p->val && k->val < q->val)))
    {
        if(k->val > p->val)
            k = k->left;
        else
            k =k->right;
    }
    return k;
}
