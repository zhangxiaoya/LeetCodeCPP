#include "solution105.h"

Solution105::Solution105()
{
}
TreeNode* Solution105::buildTree(vector<int> &preorder, vector<int> &inorder)
{
    int len = preorder.size();
    if(len < 1)
        return nullptr;
    if(len == 1)
        return new TreeNode(preorder[0]);
    return createTree(preorder,inorder,0,len-1,0,len-1);
}
TreeNode* Solution105::createTree(vector<int> &preorder, vector<int> &inorder, int begp, int endp, int bego, int endo)
{
    if(begp > endp)
        return nullptr;
    TreeNode* p = new TreeNode(preorder[begp]);
    int k = bego;
    while(preorder[begp] != inorder[k])
        k++;
    p->left = createTree(preorder,inorder,begp+1,begp + (k - bego),bego,k-1);
    p->right = createTree(preorder,inorder,begp + (k-bego+1),endp,k+1,endo);
    return p;
}
void Solution105::previsit(TreeNode *t)
{
    if(t==nullptr)
        return;
    cout<<t->val<<" ";
    previsit(t->left);
    previsit(t->right);
}
void Solution105::invisit(TreeNode *t)
{
    if(t == nullptr)
        return;
    invisit(t->left);
    cout<<t->val<<" ";
    invisit(t->right);
}
