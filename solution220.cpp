#include "solution220.h"
#include <cmath>

Solution220::Solution220()
{
}
bool Solution220::containsNearbyAlmostDuplicate(vector<int> &nums, int k, int t)
{
//    if(k < 1 || t < 0 || nums.size() < 2)
//        return false;
//    set<int> record;
//    auto len = nums.size();
//    for(int i=0;i<len;++i)
//    {
//        if(i > k)
//            record.erase(nums[i - k -1]);
//        set<int>::iterator lower = record.lower_bound(nums[i] - t);
//        if(lower != record.end() && abs(nums[i] - *lower) <= t)
//            return true;

//        record.insert(nums[i]);
//    }
//    return false;

    if(k==0 && t != 0)
        return false;
    if(nums.size() < 2)
        return false;
    vector<int>::iterator it;
    int idx =0;
    int start = 0;

    for(it = nums.begin();it !=nums.end();)
    {
        if(idx - start <= k)
        {
            for(int i=start ;i < idx;++i)
            {
                if(abs(*it - nums[i]) <=t )
                {
                    return true;
                }
            }
            ++it;
            ++idx;
        }
        else
            start ++;
    }
    return false;
}
