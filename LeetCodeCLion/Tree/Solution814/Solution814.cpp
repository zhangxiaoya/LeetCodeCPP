
#include "Solution814.h"

TreeNode *Solution814::pruneTree(TreeNode *root)
{
    if(root == nullptr)
        return nullptr;
    if(root->left != nullptr)
        root->left = pruneTree(root->left);
    if(root->right != nullptr)
        root->right = pruneTree(root->right);
    if(root->left == nullptr && root->right == nullptr && root->val == 0)
        return nullptr;
    return root;
}