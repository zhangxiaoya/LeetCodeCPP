
#ifndef LEETCODECLION_SOLUTION865_H
#define LEETCODECLION_SOLUTION865_H


#include "../../CommonObjects/TreeNode.h"

class Solution865
{
    int helper(TreeNode *root, TreeNode *&parent);
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root);
};


#endif //LEETCODECLION_SOLUTION865_H
