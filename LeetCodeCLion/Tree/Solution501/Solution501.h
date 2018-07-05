
#ifndef LEETCODECLION_SOLUTION501_H
#define LEETCODECLION_SOLUTION501_H

#include "../../CommonObjects/TreeNode.h"
#include <vector>
#include <unordered_map>
using std::unordered_map;

using std::vector;
class Solution501
{
    int Inorder(TreeNode *root, unordered_map<int, int> &counter);
public:
    vector<int> findMode(TreeNode* root);
};


#endif //LEETCODECLION_SOLUTION501_H
