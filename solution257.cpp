#include "solution257.h"

Solution257::Solution257()
{
}

vector<string> Solution257::binaryTreePaths(TreeNode *root)
{
    stack<TreeNode*> s;
    vector<string> res;
    vector<int> path;
    if(root = NULL)
        return res;
    TreeNode* p = root;
    while(p || !s.empty())
    {
        while(p)
        {
            s.push(p);
            path.push_back(p->val);
            p =p->left;
        }
        if(!s.empty())
        {
            p =s.top();
            s.pop();

            if(p->right == NULL)
            {
                string t;
                for(int i =0;i<path.size();i++)
                {
                    if(i == 0)
                        t += path[i]+'0';
                    else
                        t += string("->" + path[i]+'0');
                }
                res.push_back(t);
            }
            path.erase(path.end()-1);
            p = p->right;
        }
    }
    return res;
}
