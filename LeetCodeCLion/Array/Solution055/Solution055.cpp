
#include "Solution055.h"

bool Solution055::canJump(vector<int> &nums)
{
    int len = nums.size();
    int maxReach = 0;
    int start = 0;
    for (; start < len && start <= maxReach; ++start)
    {
        maxReach = std::max(nums[start] + start, maxReach);
    }
    return start == len;
}