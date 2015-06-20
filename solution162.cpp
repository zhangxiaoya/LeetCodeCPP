#include "solution162.h"

Solution162::Solution162()
{
}
int Solution162::findPeakElement(vector<int> &nums)
{
    int len = nums.size();
    if(len < 1)
        return -1;
    if(len == 1)
        return 0;
    int peakIdx = 0;
    for(int i = 0;i != len;++i)
    {
        if(i == 0)
        {
            if(nums[i] > nums[i+1])
                peakIdx = i;
        }
        else if(i == (len -1))
        {
            if(nums[peakIdx] < nums[i] && nums[i] > nums[i-1])
                peakIdx = i;
        }
        else
        {
            if(nums[i] > nums[peakIdx] && nums[i] > nums[i+1] && nums[i] > nums[i-1])
                peakIdx = i;
        }
    }
    return peakIdx;
}
