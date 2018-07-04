
#ifndef LEETCODECLION_SOLUTION863_H
#define LEETCODECLION_SOLUTION863_H

#include <vector>
#include <unordered_map>
#include "../../CommonObjects/TreeNode.h"

using std::vector;
using std::unordered_map;

class Solution863
{
private:
    void dfs(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parents);
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K);
};


#endif //LEETCODECLION_SOLUTION863_H
