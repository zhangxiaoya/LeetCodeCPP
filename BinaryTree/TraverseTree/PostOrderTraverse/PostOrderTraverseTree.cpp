
#include "PostOrderTraverseTree.h"

#include <map>
#include <stack>

using std::map;
using std::stack;

vector<int> PostOrderTraverseTree::postorderTraversal(TreeNode *root)
{
    vector<int> res;
    if (root == nullptr)
        return res;

    stack<MTreeNode> s;

    s.push(MTreeNode(root));
    TreeNode *p = root->left;

    while (!s.empty() || p != nullptr)
    {
        while (p != nullptr)
        {
            s.push(MTreeNode(p));
            p = p->left;
        }
        MTreeNode *pp = &s.top();
        if (pp->ifFisrt == false)
        {
            pp->ifFisrt = true;
            p = pp->node->right;
        }
        else
        {
            pp = &s.top();
            res.push_back(pp->node->val);
            s.pop();
        }
    }
    return res;
}