#include "solution034.h"

Solution034::Solution034()
{

}
vector<int> Solution034::searchRange(vector<int> &nums, int target)
{
    vector<int> res;
    res.push_back( findLower(nums,target));
    res.push_back( findUpper(nums,target));
    return res;
}

int Solution034::findLower(const vector<int> &nums, int target)
{
    if(nums.size() < 1)
        return -1;
    int low = 0;
    int high = nums.size() -1;
    while(low <= high)
    {
        int mid = (low + high)>>1;
        if(nums[mid] >= target)
            high = mid - 1;
        else
            low = mid +1;
    }
    if(low < nums.size() && nums[low] == target)
        return low;
    else
        return -1;
}
int Solution034::findUpper(const vector<int> &nums, int target)
{
    if(nums.size() < 1)
        return -1;
    int low = 0;
    int high = nums.size() - 1;
    while(low <= high)
    {
        int mid = (low + high) >> 1;
        if(nums[mid] <= target)
            low = mid + 1;
        else
            high = mid -1;
    }
    if(high > -1 && nums[high] == target)
        return high;
    else
        return -1;
}
