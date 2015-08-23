#ifndef SOLUTION107_H
#define SOLUTION107_H

#define NULL nullptr
#include <vector>
#include <deque>
#include <algorithm>

using std::vector;
using std::deque;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution107
{
public:
    Solution107();
    vector<vector<int>> levelOrderBottom(TreeNode* root);
};

#endif // SOLUTION107_H
