
#include "Solution429.h"

#include <queue>
using std::queue;

vector<vector<int>> Solution429::levelOrder(Node *root)
{
    vector<vector<int>> res;
    if(root == nullptr)
        return res;
    queue<Node*> que;
    que.push(root);
    auto pivot = que.back();
    vector<int> level;
    while(que.size() > 0)
    {
        auto p = que.front();
        que.pop();
        level.push_back(p->val);
        for(int i = 0; i< p->children.size();++i)
            que.push(p->children[i]);
        if(p == pivot)
        {
            res.push_back(level);
            pivot = que.back();
            level.clear();
        }
    }
    return res;
}