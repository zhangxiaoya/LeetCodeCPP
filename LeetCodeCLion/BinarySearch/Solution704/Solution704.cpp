
#include "Solution704.h"

int Solution704::search(vector<int> &nums, int target)
{
    int res = -1;
    if (nums.empty())
        return res;
    int low = 0;
    int high = nums.size();
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (target == nums[mid])
            return mid;
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid;
    }
    return res;
}