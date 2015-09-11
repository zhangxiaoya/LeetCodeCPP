#include "solution94.h"

Solution94::Solution94()
{

}

vector<int> Solution94::inorderTraversal(TreeNode *root)
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
            p = p->left;
        }
        if(!s.empty())
        {
            p = s.top();
            s.pop();
            res.push_back(p->val);
            p = p->right;
        }
    }
    return res;
}
