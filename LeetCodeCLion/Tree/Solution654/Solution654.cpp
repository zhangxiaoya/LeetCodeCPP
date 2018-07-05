
#include "Solution654.h"
#include <stack>
using std::stack;

TreeNode *Solution654::constructMaximumBinaryTree(vector<int> &nums)
{
    stack<TreeNode*> s;
    for(auto num : nums)
    {
        TreeNode* cur = new TreeNode(num);
        while (!s.empty() && s.top()->val < cur->val)
        {
            cur->left =  s.top();
            s.pop();
        }
        if(!s.empty())
            s.top() ->right = cur;
        s.push(cur);
    }
    TreeNode* root = nullptr;
    while(!s.empty())
    {
        root = s.top();
        s.pop();
    }
    return root;
}