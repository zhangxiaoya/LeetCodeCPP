#ifndef SOLUTION102_H
#define SOLUTION102_H

#define NULL nullptr
#include <vector>
#include <deque>

using std::vector;
using std::deque;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution102
{
public:
    Solution102();
    vector<vector<int>> levelOrder(TreeNode* root);
};

#endif // SOLUTION102_H
