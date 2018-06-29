
#include "PreTraverseTree.h"

#include <stack>
using std::stack;

vector<int> PreTraverseTree::preorderTraversal(TreeNode *root)
{
    vector<int> res;
    if (root == nullptr)
        return res;
    stack<TreeNode*> s;
    TreeNode* p = root->left;
    s.push(root);
    res.push_back(root->val);

    while(!s.empty() || p != nullptr)
    {
        while(p != nullptr)
        {
            s.push(p);
            res.push_back(p->val);
            p = p->left;
        }
        p = s.top()->right;
        s.pop();
    }
    return res;
}