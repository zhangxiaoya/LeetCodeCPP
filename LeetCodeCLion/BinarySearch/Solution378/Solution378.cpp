
#include "Solution378.h"

int Solution378::kthSmallest(vector<vector<int>> &matrix, int k)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int low = matrix[0][0];
    int high = matrix[rows - 1][cols - 1] + 1;

    while (low < high)
    {
        int mid = low + (high-low) / 2;
        int count = 0;
        int c = cols - 1;
        for (int r = 0; r < rows; ++r)
        {
            while (c >= 0 && matrix[r][c] > mid)
                --c;
            count += (c + 1);
        }
        if (count < k)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}