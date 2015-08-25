#include "solution145.h"

Solution145::Solution145()
{

}

vector<int> Solution145::postorderTraversal(TreeNode *root)
{
    vector<int> res;
    if(root == NULL)
        return res;
    XTreeNode x;
    TreeNode* p;
    p = root;
    stack<XTreeNode> s;
    do
    {
        while (p!=NULL)
        {
            x.ptr = p;
            x.tag = L;
            s.push(x);
            p = p->left;
        }
        while(!s.empty() && s.top().tag == R)
        {
            x = s.top();
            s.pop();
            p = x.ptr;
            res.push_back(p->val);
        }
        if(!s.empty())
        {
            x = s.top();
            p = x.ptr;
            p = p->right;
            s.top().tag = R;
        }
    }while(!s.empty());
    return res;
}
