//
// Created by ynzha on 2018/3/9.
//

#include "Solution695.h"
#include "../../CommonMethod/Max.h"

int Solution695::maxAreaOfIsland(vector<vector<int>> &grid)
{
    int maxArea = 0;
    for(int i = 0; i< grid.size();++i)
    {
        for(int j = 0; j< grid[0].size();++j)
        {
            if(grid[i][j] != -1)
                maxArea = Max(maxArea, DSF(grid,i,j));
        }
    }
    return maxArea;
}

int Solution695::DSF(vector<vector<int>> &grid, int i, int j)
{
    if(i < 0 || j <0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0 || grid[i][j] == -1)
        return 0;
    grid[i][j] = -1;
    return DSF(grid, i-1,j) + DSF(grid, i+ 1, j) + DSF(grid,i,j-1) + DSF(grid,i,j+1) + 1;
}
