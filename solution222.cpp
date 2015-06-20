#include "solution222.h"

Solution222::Solution222()
{
}
int Solution222::countNodes(TreeNode *root)
{
    if(root == nullptr)
        return 0;
    int ldepth=1,rdepth=1;
    for(TreeNode *p = root->left;p != nullptr;p = p->left)
        ldepth ++;
    for(TreeNode *p = root->right;p !=nullptr;p= p->right)
        rdepth ++;
    if(ldepth == rdepth)
        return (1<<ldepth) -1;
    else
        return countNodes(root->left) + countNodes(root->right) + 1;
}
