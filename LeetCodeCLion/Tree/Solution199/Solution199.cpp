
#include "Solution199.h"
#include <queue>
using std::queue;

vector<int> Solution199::rightSideView(TreeNode *root)
{
    vector<int> res;
    if(root == nullptr)
        return res;
    queue<TreeNode*> q;
    q.push(root);
    TreeNode* pivot = q.back();
    res.push_back(pivot->val);

    while(q.empty() == false)
    {
        TreeNode* p = q.front();
        q.pop();
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        if(p == pivot && !q.empty())
        {
            pivot = q.back();
            res.push_back(pivot->val);
        }
    }
    return res;
}
