
#include "Solution572.h"

bool Solution572::isSubtree(TreeNode *s, TreeNode *t)
{
    if(s == nullptr && t == nullptr)
        return true;
    if(s == nullptr ||t == nullptr)
        return false;
    depth(s, depth(t, -1));

    for(auto node:nodes)
    {
        if(identical(node, t))
            return true;
    }
}

int Solution572::depth(TreeNode *root, int d)
{
    if(root == nullptr)
        return -1;
    int curD = std::max(depth(root->left,d), depth(root->right,d)) + 1;
    if(curD == d)
        nodes.push_back(root);
    return curD;
}

bool Solution572::identical(TreeNode *s, TreeNode *t)
{
    if(s == nullptr && t == nullptr) return true;
    if(s == nullptr || t == nullptr || s->val != t->val)
        return false;

    return identical(s->left, t->left) && identical(s->right, t->right);
}
