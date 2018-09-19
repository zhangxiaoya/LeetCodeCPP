
#include "Solution554.h"
#include <unordered_map>

using std::unordered_map;

int Solution554::leastBricks(vector<vector<int>> &wall)
{
    unordered_map<int, int> counter;
    int maxCrossRow = 0;
    for (auto row : wall)
    {
        int len = 0;
        for (int i = 0; i < row.size()-1 ;++i)
        {
            len += row[i];
            if (counter.count(len) == 0)
                counter.insert({len, 1});
            else
                counter[len]++;
            maxCrossRow = std::max(maxCrossRow, counter[len]);
        }
    }
    return wall.size() - maxCrossRow;
}
