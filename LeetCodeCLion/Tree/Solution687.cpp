//
// Created by XiaoyaZhang on 2018/3/10.
//

#include "Solution687.h"
#include "../CommonMethod/Max.h"

int Solution687::longestUnivaluePath(TreeNode *root)
{
    if(root == NULL)
        return 0;
    int maxResult = 0;
    Helper(root, maxResult);
    return maxResult;
}

int Solution687::Helper(TreeNode *root, int &maxResult)
{
    int lenLeft = root->left ? Helper(root->left, maxResult) : 0;
    int lenRight = root->right ? Helper(root->right, maxResult) : 0;
    int LenLeftFromCur = root->left && root->val == root->left->val ? lenLeft + 1 : 0;
    int LenRightFromCur = root->right && root->val == root->right->val ? lenRight + 1 : 0;
    maxResult = Max(maxResult,LenLeftFromCur + LenRightFromCur);
    return Max(LenLeftFromCur, LenRightFromCur);
}
