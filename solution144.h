#ifndef SOLUTION144_H
#define SOLUTION144_H

#define NULL nullptr

#include <vector>
#include <stack>
using std::vector;
using std::stack;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution144
{
public:
    Solution144();
    vector<int> preorderTraversal(TreeNode* root);
};

#endif // SOLUTION144_H
