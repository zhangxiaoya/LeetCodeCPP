
#include "SymmetricTreeSolution.h"

bool SymmetricTreeSolution::isEqual(TreeNode *left, TreeNode *right)
{
    if(left == nullptr && right == nullptr)
        return true;
    if(left!= nullptr && right != nullptr)
    {
        return right->val == left->val && isEqual(left->left, right->right) && isEqual(left->right, right->left);
    }
    return false;
}

bool SymmetricTreeSolution::isSymmetric(TreeNode *root)
{
    if(root == nullptr)
        return true;
    return isEqual(root->left, root->right);
}