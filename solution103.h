#ifndef SOLUTION103_H
#define SOLUTION103_H

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
class Solution103
{
public:
    Solution103();
    vector<vector<int> > zigzagLevelOrder(TreeNode* root);
};

#endif // SOLUTION103_H
