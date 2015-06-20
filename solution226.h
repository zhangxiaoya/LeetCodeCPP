#ifndef SOLUTION226_H
#define SOLUTION226_H

#define NULL nullptr
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution226
{
public:
    Solution226();
    TreeNode* invertTree(TreeNode* root);
};

#endif // SOLUTION226_H
