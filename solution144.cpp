#include "solution144.h"

Solution144::Solution144()
{

}

vector<int> Solution144::preorderTraversal(TreeNode *root)
{
    vector<int> res;
    if(root == NULL)
        return res;
    stack<TreeNode*> s;
    TreeNode* p = root;
    while(p != NULL || !s.empty())
    {
        while(p != NULL)
        {
            s.push(p);
            res.push_back(p->val);
            p = p->left;
        }
        if(!s.empty())
        {
            p = s.top();
            s.pop();
            p = p->right;
        }
    }
    return res;
}
