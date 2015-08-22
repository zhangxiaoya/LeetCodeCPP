#include "solution257.h"

Solution257::Solution257()
{
}

vector<string> Solution257::binaryTreePaths(TreeNode *root)
{
    vector<string> res;
    vector<int> path;
    if(root == NULL)
        return res;
    TreeNode* p = root;
    stacknode x;
    stack<stacknode> s;

    do
    {
        while(p)
        {
            x.ptr = p;
            x.tag = L;
            s.push(x);
            path.push_back(p->val);
            p = p->left;
        }
        while(!s.empty() && s.top().tag == R)
        {
            x = s.top();
            s.pop();
            p = x.ptr;

            if(p->right == NULL && p->left == NULL)
            {
                string t;
                for(int i =0;i<path.size();i++)
                {
                    if(i == 0)
                        t += std::to_string(path[i]);
                    else
                    {
                        t += "->";
                        t += std::to_string(path[i]);
                    }
                }
                res.push_back(t);
            }
            path.erase(path.end()-1);
        }
        if(!s.empty())
        {
            x = s.top();
            p = x.ptr;
            s.top().tag = R;
            p = p->right;
        }


    }while(!s.empty());
    return res;
}
