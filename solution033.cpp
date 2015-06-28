#include "solution033.h"

Solution033::Solution033()
{

}

int Solution033::search(vector<int> &nums, int target)
{
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
