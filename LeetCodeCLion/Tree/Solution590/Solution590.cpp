
#include "Solution590.h"
#include <stack>
#include <algorithm>
using std::stack;

vector<int> Solution590::postorder(Node *root)
{
    vector<int> res;
    if(root == nullptr)
        return res;
    stack<Node*> s;
    s.push(root);
    while(!s.empty())
    {
        auto p = s.top();
        s.pop();
        for(auto a : p->children)
            s.push(a);
        res.push_back(p->val);
    }
    std::reverse(res.begin(), res.end());
    return res;
}