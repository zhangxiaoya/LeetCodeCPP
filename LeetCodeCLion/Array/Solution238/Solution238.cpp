
#include "Solution238.h"

vector<int> Solution238::productExceptSelf(vector<int> &nums)
{
    vector<int> res(nums.size(),1);
    res[0] = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        res[i] = res[i - 1] * nums[i-1];
    }
    int right = 1;
    for (int i = nums.size() - 1; i >= 0; --i)
    {
        res[i] *= right;
        right *= nums[i];
    }
    return res;
}