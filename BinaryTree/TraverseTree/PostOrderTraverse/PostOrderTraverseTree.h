
#ifndef BINARYTREE_POSTORDERTRAVERSETREE_H
#define BINARYTREE_POSTORDERTRAVERSETREE_H

#include "../../BinaryTree.h"
#include <vector>

using std::vector;

class PostOrderTraverseTree
{
    class MTreeNode
    {
    public:
        MTreeNode(TreeNode *n, bool first = false) : node(n), ifFisrt(first) {};
        TreeNode *node;
        bool ifFisrt;
    };

public:
    vector<int> postorderTraversal(TreeNode *root);
};


#endif //BINARYTREE_POSTORDERTRAVERSETREE_H
