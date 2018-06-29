
#include "PathSumSolution.h"

bool PathSumSolution::preOrder(TreeNode *node, int curSum, int sum)
{
    if(node->left == nullptr && node->right == nullptr)
    {
        curSum += node->val;
        if(curSum == sum)
            return true;
        else
            return false;
    }
    else return (node->left != nullptr && preOrder(node->left, curSum + node->val, sum))
                ||(node->right != nullptr && preOrder(node->right, curSum + node->val, sum));
}

bool PathSumSolution::hasPathSum(TreeNode *root, int sum)
{
    if(root == nullptr)
        return false;
    return preOrder(root,0, sum);
}