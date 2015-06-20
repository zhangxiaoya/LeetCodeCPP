#include "solution011.h"
#include <cmath>

Solution011::Solution011()
{
}
int Solution011::maxArea(vector<int> &height)
{
    int len = height.size();
    if(len < 2)
        return 0;
//    if(len == 2)
//        return abs(height[0]-height[1]);
    int water = 0;
    int beg = 0;
    int end = len -1;
    while(beg < end)
    {
        water = max(water,((end - beg) * min(height[beg],height[end])));
        if(height[beg] < height[end])
            beg ++;
        else
            end --;
    }
    return water;
}
