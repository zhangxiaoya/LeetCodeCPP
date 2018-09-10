
#ifndef LEETCODECLION_SOLUTION095_H
#define LEETCODECLION_SOLUTION095_H

#include <vector>
#include "../../CommonObjects/TreeNode.h"

using std::vector;

class Solution095
{
    vector<TreeNode*> helper(int head, int end);
public:
    vector<TreeNode*> generateTrees(int n);
};


#endif //LEETCODECLION_SOLUTION095_H
