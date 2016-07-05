#include "solution016.h"
#include <algorithm>
#include <cstdlib>
#define INT_MAX ((int)(~0U>>1))
Solution016::Solution016()
{
}
int Solution016::threeSumClosest(vector<int> &nums, int target)
{
    if(nums.size() < 3)
        return -1;
    sort(nums.begin(),nums.end());
    int res = 0;
    int min_gap = INT_MAX;
    for(auto i = nums.begin();i!= nums.end() - 2;++i)
    {
        auto j = i +1;
        auto k = nums.end() -1;
        while(j < k)
        {
            const int sum = *i + *j + *k;
            const int gap = abs(sum - target);

            if(gap < min_gap)
            {
                res = sum;
                min_gap = gap;
            }
            if(sum < target)
                ++ j;
            else if(sum > target)
                --k;
            else
                return sum;
        }
    }
    return res;
}
