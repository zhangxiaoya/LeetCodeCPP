//
// Created by XiaoyaZhang on 2018/3/10.
//

#include "Solution108.h"

TreeNode *Solution108::sortedArrayToBST(vector<int> &nums)
{
    if(nums.size() == 0)
        return nullptr;
    int mid = nums.size() / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    vector<int> left(nums.begin(), nums.begin() + mid);
    vector<int> right(nums.begin() + mid + 1, nums.end());
    root->left = sortedArrayToBST(left);
    root->right = sortedArrayToBST(right);
    return root;
}
