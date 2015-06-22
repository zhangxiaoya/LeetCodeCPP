#include "solution035.h"

Solution035::Solution035()
{

}
int Solution035::searchInsert(vector<int> &nums, int target)
{
    int len = nums.size();
    if(len < 1)
        return 0;
    int low = 0;
    int high = len -1;
    while(low <= high)
    {
        int mid = (low + high)>>1;
        if(nums[mid] >= target)
            high = mid -1;
        else
            low = mid + 1;
    }
    if(low < len && nums[low] == target)
        return low;
    else
    {
        if(low == 0)
            if(nums[low] > target)
                return 0;
            else
                return 1;
        else
            return low;
    }
}
