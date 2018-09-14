
#ifndef LEETCODECLION_SOLUTION572_H
#define LEETCODECLION_SOLUTION572_H

#include <vector>
#include "../../CommonObjects/TreeNode.h"
using std::vector;

class Solution572
{
private:
    vector<TreeNode*> nodes;
    int depth(TreeNode* root, int d);
    bool identical(TreeNode* s, TreeNode* t);
public:
    bool isSubtree(TreeNode* s, TreeNode* t);
};


#endif //LEETCODECLION_SOLUTION572_H
