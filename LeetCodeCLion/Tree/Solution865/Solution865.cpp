
#include "Solution865.h"

TreeNode *Solution865::subtreeWithAllDeepest(TreeNode *root)
{
    if (root == nullptr)
        return nullptr;
    TreeNode* lparent = root;
    TreeNode* rparent = root;
    int leftDepth =0;
    if(root->left)
        leftDepth = helper(root->left, lparent);
    int rightDepth =0;
    if(root->right)
        rightDepth = helper(root->right, rparent);

    if(rightDepth == leftDepth)
        return root;
    if(rightDepth > leftDepth)
        return rparent;
    else
        return lparent;
}

int Solution865::helper(TreeNode *root, TreeNode *&parent)
{
    if(root->right == nullptr && root->left == nullptr)
    {
        parent = root;
        return 1;
    }
    TreeNode* lparent = root;
    TreeNode* rparent = root;
    int ldepth =0;
    int rdepth =0;
    if(root->left)
        ldepth = helper(root->left, lparent);
    if(root->right)
        rdepth = helper(root->right, rparent);

    if(ldepth == rdepth)
    {
        parent = root;
        return ldepth+1;
    }
    else if(ldepth > rdepth)
    {
        parent = lparent;
        return ldepth +1;
    }
    else
    {
        parent = rparent;
        return rdepth +1;
    }
}