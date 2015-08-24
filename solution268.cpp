#include "solution268.h"

Solution268::Solution268()
{
}

int Solution268::missingNumber(vector<int> &nums)
{
    int res = 0;
    for(int i=0;i<nums.size();++i)
        res ^= (i ^ nums[i]);
    res ^= (nums.size());
    return res;
}
