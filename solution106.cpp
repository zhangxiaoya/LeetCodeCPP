#include "solution106.h"
#include <iostream>

Solution106::Solution106()
{
}
TreeNode* Solution106::buildTree(vector<int> &inorder, vector<int> &postorder)
{
    int len = inorder.size();
    if(len < 1)
        return NULL;
    if(len == 1)
        return new TreeNode(inorder[0]);
    return createTree(inorder,postorder,0,len-1,0,len-1);
}
TreeNode* Solution106::createTree(vector<int> &inorder, vector<int> &postorder, int bego, int endo, int begp, int endp)
{
    if(bego > endo)
        return NULL;
    TreeNode *p = new TreeNode(postorder[endp]);
    int k = bego;
    while(inorder[k] != postorder[endp])
        ++k;
    p->left = createTree(inorder,postorder,bego,k-1,begp,endp-(endo-k)-1);
    p->right = createTree(inorder,postorder,k+1,endo,endp-(endo-k),endp-1);
    return p;
}
void Solution106::invisit(TreeNode *t)
{
    if(t==nullptr)
        return;
    invisit(t->left);
    cout<<t->val<<" ";
    invisit(t->right);
}
void Solution106::postvisit(TreeNode *t)
{
    if(t == nullptr)
        return;
    postvisit(t->left);
    postvisit(t->right);
    cout<<t->val<<" ";
}
