
#include "InorderTraverseTree.h"
#include <stack>

using std::stack;

vector<int> InorderTraverseTree::inorderTraversal(TreeNode *root)
{
    vector<int> res;
    if (root == nullptr)
        return res;

    TreeNode *p;
    stack<TreeNode *> s;
    s.push(root);
    p = root->left;

    while (!s.empty() || p != nullptr)
    {
        while (p != nullptr)
        {
            s.push(p);
            p = p->left;
        }
        p = s.top();
        s.pop();
        res.push_back(p->val);
        p = p->right;
    }
    return res;
}