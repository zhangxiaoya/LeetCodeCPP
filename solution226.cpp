#include "solution226.h"

Solution226::Solution226()
{
}
TreeNode* Solution226::invertTree(TreeNode *root)
{
    if(root == nullptr)
        return nullptr;
    if(root->left == nullptr && root->right == nullptr)
        return root;
    TreeNode * temp = root->left;
    root->left = root->right;
    root->right = temp;

    if(root->left)
        root->left = invertTree(root->left);
    if(root->right)
        root->right = invertTree(root->right);

    return root;
}
