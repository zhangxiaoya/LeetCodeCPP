
#include "Solution230.h"
#include <stack>
using std::stack;

int Solution230::kthSmallest(TreeNode *root, int k)
{
    stack<TreeNode*> s;
    TreeNode* p = root->left;
    s.push(root);
    while (!s.empty() || p)
    {
        while(p)
        {
            s.push(p);
            p = p->left;
        }
        p = s.top();
        s.pop();
        k--;
        if(k == 0)
            return p->val;
        p = p->right;
    }
}