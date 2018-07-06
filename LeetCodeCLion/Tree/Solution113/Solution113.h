
#ifndef LEETCODECLION_SOLUTION113_H
#define LEETCODECLION_SOLUTION113_H


#include "../../CommonObjects/TreeNode.h"
#include <vector>
using std::vector;

class Solution113
{
private:
    void findPath(TreeNode *root, vector<int> &path, vector<vector<int> > &paths, int sum);
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum);
};


#endif //LEETCODECLION_SOLUTION113_H
