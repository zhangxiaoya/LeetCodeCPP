
#ifndef LEETCODECLION_SOLUTION508_H
#define LEETCODECLION_SOLUTION508_H

#include <vector>
#include <unordered_map>
#include "../../CommonObjects/TreeNode.h"

using std::vector;
using std::unordered_map;

class Solution508
{
    void postOrder(TreeNode *root, unordered_map<int, int> &counter, int &maxCount);
public:
    vector<int> findFrequentTreeSum(TreeNode* root);
};


#endif //LEETCODECLION_SOLUTION508_H
