//
// Created by ynzha on 2018/3/9.
//

#include <climits>
#include "Solution045.h"
#include "../../CommonMethod/BasicMacro.h"

int Solution045::jump(vector<int> &nums)
{
    if(nums.size() < 2)
        return 0;
    int currentMax = 0;
    int nextMax = 0;
    int i = 0;
    int level = 0;
    while(currentMax >= i)
    {
        level ++;
        while(i <= currentMax)
        {
            nextMax = max(nextMax, nums[i] + i);
            if(nextMax >= nums.size()-1)
                return level;
            i++;
        }
        currentMax = nextMax;
    }
    return INT_MAX;
}
