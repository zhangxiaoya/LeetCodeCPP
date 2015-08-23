#include "solution103.h"

Solution103::Solution103()
{
}

vector<vector<int> > Solution103::zigzagLevelOrder(TreeNode *root)
{
    vector <vector<int> > res;
    if(root == NULL)
        return res;
    vector<int> layer;
    deque<TreeNode*> nodes;
    TreeNode* p;
    int father,child;
    bool flag = false;
    nodes.push_back(root);
    father = 0;
    child = 1;
    while(!nodes.empty())
    {
        p = nodes.front();
        nodes.pop_front();
        father ++;
        if(p->left != NULL)
            nodes.push_back(p->left);
        if(p->right != NULL)
            nodes.push_back(p->right);
        layer.push_back(p->val);
        if(father == child)
        {
            father = 0;
            child = nodes.size();
            if(flag)
            {
                std::reverse(layer.begin(),layer.end());
                res.push_back(layer);
                flag = false;
            }
            else
            {
                flag = true;
                res.push_back(layer);
            }
            layer.clear();
        }
    }
    return res;
}
