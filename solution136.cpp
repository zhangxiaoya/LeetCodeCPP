#include "solution136.h"

Solution136::Solution136()
{
}

int Solution136::singleNumber(vector<int> &nums)
{
    int res = 0;
    for(int i=0;i<nums.size();++i)
        res ^= nums[i];
    return res;
}
