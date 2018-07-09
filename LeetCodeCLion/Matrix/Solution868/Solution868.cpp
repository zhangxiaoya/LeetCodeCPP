
#include "Solution868.h"

vector<vector<int>> Solution868::transpose(vector<vector<int>> &A)
{
    vector<vector<int>> res;
    if (A.empty())
        return res;
    int rows = A.size();
    int cols = A[0].size();
    res.reserve(cols);
    for (int c = 0; c < cols; ++c)
    {
        vector<int> rowVal;
        for (int r = 0; r < rows; ++r)
        {
            rowVal.push_back(A[r][c]);
        }
        res.push_back(rowVal);
    }
    return res;
}