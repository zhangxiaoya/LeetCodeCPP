
#include "Solution589.h"

#include <stack>
using std::stack;

vector<int> Solution589::preorder(Node *root)
{
    vector<int> res;
    stack<Node*> s;
    s.push(root);
    while (!s.empty())
    {
        auto p = s.top();
        s.pop();
        res.push_back(p->val);
        for(int i = p->children.size()-1; i >=0; --i)
            s.push(p->children[i]);
    }
    return res;
}