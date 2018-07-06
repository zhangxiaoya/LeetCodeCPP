
#include "Solution098.h"

bool Solution098::isValid(TreeNode *root, TreeNode *minNode, TreeNode *maxNode)
{
    if (root == nullptr)
        return true;
    if (maxNode != nullptr && root->val >= maxNode->val ||
        minNode != nullptr && root->val <= minNode->val)
        return false;

    return isValid(root->left, minNode, root) && isValid(root->right, root, maxNode);
}

bool Solution098::isValidBST(TreeNode *root)
{
    return isValid(root, nullptr, nullptr);
}