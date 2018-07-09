
#include "Solution832.h"

vector<vector<int>> Solution832::flipAndInvertImage(vector<vector<int>> &A)
{
    vector<vector<int>> res;
    if (A.empty())
        return res;
    int rows = A.size();
    int cols = A[0].size();

    for (int r = 0; r < rows; ++r)
    {
        auto rowVal = A[r];
        for (int i = 0, j = cols - 1; i < j; ++i, --j)
        {
            int c = rowVal[i];
            rowVal[i] = rowVal[j];
            rowVal[j] = c;
            rowVal[i] = rowVal[i] == 0 ? 1 : 0;
            rowVal[j] = rowVal[j] == 0 ? 1 : 0;
        }
        if (cols % 2 == 1)
            rowVal[cols / 2] = rowVal[cols / 2] == 0 ? 1 : 0;
        res.push_back(rowVal);
    }
    return res;
}