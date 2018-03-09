//
// Created by ynzha on 2018/3/9.
//

#ifndef LEETCODECLION_SOLUTION695_H
#define LEETCODECLION_SOLUTION695_H

#include <vector>
using std::vector;

class Solution695
{
public:
    int maxAreaOfIsland(vector<vector<int>>& grid);

private:
    int DSF(vector<vector<int>>& grid, int i, int j);
};


#endif //LEETCODECLION_SOLUTION695_H
