//
// Created by XiaoyaZhang on 2018/3/11.
//

#include "Solution437.h"

int Solution437::pathSum(TreeNode *root, int sum)
{
    if(root == NULL)
        return 0;
    return findPath(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
}

int Solution437::findPath(TreeNode *root, int sum)
{
    if(root == NULL)
        return 0;
    sum -= root->val;
    return (sum == 0) + findPath(root->left, sum) + findPath(root->right, sum);
}
