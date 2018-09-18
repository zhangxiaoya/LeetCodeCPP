
#include "Solution807.h"

int Solution807::maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
{
    int cols = grid[0].size();
    int rows = grid.size();

    vector<int> row = vector<int>(rows, 0);
    vector<int> col = vector<int>(cols, 0);
    for (int r = 0; r < rows; ++r)
    {
        for (int c = 0; c < cols; ++c)
        {
            row[r] = std::max(row[r], grid[r][c]);
            col[c] = std::max(col[c], grid[r][c]);
        }
    }
    int res = 0;
    for(int r = 0; r < rows;++r)
    {
        for(int c = 0; c< cols;++c)
        {
            res += std::min(row[r], col[c]) - grid[r][c];
        }
    }
    return res;
}
