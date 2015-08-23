#include "solution107.h"

Solution107::Solution107()
{
}

vector<vector<int> > Solution107::levelOrderBottom(TreeNode *root)
{
    vector <vector<int> > res;
    if(root == NULL)
        return res;
    vector<int> layer;
    deque<TreeNode*> nodes;
    TreeNode* p;
    int father,child;
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
            res.push_back(layer);
            layer.clear();
        }
    }
    std::reverse(res.begin(),res.end());
    return res;
}
