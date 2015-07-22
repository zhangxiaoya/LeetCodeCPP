#include "solution033.h"

Solution033::Solution033()
{

}

int Solution033::search(vector<int> &nums, int target)
{
    int len = nums.size();
    if(len < 1)
        return -1;
    int beg= 0;
    int end = len -1;
    while(beg <= end)
    {
        int mid = (beg + end)>>2;
        if(nums[mid] == target)
            return mid;
        if(nums[beg] <= nums[mid])
        {
            if(nums[beg]<= target && target <= nums[mid])
                end =mid - 1;
            else
                beg = mid + 1;
        }
        else
        {
            if(nums[mid] <=target && target <= nums[end])
                beg = mid+1;
            else
                end = mid -1;
        }
    }
    return nums[beg] == target?beg:-1;
    if(nums.empty())
        return -1;
    int low = 0;
    int high = nums.size()-1;
    while(low <=high)
    {
        int mid = (low+high)>>1;
        if(nums[mid] == target)
            return mid;
        if(nums[mid] >= nums[low])
        {
            if(nums[low] <= target && target < nums[mid])
                high = mid;
            else
                low = mid+1;
        }
        else
        {
            if(nums[high] >= target && target > nums[mid])
                low = mid + 1;
            else
                high = mid;
        }
    }
    return -1;
}
