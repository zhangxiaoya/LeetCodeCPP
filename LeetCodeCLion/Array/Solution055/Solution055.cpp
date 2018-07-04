
#include "Solution055.h"

bool Solution055::canJump(vector<int> &nums)
{
    int last = nums.size()-1;
    for(int i = last - 1; i >=0;--i)
    {
        if(i + nums[i] >= last)
            last=i;
    }
}