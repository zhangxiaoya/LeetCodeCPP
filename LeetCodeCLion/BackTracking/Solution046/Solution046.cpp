
#include "Solution046.h"

void Solution046::swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void Solution046::help(vector<int> nums, int idx, vector<vector<int>> &res)
{
    if (idx == nums.size())
    {
        res.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); ++i)
    {
        swap(nums[idx], nums[i]);
        help(nums, idx + 1, res);
        swap(nums[i], nums[idx]);
    }
}

vector<vector<int> > Solution046::permute(vector<int> &nums)
{
    vector<vector<int>> res;
    if (nums.empty())
        return res;

    help(nums, 0, res);
    return res;
}