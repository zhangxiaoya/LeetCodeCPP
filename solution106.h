#ifndef SOLUTION106_H
#define SOLUTION106_H
#define NULL nullptr
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution106
{
public:
    Solution106();
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
    TreeNode* createTree(vector<int>& inorder, vector<int>& postorder,int bego,int endo,int begp,int endp);
    void invisit(TreeNode *t);
    void postvisit(TreeNode *t);
};

#endif // SOLUTION106_H
