#include "solution075.h"

Solution075::Solution075()
{

}

void Solution075::sortColors(vector<int> &nums)
{
    if(nums.empty())
        return;
    int redIdx = 0;
    int blueIdx = nums.size()-1;
    for(int i=0;i<blueIdx+1;)
    {
        if(nums[i] == 2)
            swap(nums[i],nums[blueIdx--]);
        else if(nums[i] == 0)
            swap(nums[i++],nums[redIdx++]);
        else
            ++i;
    }
}
