
#include "Solution152.h"

int Solution152::maxProduct(vector<int> &nums)
{
    int pmax = nums[0];
    int pmin = nums[0];
    int res = nums[0];
    for(auto i = 1;i<nums.size();++i)
    {
        if(nums[i] < 0)
            std::swap(pmax, pmin);
        pmax = std::max(pmax * nums[i], nums[i]);
        pmin = std::min(pmin * nums[i], nums[i]);
        res = std::max(res, pmax);
    }
    return res;
}