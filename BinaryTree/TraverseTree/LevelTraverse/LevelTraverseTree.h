
#ifndef BINARYTREE_LEVELTRAVERSETREE_H
#define BINARYTREE_LEVELTRAVERSETREE_H

#include "../../BinaryTree.h"
#include <vector>
using std::vector;

class LevelTraverseTree
{
public:
    vector<vector<int>> levelOrder(TreeNode* root);
};


#endif //BINARYTREE_LEVELTRAVERSETREE_H
