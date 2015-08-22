#ifndef SOLUTION235_H
#define SOLUTION235_H

#define NULL nullptr

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution235
{
public:
    Solution235();
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
};

#endif // SOLUTION235_H
