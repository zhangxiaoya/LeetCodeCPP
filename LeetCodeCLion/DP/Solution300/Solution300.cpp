
#include "Solution300.h"

int Solution300::lengthOfLIS(vector<int> &nums)
{
    if(nums.size() == 0)
        return 0;
    int res = 1;
    vector<int> dp = vector<int>(nums.size(), 1);
    for(int i = 1; i< nums.size();++i)
    {
        for(int j = 0; j< i; ++j)
        {
            if(nums[i] > nums[j])
            {
                dp[i] = dp[j] + 1 > dp[i] ? dp[j] + 1: dp[i];
                if(dp[i] > res)
                    res = dp[i];
            }
        }
    }
    return res;
}