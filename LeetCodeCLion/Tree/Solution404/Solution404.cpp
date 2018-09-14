
#include "Solution404.h"
#include <stack>
using std::stack;

int Solution404::sumOfLeftLeaves(TreeNode *root)
{
    int sum = 0;
    preOrder(root, sum);
    return sum;
}

void Solution404::preOrder(TreeNode *root, int &sum)
{
    if(root == nullptr || root->left == root->right)
        return;
    if(root->left != nullptr && root->left->right == root->left->left)
        sum += root->left->val;
    if(root->left)
        preOrder(root->left, sum);
    if(root->right)
        preOrder(root->right, sum);
}
