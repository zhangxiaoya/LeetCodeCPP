
#include "Solution797.h"

vector<vector<int>> Solution797::allPathsSourceTarget(vector<vector<int>> &graph)
{
    vector<vector<int>> res;
    vector<int> path;
    dfs(graph, res,path, 0);
    return res;
}

void Solution797::dfs(const vector<vector<int>> &graph, vector<vector<int>> &res, vector<int> path, int cur)
{
    path.push_back(cur);
    if(cur == graph.size() -1)
        res.push_back(path);
    else
    {
        for(auto c: graph[cur])
            dfs(graph,res,path,c);
    }
}
