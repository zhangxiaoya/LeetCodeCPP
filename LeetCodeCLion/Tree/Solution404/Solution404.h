
#ifndef LEETCODECLION_SOLUTION404_H
#define LEETCODECLION_SOLUTION404_H


#include "../../CommonObjects/TreeNode.h"

class Solution404
{
    void preOrder(TreeNode* root, int& sum);
public:
    int sumOfLeftLeaves(TreeNode* root);
};


#endif //LEETCODECLION_SOLUTION404_H
