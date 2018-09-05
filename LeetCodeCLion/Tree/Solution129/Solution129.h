
#ifndef LEETCODECLION_SOLUTION129_H
#define LEETCODECLION_SOLUTION129_H


#include "../../CommonObjects/TreeNode.h"

class Solution129
{
    void help(TreeNode* node, int& allSum, int& curSum);
public:
    int sumNumbers(TreeNode* root);
};


#endif //LEETCODECLION_SOLUTION129_H
