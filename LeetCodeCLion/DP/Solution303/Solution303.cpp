
#include "Solution303.h"

NumArray::NumArray(vector<int> nums)
{
    acc.push_back(0);
    for(auto num:nums)
        acc.push_back(acc.back() + num);
}

int NumArray::sumRange(int i, int j)
{
    return acc[j+1] - acc[i];
}