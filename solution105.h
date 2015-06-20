#ifndef SOLUTION105_H
#define SOLUTION105_H
#define NULL nullptr
#include <iostream>
#include <vector>
//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
using namespace std;
class Solution105
{
public:
    Solution105();
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
    TreeNode* createTree(vector<int>& preorder, vector<int>& inorder,int begp,int endp,int bego,int endo);
    void previsit(TreeNode* t);
    void invisit(TreeNode* t);
};

#endif // SOLUTION105_H
