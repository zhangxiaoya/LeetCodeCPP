
#include "Solution637.h"
#include <queue>

using std::queue;

vector<double> Solution637::averageOfLevels(TreeNode *root)
{
    vector<double> res;
    if(root == nullptr)
        return res;
    queue<TreeNode*> q;
    q.push(root);
    vector<int> l;
    TreeNode* pivot = q.back();
    TreeNode* p;
    while(!q.empty())
    {
        p = q.front();
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        q.pop();
        l.push_back(p->val);
        if(p == pivot)
        {
            pivot = q.back();
            double sum = 0.0;
            for(auto a : l)
                sum += a;
            res.push_back(sum/ l.size());
            l.clear();
        }
    }
    return res;
}