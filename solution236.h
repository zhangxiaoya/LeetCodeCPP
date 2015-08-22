#ifndef SOLUTION236_H
#define SOLUTION236_H

#define NULL nullptr

#include <vector>
using std::vector;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution236
{
public:
    Solution236();
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
};

#endif // SOLUTION236_H
