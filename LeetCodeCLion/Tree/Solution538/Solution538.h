
#ifndef LEETCODECLION_SOLUTION538_H
#define LEETCODECLION_SOLUTION538_H


#include "../../CommonObjects/TreeNode.h"

class Solution538
{
private:
    int curSum;
    void rightInorder(TreeNode* root);
public:
    TreeNode* convertBST(TreeNode* root);
};


#endif //LEETCODECLION_SOLUTION538_H
