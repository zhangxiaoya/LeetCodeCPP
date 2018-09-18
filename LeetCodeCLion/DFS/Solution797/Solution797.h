
#ifndef LEETCODECLION_SOLUTION797_H
#define LEETCODECLION_SOLUTION797_H

#include <vector>
using std::vector;

class Solution797
{
    void dfs(const vector<vector<int>> &graph, vector<vector<int>> &res, vector<int> path, int cur);

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph);
};


#endif //LEETCODECLION_SOLUTION797_H
