#ifndef SOLUTION145_H
#define SOLUTION145_H

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
typedef enum {L,R} TagType;
struct XTreeNode{
    TreeNode* ptr;
    TagType tag;
};

class Solution145
{
public:
    Solution145();
    vector<int> postorderTraversal(TreeNode* root);
};

#endif // SOLUTION145_H
