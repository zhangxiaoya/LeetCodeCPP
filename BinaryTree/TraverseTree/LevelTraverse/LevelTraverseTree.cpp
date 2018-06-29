
#include "LevelTraverseTree.h"

#include <queue>
using std::queue;

vector<vector<int>> LevelTraverseTree::levelOrder(TreeNode *root)
{
    vector<vector<int>> res;
    if(root == nullptr)
        return res;
    queue<TreeNode*> q;
    q.push(root);
    auto pivot = q.back();
    vector<int> level;
    while(!q.empty())
    {
        auto p= q.front();
        q.pop();
        level.push_back(p->val);
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        if(p == pivot)
        {
            pivot = q.back();
            res.push_back(level);
            level.clear();
        }
    }
    return res;
}