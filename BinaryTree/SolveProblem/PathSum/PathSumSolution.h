
#ifndef BINARYTREE_PATHSUMSOLUTION_H
#define BINARYTREE_PATHSUMSOLUTION_H


#include "../../BinaryTree.h"

class PathSumSolution
{
    bool preOrder(TreeNode* node, int curSum, int sum);

public:
    bool hasPathSum(TreeNode* root, int sum);
};


#endif //BINARYTREE_PATHSUMSOLUTION_H
