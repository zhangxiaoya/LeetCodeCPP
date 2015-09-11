#ifndef SOLUTION94_H
#define SOLUTION94_H

#include <vector>
#include <stack>

#define NULL nullptr

using std::vector;
using std::stack;
 // Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution94
{
public:
    Solution94();
    vector<int> inorderTraversal(TreeNode* root);
};

#endif // SOLUTION94_H
