
#include "Solution515.h"
#include <queue>
#include <limits>
using std::queue;

vector<int> Solution515::largestValues(TreeNode *root)
{
    vector<int> res;
    if(root == nullptr)
        return res;
    queue<TreeNode*> q;
    q.push(root);
    TreeNode* pivot = q.back();
    int rowMax = q.front()->val;
    while(q.empty() == false)
    {
        TreeNode* p = q.front();
        q.pop();
        if(rowMax < p->val)
            rowMax = p->val;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        if(p == pivot)
        {
            pivot = q.back();
            res.push_back(rowMax);
            rowMax = std::numeric_limits<int>::min();
        }
    }
    return res;
}
