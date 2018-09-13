
#include "Solution671.h"
#include <queue>

using std::queue;

int Solution671::findWithValue(TreeNode *root, int value)
{
    if(root == nullptr)
        return -1;
    if(root->val != value)
        return root->val;
    int left =  findWithValue(root->left, value);
    int right = findWithValue(root->right, value);

    if(left == -1)
        return right;
    if(right == -1)
        return left;
    return left < right ? left : right;
}

int Solution671::findSecondMinimumValue(TreeNode *root)
{
    return findWithValue(root, root->val);
}
