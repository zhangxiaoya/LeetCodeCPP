#ifndef SOLUTION101_H
#define SOLUTION101_H

#define NULL nullptr

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution101
{
public:
    Solution101();
    bool isSymmetric(TreeNode* root);
};

#endif // SOLUTION101_H
