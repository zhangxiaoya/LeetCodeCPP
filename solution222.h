#ifndef SOLUTION222_H
#define SOLUTION222_H

#define NULL nullptr
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution222
{
public:
    Solution222();
    int countNodes(TreeNode* root);
};

#endif // SOLUTION222_H
