//
// Created by ynzha on 2018/3/9.
//

#include "Solution128.h"
#include "../../CommonMethod/Max.h"
#include <unordered_map>

using std::unordered_map;

int Solution128::longestConsecutive(vector<int> &nums)
{
    unordered_map<int, int > map;
    int result = 0;
    for(int n : nums)
    {
        if(map[n])
            continue;
        map[n] = map[n - map[n - 1]] = map[n + map[n + 1]] = map[n-1] + 1 + map[n+1];
        result = Max(result, map[n]);
    }
    return result;
}
