
#include "Solution861.h"

int Solution861::matrixScore(vector<vector<int>> &A)
{
    int res = 0;
    if (A.empty())
        return res;
    auto row = A.size();
    auto col = A[0].size();
    for (auto r = 0; r < row; ++r)
    {
        if (A[r][0] == 0)
        {
            for (auto c = 0; c < col; ++c)
                A[r][c] ^= 1;
        }
    }
    for (auto c = 1; c < col; ++c)
    {
        auto countOne = 0;
        for (auto r = 0; r < row; ++r)
            if (A[r][c] == 1)
                countOne++;
        if (row - countOne > countOne)
        {
            for (auto r = 0; r < row; ++r)
                A[r][c] ^= 1;
        }
    }
    for (auto r = 0; r < row; ++r)
    {
        for (auto c = 0; c < col; ++c)
            res += (A[r][c] << col - 1 - c);
    }
    return res;
}