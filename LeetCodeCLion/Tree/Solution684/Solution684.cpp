
#include "Solution684.h"

vector<int> Solution684::findRedundantConnection(vector<vector<int>> &edges)
{
    vector<int> res;
    vector<int> path = vector<int>(edges.size() + 1, 0);
    for (int i = 0; i < path.size(); ++i)
        path[i] = i;

    for(auto edge : edges)
    {
        int vertice1 = edge[0];
        int vertice2 = edge[1];
        while(vertice1 != path[vertice1])
            vertice1 = path[vertice1];
        while(vertice2 != path[vertice2])
            vertice2 = path[vertice2];
        if(vertice1 == vertice2)
            res = edge;
        else
            path[vertice1] = vertice2;
    }
    return res;
}
