#ifndef SOLUTION104_H
#define SOLUTION104_H


#define NULL nullptr

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution104
{
public:
    Solution104();
    int maxDepth(TreeNode* root);
};

#endif // SOLUTION104_H
