
#include "Solution129.h"
#include <stack>
#include <vector>

using std::stack;
using std::vector;

void Solution129::help(TreeNode *node, int &allSum, int &curSum)
{
    if(node->right == node->left && node->left == nullptr)
    {
        allSum += curSum;
        return;
    }
    if(node->left != nullptr)
    {
        curSum *= 10;
        curSum += node->left->val;
        help(node->left, allSum,curSum);
        curSum /= 10;
    }
    if(node->right != nullptr)
    {
        curSum *= 10;
        curSum += node->right->val;
        help(node->right, allSum, curSum);
        curSum /= 10;
    }
}

int Solution129::sumNumbers(TreeNode *root)
{
    int allSum = 0;
    int curSum = 0;
    if(root != nullptr)
    {
        curSum = root->val;
        help(root, allSum,curSum);
    }
    return allSum;
}