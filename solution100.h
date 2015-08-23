#ifndef SOLUTION100_H
#define SOLUTION100_H

#define NULL nullptr

//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution100
{
public:
    Solution100();
    bool isSameTree(TreeNode* p, TreeNode* q);
};

#endif // SOLUTION100_H
