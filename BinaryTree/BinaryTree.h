
#ifndef BINARYTREE_BINARYTREE_H
#define BINARYTREE_BINARYTREE_H

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


#endif //BINARYTREE_BINARYTREE_H
