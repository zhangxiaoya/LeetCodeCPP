#ifndef SOLUTION110_H
#define SOLUTION110_H

#define NULL nullptr
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution110
{
public:
    Solution110();
    int max(int a,int b);
    int abs(int a);
    int getDepth(TreeNode* root);
    bool isBalanced(TreeNode* root);
};

#endif // SOLUTION110_H
