#include "solution081.h"

Solution081::Solution081()
{

}

bool Solution081::search(vector<int> &nums, int target)
{
    if(nums.empty())
        return false;
    int low = 0;
    int high = nums.size() -1;
    while(low <= high)
    {
        int mid = (low + high)>>1;
        if(nums[mid] == target)
            return true;
        if(nums[low] < nums[mid])
        {
            if(nums[low] <= target && target < nums[mid])
                high = mid;
            else
                low = mid +1;
        }
        else if(nums[low] > nums[mid])
        {
            if(target <= nums[high] && nums[mid] < target)
                low = mid +1;
            else
                high = mid;
        }
        else
            low ++;
    }
    return false;
}
