#include "solution236.h"

Solution236::Solution236()
{

}

bool GetPath(TreeNode* root,TreeNode* p,vector<TreeNode*>& path)
{
    if(root == NULL)
        return false;
    path.push_back(root);
    if(root == p)
        return true;

    if(!GetPath(root->left,p,path) && !GetPath(root->right,p,path))
    {
        path.pop_back();
        return false;
    }
}

TreeNode* GetLast(vector<TreeNode*> path1,vector<TreeNode*> path2)
{
    TreeNode* last;
    vector<TreeNode*>::iterator it1,it2;
    it1 = path1.begin();
    it2 = path2.begin();
    while(it1 != path1.end() && it2 != path2.end())
    {
        if(*it1 == *it2)
            last = *it1;
        it1++;
        it2++;
    }
    return last;
}

TreeNode* Solution236::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    vector<TreeNode*> path1,path2;
    GetPath(root,p,path1);
    GetPath(root,q,path2);
    return GetLast(path1,path2);
}
