
#include <algorithm>
#include "Solution543.h"

int Solution543::maxDepth(TreeNode *root) {
    if(root == nullptr)
        return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    max = std::max(max, left+ right);
    return std::max(left, right) + 1;
}

int Solution543::diameterOfBinaryTree(TreeNode *root)
{
    max = 0;
    maxDepth(root);
    return max;
}