
#include "Solution560.h"

int Solution560::subarraySum(vector<int> &nums, int k)
{
    int res = 0;
    vector<int> sums = vector<int>(nums.size()+1, 0);
    for(int i = 1;i <= nums.size();++i)
        sums[i] = sums[i-1] + nums[i-1];
    for(int i = 0; i< nums.size();++i)
    {
        for(int j = i+1; j < sums.size(); ++j)
        {
            if(sums[j] - sums[i] == k)
                res ++;
        }
    }

    return  res;
}