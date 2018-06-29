
#include "Solution047.h"
#include <algorithm>

void Solution047::swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void Solution047::help(vector<int> nums, int idx, vector<vector<int>> &res)
{
    if (idx == nums.size())
    {
        res.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); ++i)
    {
        if (i != idx && nums[i] == nums[idx])
            continue;

        swap(nums[idx], nums[i]);
        help(nums, idx + 1, res);
    }
}

vector<vector<int>> Solution047::permuteUnique(vector<int> &nums)
{
    std::sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    if (nums.empty())
        return res;
    help(nums, 0, res);
    return res;
}